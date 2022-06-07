using Sirenix.OdinInspector;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public struct AIData
{
    public string Id;
    public AIDataAsset Asset;
}

[CreateAssetMenu(fileName = "AIDataCollection", menuName = "AIAssets/AIDataCollection", order = 1)]
public class AIDataCollection : ScriptableObject
{
    public AIData[] DataAssets;
    public GameObject GetAgentFromID (string id)
    {
        foreach (AIData aIData in DataAssets)
        {
            if (aIData.Id == id)
            {
                return aIData.Asset.Prefab;
            }    
        }
        return null;
    }

}
