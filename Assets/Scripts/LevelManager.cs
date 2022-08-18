using Sirenix.OdinInspector;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelManager : MonoBehaviour
{
    public static LevelManager Instance;
    public GameObject PlayerPrefab;
    public GameObject Enemy_A_Prefab;
    public GameObject PlayerSpawnPoint;
    public GameObject EnemySpawnPoint;
    public GameObject AIContainer;

    public Player_A ActivePlayer;
    public List<AIAgent_2> ActiveAgents = new List<AIAgent_2>();

    private void Awake()
    {
        Instance = this;
    }

    [Button]
    public void SpawnEnemy (Transform location)
    {
        var enemy = Instantiate(Enemy_A_Prefab);
        enemy.transform.parent = AIContainer.transform;
        enemy.transform.position = EnemySpawnPoint.transform.position;

    }
    [Button]
    public void SpawnPlayer (Transform location)
    {

    }
}
