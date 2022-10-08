using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;
using System;
using static Cinemachine.CinemachineBlenderSettings;

[System.Serializable]
public struct VCam
{
    public string Name;
    public CinemachineVirtualCamera VirtualCam;
}

[System.Serializable]
public struct Blend
{
    public string Name;
    public AnimationCurve Curve;
    public float Duration;
}

public class CameraManager : MonoBehaviour
{
    public VCam ActiveCam;
    public VCam[] Cams;
    private bool BlockCommands;
    public Blend[] Blends;
    public CinemachineBrain Brain;

    public void ChangeCamera (VCam cam, float duration = 0f, bool SnapToPosition = false)
    {
        ActiveCam.VirtualCam.gameObject.SetActive(false);
        cam.VirtualCam.gameObject.SetActive(true);
        ActiveCam = cam;
    }
    public void ReturnFromFocusCoroutine (VCam returnCamera)
    {

    }
    private IEnumerator FocusOnTarget (float time, List<Action> callback = null)
    {
        yield return new WaitForSeconds(time);

        UnblockNewAssignments();
        foreach (Action action in callback)
        {
            action.Invoke();
        }
    }
    private void BlockNewAssignments ()
    {
        if (BlockCommands)
            return;

        BlockCommands = true;
    }
    private void UnblockNewAssignments()
    {
        BlockCommands = false;
    }

    private void SetActiveCam (VCam cam)
    {
        if (BlockCommands)
            return;

        cam.VirtualCam.gameObject.SetActive(true);
        ActiveCam.VirtualCam.gameObject.SetActive(false);
        
    }
    public VCam? GetVCam(string name = "")
    {
        if (name == "") {
            return Cams[0];
        }
        foreach (VCam cam in Cams)
        {
            if (cam.Name == name)
            {
                return cam;
            }
        }
        return null;
    }

    private VCam? GetVCam(int index)
    {
        return Cams[index];
    }

    public Blend GetBlend(string name)
    {
        var returnValue = Blends[0];

        foreach (Blend blend in Blends)
        {
            if (blend.Name == name)
            {
                return blend;
            }
        }

        return returnValue;
    }
}
