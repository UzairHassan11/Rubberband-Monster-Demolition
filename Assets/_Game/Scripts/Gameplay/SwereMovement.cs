using UnityEngine;

public class SwereMovement : MonoBehaviour
{
    float lastFrameFingerPoitionX, lastFrameFingerPoitionY;
    float moveFactorX, moveFactorY;
    public float swereSpeedX, swereSpeedY;
    public Vector2 minMaxX, minMaxZ;
    [SerializeField] Transform _transform;
    private Vector3 tempX, tempZ, carStartPos;
    private float swereamountX, swereamountY;
    
    private void Start()
    {
        _transform = transform;
        moveFactorX = 0;
        carStartPos = _transform.position;
        AssignCurrentMaxZ();
    }
    
    public void xSwerveMovement()
    {
        swereamountX = GetSwerveAmount_X();
        
        _transform.Translate(swereamountX, 0, 0);
        tempX = _transform.localPosition;
        tempX.x = Mathf.Clamp(_transform.localPosition.x, minMaxX.x, minMaxX.y);
        _transform.localPosition = tempX;
    }

    public void zSwerveMovement()
    {
        swereamountY = GetSwerveAmount_Y();
        
        _transform.Translate(0, 0, swereamountY);
        tempZ = _transform.localPosition;
        tempZ.z = Mathf.Clamp(_transform.localPosition.z, minMaxZ.x, minMaxZ.y);
        _transform.localPosition = tempZ;
    }
    
    public float GetSwerveAmount_X()
    {
        if (Input.GetMouseButtonDown(0))
        {
            lastFrameFingerPoitionX = Input.mousePosition.x;
        }
        else if (Input.GetMouseButton(0))
        {
            moveFactorX = Input.mousePosition.x - lastFrameFingerPoitionX;
            lastFrameFingerPoitionX = Input.mousePosition.x;
        }
        else if (Input.GetMouseButtonUp(0))
        {
            moveFactorX = 0f;
        }

        swereamountX = Time.deltaTime * swereSpeedX * moveFactorX;
        return swereamountX;
    }
    
    public float GetSwerveAmount_Y()
    {
        if (Input.GetMouseButtonDown(0))
        {
            lastFrameFingerPoitionY = Input.mousePosition.y;
        }
        else if (Input.GetMouseButton(0))
        {
            moveFactorY = Input.mousePosition.y - lastFrameFingerPoitionY;
            lastFrameFingerPoitionY = Input.mousePosition.y;
        }
        else if (Input.GetMouseButtonUp(0))
        {
            moveFactorY = 0f;
        }

        swereamountY = Time.deltaTime * swereSpeedY * moveFactorY;
        return swereamountY;
    }

    public float GetPercentage()
    {
        return Mathf.InverseLerp(minMaxZ.y, UpgradesManager.instance.upgrades[0].GetMaxActualValue, _transform.localPosition.z);
    }

    public void AssignCurrentMaxZ()
    {
        minMaxZ.x = UpgradesManager.instance.upgrades[0].GetCurrentActualValue;
    }
}