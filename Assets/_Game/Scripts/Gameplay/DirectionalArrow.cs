using UnityEngine;
using DG.Tweening;

namespace _Game.Scripts.Gameplay
{
    public class DirectionalArrow : MonoBehaviour
    {
        private Material arrowMat;

        [SerializeField] private MeshRenderer arrowMesh;
    
        [SerializeField] private float arrowAnimSpeed;
        
        private void Start()
        {
            arrowMat = arrowMesh.materials[0];
            Vector2 v2 = new Vector2(0, 1);
            arrowMat.DOOffset(v2, arrowAnimSpeed).SetEase(Ease.Linear).SetRelative(true).SetLoops(-1, LoopType.Restart);
        }

        public void TurnIt(bool state)
        {
            gameObject.SetActive(state);
        }
    }
}