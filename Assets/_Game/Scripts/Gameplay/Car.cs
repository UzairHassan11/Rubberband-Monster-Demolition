using System;
using _Game.Scripts.Gameplay;
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

    [SerializeField] private Transform cam;

    [SerializeField] private GameObject trailsContainer, cam2;

    [SerializeField] private float followTrackSpeedMultiple;

    [SerializeField] private CarMidAirControl _midAirControl;

    private Vector3 startPosition;

    private Transform parent;
    
    Transform _transform;

    [SerializeField] private GameObject []carMeshes;

    private bool isShooted;
    
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

        if (isShooted)
        {
            if (IfCarStopped())
            {
                // do reset work
                isShooted = false;
                print("car stopped");
            }
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Ramp"))
        {
            _rigidbody.constraints = RigidbodyConstraints.FreezeRotationZ;
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
            CarHitVoxel();
        }
    }

    #endregion
    
    #region others

    void CarHitVoxel()
    {
        isShooted = false;
        CameraManager.instance.SetAnimatorState(CamStates.endPoint);
        MMVibrationManager.Haptic(HapticTypes.HeavyImpact);
        ParticlesController.instance.SpawnParticle(ParticlesNames.Explosion, _transform);
        GameManager.instance.ChangeGameState(GameState.Idle, 3);
        CameraManager.instance.TurnSpeedFx(false);
        SoundManager.Instance.PlaySound(ClipName.Break);
    }
    
    bool IfCarStopped()
    {
        return _rigidbody.velocity.magnitude < 1;
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