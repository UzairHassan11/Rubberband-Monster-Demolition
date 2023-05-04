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

    private CinemachineFramingTransposer GP_transposer;

    private void Start()
    {
        GP_transposer = GP_Cam.GetCinemachineComponent<CinemachineFramingTransposer>();
    }

    public void SetAnimatorState(CamStates camState)
    {
        animator.CrossFade(camState.ToString(), .1f);
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
        DOTween.To(() => GP_transposer.m_TrackedObjectOffset, x => GP_transposer.m_TrackedObjectOffset = x,
            (inSling ? inSlingOffset : shootOffset), .5f);
    }
}
[System.Serializable]
public enum CamStates
{
    start,
    gameplay,
    endPoint,
    finalMomentum,
    win
}