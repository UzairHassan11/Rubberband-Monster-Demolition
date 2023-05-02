using UnityEngine;

public class CarMidAirControl : MonoBehaviour
{
    [SerializeField] private SwereMovement _swereMovement;

    [SerializeField] private Vector2 minMaxAngle;

    [SerializeField] private Rigidbody rb;

    [SerializeField] private float sensitivity;

    [SerializeField] private bool x, y, z;

    public void ControlAfterRamp()
    {
        rb.AddForce(transform.right * (_swereMovement.GetSwerveAmount_X() * sensitivity), ForceMode.Acceleration);
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