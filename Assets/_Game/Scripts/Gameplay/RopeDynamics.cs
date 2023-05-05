using RopeMinikit;
using UnityEngine;

public class RopeDynamics : MonoBehaviour
{
    [SerializeField] private Rope [] ropes;

    [SerializeField] private Vector2 radiusLimits, resolutionLimits, stiffnessLimits;

    [SerializeField] private Material ropeMat;

    [SerializeField] private Gradient colourGradient;

    private float seatLerpValue;

    [SerializeField] private SwereMovement _swereMovement;
    
    private void Start()
    {
        MapValues(true);
    }
    
    public void MapValues(bool reset = false)
    {
        // seatLerpValue = Mathf.InverseLerp(seatZ_Limits.x, seatZ_Limits.y, seatTransform.position.z);
        seatLerpValue = _swereMovement.GetCurrentPercentage();
        
        if (reset)
            seatLerpValue = 0;
        
        for (int i = 0; i < ropes.Length; i++)
        {
            ropes[i].radius = Mathf.Lerp(radiusLimits.x, radiusLimits.y,seatLerpValue);
            
            ropes[i].simulation.resolution = Mathf.Lerp(resolutionLimits.x, resolutionLimits.y,seatLerpValue);
            
            ropes[i].simulation.stiffness = Mathf.Lerp(stiffnessLimits.x, stiffnessLimits.y,seatLerpValue);
        }
        
        ropeMat.color = colourGradient.Evaluate(seatLerpValue);
    }
}
