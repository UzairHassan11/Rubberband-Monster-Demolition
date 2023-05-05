using System.Collections;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

public class DestructionCheck : MonoBehaviour
{
    [Range(0, 1)] [SerializeField] private float destructionPercentageRequired;

    [SerializeField] private Slider greenSlider, redSlider;
    
    [SerializeField] private GameObject finalBombs;
    
    private void Start()
    {
        greenSlider.maxValue = destructionPercentageRequired;
        greenSlider.value = destructionPercentageRequired;
        redSlider.maxValue = destructionPercentageRequired;
        redSlider.value = destructionPercentageRequired;
    }

    public void DestructionCall(Vector3 pos, float strength, float percentage)
    {
        greenSlider.DOValue(destructionPercentageRequired - percentage, 1);
        redSlider.DOValue(destructionPercentageRequired - percentage, 1.5f).SetDelay(1.25f);

        if (percentage >= destructionPercentageRequired)
        {
            GameManager.instance.ChangeGameState(GameState.Win);
            finalBombs.SetActive(true);
        }
    }
}