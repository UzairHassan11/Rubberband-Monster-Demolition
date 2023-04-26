using System;
using _Game.Scripts.Gameplay;
using Dreamteck.Splines;
using UnityEngine;

public class Car : MonoBehaviour
{
    [SerializeField] private DirectionalArrow _directionalArrow;

    [SerializeField] SplineFollower _splineFollower;

    [SerializeField] private Rigidbody _rigidbody;

    [SerializeField] private Transform cam;
    public void TurnDirectionalArrow(bool state)
    {
        _directionalArrow.TurnIt(state);
    }
    
    public void FollowSpline(SplineComputer sCom)
    {
        _splineFollower.spline = sCom;
        float velocity = _rigidbody.velocity.magnitude;
    }
        
    public void ShootCar(float speed)
    {
        _rigidbody.transform.parent = null;
        _rigidbody.useGravity = true;
        _rigidbody.AddForce(_rigidbody.transform.forward * speed, ForceMode.Impulse);
    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.CompareTag("Ramp"))
            cam.parent = null;
    }
}