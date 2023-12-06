using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.UI;
public class EnemyAIAggresive : MonoBehaviour
{
    public float detectionRadius = 10f;
    public float attackRange = 5f;
    public float runSpeed = 6f;
    public float walkSpeed = 3f;
    public float rotationSpeed = 3f;

    public Transform player;
    //private NavMeshAgent navMeshAgent;
    private Animator animator;
    private bool playerDetected = false;
    private bool isAttacking = false;
    private bool isChasing = false;
    public float minDistance = 2f;

    public Image EnemyHealth,HealthBAr;
    public Transform Camera;

    public float StartingHealth = 1;

    public float HalthDownSpeed;
    public Animator PlayerAnimator;

    public float walkingRadius = 5f;
    private Vector3 initialPosition;

    public GameObject TextUIHealth;


    void Start()
    {
        //navMeshAgent = GetComponent<NavMeshAgent>();
        animator = GetComponent<Animator>();
        //navMeshAgent.speed = walkSpeed; // Start with walk speed
        PlayerAnimator = player.GetComponent<Animator>();
        initialPosition = transform.position;
    }

    void Update()
    {
        float distanceToPlayer = Vector3.Distance(transform.position, player.position);

        if (!isDeath) { 
        if (distanceToPlayer <= detectionRadius)
        {
            isChasing = true;
            ChasePlayer();
        }
        else
        {
            isChasing = false;
            StopChasing();

            // If not chasing, check if the bear has moved too far from its initial position
            if (Vector3.Distance(transform.position, initialPosition) > walkingRadius)
            {
                ReturnToInitialPosition();
            }
            else
            {
                // Continue walking within the radius
                StopChasing();
            }
        }

        if (isChasing && distanceToPlayer <= attackRange)
        {
            AttackPlayer();
        }

        HealthBAr.transform.LookAt(Camera.transform);
        }
    }
    void ChasePlayer()
    {
        if (isChasing)
        {
            

            // Set animation parameter for running
            animator.SetBool("isRunning", true);
            animator.SetBool("Attack", false);
            Vector3 direction = (player.position - transform.position).normalized;
            Quaternion lookRotation = Quaternion.LookRotation(new Vector3(direction.x, 0, direction.z));
            transform.rotation = Quaternion.Slerp(transform.rotation, lookRotation, Time.deltaTime * rotationSpeed);

            // Move towards the player
            transform.Translate(Vector3.forward * runSpeed * Time.deltaTime);
        }
    }
    void StopChasing()
    {
        // Set animation parameter for idle or walking
        
        animator.SetBool("isRunning", false);
        animator.SetBool("Attack", false);
        transform.Translate(Vector3.forward * walkSpeed * Time.deltaTime);


    }
    void AttackPlayer()
    {
        animator.SetBool("Attack", true);
        Vector3 directionToPlayer = player.position - transform.position;
        Quaternion rotation = Quaternion.LookRotation(directionToPlayer, Vector3.up);
        transform.rotation = rotation;
        transform.Translate(Vector3.forward * 1 * Time.deltaTime);

        // Rotate the enemy to face the player
        //transform.LookAt(player.transform);
        //transform.rotation = Quaternion.Euler(0, transform.rotation.eulerAngles.y, 0);
        //navMeshAgent.isStopped = true;


    }
   bool isDeath=false;

    public void Demage(string name)
    {
        if (EnemyHealth.fillAmount > 0)
        {
            StartingHealth = StartingHealth - HalthDownSpeed;
            EnemyHealth.fillAmount = StartingHealth;

            if (EnemyHealth.fillAmount <= 0)
            {
                animator.SetTrigger("Death");
                GameManager.Instance.update_stats(this.gameObject.name);
                isDeath = true;
                GameManager.Instance.KillAnimals++;
                for(int i = 0; i < GameManager.Instance.AnimalsNamesToKill.Length; i++)
                {
                    if(name== GameManager.Instance.AnimalsNamesToKill[i])
                    {
                        GameManager.Instance.KillAnimals++;
                        if (GameManager.Instance.KillAnimals >= GameManager.Instance.TotalEnemyInLevel)
                        {
                            
                            GameManager.Instance.MoveMentController.SetActive(false);
                            StartCoroutine(CompletePanel());
                        }
                    }
                }

            }

        }
    }
    IEnumerator CompletePanel()
    {
        yield return new WaitForSeconds(5f);
        GameManager.Instance.LevelComplete();
    }

    private void OnTriggerStay(Collider other)
    {

        if (other.gameObject.CompareTag("Animal"))
        {
            Debug.Log("Stay");
            if (IsAttackAnimationPlaying() || IsAttackAnimationPlaying1() || IsAttackAnimationPlaying2() || IsAttackAnimationPlaying3())
            {
                //animator.SetBool("Demage", true);
                Demage(other.gameObject.name);
            }
            else
            {
                other.gameObject.GetComponent<Rigidbody>().isKinematic = true;
            }
        }


    }



    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Animal"))
        {
            if (IsAttackAnimationPlaying() || IsAttackAnimationPlaying1() || IsAttackAnimationPlaying2() || IsAttackAnimationPlaying3())
            {
                if (EnemyHealth.fillAmount > 0)
                {
                    TextUIHealth.SetActive(true);
                    TextUIHealth.GetComponent<TMPro.TextMeshPro>().text = (Random.Range(4, 10)).ToString();
                    TextUIHealth.GetComponent<DG.Tweening.DOTweenAnimation>().DORestart();
                    Invoke(nameof(DisableHealthText), 1f);
                }
            }
        }
        else
        {
            other.gameObject.GetComponent<Rigidbody>().isKinematic = true;
        }
    }
    public void DisableHealthText()
    {
        TextUIHealth.SetActive(false);
        //TextUIHealth.GetComponent<DG.Tweening.DOTweenAnimation>().DOKill();
        

    }

    bool IsAttackAnimationPlaying()
    {
        // Check if the "Attack" animation is playing

        return PlayerAnimator.GetCurrentAnimatorStateInfo(1).IsName("Attack Bite Left");

    }
    bool IsAttackAnimationPlaying1()
    {
        // Check if the "Attack" animation is playing
        //animator.SetBool("Demage", true);
        return PlayerAnimator.GetCurrentAnimatorStateInfo(1).IsName("Attack Bite Right");

    }

    bool IsAttackAnimationPlaying2()
    {
        // Check if the "Attack" animation is playing
        //animator.SetBool("Demage", true);
        return PlayerAnimator.GetCurrentAnimatorStateInfo(1).IsName("Attack Paw Right");

    }
    bool IsAttackAnimationPlaying3()
    {
        // Check if the "Attack" animation is playing_
        //animator.SetBool("Demage", true);
        return PlayerAnimator.GetCurrentAnimatorStateInfo(1).IsName("Attack Paw Left");

    }

    void ReturnToInitialPosition()
    {
        // Rotate towards the initial position
        Vector3 direction = (initialPosition - transform.position).normalized;
        Quaternion lookRotation = Quaternion.LookRotation(new Vector3(direction.x, 0, direction.z));
        transform.rotation = Quaternion.Slerp(transform.rotation, lookRotation, Time.deltaTime * rotationSpeed);

        // Move towards the initial position
        transform.Translate(Vector3.forward * walkSpeed * Time.deltaTime);

        animator.SetBool("isRunning", false);
        animator.SetBool("Attack", false);
    }

}
