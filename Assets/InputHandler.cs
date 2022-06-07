using System.Collections;
using System.Collections.Generic;
using UnityEngine.InputSystem.Interactions;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.UI;
using Sirenix.OdinInspector;
using TMPro;

public class InputHandler : MonoBehaviour
{
    public TextMeshProUGUI textMeshProUGUI_1;
    public TextMeshProUGUI textMeshProUGUI_2;
    public TextMeshProUGUI textMeshProUGUI_3;
    public TextMeshProUGUI textMeshProUGUI_3;


    public InputAction LeftDown;
    public InputAction RightDown;
    public InputAction LeftDelta;
    public InputAction RightDelta;
    public Vector2 Look;
    public Vector2 Move;

    public InputAction Tap;
    [ShowInInspector]
    public bool _touchOne;
    [ShowInInspector]
    private bool _touchTwo;

    private void Awake()
    {
        LeftDown.started += cta =>
        {
            OnTouchOneDown();
        };
        LeftDown.canceled += ctb =>
        {
            OnTouchOneUp();
        };
        RightDown.started += cta =>
        {
            OnTouchTwoDown();
        };
        RightDown.canceled += ctb =>
        {
            OnTouchTwoUp();

        };
    }
    public void OnEnable()
    {
        LeftDown.Enable();
        RightDown.Enable();
        LeftDelta.Enable();
        RightDelta.Enable();
    }

    public void OnDisable()
    {
        LeftDown.Disable();
        RightDown.Disable();
        LeftDelta.Disable();
        RightDelta.Disable();
    }
    private void Update()
    {
        if (_touchOne)
        {
            Move= LeftDelta.ReadValue<Vector2>(); 
        }
        if (_touchTwo)
        {
            Look = RightDelta.ReadValue<Vector2>(); 
        }
    }

    private void OnTouchOneDown ()
    {

        if (!_touchOne)
        {
            _touchOne = true;
        }
    }

    private void OnTouchOneUp()
    {
        if (_touchOne)
        {
            _touchOne = false;
        }


    }

    private void OnTouchTwoDown()
    {
        if (!_touchTwo)
        {
            _touchTwo = true;
        }
    }

    private void OnTouchTwoUp()
    {
        if (_touchTwo)
        {
            _touchTwo = false;
        }
    }
}
