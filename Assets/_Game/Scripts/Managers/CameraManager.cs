using UnityEngine;
using Cinemachine;
using DG.Tweening;

public class CameraManager : MonoBehaviour
{
    #region singleton

    public static CameraManager instance;

    private void Awake()
    {
        instance = this;
    }

    #endregion
    
    [SerializeField] Animator animator;

    [SerializeField] private GameObject speedFx;

    [SerializeField] private CinemachineVirtualCamera GP_Cam;

    [SerializeField] private Vector3 inSlingOffset, shootOffset;
    [SerializeField] private Vector3 inSlingRotation, shootRotation;

    private CinemachineFramingTransposer GP_transposer;

    private void Start()
    {
        GP_transposer = GP_Cam.GetCinemachineComponent<CinemachineFramingTransposer>();
        Invoke("SwitchToStartCam", 1);
    }

    void SwitchToStartCam()
    {
        SetAnimatorState(0);
    }
    
    public void SetAnimatorState(CamStates camState)
    {
        animator.CrossFade(camState.ToString(), .1f);
    }

    [SerializeField] private int customIndex;

    [ContextMenu("SetCustomIndex")]
    void SetCustomIndex()
    {
        SetAnimatorState(customIndex);
    }
    
    public void SetAnimatorState(int index)
    {
        animator.CrossFade(((CamStates)index).ToString(), .1f);
    }
    
    public void SetAnimatorState(string state)
    {
        animator.CrossFade(state, .1f);
    }

    public void TurnSpeedFx(bool state)
    {
        speedFx.SetActive(state);
    }

    public void Change_GP_Cam_Follow_Offset(bool inSling)
    {
        if(GP_transposer)
        DOTween.To(() => GP_transposer.m_TrackedObjectOffset, x => GP_transposer.m_TrackedObjectOffset = x,
            (inSling ? inSlingOffset : shootOffset), .5f);
        // GP_Cam.transform.localEulerAngles = inSling ? inSlingRotation : shootRotation;
        // GP_Cam.transform.DOLocalRotate(inSling ? inSlingRotation : shootRotation, .5f);
    }
}
[System.Serializable]
public enum CamStates
{
    start,
    gameplay,
    gameplay2,
    endPoint,
    finalMomentum,
    win
}