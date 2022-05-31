using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class TriggerUnityAction : MonoBehaviour
{
    public LayerMask ValidColliders;
    public UnityEvent[] EnterActions;
    public UnityEvent[] ExitActions;
    private void OnTriggerEnter2D(Collider2D other)
    {
        if (!ValidColliders.Contains(other.gameObject))
            return;

        Debug.Log(LayerMask.LayerToName(other.gameObject.layer));
        foreach (UnityEvent unityEvent in EnterActions)
        {
            unityEvent.Invoke();
        }
    }

    private void OnTriggerExit2D(Collider2D other)
    {
        foreach (UnityEvent unityEvent in ExitActions)
        {
            unityEvent.Invoke();
        }
    }
}
