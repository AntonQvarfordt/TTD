using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemSense : MonoBehaviour
{
    public Item[] FoundItems;
    public LayerMask ItemLayers;
    public float Radius = 0.1f;
    public float Distance = 0f;

    public void Update()
    {
        FoundItems = CircleCastItems();
    }


    public Item[] CircleCastItems () 
    { 
        var returnValue = new Item[0];
        var hits = Physics2D.CircleCastAll(transform.position, 0.2f, Vector2.zero, 0.1f, ItemLayers);

        var items = new List<Item>();

        foreach(RaycastHit2D hit in hits)
        {
            items.Add(hit.transform.gameObject.GetComponent<Item>());
        }

        returnValue = items.ToArray();
        

        return returnValue;
    }
}
