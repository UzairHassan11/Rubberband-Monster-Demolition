using UnityEngine;
using UnityEngine.SceneManagement;
using Facebook.Unity;

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
        FB.Init("494146132843012");
        SceneManager.LoadScene(LevelNumberPref);
    }
}