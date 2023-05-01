using System;
// using MoreMountains.NiceVibrations;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;
using Random = UnityEngine.Random;
using DG.Tweening;
using MoreMountains.NiceVibrations;

public class UpgradesManager : MonoBehaviour
{
    #region singleton

    public static UpgradesManager instance;

    private void Awake()
    {
        instance = this;

        foreach (var upgrade in upgrades)
        {
            if (upgrade.firstIsUnlocked)
                if (upgrade.NextUpgrade == 0)
                    upgrade.NextUpgrade = 1;
        }
    }

    #endregion
    
    public Upgrade[] upgrades;

    [Header("Upgrade Anim")]
    [SerializeField]
    private GameObject animPrefab;
    [SerializeField] private float animRadius, animOffset;
    
    private void Start()
    {
        foreach (var upgrade in upgrades)
        {
            upgrade.Init();
        }
    }

    public void ResetAllUpdates()
    {
        foreach (var upgrade in upgrades)
        {
            upgrade.NextUpgrade = 0;
        }
    }
    
    public void UpdateAllButtons()
    {
        foreach (var upgrade in upgrades)
        {
            upgrade.UpdateButton();
        }
    }
    
    public void UpgradeAnim(Transform animParent)
    {
        if(animPrefab==null)
            return;
        for (int i = 0; i < 10; i++)
        {
            Vector2 positionToSpawn = Random.insideUnitCircle * animRadius;
            GameObject objInstantiated = Instantiate(animPrefab, animParent);
            objInstantiated.transform.localPosition = positionToSpawn;
            // animPrefab.transform.SetParent(animParent.parent);
            // animParent.DOScale(1.2f, .2f).SetEase(Ease.Linear).SetLoops(4, LoopType.Yoyo);
            Color color = objInstantiated.GetComponent<Image>().color;
            color.a = Random.Range(.5f, 1f);
            objInstantiated.GetComponent<Image>().color = color;
            float randomScale = Random.Range(.5f, 1f);
            objInstantiated.SetActive(true);
            objInstantiated.transform.localScale = new Vector3(randomScale, randomScale, randomScale);
            objInstantiated.transform.DOLocalMoveY(animOffset, Random.Range(.5f, 1f)).SetEase(Ease.Linear).SetRelative(true).onComplete = () => objInstantiated.SetActive(false);
            // prefabsReference.Add(objInstantiated);
        }
    }

    public bool PurchaseCheck(Upgrade upgrade)
    {
        // if (upgrade == upgrades[0])
        // {
        //     return BallsManager.instance.canSpawnNow;
        // }
        // else if (upgrade == upgrades[1])
        // {
        //     if (!BallsManager.instance.MergeLastTwoBalls())
        //         return false;
        // }

        return true;
    }
}

[Serializable]
public class Upgrade
{
    #region vars

    public bool firstIsUnlocked;
    
    [SerializeField] private string name;

    [Tooltip("Must be Unique")]
    [SerializeField] string prefString;

    // private bool animatingUpgradeText;
    public UpgradeButton upgradeButton;

    [SerializeField] private Sprite[] _sprites;
    #endregion
    
    #region Button-Stuff
    
    public void Init()
    {
        upgradeButton.button.onClick.AddListener(PurchaseUpgrade);
        // upgradeButton.nameText.text = name;
        UpdateButton();
    }
    
    public void PurchaseUpgrade()
    {
        float price = upgradePrices[NextUpgrade];
        if (GameManager.instance.uiManager.PlayerCash >= price && UpgradesManager.instance.PurchaseCheck(this))
        {
            MMVibrationManager.Haptic(HapticTypes.Success);
            GameManager.instance.uiManager.PlayerCash -= price;
            NextUpgrade++;
            if (NextUpgrade >= upgradePrices.Length)
                NextUpgrade = upgradePrices.Length;

            // Debug.Log(NextUpgrade + " \t" + upgradePrices.Length);
            
            UpgradesManager.instance.UpdateAllButtons();
            UpgradesManager.instance.UpgradeAnim(upgradeButton.transform);
            // if (!animatingUpgradeText)
            // {
            //     animatingUpgradeText = true;
            //     upgradeButton.upgradeText.transform.DOScale(2f, .2f).SetEase(Ease.Linear).SetLoops(2, LoopType.Yoyo)
            //         .OnComplete(() => animatingUpgradeText = false);
            // }
            MMVibrationManager.Haptic(HapticTypes.Success);

            // SoundManager.Instance.PlaySound(ClipName.Upgrade);
            if (onUpgradeEvent != null)
                onUpgradeEvent.Invoke();
        }
        else
        {
             MMVibrationManager.Haptic(HapticTypes.Failure);
        }
    }

