using UnityEngine;

public class RewardTrigger : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.name.Contains("VoxelModel"))
        {
            GameManager.instance.uiManager.GiveReward(other.transform);
        }
    }
}