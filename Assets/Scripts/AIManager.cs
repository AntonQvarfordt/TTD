using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using Sirenix.OdinInspector;

public struct ActiveAI
{
    int Id;
    public AIAgent script;
}

public class AIManager : MonoBehaviour
{
    public AIDataCollection AIAssets;
    public GameObject SpawnPosition;
    public float SpawnRadius;
    public List<AIAgent> AIAgents = new List<AIAgent>();

    public AIAgent AITest;

    public AIAgent SpawnAIActor(string AIAssetID = "AIOne")
    {
        var agentPrefab = AIAssets.GetAgentFromID(AIAssetID);
        if (agentPrefab == null)
            return null;

        var agentObject = Instantiate(agentPrefab);
        var agentScript = agentObject.GetComponent<AIAgent>();
        AIAgents.Add(agentScript);
        return agentScript;
    }

    [Button]
    public void TestGetAI ()
    {
        AITest = SpawnAIActor();
    }

    public void DestroyAI (AIAgent agent)
    {

    }
 
    public void OnDrawGizmos()
    {
        if (SpawnPosition != null)
            Gizmos.DrawWireSphere(SpawnPosition.transform.position, SpawnRadius);
    }
}
