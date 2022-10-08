using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemSense : MonoBehaviour
{
    public List<Item> FoundItems = new List<Item>();
    public LayerMask ItemLayers;
    public float Radius = 0.1f;
    public float Distance = 0f;

    public void Update()
    {
        FoundItems = CircleCastItems();
        //DebugItems();
    }


    public List<Item> CircleCastItems () 
    { 
        var hits = Physics2D.CircleCastAll(transform.position, 0.2f, Vector2.zero, 0.1f, ItemLayers);

        var items = new List<Item>();

        foreach(RaycastHit2D hit in hits)
        {
            var newItem = hit.transform.gameObject.GetComponent<Item>();
            items.Add(newItem);
            Debug.Log(newItem);
        }

        return items;
    }

    private void DebugItems ()
    {
        foreach (Item item in FoundItems)
        {
            Debug.Log(item.GetType());
        }
    }
}
