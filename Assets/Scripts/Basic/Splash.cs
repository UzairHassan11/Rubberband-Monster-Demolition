using UnityEngine;
using UnityEngine.SceneManagement;

public class Splash : MonoBehaviour
{
    #region .
    int LevelNumberPref
    {
        get => PlayerPrefs.GetInt("LevelNumberPref", 1);
        set => PlayerPrefs.SetInt("LevelNumberPref", value);
    }
    #endregion
    
    // Start is called before the first frame update
    void Start()
    {
        SceneManager.LoadScene(LevelNumberPref);
    }
}