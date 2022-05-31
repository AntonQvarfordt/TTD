using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UnityEditor;
using UnityEngine.UI;
using System;




public class MainMenuManager : MonoBehaviour {

    public FiniteStateMachine FiniteStateMachine { set; get; }
    public string CurrentState = "";

    public Button OptionsButton;
//    public Button BackButton;

    public GameObject OptionsGameObject;
    public GameObject MainGameObject;

	public IndependentButton BackButton;

	public void ButtonPunch (Button buttonClicked) {
		buttonClicked.transform.DOShakeScale (0.15f, 2, 30);
		int randomTarget = UnityEngine.Random.Range (-90, 90);
		buttonClicked.transform.DOPunchRotation (new Vector3(0,0,randomTarget), 0.15f, 20, 0.5f);
	}

    private void Awake()
    {
        FSMInitialize();
    }


    private void FSMInitialize()
    {
        //create the finite state machine
        FiniteStateMachine = new FiniteStateMachine();

        //create states and add them to the finite state machine we just created
        FiniteStateMachine.AddState(new OptionsMenuState("Options", OptionsGameObject));
        FiniteStateMachine.AddState(new MainMenuState("Main", MainGameObject, BackButton));

        FiniteStateMachine.CreateFSMStateToAnotherFSMStateTransition("Main", "Options", new IFSMTransitionCondition[1] { new ClickMenuCondition(OptionsButton) });
		FiniteStateMachine.CreateFSMStateToAnotherFSMStateTransition("Options", "Main", new IFSMTransitionCondition[1] { new ClickMenuCondition(BackButton.GetButton) });

        FiniteStateMachine.SetDefaultState("Main");

        FiniteStateMachine.OnInitialize();
    }

    private void Update()
    {
        CurrentState = FiniteStateMachine.OutputCurrentStateName();
        FiniteStateMachine.OnUpdate();

    }
}
