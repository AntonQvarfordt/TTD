using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

[RequireComponent(typeof(Button))]
public class ButtonClickTimer : MonoBehaviour {
	
	const float _lockTime = 1;
	private Button _button;

	private void Awake () {
		_button = GetComponent<Button>();

	}

	private void LockButton () {
		
	}

	//private IEnumerator LockButtonCoroutine () {
		
	//}
}
