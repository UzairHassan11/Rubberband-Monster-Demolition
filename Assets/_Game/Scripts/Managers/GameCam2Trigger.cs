using UnityEngine;

public class GameCam2Trigger : MonoBehaviour
{
    [SerializeField] private bool gameCam2;
    
    private void OnTriggerEnter(Collider other)
    {
        if(other.CompareTag("Car"))
            SwitchCam();
    }

    void SwitchCam()
    {
        // print("triggered");
        CameraManager.instance.SetAnimatorState(gameCam2 ? CamStates.gameplay2 : CamStates.gameplay);
    }
}