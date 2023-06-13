using DG.Tweening;
using Dreamteck.Splines;
using MoreMountains.NiceVibrations;
using UnityEngine;
using VoxelDestruction;

public class Car : MonoBehaviour
{
    #region vars

    [SerializeField] private bool toonLevel;

    [SerializeField] private VoxelCollider _voxelCollider;
    
    [SerializeField] private DirectionalArrow _directionalArrow;

    [SerializeField] SplineFollower _splineFollower;

    [SerializeField] private Rigidbody _rigidbody;

    [SerializeField] private GameObject trailsContainer;

    [SerializeField] private float followTrackSpeedMultiple;

    [SerializeField] private CarMidAirControl _midAirControl;

    private Vector3 startPosition;

    private Quaternion startRotation;

    private Transform parent;
    
    Transform _transform;

    [SerializeField] private GameObject []carMeshes;

    private bool isShooted, followingSpline, goneForRamp;

    private float deltaDist, carStopCheckCurrentDelay = 0;

    private Vector3 lastPos;

    [SerializeField] private float carStopCheckDelay = .1f, minMovementDelta = .2f;

    [SerializeField] private ParticleSystem upgradeEffect;
    
    #endregion

    #region unity

    private void Start()
    {
        _transform = transform;
        startPosition = _transform.localPosition;
        parent = _transform.parent;
        AssignCollisionScale();
        lastPos = _transform.position;
        AssignCarsStyle();
    }

    private void Update()
    {
        if (GameManager.instance.currentGameState == GameState.FinalMomentum)
        {
            _midAirControl.ControlAfterRamp();
        }

        if (isShooted && !followingSpline 
                      && !goneForRamp
                      )
        {
            if (carStopCheckCurrentDelay < carStopCheckDelay)
            {
                carStopCheckCurrentDelay += Time.deltaTime;
            }
            else
            {
                if (IfCarStopped())
                {
                    // isShooted = false;
                    Invoke("CarStopped", .5f);
                }
                else
                {
                    lastPos = _transform.position;
                }
            }
        }

        if (goneForRamp)
            _rigidbody.maxAngularVelocity = 1;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Ramp"))
        {
            trailsContainer.SetActive(false);
            // _rigidbody.constraints = RigidbodyConstraints.FreezeRotationZ;
            GameManager.instance.ChangeGameState(GameState.FinalMomentum);
            GameManager.instance.uiManager.TurnJoystick(true);
            SoundManager.Instance.PlaySound(ClipName.Ramp);
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
            if (isShooted)
            {
                CarHitVoxel();
            }
        }
        else if (collision.collider.CompareTag("Finish"))
        {
            // print("Finish");
            GameManager.instance.uiManager.TurnJoystick(false);
            CameraManager.instance.SetAnimatorState(CamStates.endPoint);
            Invoke("CarStopped", .5f);
        }
    }

    #endregion
    
    #region movement-related

    void CarStopped()
    {
        if (!isShooted)
        {
            return;
        }
        isShooted = false;
        lastPos = _transform.position;
        carStopCheckCurrentDelay = 0;
        GameManager.instance.uiManager.TurnJoystick(false);
        GameManager.instance.ChangeGameState(GameState.Idle, .5f);
        // CameraManager.instance.TurnSpeedFx(false);
    }
    
    bool IfCarStopped()
    {
        //return _rigidbody.velocity.magnitude < 0.1f;
        // print(Vector3.Distance(_transform.position, lastPos).ToString("F3"));
        return Vector3.Distance(_transform.position, lastPos) < minMovementDelta;
    }

    public void AssignSpline(SplineComputer sCom)
    {
        _splineFollower.spline = sCom;
    }

    private float velocityBeforeSpline;
    public void FollowSpline(SplineComputer sCom)
    {
        followingSpline = true;
        velocityBeforeSpline = _rigidbody.velocity.magnitude;
        _rigidbody.Sleep();
        // if(_rigidbody==null)
        //     print("_rigidbody==null");
        _rigidbody.useGravity = false;
        _rigidbody.velocity = Vector3.zero;
        // if(sCom==null)
        //     print("sCom==null");
        _splineFollower.spline = sCom;
        // _splineFollower.spline = null;
        _splineFollower.followSpeed = velocityBeforeSpline * followTrackSpeedMultiple;
        _splineFollower.SetDistance(0);
        _splineFollower.follow = true;
    }
    public void ContinueAfterSpline()
    {
        // _rigidbody.constraints = RigidbodyConstraints.FreezeRotationZ | RigidbodyConstraints.FreezeRotationX;
        followingSpline = false;
        goneForRamp = true;
        _splineFollower.follow = false;
        _splineFollower.spline = null;
        ShootCar(velocityBeforeSpline);
    }
    
    public void ShootCar(float speed)
    {
        Invoke("CheckCarDelta", carStopCheckDelay);
        trailsContainer.SetActive(true);
        _rigidbody.transform.parent = null;
        _rigidbody.useGravity = true;
        _rigidbody.AddForce(_rigidbody.transform.forward * speed, ForceMode.Impulse);
        CameraManager.instance.Change_GP_Cam_Follow_Offset(false);
    }

    void CheckCarDelta()
    {
        isShooted = true;
    }
    
    #endregion

    #region other

    void CarHitVoxel()
    {
        GameManager.instance.uiManager.TurnJoystick(false);
        isShooted = false;
        carStopCheckCurrentDelay = 0;
        CameraManager.instance.SetAnimatorState(CamStates.endPoint);
        MMVibrationManager.Haptic(HapticTypes.HeavyImpact);
        ParticlesController.instance.SpawnParticle(ParticlesNames.Explosion, _transform);
        GameManager.instance.ChangeGameState(GameState.Idle, 4);
        // CameraManager.instance.TurnSpeedFx(false);
        SoundManager.Instance.PlaySound(ClipName.Break);
    }
    
    public void TurnDirectionalArrow(bool state)
    {
        _directionalArrow.TurnIt(state);
    }
    
    public void AssignCollisionScale(
        // bool start = false
    )
    {
        _voxelCollider.collisionScale = UpgradesManager.instance.upgrades[1].GetCurrentActualValue;
        AssignCarMesh(UpgradesManager.instance.upgrades[1].NextUpgrade);
        // if(!start)
        upgradeEffect.gameObject.SetActive(true);
        upgradeEffect.Play(true);
    }

    public void ResetMe()
    {
        // _rigidbody.constraints = RigidbodyConstraints.FreezeRotationZ | RigidbodyConstraints.FreezeRotationX;
        goneForRamp = false;
        followingSpline = false;
        _rigidbody.Sleep();
        _transform.parent = parent;
        _transform.localPosition = startPosition;
        _transform.localEulerAngles = Vector3.zero;
        lastPos = _transform.position;
        CameraManager.instance.Change_GP_Cam_Follow_Offset(true);
    }

    #endregion

    #region car-meshes

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

    private void AssignCarsStyle()
    {
        for (int j = 0; j < carMeshes.Length; j++)
        {
            carMeshes[j].GetComponent<MeshRenderer>().enabled = toonLevel;
            carMeshes[j].transform.GetChild(0).gameObject.SetActive(toonLevel);
            carMeshes[j].transform.GetChild(1).gameObject.SetActive(!toonLevel);
        }
    }

    #endregion
}