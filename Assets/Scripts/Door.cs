using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[RequireComponent(typeof(Animator))]
public class Door : MonoBehaviour
{
    Animator animator;
    private void Awake()
    {
        animator = GetComponent<Animator>();
    }

    public void Open ()
    {
        animator.SetTrigger("open");
    }

    public void Close()
    {
        animator.SetTrigger("close");
    }
}
