using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;
using System;

[System.Serializable]
public struct VCam
{
    public string Name;
    public CinemachineVirtualCamera VirtualCam;
}

public class CameraManager : MonoBehaviour
{
    public VCam ActiveCam;
    public VCam[] Cams;
    public CinemachineBlenderSettings BlendingSettings;
    private bool BlockCommands;

    public void FocusOnTarget(Transform target, float forTime, bool SnapToPosition = false)
    {
        var focusCam = GetVCam("FocusTarget");
        focusCam.Value.VirtualCam.Follow = target;
        SetActiveCam(focusCam.Value);
    }

    private IEnumerator BlockAssignmentsCoroutine (float time, List<Action> callback = null)
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

    private VCam? GetVCam(string name)
    {
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

    private void SetActiveCam (VCam cam)
    {
        if (BlockCommands)
            return;

        ActiveCam = cam;    
    }
}
