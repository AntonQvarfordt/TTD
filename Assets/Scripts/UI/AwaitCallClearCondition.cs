using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.Events;


public class AwaitCallClearCondition : IMenuTransitionCondition {
	
	public UnityEvent callbackAction;
	private bool clearedBool;

	public AwaitCallClearCondition(UnityEngine.Object passedObject, UnityEvent clearCallback) : base(passedObject) {
		callbackAction = clearCallback;
	}

	private void ClearedCallback ()
	{
		clearedBool = true;
	}

	public override bool CheckCondition()
	{
		if (clearedBool) {
			clearedBool = false;
			return true; 
		}

		return false;
	}
}
