using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Sirenix.OdinInspector;
using Pathfinding;


public enum AIState
{
    State1, 
    State2,
    State3
}

[RequireComponent(typeof(AIPath))]
public class AIAgent : Actor, IDamagable
{
    public Transform DestinationTransform;
    private AIPath _pathScript;

    public float health { get => throw new System.NotImplementedException(); set => throw new System.NotImplementedException(); }

    private void Awake()
    {
        _pathScript = GetComponent<AIPath>(); 
    }

    [Button]
    public void MoveDestination ()
    {
        _pathScript.destination = DestinationTransform.position;
    }

    public void StopMoveDestination()
    {
        _pathScript.destination = transform.position;
    }

    public void SetMoveSpeed (float speed)
    {

    }

    public void Initialize()
    {
        throw new System.NotImplementedException();
    }

    public void ApplyDamage(float points)
    {
        throw new System.NotImplementedException();
    }
}
