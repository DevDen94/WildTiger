using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class AnimalScript : MonoBehaviour
{
    public float explosionRadius = 5f;
    public LayerMask enemyLayer;
    public GameObject explosionPrefab; // Reference to your explosion prefab

    public GameObject StunButton;
    public GameObject[] Enemy;
    public LineRenderer lineRenderer;


    public Slider PlayerHealth;

    public float HealthDown;
    public GameObject ClawIamge;

    public GameObject TextUIHealth, camera,TextUIHealthParent;

    void Start()
    {
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

        // Disable Line Renderer initially
        lineRenderer.enabled = false;
    }

    private void Update()
    {
        TextUIHealth.transform.LookAt(TextUIHealth.transform.position+camera.transform.rotation*Vector3.forward);
    }
    public void Stun()
    {
        // Detect enemies within the explosion radius
        //Collider[] hitColliders = Physics.OverlapSphere(transform.position, explosionRadius, enemyLayer);
        Debug.LogError("Click");
        // Trigger explosion for each enemy in range
        foreach (GameObject enemy in Enemy)
        {
            Debug.LogError("ForEach");
            float distance = Vector3.Distance(transform.position, enemy.transform.position);
            Debug.LogError(enemy.name+" "+distance);
            //EnemyController enemy = col.GetComponent<EnemyController>();
            if (distance <= explosionRadius)
            {
                Debug.LogError("Distance");
                lineRenderer.enabled = true;
                lineRenderer.SetPosition(0, transform.position);
                lineRenderer.SetPosition(1, enemy.transform.position);

                enemy.transform.GetChild(4).gameObject.SetActive(true);

                
                Instantiate(explosionPrefab, enemy.transform.position, Quaternion.identity);
                enemy.GetComponent<EnemyAI>().stun();
                Invoke(nameof(DisableLine), 1f);
            }
        }
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

    private void OnTriggerEnter(Collider other)
    {


        if (other.gameObject.tag == "Water")
        {
            //gameObject.GetComponent<Rigidbody>().isKinematic = true;
        }
        //if (other.gameObject.tag == "NPC")
        //{
        //    Debug.LogError(other.gameObject.name);
        //    PlayerHealth.value = PlayerHealth.value - HealthDown;
        //    ClawIamge.SetActive(true);
        //    Invoke(nameof(DisableClawIamge),1f);
        //    if (PlayerHealth.value <= 0)
        //    {
        //        GameManager.Instance.LevelFail();
        //    }


        //}
    }
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "NPC")
        {
            Debug.LogError(collision.gameObject.name);
            

            if (collision.gameObject.GetComponent<EnemyAIAggresive>().EnemyHealth.fillAmount > 0)
            {

                PlayerHealth.value = PlayerHealth.value - HealthDown;
                ClawIamge.SetActive(true);
                Invoke(nameof(DisableClawIamge), 1f);
                TextUIHealth.SetActive(true);
                
                TextUIHealth.GetComponent<TMPro.TextMeshPro>().text = (Random.Range(4, 10)).ToString();
                //TextUIHealth.GetComponent<DG.Tweening.DOTweenAnimation>().DORestart();
                Invoke(nameof(DisableHealthText), 1f);
                
                if (PlayerHealth.value <= 0)
                {
                    GameManager.Instance.LevelFail();
                    Invoke(nameof(DisableClawIamge), 0f);
                }

            }




        }
    }

    public void DisableHealthText()
    {
        TextUIHealth.SetActive(false);
        //TextUIHealth.GetComponent<DG.Tweening.DOTweenAnimation>().DORewind();

    }

    public void DisableClawIamge()
    {
        ClawIamge.SetActive(false);
    }
    


}
