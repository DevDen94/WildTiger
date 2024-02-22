using System.Collections;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.UI;
public class EnemyAI : MonoBehaviour
{
    public Transform player;
    public float detectionRange = 10f;
    public float runningSpeed = 5f;

    private Animator animator;
    private NavMeshAgent navMeshAgent;


    public Image HealthSlider;
    public float StartingHealth=1;

    public float HalthDownSpeed;

    public Animator PlayerAnimator;


    public GameObject _Camera,Healthbar;
    int KillAnimals;

    public GameObject TextUIHealth;
    public GameObject MouthPosition;
    public bool CheckForIncriment;
    public int DefenciveExp;
    void Start()
    {
        this._Camera = Camera.main.gameObject;
        player = LevelLoader.Instance.SelectedTiger.transform;
        animator = GetComponent<Animator>();
        navMeshAgent = GetComponent<NavMeshAgent>();
        HealthSlider.fillAmount = StartingHealth;
        PlayerAnimator = player.GetComponent<Animator>();
        //MouthPosition = GameObject.FindGameObjectWithTag("MouthPosition");
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



        Healthbar.transform.LookAt(_Camera.transform);
        
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
        //Debug.Log(playIdle);
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


    public void stun()
    {
        animator.SetBool("stun", true);
        GetComponent<NavMeshAgent>().isStopped = true;  
        Invoke(nameof(stunOff), 6f);
    }

    public void stunOff()
    {
        animator.SetBool("stun", false);
        GetComponent<NavMeshAgent>().isStopped = false;
        transform.GetChild(4).gameObject.SetActive(false);
    }



    public void Demage(string animalName)
    {

        if (HealthSlider.fillAmount > 0) { 
        StartingHealth = StartingHealth - HalthDownSpeed;
        HealthSlider.fillAmount = StartingHealth;
        
        if (HealthSlider.fillAmount <= 0)
        {
                animator.SetBool("death", true);
                GetComponent<NavMeshAgent>().enabled = false;
                GetComponent<EnemyAI>().enabled = false;
                GetComponent<NavMeshAgent>().isStopped = true;
                transform.GetChild(4).gameObject.SetActive(false);
                transform.GetChild(3).gameObject.SetActive(false);
                LevelLoader.Instance.lvl_M.update_stats(this.gameObject.name);
                GetComponent<MapMarker>().isActive = false;
                //GameManager.Instance.pickUpBtn.SetActive(true);
                LevelLoader.Instance.MoveMentController.SetActive(false);
                //GameManager.Instance.EatBtn.SetActive(true);
                whenPickUp();
               
               
                PlayerPrefs.SetInt("TigerExp", PlayerPrefs.GetInt("TigerExp") + DefenciveExp);
                LevelLoader.Instance.ExpTxt.text = PlayerPrefs.GetInt("TigerExp").ToString();
                LevelLoader.Instance.TierUpdate();
            }

        }
    }
    public void whenPickUp()
    {
        
        player.GetComponent<Animator>().Play("F_Eat", 0);
       
        GameManager.Instance.EatPopUp.SetActive(true);
        //transform.position= MouthPosition.transform.position;
        //transform.transform.parent = MouthPosition.transform;

        //transform.position = new Vector3(0f, 0f, 0f);
        //GetComponent<NavMeshAgent>().isStopped = true;
        //transform.position = new Vector3(0f, 0f, 0f);
        Invoke(nameof(checkComplete),3f);
    }
    
    public void checkComplete()
    {
        CheckForIncriment = true;
        //GameManager.Instance.KillAnimals++;
        for (int i = 0; i < GameManager.Instance.AnimalsNamesToKill.Length; i++)
        {
            if (name == GameManager.Instance.AnimalsNamesToKill[i])
            {
                if (CheckForIncriment == true)
                {
                    GameManager.Instance.KillAnimals++;
                    CheckForIncriment = false;
                    
                }

                if (GameManager.Instance.KillAnimals >= GameManager.Instance.TotalEnemyInLevel)
                {
                    GameManager.Instance.MoveMentController.SetActive(false);
                    LevelLoader.Instance.lvl_M.End_Level();
                }


            }
            else
            {
                GameManager.Instance.MoveMentController.SetActive(true);
                GameManager.Instance.EatPopUp.SetActive(false);
                //player.GetComponent<AnimalScript>().Enemy.
                //Invoke(nameof(PlayerOff), 3f);
                //Destroy(this.gameObject);
                this.gameObject.SetActive(false);
                //player.GetComponent<Animator>().("F_Eat", 0);
            }

        }
    }
    void PlayerOff()
    {
       
    }
   /* IEnumerator CompletePanel()
    {
        yield return new WaitForSeconds(5f);
        GameManager.Instance.LevelComplete();


        if(PlayerPrefs.GetInt("Level") == PlayerPrefs.GetInt("LastUnlockedLevel"))
        {
            PlayerPrefs.SetInt("UnlockedLevels", PlayerPrefs.GetInt("UnlockedLevels") + 1);
           
        }
       

    }*/

    public void DisableHealthText()
    {
        TextUIHealth.SetActive(false);
        //TextUIHealth.GetComponent<DG.Tweening.DOTweenAnimation>().DORewind();

    }



    private void OnTriggerEnter(Collider other)
    {

        if (other.gameObject.CompareTag("Explosion"))
        {
            stun();
        }
        if (IsAttackAnimationPlaying() || IsAttackAnimationPlaying1() || IsAttackAnimationPlaying2() || IsAttackAnimationPlaying3())
        {
            if (HealthSlider.fillAmount > 0) { 
            TextUIHealth.SetActive(true);
            TextUIHealth.GetComponent<TMPro.TextMeshPro>().text = (Random.Range(4, 25)).ToString();
            TextUIHealth.GetComponent<DG.Tweening.DOTweenAnimation>().DORestart();
            Invoke(nameof(DisableHealthText), 1f);
            }
        }
    }

    private void OnTriggerStay(Collider other)
    {

        if (other.gameObject.CompareTag("Animal"))
        {
            Debug.Log("Stay");
            if (IsAttackAnimationPlaying() || IsAttackAnimationPlaying1() || IsAttackAnimationPlaying2() || IsAttackAnimationPlaying3())
            {
                animator.SetBool("Demage", true);
                Demage(other.gameObject.name);
            }
        }

       
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
}
