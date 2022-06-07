using UnityEngine;
using UnityEngine.Events;
using Sirenix.OdinInspector;

public class CharacterController2D : MonoBehaviour
{
    public bool UseSmoothing;
    public float MoveSpeed;
    [Range(0, .3f)][SerializeField] private float m_MovementSmoothing = .05f;
    [SerializeField] private LayerMask m_WhatIsGround;
    [SerializeField] private Transform m_GroundCheck;

    const float k_GroundedRadius = .2f;
    [ShowInInspector]
    private bool m_Grounded;
    private Rigidbody2D m_Rigidbody2D;
    private Vector3 m_Velocity = Vector3.zero;

    [System.Serializable]
    public class BoolEvent : UnityEvent<bool> { }

    private void Awake()
    {
        m_Rigidbody2D = GetComponent<Rigidbody2D>();
    }

    private void FixedUpdate()
    {
        bool wasGrounded = m_Grounded;
        m_Grounded = false;

        Collider2D[] colliders = Physics2D.OverlapCircleAll(m_GroundCheck.position, k_GroundedRadius, m_WhatIsGround);
        for (int i = 0; i < colliders.Length; i++)
        {
            if (colliders[i].gameObject != gameObject)
            {
                m_Grounded = true;
            }
        }
    }

    public void Move(Vector2 move)
    {
        if (m_Grounded)
        {
            Vector3 targetVelocity = new Vector2(move.x, move.y) * MoveSpeed;
            if (UseSmoothing)
                m_Rigidbody2D.velocity = Vector3.SmoothDamp(m_Rigidbody2D.velocity, targetVelocity, ref m_Velocity, m_MovementSmoothing);
            else
                m_Rigidbody2D.velocity = targetVelocity;

        }

    }
}