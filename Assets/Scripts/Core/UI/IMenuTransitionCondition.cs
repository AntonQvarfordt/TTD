using System.Collections;
using System.Collections.Generic;
using UnityEngine;
#pragma warning disable 0414
public class IMenuTransitionCondition : IFSMTransitionCondition
{
    Object passedObject;

    public IMenuTransitionCondition(Object pObj)
    {
        passedObject = pObj;
    }

    //default return false,means don't switch state
    public virtual bool CheckCondition()
    {
        Debug.Log("CheckCond");
        return false;
    }


}
