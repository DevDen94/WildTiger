using MalbersAnimations;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class AnimalScript : MonoBehaviour
{
    public static AnimalScript Instance;
    public float explosionRadius = 5f;
    public LayerMask enemyLayer;
    public GameObject explosionPrefab; // Reference to your explosion prefab
    public FireBallAnimation Stun_Particle;
    public FireBallAnimation SuperAttack_P;
    public GameObject StunButton;
    public GameObject[] Enemy;
    public GameObject[] SuperAttack_Enemies;
    public LineRenderer lineRenderer;

    public GameObject slashVfx;
    public Slider PlayerHealth;

    public float HealthDown;
    public GameObject ClawIamge;

    public GameObject TextUIHealth, camera,TextUIHealthParent;
    public ParticleSystem water;
    public Transform ENEMY;
    public int TigerExp;
    public GameObject Planks;

    public GameObject Attack_Btn;
    public Text Attack_Text; 
    public float cooldownDuration = 5f;
    private float cooldownTimer = 0f;
    private bool isCooldown = false;
   // public GameObject Attacker_Effect;
    public GameObject EndingEffect;
    private void Awake()
    {
        if (Instance == null)
            Instance = this;
        if (PlayerPrefs.GetInt("Firsttime") == 0)
        {
            PlayerPrefs.SetInt("TigerExp", 0);

            PlayerPrefs.SetInt("Firsttime", 1);
            
        }
    }
    void Start()
    {
        size = 0.6f;
        this.camera = Camera.main.gameObject;
        // Ensure the Line Renderer component is set up
        if (lineRenderer == null)
        {
            // Add Line Renderer component if not assigned
            lineRenderer = gameObject.AddComponent<LineRenderer>();
            lineRenderer.startWidth = 0.1f;
            lineRenderer.endWidth = 0.1f;
            lineRenderer.material = new Material(Shader.Find("Sprites/Default"));
            lineRenderer.startColor = Color.red;
            lineRenderer.endColor = Color.red;
        }
        lineRenderer.enabled = false;
        
        
        TigerExp = PlayerPrefs.GetInt("TigerExp");
  
        // Disable Line Renderer initially

        if (PlayerPrefs.GetInt("Level") == 9)
        {
            Boundary.SetActive(false);
        }
       
    }
    public void Super_Attack()
    {
     
            foreach (GameObject enemy in SuperAttack_Enemies)
            {
            if (enemy != null)
            {
                float distance = Vector3.Distance(transform.position, enemy.transform.position);

                if (distance <= explosionRadius)
                {
                 
                    Attack_Btn.transform.GetChild(1).gameObject.SetActive(true);
                    cooldownTimer = cooldownDuration;

                    ENEMY = enemy.transform;

                    if (IsEnemyInFront())
                    {
                        CameraShake.instance.Shake();
                        EndingEffect.SetActive(true);
                        LevelLoader.Instance.StunSound.Play();
                        lineRenderer.enabled = true;
                        lineRenderer.SetPosition(0, transform.position);
                        lineRenderer.SetPosition(1, enemy.transform.position);
                        SuperAttack_P.moveFireballToTarget(lineRenderer);
                        ENEMY = null;
                        ENEMY = enemy.transform;


                        Invoke("explosionPrefabDelay", FireBallAnimation.instance.time);
                        //Instantiate(explosionPrefab, enemy.transform.position, Quaternion.identity);
                        if (enemy.GetComponent<EnemyAI>())
                        {
                            enemy.GetComponent<EnemyAI>().stun();
                            enemy.GetComponent<EnemyAI>().Damage(0.6f);
                        }
                        else
                        {
                            enemy.GetComponent<EnemyAIAggressive>().stun();
                            enemy.GetComponent<EnemyAIAggressive>().StartingHealth = 0.001f;
                            enemy.GetComponent<EnemyAIAggressive>().Demage(enemy.gameObject.name);
                            Debug.LogError("SuperAttack");
                        }

                        Invoke(nameof(DisableLine), 1f);
                    }
                }
            }
            }
            
       
        
    }
    float size=0.4f;
    public GameObject Boundary;
    private void Update()
    {
       
        TextUIHealth.transform.LookAt(TextUIHealth.transform.position+camera.transform.rotation*Vector3.forward);
        if (isCooldown)
        {
            /*cooldownTimer -= Time.deltaTime;
            if (cooldownTimer <= 0)
            {
                isCooldown = false;
                // Attack_Btn.transform.GetChild(1).gameObject.SetActive(false);
                /// Attack_Text.text = "";

            }
            else
            {
                //  Attack_Text.text = Mathf.Ceil(cooldownTimer).ToString();



            }*/
        }
    }
    public void playVFX_slash()
    {
        slashVfx.GetComponent<ParticleSystem>().Play();
    }
    public void Stun()
    {
        
        // Detect enemies within the explosion radius
        //Collider[] hitColliders = Physics.OverlapSphere(transform.position, explosionRadius, enemyLayer);

        // Trigger explosion for each enemy in range
        foreach (GameObject enemy in Enemy)
        {
            
            float distance = Vector3.Distance(transform.position, enemy.transform.position);
           
            
            //EnemyController enemy = col.GetComponent<EnemyController>();
            if (distance <= explosionRadius)
            {
                ENEMY = enemy.transform;
              
                if (IsEnemyInFront())
                {
                    LevelLoader.Instance.StunSound.Play();
                    lineRenderer.enabled = true;
                    lineRenderer.SetPosition(0, transform.position);
                    lineRenderer.SetPosition(1, enemy.transform.position);
                    Stun_Particle.moveFireballToTarget(lineRenderer);
                    ENEMY = null;
                    ENEMY = enemy.transform;
                    enemy.transform.GetChild(4).gameObject.SetActive(true);
                    Invoke("explosionPrefabDelay",FireBallAnimation.instance.time);
                    //Instantiate(explosionPrefab, enemy.transform.position, Quaternion.identity);

                    enemy.GetComponent<EnemyAI>().stun();
                    Invoke(nameof(DisableLine), 1f);
                }
            }
        }

    }

    public void explosionPrefabDelay()
    {
        Instantiate(explosionPrefab, ENEMY.transform.position, Quaternion.identity);

    }
    bool IsEnemyInFront()
    {
        Vector3 directionToEnemy = (ENEMY.transform.position - transform.position).normalized;
        float dotProduct = Vector3.Dot(transform.forward, directionToEnemy);

        // You can adjust the threshold value based on your needs
        float angleThreshold = 0.8f;

        // If dot product is greater than the threshold, the enemy is in front of the player
        return dotProduct > angleThreshold;
    }

    public void DisableLine()
    {
          // Disable Line Renderer when not exploding
            lineRenderer.enabled = false;
        
    }


    // Draw the explosion range in the Scene view for better visualization
    void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(transform.position, explosionRadius);
    }

    void Heal_Off()
    {
        LevelLoader.Instance.MoveMentController.SetActive(true); HealingEffect.SetActive(false);
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "Heal")
        {
            collision.gameObject.SetActive(false);
            PlayerHealth.value = PlayerHealth.value + 20f;
            HealingEffect.SetActive(true);
           // LevelLoader.Instance.MoveMentController.SetActive(false);
           // Invoke("Heal_Off",3f);
        }
        if (collision.gameObject.tag == "NPC")
        {
            if (collision.gameObject.GetComponent<EnemyAIAggressive>().EnemyHealth.fillAmount > 0)
            {
                if (collision.gameObject.GetComponent<EnemyAIAggressive>().AttackingExp >= TigerExp)
                {
                    PlayerHealth.value = PlayerHealth.value - HealthDown * 10;
                    Debug.LogError("IfDamage");
                }
                else
                {
                    PlayerHealth.value = PlayerHealth.value - HealthDown;
                    Debug.LogError("IfelseDamage");
                }

                ClawIamge.SetActive(true);
                Invoke(nameof(DisableClawIamge), 1f);
                TextUIHealth.SetActive(true);

                TextUIHealth.GetComponent<TMPro.TextMeshPro>().text = (Random.Range(4, 10)).ToString();
                //TextUIHealth.GetComponent<DG.Tweening.DOTweenAnimation>().DORestart();
                Invoke(nameof(DisableHealthText), 1f);

                if (PlayerHealth.value <= 0)
                {
                   // Debug.LogError("aaaa");
                    LevelLoader.Instance.LevelFail();
                    Invoke(nameof(DisableClawIamge), 0f);
                }

            }
            else
            {
                if (PlayerPrefs.GetInt("TUT") == 1)
                {
                    LevelLoader.Instance.Tutorial_Game.gameObject.SetActive(false);
                    LevelLoader.Instance.tut_g.End_Level();
                    //Debug.LogError("enddddddddddd");

                }
                else
                {
                    if (LevelLoader.Instance.lvl_M.KillAnimals >= LevelLoader.Instance.lvl_M.TotalEnemyInLevel)
                    {
                        LevelLoader.Instance.MoveMentController.SetActive(false);
                        LevelLoader.Instance.lvl_M.End_Level();
                    }
                   // Debug.LogError("AYA");
                }
            }




        }
        
    }
    
    public void DisableHealthText()
    {
        TextUIHealth.SetActive(false);
        //TextUIHealth.GetComponent<DG.Tweening.DOTweenAnimation>().DORewind();

    }
    public GameObject HealingEffect;
    public void DisableClawIamge()
    {
        ClawIamge.SetActive(false);
    }

    private void OnTriggerStay(Collider other)
    {
        if (other.gameObject.tag == "bubble")
        {
            Debug.Log("In water");
            water.Play();
        }
    
    }
    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "bubble")
        {
            water.Stop();
        }
    }
    public void EatFunc()
    {

        this.GetComponent<Animator>().Play("F_Eat", 0);


        Transform mouth = this.transform.Find("MouthPos").transform;
        ENEMY.transform.position= mouth.transform.position;
        ENEMY.transform.parent = mouth.transform;
        //ENEMY.transform.GetComponent<EnemyAI>().whenPickUp();
        
        //ENEMY.transform.position = new Vector3(0f, 0f, 0f);
        
    }
    
}
