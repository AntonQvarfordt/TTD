using Sirenix.OdinInspector;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class MoveInputSpace : MonoBehaviour, IPointerDownHandler, IPointerUpHandler, IPointerExitHandler, IDragHandler, IEndDragHandler
{
    private RectTransform _inputSpace;
    [ShowInInspector]
    private bool _inputDown;
    [ShowInInspector]
    public Vector2 _moveFromOrigin;

    public PlayerController PlayerController;

    public InputMove<Vector2> MoveEvent;

    [System.Serializable]
    public class InputMove<Vector2> : UnityEvent<Vector2>
    {
    }

    private Vector2 _inputDeltaValue;


    private void Awake()
    {
        _inputSpace = GetComponent<RectTransform>();
    }
    private void Update()
    {
        PlayerController.CallMoveUpdate(_moveFromOrigin);
    }
    public void OnPointerDown(PointerEventData eventData)
    {
        if (_inputDown)
            return;

        OnDown();
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        //if (!_inputDown)
        //    return;
        //Debug.Log("OnUp");

        //OnUp();

    }

    public void OnPointerExit(PointerEventData eventData)
    {
        //if (!_inputDown)
        //    return;

        //Debug.Log("OnExit");
        //OnUp();
    }

    private void OnDown()
    {
        _inputDown = true;

    }
    private void OnUp()
    {
        //Debug.Log("OnUp");
        //_inputDown = false;
        //_moveFromOrigin = Vector2.zero;
    }

    public void OnDrag(PointerEventData eventData)
    {
        //Debug.Log("OnDrag: " + eventData.pressPosition);
        _moveFromOrigin = (eventData.position - eventData.pressPosition).normalized;
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        _moveFromOrigin = Vector2.zero;
    }
}
