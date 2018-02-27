using System;
using UnityEngine;

[Serializable]
public class PoolingItem
{
    public string Tag;
    public GameObject Prefab;
    public int Size;

    [Range(0, 100)]
    public float Probability;
}