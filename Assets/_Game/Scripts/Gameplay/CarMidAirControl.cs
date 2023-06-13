using System;
using UnityEngine;

public class CarMidAirControl : MonoBehaviour
{
    [SerializeField] private SwereMovement _swereMovement;

    [SerializeField] private Vector2 minMaxAngle;

    [SerializeField] private Rigidbody rb;

    [SerializeField] private float xSensitivity = 100;
    
    [SerializeField] Vector2 ySensitivity = new Vector2(30, 100);

    [SerializeField] private bool x, y, z;
    
    private float currentForceX, currentForceY;

    private Joystick _joystick;
    
    private void Start()
    {
        _joystick = GameManager.instance.uiManager._joystick;
    }

    public void ControlAfterRamp()
    {
        // print(_joystick.Horizontal);
        currentForceX = Mathf.Lerp(-xSensitivity, xSensitivity, Mathf.InverseLerp(-1, 1, _joystick.Horizontal));
        currentForceY = Mathf.Lerp(ySensitivity.x, ySensitivity.y, Mathf.InverseLerp(-1, 1, _joystick.Vertical));
//        print(currentForceX);   
        rb.AddForce(transform.right * (Time.deltaTime * currentForceX), ForceMode.VelocityChange);
        rb.AddForce(transform.up * (Time.deltaTime * currentForceY), ForceMode.VelocityChange);
        // if (x)
        //     rb.AddTorque(transform.right * (_swereMovement.GetSwerveAmount_X() * sensitivity), ForceMode.Acceleration);
        // if (y)
        //     rb.AddTorque(transform.up * (_swereMovement.GetSwerveAmount_Y() * sensitivity), ForceMode.Acceleration);
        
        // float turn = Input.GetAxis("Horizontal");
        // if(z)
        //     rb.AddTorque(transform.right * (sensitivity * _swereMovement.GetSwerveAmount_X()));
        // rb.AddForce(transform.up * (_swereMovement.GetSwerveAmount_Y() * sensitivity), ForceMode.Force);
    }
}