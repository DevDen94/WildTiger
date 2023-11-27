using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class EnemyAIAggresive : MonoBehaviour
{
    public float detectionRadius = 10f;
    public float attackRange = 5f;
    public float runSpeed = 6f;
    public float walkSpeed = 3f;
   
    
    public Transform player;
    private NavMeshAgent navMeshAgent;
    private Animator animator;
    private bool playerDetected = false;
    private bool isAttacking = false;
    private bool isChasing = false;
    public float minDistance = 2f;

    void Start()
    {
        navMeshAgent = GetComponent<NavMeshAgent>();
        animator = GetComponent<Animator>();
        navMeshAgent.speed = walkSpeed; // Start with walk speed
    }

    void Update()
    {
        float distanceToPlayer = Vector3.Distance(transform.position, player.position);


        if (distanceToPlayer < detectionRadius)
        {
            // Player is detected, start chasing
            isChasing = true;
            ChasePlayer();

            // Check if the player is within attack range
            if (distanceToPlayer < attackRange)
            {
                AttackPlayer();
            }
        }
        else
        {
            // Player is not detected, stop chasing
            isChasing = false;
            StopChasing();
        }

    }
    void ChasePlayer()
    {
        if (isChasing)
        {
            navMeshAgent.SetDestination(player.position);

            // Move towards the player
            navMeshAgent.speed = runSpeed;

            // Set animation parameter for running
            animator.SetBool("isRunning", true);
            animator.SetBool("Attack", false);
            animator.applyRootMotion = true;
            navMeshAgent.isStopped = false;
        }
    }
    void StopChasing()
    {
        // Set animation parameter for idle or walking
        navMeshAgent.speed = walkSpeed;
        animator.SetBool("isRunning", false);
        animator.SetBool("Attack", false);
        animator.applyRootMotion = true;
        navMeshAgent.isStopped = false;
    }
    void AttackPlayer()
    {
        animator.SetBool("Attack", true);
        
        // Rotate the enemy to face the player
        transform.LookAt(player.transform);

        navMeshAgent.isStopped = true;


    }
}
