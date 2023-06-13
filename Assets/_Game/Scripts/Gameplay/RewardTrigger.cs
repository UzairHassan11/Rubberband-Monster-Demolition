using System.Collections;
using MoreMountains.NiceVibrations;
using UnityEngine;

public class RewardTrigger : MonoBehaviour
{
    [SerializeField] private float playWaterSoundAfter = .5f;

    [SerializeField] private Vector2 playWaterSoundAfterLimits = new Vector2(.25f, 1f);
    
    private bool playingWaterSound;

    private void Start()
    {
        _waitForSeconds = new WaitForSeconds(playWaterSoundAfter);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.name.Contains("VoxelModel"))
        {
            if (GameManager.instance.currentGameState != GameState.Win)
            {
                MMVibrationManager.Haptic(HapticTypes.LightImpact);
                if (!playingWaterSound)
                {
                    playingWaterSound = true;
                    StartCoroutine(performWaterSoundDealy());
                    SoundManager.Instance.PlaySound(ClipName.Water, .3f);
                }
                GameManager.instance.uiManager.GiveReward(other.transform);
            }

            // other.transform.root.DOScale(Vector3.zero, 1).SetDelay(3);
            other.gameObject.SetActive(false);
            ParticlesController.instance.SpawnParticle(ParticlesNames.WaterSplash, other.transform, 0,
                new Vector3(0, 1, 0));
        }
    }

    private WaitForSeconds _waitForSeconds;
    IEnumerator performWaterSoundDealy()
    {
        yield return new WaitForSeconds(Random.Range(playWaterSoundAfterLimits.x, playWaterSoundAfterLimits.y));
        playingWaterSound = false;
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.collider.name.Contains("VoxelModel"))
        {
            if (GameManager.instance.currentGameState != GameState.Win)
            {
                MMVibrationManager.Haptic(HapticTypes.LightImpact);
                GameManager.instance.uiManager.GiveReward(collision.collider.transform);
            }

            // other.transform.root.DOScale(Vector3.zero, 1).SetDelay(3);
            collision.collider.gameObject.SetActive(false);
            // ParticlesController.instance.SpawnParticle(ParticlesNames.WaterSplash, other.transform, 0,
            //     new Vector3(0, 1, 0));
        }
    }
}