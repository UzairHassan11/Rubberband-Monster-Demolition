using _Game.Scripts.Gameplay;
using UnityEngine;

public class Car : MonoBehaviour
{
    [SerializeField] private DirectionalArrow _directionalArrow;

    public void TurnDirectionalArrow(bool state)
    {
        _directionalArrow.TurnIt(state);
    }
}