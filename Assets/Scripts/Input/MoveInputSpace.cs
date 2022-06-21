using Sirenix.OdinInspector;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class MoveInputSpace : MonoBehaviour, IDragHandler, IEndDragHandler
{
    public PlayerController PlayerController;
    private Vector2 _moveFromOrigin;
   
    private void Update()
    {
        PlayerController.CallMoveUpdate(_moveFromOrigin);
    }

    public void OnDrag(PointerEventData eventData)
    {
        _moveFromOrigin = (eventData.position - eventData.pressPosition).normalized;
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        _moveFromOrigin = Vector2.zero;
    }
}
