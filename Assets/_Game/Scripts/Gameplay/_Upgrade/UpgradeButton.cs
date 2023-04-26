using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UI;

public class UpgradeButton : MonoBehaviour
{
    public Button button;

    public Text nameText, priceText;
    [FormerlySerializedAs("upgradeText")] public Text nextUpgradeText;
    public Text currentUpgradeText;

    public GameObject cashSection, adButton;

    public Image image;
}