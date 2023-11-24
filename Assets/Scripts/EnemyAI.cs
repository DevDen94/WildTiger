using UnityEngine;
using UnityEngine.AI;

public class EnemyAI : MonoBehaviour
{
    public Transform player;
    public float detectionRange = 10f;
    public float runningSpeed = 5f;

    private Animator animator;
    private NavMeshAgent navMeshAgent;

    void Start()
    {
        animator = GetComponent<Animator>();
        navMeshAgent = GetComponent<NavMeshAgent>();
    }

    void Update()
    {
        float distanceToPlayer = Vector3.Distance(transform.position, player.position);

        if (distanceToPlayer <= detectionRange)
        {
            // Player is in range, start chasing
            ChasePlayer();
        }
        else
        {
            // Player is out of range, play idle or walking animation randomly
            PlayRandomAnimation();
        }
    }

    void ChasePlayer()
    {
        // Set the animator parameter to trigger the running animation
        animator.SetBool("isRunning", true);
        animator.SetBool("isWalking", false);

        // Set the destination of the rabbit NavMeshAgent to run away from the tiger
        Vector3 runDirection = transform.position - player.position;
        Vector3 runPosition = transform.position + runDirection.normalized * 5f; // Adjust the distance

        // Check if the runPosition is within the NavMesh bounds
        NavMeshHit hit;
        if (NavMesh.SamplePosition(runPosition, out hit, 5f, NavMesh.AllAreas))
        {
            navMeshAgent.SetDestination(hit.position);
            navMeshAgent.speed = runningSpeed;
        }
    }

    void PlayRandomAnimation()
    {
        // Randomly choose between idle and walking animations
        bool playIdle = Random.value > 0.5f;
        Debug.Log(playIdle);
        animator.SetBool("isRunning", false);
        animator.SetBool("isWalking", playIdle);

        if (playIdle)
        {
            // Stop the NavMeshAgent if playing idle animation
            navMeshAgent.velocity = Vector3.zero;
        }
        else
        {
            // Set a random destination for walking animation
            Vector3 randomDestination = Random.insideUnitSphere * 5f;
            NavMeshHit hit;
            NavMesh.SamplePosition(randomDestination, out hit, 5f, NavMesh.AllAreas);
            navMeshAgent.SetDestination(hit.position);

            navMeshAgent.speed = 1.5f; // Adjust walking speed
        }
    }
}
