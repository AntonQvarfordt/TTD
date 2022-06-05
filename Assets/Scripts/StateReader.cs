using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Itatake.Generic;
public enum FaceDirection
{
    Right,
    DownRight,
    Down,
    DownLeft,
    Left,
    UpLeft,
    Up,
    UpRight
}

[System.Serializable]
public struct FaceDirectionData
{
    public FaceDirection Direction;
    public Vector2 AngleSpan;
}

public class StateReader : MonoBehaviour
{
    public float DebugFloat;
    public FaceDirectionData[] FaceDirections;
    public float SpeedReader;
    public FaceDirection Direction;

    private void Update()
    {
        Direction = GetFaceDirection();
    }

    private FaceDirection GetFaceDirection()
    {
       
        foreach (FaceDirectionData faceDirectionData in FaceDirections)
        {
            if (ExtensionMethods.IsValueWithinSpan(transform.rotation.eulerAngles.z, faceDirectionData.AngleSpan.x, faceDirectionData.AngleSpan.y))
            {
                Debug.Log(faceDirectionData.Direction);
                return faceDirectionData.Direction;
            }
        }
        return FaceDirection.Up;



    }
}
