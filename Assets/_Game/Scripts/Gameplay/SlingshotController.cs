using DG.Tweening;
using UnityEngine;

public class SlingshotController : MonoBehaviour
{
    [SerializeField] private Car car;
    
    [SerializeField] private Transform movementTransform, rotationTransform;

    [SerializeField] private Vector2 minMaxRotation;

    [SerializeField] private SwereMovement _swerveMovement;

    [SerializeField] private bool swerveX, swerveZ;
    
    [SerializeField] private Rigidbody rb;

    [SerializeField] private Vector2 carShootForce;

    private bool idle = true, aiming = false;
    
    private void Update()
    {
        if (idle)
        {
            if(Input.GetMouseButtonDown(0))
            {
                idle = false;
                aiming = true;
                car.TurnDirectionalArrow(true);
            }
        }
        
        if (aiming)
        {
            if (swerveX)
                _swerveMovement.xSwerveMovement();
            if (swerveZ)
                _swerveMovement.zSwerveMovement();
            MapRotation();
        }
        
        if (aiming)
        {
            if(Input.GetMouseButtonUp(0))
            {
                idle = true;
                aiming = false;
                ResetSlingshot();
                ShootCar();
                car.TurnDirectionalArrow(false);
            }
        }
        // arrowMat.SetTextureOffset();
    }

    private Vector3 rotationVector;

    void MapRotation()
    {
        rotationVector = rotationTransform.localEulerAngles;
        //print(Mathf.InverseLerp(_swerveMovement.minMaxX.x, _swerveMovement.minMaxX.y, car.localPosition.x));
        rotationVector.y = Mathf.Lerp(minMaxRotation.x, minMaxRotation.y,
            Mathf.InverseLerp(_swerveMovement.minMaxX.x, _swerveMovement.minMaxX.y, movementTransform.localPosition.x));
        rotationTransform.localEulerAngles = rotationVector;
    }

    public void ShootCar()
    {
        float speed = Mathf.Lerp(carShootForce.x, carShootForce.y, _swerveMovement.GetPercentage());
        car.ShootCar(speed);
    }

    void ResetSlingshot()
    {
        idle = false;
        movementTransform.DOLocalMoveX(0, .15f);
        movementTransform.DOLocalMoveZ(_swerveMovement.minMaxZ.x, .15f);
        rotationTransform.DOLocalRotate(Vector3.zero, .15f);
    }
}