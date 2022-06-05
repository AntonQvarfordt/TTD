using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Sirenix.OdinInspector;

//[RequireComponent(typeof(AIPath))]
public class AIAgent : Actor
{
    public Transform DestinationDebug;
    private void Awake()
    {
        //_pathScript = GetComponent<AIPath>(); 
    }

    [Button]
    private void SetDestination (Vector2 position)
    {
        //_pathScript.destination = DestinationDebug.position;
    }

    public void SetMoveSpeed (float speed)
    {

    }
}
