using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public struct AIStruct
{
    GameObject GObject;
    public int Id;
    public AIAgent_2 AgentScript;
}
public class AIManager_2 : MonoBehaviour
{
    public GameObject _player;

    public GameObject GetPlayer
    {
        get { return _player; }
    }
}
