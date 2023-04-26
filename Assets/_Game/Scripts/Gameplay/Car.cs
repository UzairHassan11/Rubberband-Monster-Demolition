using _Game.Scripts.Gameplay;
using Dreamteck.Splines;
using UnityEngine;

public class Car : MonoBehaviour
{
    [SerializeField] private DirectionalArrow _directionalArrow;

    [SerializeField] SplineFollower _splineFollower;

    [SerializeField] private Rigidbody _rigidbody;

    [SerializeField] private Transform cam;

    [SerializeField] private GameObject trailsContainer, cam2;

    [SerializeField] private float followTrackSpeedMultiple;
    
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
        cam.parent = null;
        trailsContainer.SetActive(true);
        _rigidbody.transform.parent = null;
        _rigidbody.useGravity = true;
        _rigidbody.AddForce(_rigidbody.transform.forward * speed, ForceMode.Impulse);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Ramp"))
        {
            cam2.SetActive(true);
            cam.parent = null;
        }
    }
}