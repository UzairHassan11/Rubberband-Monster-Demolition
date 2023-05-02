using MoreMountains.NiceVibrations;
using UnityEngine;

public class ContinuousHaptic : MonoBehaviour
{
    #region Signleton
    private static ContinuousHaptic Instance;
    public static ContinuousHaptic instance
    {
        get { return Instance; }
    }

    private void Awake()
    {
        if (Instance == null)
            Instance = this;
    }
    #endregion
    
    [Tooltip(("Max to min"))]
    [SerializeField] private Vector2 hapticDelayLimits;

    [Tooltip(("Max to min"))]
    public Vector2 mappingValues;

     private float currentDelay;

     [SerializeField] private Transform seatTransform;
    
    private float timer = 0;

    public void PlayContinuousHaptic()
    {
        currentDelay = Mathf.Lerp(hapticDelayLimits.x, hapticDelayLimits.y,
            Mathf.InverseLerp(mappingValues.x, mappingValues.y, seatTransform.localPosition.z));
        
        timer -= Time.deltaTime;
        if (timer < 0)
        {
            timer = currentDelay;
            MMVibrationManager.Haptic(HapticTypes.RigidImpact);
        }
    }

    public void ChangeLimits(Vector2 v2)
    {
        mappingValues = v2;
    }
}
