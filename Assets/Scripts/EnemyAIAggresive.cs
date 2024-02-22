using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.UI;
//using static UnityEditor.Experimental.GraphView.GraphView;
public class EnemyAIAggresive : MonoBehaviour
{
    public float detectionRadius = 10f;
    public float attackRange = 5f;
    public float runSpeed = 3f;
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
   /// <summary>
   /// //public TextMeshPro CrownTierText;
   /// </summary>
    public Transform _Camera;

    public float StartingHealth = 1;

    public float HalthDownSpeed;
    public Animator PlayerAnimator;

    public float walkingRadius = 5f;
    private Vector3 initialPosition;

    public GameObject TextUIHealth;

    public float waterAvoidanceDistance = 5f;
    public int AttackingExp;
    void Start()
    {
        _Camera = Camera.main.transform;
        player = LevelLoader.Instance.SelectedTiger.transform;
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
        if (distanceToPlayer <= detectionRadius)//detectionradius
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

        HealthBAr.transform.LookAt(_Camera.transform);
        }
     /////   CrownTierText.transform.LookAt(Camera.transform);

    }
    private float distanceToWater;
    private GameObject Water;
    void ChasePlayer()
    {
        if (isChasing)
        {
            

            // Set animation parameter for running
            animator.SetBool("isRunning", true);
            animator.SetBool("Attack", false);

            GameObject[] waterObjects = GameObject.FindGameObjectsWithTag("Water"); // Assuming you tagged your water GameObjects

            foreach (GameObject water in waterObjects)
            {
                distanceToWater = Vector3.Distance(transform.position, water.transform.position);
                Water = water;
            }
           
           
            if (distanceToWater < waterAvoidanceDistance)
            {
                // Move away from water
                MoveAwayFromWater(Water.transform.position);
            }
            else
            {
                Vector3 direction = (player.position - transform.position).normalized;
                Quaternion lookRotation = Quaternion.LookRotation(new Vector3(direction.x, 0, direction.z));
                transform.rotation = Quaternion.Slerp(transform.rotation, lookRotation, Time.deltaTime * rotationSpeed);

                // Move towards the player
                transform.Translate(Vector3.forward * runSpeed * Time.deltaTime);
            }
           
        }
    }
    void StopChasing()
    {
        // Set animation parameter for idle or walking
        
        animator.SetBool("isRunning", false);
        animator.SetBool("Attack", false);


        GameObject[] waterObjects = GameObject.FindGameObjectsWithTag("Water"); // Assuming you tagged your water GameObjects

        foreach (GameObject water in waterObjects)
        {
            float distanceToWater = Vector3.Distance(transform.position, water.transform.position);
           // Debug.Log(distanceToWater);
            if (distanceToWater < waterAvoidanceDistance)
            {
                Debug.Log(distanceToWater);
                // Move away from water
                MoveAwayFromWater(water.transform.position);
            }
            else
            {
                transform.Translate(Vector3.forward * walkSpeed * Time.deltaTime);
            }
        }


    }
    void AttackPlayer()
    {
        isChasing = false;
        animator.SetBool("Attack", true);
        animator.SetBool("isRunning", false);
        Vector3 directionToPlayer = player.position - transform.position;
        directionToPlayer.y = 0f;
        directionToPlayer.Normalize();
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
                LevelLoader.Instance.lvl_M.update_stats(this.gameObject.name);
                isDeath = true;
                LevelLoader.Instance.lvl_M.KillAnimals++;
               
                GetComponent<MapMarker>().isActive = false;
                this.gameObject.GetComponent<BoxCollider>().enabled = false;
               // GameManager.Instance.EatPopUp.SetActive(true);

                //Destroy(this);
                for (int i = 0; i < LevelLoader.Instance.lvl_M.AnimalsNamesToKill.Length; i++)
                {
                    if(name== LevelLoader.Instance.lvl_M.AnimalsNamesToKill[i])
                    {
                        LevelLoader.Instance.lvl_M.KillAnimals++;
                        if (LevelLoader.Instance.lvl_M.KillAnimals >= LevelLoader.Instance.lvl_M.TotalEnemyInLevel)
                        {

                            LevelLoader.Instance.MoveMentController.SetActive(false);
                            //GameManager.Instance.EatBtn.SetActive(true);
                            StartCoroutine(CompletePanel());
                        }
                    }
                }
                PlayerPrefs.SetInt("TigerExp", PlayerPrefs.GetInt("TigerExp") + AttackingExp);
                LevelLoader.Instance.ExpTxt.text = PlayerPrefs.GetInt("TigerExp").ToString();
                LevelLoader.Instance.TierUpdate();
                Invoke("disableSelf", 3f);
            }

        }
     //   GameManager.Instance.EatPopUp.SetActive(false);

    }

    public void disableSelf()
    {
        gameObject.SetActive(false);
    }
    IEnumerator CompletePanel()
    {
        yield return new WaitForSeconds(5f);
        LevelLoader.Instance.lvl_M.End_Level();
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
                //other.gameObject.GetComponent<Rigidbody>().isKinematic = true;
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
          //////  if(other.gameObject.GetComponent<Rigidbody>())
          ////////  other.gameObject.GetComponent<Rigidbody>().isKinematic = true;
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








   

    void MoveAwayFromWater(Vector3 waterPosition)
    {
        ReturnToInitialPosition();
    }




}
