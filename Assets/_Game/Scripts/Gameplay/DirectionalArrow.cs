using UnityEngine;
using DG.Tweening;

public class DirectionalArrow : MonoBehaviour
{
    [SerializeField] private bool changeColour = true;

    private Material arrowMat;

    [SerializeField] private MeshRenderer arrowMesh;

    [SerializeField] private float arrowAnimSpeed;

    [SerializeField] private Gradient _gradient;

    [SerializeField] private SwereMovement _swereMovement;
    
    private void Start()
    {
        arrowMat = arrowMesh.materials[0];
        Vector2 v2 = new Vector2(0, 1);
        arrowMat.DOOffset(v2, arrowAnimSpeed).SetEase(Ease.Linear).SetRelative(true).SetLoops(-1, LoopType.Restart);
    }

    private void Update()
    {
        if (changeColour && arrowMat)
        {
            arrowMat.SetColor("_Color", _gradient.Evaluate(_swereMovement.GetCurrentPercentage()));
        }
    }

    public void TurnIt(bool state)
    {
        gameObject.SetActive(state);
    }
}