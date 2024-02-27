using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
public class AttackingAi : MonoBehaviour
{
    public float detectionRadius = 10f;
    public float attackRange = 2f;
    public float patrolSpeed = 2f;
    public float chaseSpeed = 5f;
    public float attackCooldown = 3f; // Cooldown between attacks

    private enum BoarState { Patrol, Chase, Attack };
    private BoarState currentState = BoarState.Patrol;

    private Transform target;
    private Animator animator;
    private CharacterController controller;

    public Transform[] waypoints; // Define waypoints for patrol
    private int currentWaypointIndex = 0;

    void Start()
    {
        animator = GetComponent<Animator>();
        controller = GetComponent<CharacterController>();

        StartCoroutine(PatrolRoutine());
    }

    void Update()
    {
        switch (currentState)
        {
            case BoarState.Patrol:
                // Handled by coroutine
                break;

            case BoarState.Chase:
                Chase();
                break;

            case BoarState.Attack:
                Attack();
                break;
        }
    }

    void Chase()
    {
        // Find all players within the detection radius
        Collider[] playerColliders = Physics.OverlapSphere(transform.position, detectionRadius, LayerMask.GetMask("Animal"));

        if (playerColliders.Length > 0)
        {
            // Find the nearest player
            target = playerColliders.OrderBy(p => Vector3.Distance(transform.position, p.transform.position)).First().transform;

            if (Vector3.Distance(transform.position, target.position) < attackRange)
            {
                currentState = BoarState.Attack;
                animator.SetBool("Attack", true);
                animator.SetBool("isRunning", false);
            }
            else
            {
                Vector3 direction = (target.position - transform.position).normalized;
                controller.SimpleMove(direction * chaseSpeed);
            }
        }
        else
        {
            currentState = BoarState.Patrol;
        }
    }

    void Attack()
    {
        // Check for other boars before attacking
        Collider[] boarColliders = Physics.OverlapSphere(transform.position, detectionRadius, LayerMask.GetMask("Enemy"));

        if (boarColliders.Length == 1)
        {
            // Only one boar in the vicinity, proceed with attack
            // Implement Attack logic
            currentState = BoarState.Chase;
            animator.SetBool("isRunning", true);
            animator.SetBool("Attack", false);
            StartCoroutine(AttackCooldownRoutine());
        }
        else
        {
            // More than one boar, wait and recheck
            StartCoroutine(AttackCooldownRoutine());
        }
    }

    IEnumerator PatrolRoutine()
    {
        while (true)
        {
            if (currentState == BoarState.Patrol)
            {
                // Move to the next waypoint
                Transform waypoint = waypoints[currentWaypointIndex];
                Vector3 direction = (waypoint.position - transform.position).normalized;
                controller.SimpleMove(direction * patrolSpeed);
                animator.SetBool("isRunning", true);
                // Check if the boar is close to the waypoint
                if (Vector3.Distance(transform.position, waypoint.position) < 1f)
                {
                    // Switch to the next waypoint
                    currentWaypointIndex = (currentWaypointIndex + 1) % waypoints.Length;
                }
            }

            yield return null;
        }
    }

    IEnumerator AttackCooldownRoutine()
    {
        yield return new WaitForSeconds(attackCooldown);

        // Reset to patrol after cooldown
        currentState = BoarState.Patrol;
    }

    void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(transform.position, detectionRadius);
    }
}
