using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;

[System.Serializable]
public class IndependentButton  {
	
	[SerializeField]
	private Button _button;

	public Button GetButton {
		get{ return _button;}
	}

	public void Hide () {
		_button.interactable = false;
		_button.transform.DOScale(Vector3.zero, 0.25f).OnComplete(() => _button.gameObject.SetActive(false)).SetDelay (0.15f);
	}
	public void Show () {
		_button.gameObject.SetActive (true);
		_button.interactable = true;
		_button.transform.DOScale (Vector3.one, 0.2f);
	}
}

public class BaseMenu : FSMEntry
{
	
    public GameObject Root;
    public BaseMenu(string fsmStateName, GameObject root) : base(fsmStateName)
    {
        Root = root;
    }
}
