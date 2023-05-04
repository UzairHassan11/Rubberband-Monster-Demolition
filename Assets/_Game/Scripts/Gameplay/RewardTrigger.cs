using MoreMountains.NiceVibrations;
using UnityEngine;

public class RewardTrigger : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.name.Contains("VoxelModel"))
        {
            MMVibrationManager.Haptic(HapticTypes.LightImpact);
            GameManager.instance.uiManager.GiveReward(other.transform);
        }
    }
}