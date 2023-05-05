using _Game.Scripts.Gameplay;
using DG.Tweening;
using Dreamteck.Splines;
using MoreMountains.NiceVibrations;
using UnityEngine;
using VoxelDestruction;

public class Car : MonoBehaviour
{
    #region vars

    [SerializeField] private VoxelCollider _voxelCollider;
    
    [SerializeField] private DirectionalArrow _directionalArrow;

    [SerializeField] SplineFollower _splineFollower;

    [SerializeField] private Rigidbody _rigidbody;

    [SerializeField] private GameObject trailsContainer;

    [SerializeField] private float followTrackSpeedMultiple;

    [SerializeField] private CarMidAirControl _midAirControl;

    private Vector3 startPosition;

    private Transform parent;
    
    Transform _transform;

    [SerializeField] private GameObject []carMeshes;

    private bool isShooted;

    private float deltaDist, carStopCheckCurrentDelay = 0;

    private Vector3 lastPos;

    [SerializeField] private float carStopCheckDelay = .1f;

    [SerializeField] private ParticleSystem upgradeEffect;
    
    #endregion

    #region unity

    private void Start()
    {
        _transform = transform;
        startPosition = _transform.position;
        parent = _transform.parent;
        AssignCollisionScale();
        lastPos = _transform.position;
    }

    private void Update()
    {
        if (GameManager.instance.currentGameState == GameState.FinalMomentum)
        {
            _midAirControl.ControlAfterRamp();
        }

        if (isShooted)
        {
            if (carStopCheckCurrentDelay < carStopCheckDelay)
            {
                carStopCheckCurrentDelay += Time.deltaTime;
            }
            else
            {
                if (IfCarStopped())
                {
                    isShooted = false;
                    print("CarStopped");
                    Invoke("CarStopped", 1f);
                }
                else
                {
                    lastPos = _transform.position;
                }
            }
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Ramp"))
        {
            trailsContainer.SetActive(false);
            // _rigidbody.constraints = RigidbodyConstraints.FreezeRotationZ;
            GameManager.instance.ChangeGameState(GameState.FinalMomentum);
            MMVibrationManager.Haptic(HapticTypes.MediumImpact);
        }
        // else if (other.CompareTag("Finish"))
        // {
        //     CameraManager.instance.SetAnimatorState(CamStates.endPoint);
        //     MMVibrationManager.Haptic(HapticTypes.HeavyImpact);
        //     ParticlesController.instance.SpawnParticle(ParticlesNames.Explosion, _transform);
        //     GameManager.instance.ChangeGameState(GameState.Idle, 3);
        //     CameraManager.instance.TurnSpeedFx(false);
        // }
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.collider.name.Contains("VoxelModel"))
        {
            if(isShooted)
                CarHitVoxel();
        }
        else if (collision.collider.CompareTag("Finish"))
        {
            isShooted = false;
            Invoke("CarStopped", 1f);
        }
    }

    #endregion
    
    #region others

    void CarHitVoxel()
    {
        isShooted = false;
        carStopCheckCurrentDelay = 0;
        CameraManager.instance.SetAnimatorState(CamStates.endPoint);
        MMVibrationManager.Haptic(HapticTypes.HeavyImpact);
        ParticlesController.instance.SpawnParticle(ParticlesNames.Explosion, _transform);
        GameManager.instance.ChangeGameState(GameState.Idle, 4);
        // CameraManager.instance.TurnSpeedFx(false);
        SoundManager.Instance.PlaySound(ClipName.Break);
    }

    void CarStopped()
    {
        isShooted = false;
        lastPos = _transform.position;
        carStopCheckCurrentDelay = 0;
        GameManager.instance.ChangeGameState(GameState.Idle, .5f);
        // CameraManager.instance.TurnSpeedFx(false);
    }
    
    bool IfCarStopped()
    {
        //return _rigidbody.velocity.magnitude < 0.1f;
        return Vector3.Distance(_transform.position, lastPos) == 0;
    }
    
    public void TurnDirectionalArrow(bool state)
    {
        _directionalArrow.TurnIt(state);
    }

    private float velocityBeforeSpline;
    public void FollowSpline(SplineComputer sCom)
    {
        velocityBeforeSpline = _rigidbody.velocity.magnitude;
        _rigidbody.Sleep();
        _rigidbody.useGravity = false;
        _rigidbody.velocity = Vector3.zero;
        _splineFollower.spline = sCom;
        _splineFollower.followSpeed = velocityBeforeSpline * followTrackSpeedMultiple;
        _splineFollower.follow = true;
    }
    public void ContinueAfterSpline()
    {
        _splineFollower.follow = false;
        ShootCar(velocityBeforeSpline);
    }
    
    public void ShootCar(float speed)
    {
        isShooted = true;
        trailsContainer.SetActive(true);
        _rigidbody.transform.parent = null;
        _rigidbody.useGravity = true;
        _rigidbody.AddForce(_rigidbody.transform.forward * speed, ForceMode.Impulse);
        CameraManager.instance.Change_GP_Cam_Follow_Offset(false);
    }

    #endregion

    public void AssignCollisionScale(
        // bool start = false
        )
    {
        
        _voxelCollider.collisionScale = UpgradesManager.instance.upgrades[1].GetCurrentActualValue;
        AssignCarMesh(UpgradesManager.instance.upgrades[1].NextUpgrade);
        // if(!start)
        upgradeEffect.gameObject.SetActive(true);
        upgradeEffect.Play();
    }

    public void ResetMe()
    {
        // _rigidbody.constraints = RigidbodyConstraints.FreezeRotationZ | RigidbodyConstraints.FreezeRotationX;
        _rigidbody.Sleep();
        _transform.rotation = Quaternion.identity;
        _transform.position = startPosition;
        _transform.parent = parent;
        lastPos = _transform.position;
        CameraManager.instance.Change_GP_Cam_Follow_Offset(true);
    }

    private bool playingScaleAnim;
    void AssignCarMesh(int i)
    {
        if (i >= carMeshes.Length)
            i = carMeshes.Length - 1;

        if (!playingScaleAnim)
        {
            playingScaleAnim = true;
            _transform.DOScale(.5f, .25f).SetEase(Ease.Linear).SetEase(Ease.Linear).SetRelative(true).SetLoops(2, LoopType.Yoyo)
                .OnComplete(() => playingScaleAnim = false);
        }
        
        for (int j = 0; j < carMeshes.Length; j++)
        {
            if(i == j)
            {
                carMeshes[j].SetActive(true);
                trailsContainer = carMeshes[j].transform.GetChild(carMeshes[j].transform.childCount - 1).gameObject;
            }
            else
            {
                carMeshes[j].SetActive(false);
            }
        }
    }
}