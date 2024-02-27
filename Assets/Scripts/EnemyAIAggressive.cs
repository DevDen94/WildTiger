using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;
using UnityEngine.AI;
public class EnemyAIAggressive : MonoBehaviour
{


    public Transform TargetPlayer,TargetPlayer2,camera;

    public float AttackRange;
    public float ChasseRange;


    private Animator animator;

    private Vector3 initialPosition;
    public float walkSpeed;
    public float RunSpeed;
    public float rotationSpeed = 5f;
    public int numberOfPoints = 5;
    public Transform[] targetPoints;
    private int currentTargetIndex = 0;
    private NavMeshAgent nav;
 
    public Animator PlayerAnimator, secondplayer;
    private void Start()
    {
        nav = GetComponent<NavMeshAgent>();
        camera = Camera.main.transform;
        TargetPlayer = LevelLoader.Instance.SelectedTiger.transform;
        PlayerAnimator = TargetPlayer.GetComponent<Animator>();
        animator = GetComponent<Animator>();
        SetNewRandomTarget();
        Invoke("AssignPalyer", 2f);

    }
    public void AssignPalyer()
    {
        initialPosition = transform.position;
        if (TargetPlayer2 !=null)
        {
            secondplayer = TargetPlayer2.GetComponent<Animator>();
        }
    }

    public Collider[] playerColliders;

    private void Update()
    {
        Chase();
      
    }
    public Transform target;
    void Chase()
    {
       playerColliders = Physics.OverlapSphere(transform.position, ChasseRange, LayerMask.GetMask("Animal"));

        if (playerColliders.Length > 0)
        {
            // Find the nearest player
            target = playerColliders.OrderBy(p => Vector3.Distance(transform.position, p.transform.position)).First().transform;

            if (Vector3.Distance(transform.position, target.position) < AttackRange)
            {
                
                Attack(target);
                animator.SetBool("Attack", true); animator.SetBool("isRunning", false);
                HealthBAr.transform.LookAt(camera.transform);
            }
            else
            {
                GetComponent<Rigidbody>().isKinematic = false;
                Chasse(target);
                animator.SetBool("isRunning", true);
                animator.SetBool("Attack", false);
            }
        }
        else
        {
           
            SetNewRandomTarget();
            animator.SetBool("isRunning", false);
        }
    }
    int currentWaypointIndex = 0;
    public Transform[] patrolWaypoints;
    public Transform point;
    public float t;
    void SetNewRandomTarget()
    {
      
        point = patrolWaypoints[currentWaypointIndex];
        
        t = Vector3.Distance(transform.position, point.position);
        if ( t< 2f)
        {
        
            currentWaypointIndex = (currentWaypointIndex + 1) % patrolWaypoints.Length;
             nav.SetDestination(patrolWaypoints[currentWaypointIndex].position);
          
        }
        else
        {
             nav.SetDestination(patrolWaypoints[currentWaypointIndex].position);
         
        }

    }
 
    public void Chasse(Transform player)
    {

            nav.isStopped = false;
            nav.SetDestination(target.position);
/*
        }
        else
        {
            transform.position = Vector3.MoveTowards(transform.position, patrolWaypoints[currentWaypointIndex].position, walkSpeed * Time.deltaTime);
        }*/
    }

    public void Attack(Transform target)
    {
        //animator.SetBool("Attack", true);
        nav.isStopped = true;
        Quaternion targetRotation = Quaternion.LookRotation(target.position - transform.position);
     
        // Smoothly rotate towards the player
        transform.rotation = Quaternion.Slerp(transform.rotation, targetRotation, rotationSpeed * Time.deltaTime);
        GetComponent<Rigidbody>().isKinematic = true;
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Animal"))
        {
            if (IsAttackAnimationPlaying() || IsAttackAnimationPlaying1() || IsAttackAnimationPlaying2() || IsAttackAnimationPlaying3())
            {

                Demage(other.gameObject.name);
            }
            else if (secondplayer !=null)
            {
                if (IsAttackAnimationPlaying11() || IsAttackAnimationPlaying122() || IsAttackAnimationPlaying233() || IsAttackAnimationPlaying344())
                {
                    Demage(other.gameObject.name);
                }
            }
        }

    }
    

    


    public void DisableHealthText()
    {
       // TextUIHealth.SetActive(false);
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
    //////////////////////////////////////////////////////////////
    ///

    bool IsAttackAnimationPlaying11()
    {
        // Check if the "Attack" animation is playing

        return secondplayer.GetCurrentAnimatorStateInfo(1).IsName("Attack Bite Left");

    }
    bool IsAttackAnimationPlaying122()
    {
        // Check if the "Attack" animation is playing
        //animator.SetBool("Demage", true);


        return secondplayer.GetCurrentAnimatorStateInfo(1).IsName("Attack Bite Right");
    }

    bool IsAttackAnimationPlaying233()
    {
        // Check if the "Attack" animation is playing
        //animator.SetBool("Demage", true);
        return secondplayer.GetCurrentAnimatorStateInfo(1).IsName("Attack Paw Right");

    }
    bool IsAttackAnimationPlaying344()
    {
        // Check if the "Attack" animation is playing_
        //animator.SetBool("Demage", true);
        return secondplayer.GetCurrentAnimatorStateInfo(1).IsName("Attack Paw Left");

    }

    /////////////////////////////////////////////////////////
    ///

    public Image EnemyHealth, HealthBAr;
    public float StartingHealth = 1;

    public float HalthDownSpeed;
    public bool isDeath;
    public int AttackingExp;
    IEnumerator CompletePanel()
    {
        yield return new WaitForSeconds(5f);
        LevelLoader.Instance.lvl_M.End_Level();
    }
    public void Demage(string name)
    {
        if (EnemyHealth.fillAmount > 0)
        {
            StartingHealth = StartingHealth - HalthDownSpeed;
            EnemyHealth.fillAmount = StartingHealth;

            if (EnemyHealth.fillAmount <= 0)
            {
                animator.SetTrigger("Death");
                walkSpeed = 0;
                RunSpeed = 0;
                LevelLoader.Instance.lvl_M.KillAnimals++;
              
                GetComponent<MapMarker>().isActive = false;
                this.gameObject.GetComponent<CapsuleCollider>().enabled = false;
                // GameManager.Instance.EatPopUp.SetActive(true);

                
                for (int i = 0; i < LevelLoader.Instance.lvl_M.AnimalsNamesToKill.Length; i++)
                {
                    if (name == LevelLoader.Instance.lvl_M.AnimalsNamesToKill[i])
                    {
                        
                        LevelLoader.Instance.lvl_M.KillAnimals++;
                        LevelLoader.Instance.lvl_M.Stats.killCount[0]++;
                       
                        if (LevelLoader.Instance.lvl_M.KillAnimals >= LevelLoader.Instance.lvl_M.TotalEnemyInLevel)
                        {

                            LevelLoader.Instance.MoveMentController.SetActive(false);
                            StartCoroutine(CompletePanel());
                        }
                    }
                }
                PlayerPrefs.SetInt("TigerExp", PlayerPrefs.GetInt("TigerExp") + AttackingExp);
                LevelLoader.Instance.ExpTxt.text = PlayerPrefs.GetInt("TigerExp").ToString();
                LevelLoader.Instance.TierUpdate();
                Invoke("disableSelf", 3f);
                LevelLoader.Instance.lvl_M.update_stats(gameObject.name);
            }

        }
       
       
    }
    public void disableSelf()
    {
        Destroy(this.gameObject);
    }
}