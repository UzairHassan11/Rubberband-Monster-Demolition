using MoreMountains.NiceVibrations;
using UnityEngine;

public class RewardTrigger : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.name.Contains("VoxelModel"))
        {
            if (GameManager.instance.currentGameState != GameState.Win)
            {
                MMVibrationManager.Haptic(HapticTypes.LightImpact);
                GameManager.instance.uiManager.GiveReward(other.transform);
            }
            // other.transform.root.DOScale(Vector3.zero, 1).SetDelay(3);
            other.gameObject.SetActive(false);
        }
    }
}