using System;
using _Game.Scripts.Gameplay;
using Dreamteck.Splines;
using UnityEngine;

public class Car : MonoBehaviour
{
    #region vars

    [SerializeField] private DirectionalArrow _directionalArrow;

    [SerializeField] SplineFollower _splineFollower;

    [SerializeField] private Rigidbody _rigidbody;

    [SerializeField] private Transform cam;

    [SerializeField] private GameObject trailsContainer, cam2;

    [SerializeField] private float followTrackSpeedMultiple;

    [SerializeField] private CarMidAirControl _midAirControl;

    #endregion

    #region unity

    private void Update()
    {
        if (GameManager.instance.currentGameState == GameState.FinalMomentum)
        {
            _midAirControl.ControlAfterRamp();
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

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Ramp"))
        {
            GameManager.instance.ChangeGameState(GameState.FinalMomentum);
        }
        else if (other.CompareTag("Finish"))
        {
            GameManager.instance.ChangeGameState(GameState.Win);
        }
    }

    #endregion
}