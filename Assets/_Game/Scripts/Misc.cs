using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class Misc : MonoBehaviour
{
    [ContextMenu("DeleteAllColliders")]
    void DeleteAllColliders()
    {
        List<Collider> colliders = GetComponentsInChildren<Collider>().ToList();
        int i = 0;
        while (colliders.Count > 0)
        {
            DestroyImmediate(colliders[i++]);
        }
    }
}