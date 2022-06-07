using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class InputTesting : MonoBehaviour
{
    public InputAction TestInputAction;
    public Vector2 DeltaDebug;
    private void Awake()
    {
        TestInputAction.performed  += ctx => {
            Vector2 normalize = ctx.ReadValue<Vector2>();
            DeltaDebug = normalize;
        };
    }

    private void OnEnable()
    {
        TestInputAction.Enable();
    }

    private void OnDisable()
    {
        TestInputAction.Disable();
    }
}
