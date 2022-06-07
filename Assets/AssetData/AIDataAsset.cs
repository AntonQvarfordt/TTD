using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "AIDataAsset", menuName = "AIAssets/AIDataAsset", order = 1)]
[System.Serializable]
public class AIDataAsset : ScriptableObject
{
    public string Name;
    public GameObject Prefab;
}
