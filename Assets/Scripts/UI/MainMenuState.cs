using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class MainMenuState : BaseMenu
{
	public IndependentButton IndependenTransitionButton;

    public MainMenuState(string fsmStateName, GameObject root, IndependentButton indieButton) : base(fsmStateName, root)
    {
		IndependenTransitionButton = indieButton;
    }

	public override void OnEnter()
	{

		Root.SetActive (true);
		IndependenTransitionButton.Hide ();
		Root.GetComponent<CanvasGroup> ().DOFade (1, 0.2f).SetDelay(0.2f);
	}

		public override void OnExit()
    {
		IndependenTransitionButton.Show ();
		Root.GetComponent<CanvasGroup>().DOFade(0, 0.2f).OnComplete(() => Root.SetActive(false));


    }
}
