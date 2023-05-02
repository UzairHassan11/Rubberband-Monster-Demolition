using _Game.Scripts.Gameplay;
using Dreamteck.Splines;
using UnityEngine;
using VoxelDestruction;

public class Car : MonoBehaviour
{
    #region vars

    [SerializeField] private VoxelCollider _voxelCollider;
    
    [SerializeField] private DirectionalArrow _directionalArrow;

    [SerializeField] SplineFollower _splineFollower;

    [SerializeField] private Rigidbody _rigidbody;

    [SerializeField] private Transform cam;

    [SerializeField] private GameObject trailsContainer, cam2;

    [SerializeField] private float followTrackSpeedMultiple;

    [SerializeField] private CarMidAirControl _midAirControl;

    private Vector3 startPosition;

    private Transform parent;
    
    Transform _transform;

    [SerializeField] private GameObject []carMeshes;

    #endregion

    #region unity

    private void Start()
    {
        _transform = transform;
        startPosition = _transform.position;
        parent = _transform.parent;
        AssignCollisionScale();
    }

    private void Update()
    {
        if (GameManager.instance.currentGameState == GameState.FinalMomentum)
        {
            _midAirControl.ControlAfterRamp();
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Ramp"))
        {
            _rigidbody.constraints = RigidbodyConstraints.FreezeRotationZ;
            GameManager.instance.ChangeGameState(GameState.FinalMomentum);
        }
        else if (other.CompareTag("Finish"))
        {
            CameraManager.instance.SetAnimatorState(CamStates.endPoint);
            ParticlesController.instance.SpawnParticle(ParticlesNames.Explosion, _transform);
            GameManager.instance.ChangeGameState(GameState.Idle, 3);
            CameraManager.instance.TurnSpeedFx(false);
        }
    }

    #endregion
    
    #region others

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
        trailsContainer.SetActive(true);
        _rigidbody.transform.parent = null;
        _rigidbody.useGravity = true;
        _rigidbody.AddForce(_rigidbody.transform.forward * speed, ForceMode.Impulse);
    }

    #endregion

    public void AssignCollisionScale()
    {
        _voxelCollider.collisionScale = UpgradesManager.instance.upgrades[1].GetCurrentActualValue;
        AssignCarMesh(UpgradesManager.instance.upgrades[1].NextUpgrade);
    }

    public void ResetMe()
    {
        _rigidbody.constraints = RigidbodyConstraints.FreezeRotationZ | RigidbodyConstraints.FreezeRotationX;
        _rigidbody.Sleep();
        _transform.rotation = Quaternion.identity;
        _transform.position = startPosition;
        _transform.parent = parent;
    }

    void AssignCarMesh(int i)
    {
        for (int j = 0; j < carMeshes.Length; j++)
        {
            carMeshes[j].SetActive(i == j);
        }
    }
}