using System.Collections;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;
using VoxelDestruction;

public class DestructionCheck : MonoBehaviour
    {
        [Range(0,1)]
        [SerializeField] private float destructionPercentageRequired;

        [SerializeField] private Slider destructionSlider;

        [SerializeField] private VoxelObject _voxelObject;
        
        private void Start()
        {
            destructionSlider.maxValue = destructionPercentageRequired;
            destructionSlider.value = destructionPercentageRequired;
        }

        public void DestructionCall(Vector3 pos, float strength, float percentage)
        {
            if (percentage >= destructionPercentageRequired)
            {
                GameManager.instance.ChangeGameState(GameState.Win);
            }
            else
            {
                // StartCoroutine(fillSlider(destructionPercentageRequired - percentage));
                destructionSlider.DOValue(destructionPercentageRequired - percentage, 1);
            }
        }

        
        IEnumerator fillSlider(float val)
        {
            float animTime = 1, curTime, sliderVal = destructionSlider.value;
            curTime = animTime;
            while (curTime > 0)
            {
                yield return null;
                destructionSlider.value = Mathf.Lerp(sliderVal, val, curTime / animTime);
                curTime -= Time.deltaTime;
            }
        }
    }