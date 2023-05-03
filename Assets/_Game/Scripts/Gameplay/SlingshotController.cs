using DG.Tweening;
using TMPro;
using UnityEngine;

public class SlingshotController : MonoBehaviour
{
    #region vars

    [SerializeField] private Car car;
    
    [SerializeField] private Transform movementTransform, rotationTransform;

    [SerializeField] private Vector2 minMaxRotation;

    [SerializeField] private SwereMovement _swerveMovement;

    [SerializeField] private bool swerveX, swerveZ;
    
    [SerializeField] private Rigidbody rb;

    [SerializeField] private Vector2 carShootForce;

    private bool idle = true, aiming = false;

    [SerializeField] private TextMeshPro powerPercentageText;

    #endregion
    
    private void Update()
    {
        if(GameManager.instance.currentGameState != GameState.Running)
            return;
        
        if (idle)
        {
            if(Input.GetMouseButtonDown(0))
            {
                idle = false;
                aiming = true;
                car.TurnDirectionalArrow(true);
                TurnPercentageText(true);
                SoundManager.Instance.PlaySound(ClipName.Rope);
            }
        }
        
        if (aiming)
        {
            if (swerveX)
                _swerveMovement.xSwerveMovement();
            if (swerveZ)
                _swerveMovement.zSwerveMovement();
            MapRotation();
            AssignPercentageText();
            ContinuousHaptic.instance.PlayContinuousHaptic();
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
                TurnPercentageText(false);
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
        //CameraManager.instance.TurnSpeedFx(true);
        car.ShootCar(speed);
    }

    void ResetSlingshot()
    {
        idle = false;
        movementTransform.DOLocalMoveX(0, .15f);
        movementTransform.DOLocalMoveZ(_swerveMovement.minMaxZ.y, .15f);
        rotationTransform.DOLocalRotate(Vector3.zero, .15f);
    }

    void AssignPercentageText()
    {
        powerPercentageText.text = Mathf.Lerp(1, 100,
            Mathf.InverseLerp(_swerveMovement.minMaxZ.y, _swerveMovement.minMaxZ.x, movementTransform.localPosition.z)).ToString("F0") + "%";
        ContinuousHaptic.instance.ChangeLimits(_swerveMovement.minMaxZ);
    }

    void TurnPercentageText(bool state)
    {
        powerPercentageText.gameObject.SetActive(state);   
    }

    public void ResetCar()
    {
        idle = true;
        car.ResetMe();
    }
}