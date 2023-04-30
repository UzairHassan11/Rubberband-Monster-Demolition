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
        //Invoke("LoadScene", 2);
        SceneManager.LoadScene(1);
    }

    void LoadScene()
    {
        SceneManager.LoadScene(1);

    }
}