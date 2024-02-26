using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EnemyAIAggressive : MonoBehaviour
{


    public Transform TargetPlayer,TargetPlayer2,camera;

    public float AttackRange;
    public float ChasseRange;
    public float distanceToPlayer;
    public float distanceToPlayer2;

    private Animator animator;

    private Vector3 initialPosition;
    public float walkSpeed;
    public float RunSpeed;
    public float rotationSpeed = 5f;
    public int numberOfPoints = 5;
    public Transform[] targetPoints;
    private int currentTargetIndex = 0;
    
    public Animator PlayerAnimator, secondplayer;
    private void Start()
    {
        camera = Camera.main.transform;
        TargetPlayer = LevelLoader.Instance.SelectedTiger.transform;
        PlayerAnimator = TargetPlayer.GetComponent<Animator>();
        GenerateRandomPoints();
        animator = GetComponent<Animator>();
        SetNewRandomTarget();
        Invoke(nameof(AssignPalyer), 1f);
        StartCoroutine(waitforDistance());
    }
    public void AssignPalyer()
    {
        if (!LevelLoader.Instance.secondPlayer)
        {
           // SecondPlayer = LevelLoader.Instance.secondPlayer;
        }
        initialPosition = transform.position;
        //secondplayer = SecondPlayer.GetComponent<Animator>();
    }


    IEnumerator waitforDistance()
    {
        yield return new WaitForSeconds(1);
        distanceToPlayer = Vector3.Distance(transform.position, TargetPlayer.position);
        distanceToPlayer2 = Vector3.Distance(transform.position, TargetPlayer2.position);
        StartCoroutine(waitforDistance());
    }




    private void Update()
    {
        
       // Transform targetPlayer = (distanceToPlayer < distanceToPlayer2) ? TargetPlayer : TargetPlayer2;
        if (distanceToPlayer > ChasseRange)
        {
            animator.SetBool("isRunning", false);
            transform.position = Vector3.MoveTowards(transform.position, targetPoints[currentTargetIndex].position, walkSpeed * Time.deltaTime);
            transform.LookAt(targetPoints[currentTargetIndex]);
            // Check if AI has reached the target point
            if (Vector3.Distance(transform.position, targetPoints[currentTargetIndex].position) < 0.1f)
            {
                // Set a new target point
                SetNewRandomTarget();
            }
            Debug.Log("Patrol");
        }
        //else if (distanceToPlayer < ChasseRange || distanceToPlayer2<ChasseRange && distanceToPlayer > AttackRange&& distanceToPlayer2 > AttackRange)
        //{
        //    Chasse(targetPlayer);
        //    Debug.Log(targetPlayer);
        //    Debug.Log("Chasse");
        //}
        //else if (distanceToPlayer <= AttackRange || distanceToPlayer2 <= AttackRange)
        //{
        //    //Attack
        //    Debug.Log("Attack");
        //    Attack(targetPlayer);
        //}

        if (distanceToPlayer < distanceToPlayer2 && distanceToPlayer > AttackRange)
        {
            Chasse(TargetPlayer);
        }
        else if (distanceToPlayer > distanceToPlayer2 && distanceToPlayer2 > AttackRange)
        {
            Chasse(TargetPlayer2);
        }

        if(distanceToPlayer <= AttackRange)
        {
            Attack(TargetPlayer);
        }else if (distanceToPlayer <= AttackRange)
        {
            Attack(TargetPlayer2);

        }


        HealthBAr.transform.LookAt(camera.transform);
    }
    void SetNewRandomTarget()
    {
        // Generate a new random position within a certain range
        currentTargetIndex = (currentTargetIndex + 1) % targetPoints.Length;
    }
    void GenerateRandomPoints()
    {
        // Initialize the array
        targetPoints = new Transform[numberOfPoints];

        // Generate random points within a certain range
        for (int i = 0; i < numberOfPoints; i++)
        {
            Vector3 randomPosition = new Vector3(Random.Range(-10f, 10f), 0f, Random.Range(-10f, 10f));
            targetPoints[i] = new GameObject("TargetPoint" + i).transform;
            targetPoints[i].position = randomPosition;
        }
    }
    public void Chasse(Transform player)
    {
        transform.LookAt(player);
        transform.position = Vector3.MoveTowards(transform.position, player.position, RunSpeed * Time.deltaTime);
        animator.SetBool("isRunning", true);
        animator.SetBool("Attack", false);
    }

    public void Attack(Transform target)
    {
        animator.SetBool("Attack", true);

        TargetPlayer.GetComponent<Rigidbody>().isKinematic = true;
        Quaternion targetRotation = Quaternion.LookRotation(target.position - transform.position);

        // Smoothly rotate towards the player
        transform.rotation = Quaternion.Slerp(transform.rotation, targetRotation, rotationSpeed * Time.deltaTime);
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Animal"))
        {
            if (IsAttackAnimationPlaying() || IsAttackAnimationPlaying1() || IsAttackAnimationPlaying2() || IsAttackAnimationPlaying3())
            {
                Debug.Log("Hit");
                //if (EnemyHealth.fillAmount > 0)
                //{
                //    TextUIHealth.SetActive(true);
                //    TextUIHealth.GetComponent<TMPro.TextMeshPro>().text = (Random.Range(4, 10)).ToString();
                //    TextUIHealth.GetComponent<DG.Tweening.DOTweenAnimation>().DORestart();
                //    Invoke(nameof(DisableHealthText), 1f);
                //}
                Demage(other.gameObject.name);
            }
            else if (IsAttackAnimationPlaying11() || IsAttackAnimationPlaying122() || IsAttackAnimationPlaying233() || IsAttackAnimationPlaying344())
            {
                Demage(other.gameObject.name);
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
                Destroy(this.gameObject);
                GetComponent<MapMarker>().isActive = false;
                this.gameObject.GetComponent<CapsuleCollider>().enabled = false;
                // GameManager.Instance.EatPopUp.SetActive(true);

                
                for (int i = 0; i < LevelLoader.Instance.lvl_M.AnimalsNamesToKill.Length; i++)
                {
                    if (name == LevelLoader.Instance.lvl_M.AnimalsNamesToKill[i])
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
       
       
    }
    public void disableSelf()
    {
        Destroy(this.gameObject);
    }
}