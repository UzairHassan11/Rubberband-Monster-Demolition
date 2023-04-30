using UnityEngine;

public class CarMidAirControl : MonoBehaviour
{
    [SerializeField] private SwereMovement _swereMovement;

    [SerializeField] private Vector2 minMaxAngle;

    [SerializeField] private Rigidbody rb;

    [SerializeField] private float sensitivity;

    public void ControlAfterRamp()
    {
        rb.AddForce(transform.right * (_swereMovement.GetSwerveAmount_X() * sensitivity), ForceMode.Acceleration);
        // rb.AddForce(transform.up * (_swereMovement.GetSwerveAmount_Y() * sensitivity), ForceMode.Force);
    }
}