    public void UpdateButton()
    {
        // upgradeButton.nameText.text = 
        // is upgraded to max
        if (!HasNotReachedMaxUpgrade)
        {
            upgradeButton.button.interactable = false;
            upgradeButton.cashSection.SetActive(false);
            
            if(upgradeButton.nextUpgradeText)
                upgradeButton.nextUpgradeText.text = "Max";
            if (upgradeButton.currentUpgradeText)
                upgradeButton.currentUpgradeText.text = GetCurrentActualValue.ToString();

            if(upgradeButton.nameText)
                upgradeButton.nameText.text = "Max";
            
            // if(upgradeButton.image)
            //     upgradeButton.image.sprite = GetNextSprite;
            // upgradeButton.upgradeText.color = Color.red;
            // Debug.Log(this.name +  " Is Not Upgradeable");
        }
        else
        {
            // upgradeButton.upgradeText.color = Color.white;
            upgradeButton.priceText.text = GetNextPrice.ToString("F0");
            
            if(upgradeButton.nextUpgradeText)
                upgradeButton.nextUpgradeText.text = GetNextActualValue.ToString();
            if(upgradeButton.currentUpgradeText)
                upgradeButton.currentUpgradeText.text = GetCurrentActualValue.ToString();

            if(upgradeButton.cashSection)
                upgradeButton.cashSection.SetActive(true);
            
            if(upgradeButton.nameText)
                upgradeButton.nameText.text = GetNextUpgradeName;
            
            if(upgradeButton.image)
                upgradeButton.image.sprite = GetNextSprite;
            
            SetButtonInteractable();
            // Debug.Log(this.name +  " Is Upgradeable");
        }

        if(postUnlockableCheck!=null)
            postUnlockableCheck.Invoke();
    }

    void SetButtonInteractable()
    {
        if(!HasNotReachedMaxUpgrade)
            return;
        
        float nextPrice = GetNextPrice;
        upgradeButton.button.interactable = GameManager.instance.uiManager.PlayerCash >= nextPrice;
    }

    #endregion

    #region upgrade-related
    
    public int NextUpgrade
    {
        get { return PlayerPrefs.GetInt(prefString + "_CurrentUpgrade", 0); }
        set { PlayerPrefs.SetInt(prefString + "_CurrentUpgrade", value); }
    }

    /// <summary>
    /// you can by upgradeValue[n] in upgradePrices[n]
    /// </summary>
    public float[] upgradePrices, upgradeValue, actualUpgradeValue;

    [SerializeField] string []upgradeNames;
    
    public bool HasNotReachedMaxUpgrade => NextUpgrade < upgradePrices.Length;
    public int GetMaxCount => upgradePrices.Length;
    public float GetMaxActualValue => actualUpgradeValue[^1];

    // price is always sows for next unlock-able item
    public float GetNextPrice => upgradePrices[NextUpgrade];
    public float GetPriceWithIndex(int i) => upgradePrices[i];

    
    public string GetNextUpgradeName => upgradeNames[NextUpgrade];
    public string GetPreviousUpgradeName => upgradeNames[NextUpgrade - 1];
    public string GetNameWithIndex(int i) => upgradeNames[i];
    
    public float GetNextUpgradeValue => upgradeValue[NextUpgrade];
    public float GetPreviousUpgradeValue => upgradeValue[NextUpgrade - 1];
    public float GetUpgradeValueWithIndex(int i) => upgradeValue[i];
    
    
    public Sprite GetPreviousSprite => _sprites[NextUpgrade - 1];
    public Sprite GetNextSprite => _sprites[NextUpgrade];
    public Sprite GetSpriteWithIndex(int i) => _sprites[i];
    
    public float GetCurrentActualValue => NextUpgrade >= upgradePrices.Length ? actualUpgradeValue[actualUpgradeValue.Length - 1] : actualUpgradeValue[NextUpgrade];
    public float GetPreviousActualValue => NextUpgrade >= upgradePrices.Length ? actualUpgradeValue[actualUpgradeValue.Length - 1] : actualUpgradeValue[NextUpgrade - 1];
    public float GetActualValueWithIndex(int i) => actualUpgradeValue[i];

    public float GetNextActualValue => NextUpgrade >= upgradePrices.Length ? actualUpgradeValue[actualUpgradeValue.Length - 1] : actualUpgradeValue[NextUpgrade];
    
    public Vector2 GetActualValueLimits => new Vector2(actualUpgradeValue[0], actualUpgradeValue[actualUpgradeValue.Length - 1]);
    
    
    [SerializeField] private UnityEvent onUpgradeEvent, postUnlockableCheck;    

    #endregion
}