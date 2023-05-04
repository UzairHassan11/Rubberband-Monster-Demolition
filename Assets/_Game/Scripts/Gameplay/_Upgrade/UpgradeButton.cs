using TMPro;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UI;

public class UpgradeButton : MonoBehaviour
{
    public Button button;

    public TextMeshProUGUI nameText, priceText, upgradeLevelText;
    [FormerlySerializedAs("upgradeText")] public Text nextUpgradeText;
    public Text currentUpgradeText;

    public GameObject cashSection, adButton, lockImage;

    public Image image;
}