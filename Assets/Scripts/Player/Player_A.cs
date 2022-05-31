using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Sirenix.OdinInspector;

public class Player_A : MonoBehaviour
{
    [ShowInInspector]
    private List<Item> items = new List<Item>();

    public void AddItem (Item item)
    {
        if (!items.Contains(item))
        {
            items.Add(item);
        }
    }

    public void RemoveItem(Item item)
    {
        if (items.Contains(item))
        {
            items.Remove(item);
        }
    }
}
