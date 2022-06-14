using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Sirenix.OdinInspector;

[RequireComponent(typeof(CharacterController2D))]
public class PlayerController : MonoBehaviour
{
    public ControlType CtrlType;
    public GameObject DirectionProbe;
    private CharacterController2D _charController;
    private Vector2 _moveValue;
    public enum ControlType
    {
        PC,
        Mobile
    }
    private void Awake()
    {
        _charController = GetComponent<CharacterController2D>();
    }

    public void CallMoveUpdate(Vector2 moveValue)
    {
        _moveValue = moveValue;
    }

    private void FixedUpdate()
    {
        if (CtrlType == ControlType.PC)
        {
            var xAxis = Input.GetAxis("Horizontal");
            var yAxis = Input.GetAxis("Vertical");

            _charController.Move(new Vector2(xAxis, yAxis));

            var atan = Mathf.Atan2(xAxis, yAxis) * Mathf.Rad2Deg;
            DirectionProbe.transform.rotation = Quaternion.AngleAxis(atan, Vector3.back);
        }
        else if (CtrlType == ControlType.Mobile)
        {
            _charController.Move(_moveValue);

            if ((_moveValue.x + _moveValue.y) == 0f)
                return;

            var atan = Mathf.Atan2(_moveValue.x, _moveValue.y) * Mathf.Rad2Deg;
            DirectionProbe.transform.rotation = Quaternion.AngleAxis(atan, Vector3.back);
        }



    }
}
