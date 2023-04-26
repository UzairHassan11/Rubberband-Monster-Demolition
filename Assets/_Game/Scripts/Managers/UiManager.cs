using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class UiManager : MonoBehaviour
{
    #region .
    
    public float PlayerCash
    {
        get => PlayerPrefs.GetFloat("PlayerCash", 100);
        set => PlayerPrefs.SetFloat("PlayerCash", value);
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

    [SerializeField] private Text levelText;
    
    [SerializeField] private bool test;
    
    [SerializeField] private GameObject startPanel, gameplayPanel, winPanel, failPanel;
    
    // Start is called before the first frame update
    void Start()
    {
        levelText.text = "Level " + LevelNumberAnalytics.ToString("00");
        if (!test)
        {
            // GameAnalytics.NewProgressionEvent(GAProgressionStatus.Start, "LevelStart", LevelNumberAnalytics);
        }
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
}
