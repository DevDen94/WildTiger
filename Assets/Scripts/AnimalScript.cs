using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimalScript : MonoBehaviour
{
    public float explosionRadius = 5f;
    public LayerMask enemyLayer;
    public GameObject explosionPrefab; // Reference to your explosion prefab

    public GameObject Enemy,StunButton;
    public LineRenderer lineRenderer;

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


    public void Stun()
    {
        // Detect enemies within the explosion radius
        Collider[] hitColliders = Physics.OverlapSphere(transform.position, explosionRadius, enemyLayer);

        // Trigger explosion for each enemy in range
        foreach (Collider col in hitColliders)
        {
            
            //EnemyController enemy = col.GetComponent<EnemyController>();
            if (Enemy != null)
            {

                lineRenderer.enabled = true;
                lineRenderer.SetPosition(0, transform.position);
                lineRenderer.SetPosition(1, col.transform.position);


                // Instantiate explosion prefab at the enemy's position
                Instantiate(explosionPrefab, Enemy.transform.position, Quaternion.identity);
                Enemy.GetComponent<EnemyAI>().stun();
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


}
