using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Sirenix.OdinInspector;

[RequireComponent(typeof(CharacterController2D))]
public class PlayerController : MonoBehaviour
{
    //private CharacterController2D _charController;

    private void Awake()
    {
        //_charController = GetComponent<CharacterController2D>();
    }

    private void FixedUpdate()
    {
        //var xAxis = Input.GetAxis("Horizontal");
        //var yAxis = Input.GetAxis("Vertical");

        //_charController.Move(new Vector2(xAxis, yAxis));

        //var atan = Mathf.Atan2(xAxis, yAxis) * Mathf.Rad2Deg;
        //transform.rotation = Quaternion.AngleAxis(atan, Vector3.back);
    }
}
