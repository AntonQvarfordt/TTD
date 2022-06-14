using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Itatake.Generic;
using Sirenix.OdinInspector;

public enum FaceDirection
{
    Up = 0,
    Right = 1,
    Down = 2,
    Left = 3,
}

[System.Serializable]
public struct FaceDirectionData
{
    public FaceDirection Direction;
    public Vector2 AngleSpan;
}

public class StateReader : MonoBehaviour
{
    public Animator BodyAnimator;
    public GameObject DirectionProbe;
    public float DebugFloat;
    public FaceDirectionData[] FaceDirections;
    public float SpeedReader;
    public FaceDirection Direction;
    public Vector2 MoveDelta;
    public float MoveSpeed;
    private Vector2 _lastPos;
    private Vector2 _deltaPos;

    public float Speed;

    private void Update()
    {
        Direction = GetFaceDirection();
        BodyAnimator.SetInteger("faceDirection", (int)Direction);
        BodyAnimator.SetFloat("moveSpeed", Speed);
    }

    private void FixedUpdate()
    {
        _deltaPos = (Vector2)transform.position- _lastPos;
        _lastPos = (Vector2)transform.position;

        Speed = _deltaPos.magnitude*20;
    }

    private FaceDirection GetFaceDirection()
    {
        foreach (FaceDirectionData faceDirectionData in FaceDirections)
        {
            if (ExtensionMethods.IsValueWithinSpan(DirectionProbe.transform.rotation.eulerAngles.z, faceDirectionData.AngleSpan.x, faceDirectionData.AngleSpan.y))
            {
                return faceDirectionData.Direction;
            }
        }
        return FaceDirection.Up;
    }
}
