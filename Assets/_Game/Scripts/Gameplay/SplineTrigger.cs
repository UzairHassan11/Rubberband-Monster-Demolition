using Dreamteck.Splines;
using UnityEngine;
using VoxelDestruction;

public class SplineTrigger : MonoBehaviour
{
    [SerializeField] private SplineComputer _splineComputer;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Car"))
        {
            other.GetComponent<Car>().FollowSpline(_splineComputer);
        }
    }

    // private VoxelObject _voxelObject;
    //
    // void func()
    // {
    //     _voxelObject.debug
    // }
}