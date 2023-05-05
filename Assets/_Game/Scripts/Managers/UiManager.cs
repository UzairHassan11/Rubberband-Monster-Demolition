using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class UiManager : MonoBehaviour
{
    #region .
    
    public float PlayerCash
    {
        get => PlayerPrefs.GetFloat("PlayerCash", 100);
        private set => PlayerPrefs.SetFloat("PlayerCash", value);
    }
    
    int LevelNumberPref
    {
        get => PlayerPrefs.GetInt("LevelNumberPref", 1);
        set => PlayerPrefs.SetInt("LevelNumberPref", value);
    }
    
    int LevelNumberAnalytics
    {
        get => PlayerPrefs.GetInt("LevelNumberAnalytics", 1);
        set => PlayerPrefs.SetInt("LevelNumberAnalytics", value);
    }
    
    #endregion

    [SerializeField] private TextMeshProUGUI levelText, cashText;
    
    [SerializeField] private bool test;
    
    [SerializeField] private GameObject startPanel, gameplayPanel, winPanel, failPanel;

    [SerializeField] private Transform cashObject;
    
    // Start is called before the first frame update
    void Start()
    {
        if(levelText)
            levelText.text = "LVL " + LevelNumberAnalytics.ToString("00");
        if (!test)
        {
            // GameAnalytics.NewProgressionEvent(GAProgressionStatus.Start, "LevelStart", LevelNumberAnalytics);
        }

        waitPerFragmentRewardDelay = new WaitForSeconds(perFragmentRewardDelay);
        AddCash(0);
    }

    public void ShowStartPanel()
    {
        gameplayPanel.SetActive(false);
        startPanel.SetActive(true);
    }

    public void OnClickStartPanel()
    {
        startPanel.SetActive(false);
        gameplayPanel.SetActive(true);
        CameraManager.instance.SetAnimatorState(CamStates.gameplay);
        GameManager.instance.ChangeGameState(GameState.Running);
        if (!test)
        {
            CameraManager.instance.SetAnimatorState(CamStates.gameplay);
            GameManager.instance.ChangeGameState(GameState.Running);
        }
    }

    public void ShowWinPanel(float delay = 0)
    {
        if (delay > 0)
        {
            StartCoroutine(showPanelWithDelay(delay, true));
            return;
        }
        
        if (!test)
        {
            // GameAnalytics.NewProgressionEvent(GAProgressionStatus.Complete, "Level_Completed", LevelNumberAnalytics);
        }

        winPanel.SetActive(true);
        gameplayPanel.SetActive(false);
        LevelNumberAnalytics++;
        LevelNumberPref++;
        if (LevelNumberPref >= SceneManager.sceneCountInBuildSettings)
            LevelNumberPref = 1;
    }
    
    public void ShowFailPanel(float delay = 0)
    {
        if (delay > 0)
        {
            StartCoroutine(showPanelWithDelay(delay, false));
            return;
        }
        
        if (!test)
        {
            // GameAnalytics.NewProgressionEvent(GAProgressionStatus.Fail, "Level_Failed", LevelNumberAnalytics);
        }

        failPanel.SetActive(true);
        gameplayPanel.SetActive(false);
    }

    IEnumerator showPanelWithDelay(float delay, bool win)
    {
        yield return new WaitForSeconds(delay);
        if (win) 
            ShowWinPanel(0);
        else
            ShowFailPanel(0);
    }

    public void OnReloadLevel()
    {
        SceneManager.LoadScene(LevelNumberPref);
    }
    
    #region plus-anim


    [SerializeField] private Text plusCash;
    public void ShowPlusAnim(Transform t, float cash)
    {
        // plusCash.gameObject.SetActive(false);
        Vector3 pos = Camera.main.WorldToScreenPoint(t.position);
        pos.z = 0;
        if (plusAnims.Count == 0)
        {
            Text newText = Instantiate(plusCash, plusCash.transform.parent);
            plusAnims.Add(newText);
            newText.gameObject.SetActive(true);
        }

        Text currentText = plusAnims[0];
        plusAnims.RemoveAt(0);
        currentText.GetComponent<RectTransform>().position = pos;
        currentText.text = "+"+ cash;
        // Color c = currentText.color;
        // c.a = 1;
        // currentText.color = c;
        currentText.transform.localScale = Vector3.one;
        currentText.transform.DOScale(1, .3f);
        currentText.DOFade(1, .3f);
        
        currentText.transform.DOMoveY(
            // new Vector3( Screen.currentResolution.width/2, Screen.currentResolution.height/2, 0)
            // cashObject.position
            Random.Range(200, 300)
            , 1f).SetRelative(true).OnComplete(()=>
            plusAnims.Add(currentText)
        );
        currentText.transform.DOScale(0, .1f).SetDelay(1.2f);
        currentText.DOFade(0, .1f).SetDelay(1.2f);
        // plusCash.gameObject.SetActive(true);
    }

    private List<Text> plusAnims = new List<Text>();

    #endregion

    #region per-fragment-reward

    [SerializeField] private float rewardPerBaseFragment, perFragmentRewardDelay;
    private WaitForSeconds waitPerFragmentRewardDelay;
    public void GiveReward(Transform t)
    {
        StartCoroutine(giveReward(t));
        AddCash(rewardPerBaseFragment * UpgradesManager.instance.upgrades[2].GetCurrentActualValue);
    }

    IEnumerator giveReward(Transform t)
    {
        // yield return new WaitForSeconds(Random.Range(0, 1));
        yield return waitPerFragmentRewardDelay;
        ShowPlusAnim(t, rewardPerBaseFragment * UpgradesManager.instance.upgrades[2].GetCurrentActualValue);
    }

    private bool animatingCash;

    public void AddCash(float cashDelta)
    {
        if (!animatingCash)
        {
            animatingCash = true;
            cashText.transform.DOScale(.1f, .25f).SetRelative(true).SetEase(Ease.Linear).SetLoops(2, LoopType.Yoyo)
                .OnComplete(() => animatingCash = false);
        }

        UpgradesManager.instance.UpdateAllButtons();
        PlayerCash += cashDelta;
        cashText.text = PlayerCash.ToString("F0");
    }

    #endregion
}