using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Sirenix.OdinInspector;

public class CameraManagerDebug : MonoBehaviour
{
    public CameraManager CamManager;

    [Button]
    public void DefaultCam()
    {
        var newCam = CamManager.GetVCam("");
        //var blend = CamManager.GetBlend("");
        CamManager.ChangeCamera(newCam.Value);
    }

    [Button]
    public void SmashCutCam()
    {
        var newCam = CamManager.GetVCam("FocusTarget");
        //var blend = CamManager.GetBlend("SmashCut");
        CamManager.ChangeCamera(newCam.Value);
    }


    public void Activated()
    {
        Debug.Log("ActivatedBrain");
    }
}
