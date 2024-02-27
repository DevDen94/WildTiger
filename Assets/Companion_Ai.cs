using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class Companion_Ai : MonoBehaviour
{
    public int TigerExp;
    public Image PlayerHealth,healthParent;
    public float healthDown_s;
    public float StartingHealth = 1;
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "NPC")
        {
            if (collision.gameObject.GetComponent<EnemyAIAggressive>().EnemyHealth.fillAmount > 0)
            {
                if (collision.gameObject.GetComponent<EnemyAIAggressive>().AttackingExp >= TigerExp)
                {
                    if (PlayerHealth.fillAmount > 0)
                    {
                        StartingHealth = StartingHealth - healthDown_s;
                        PlayerHealth.fillAmount = StartingHealth;
                    }
                    else
                    {
                        LevelLoader.Instance.MoveMentController.SetActive(false);
                        Debug.LogError("endddddddddddddddddddddddd");
                        LevelLoader.Instance.LevelFail();
                    }
                }
            }
            else
            {
                if (LevelLoader.Instance.lvl_M.KillAnimals >= LevelLoader.Instance.lvl_M.TotalEnemyInLevel)
                {
                    LevelLoader.Instance.MoveMentController.SetActive(false);
                    LevelLoader.Instance.lvl_M.End_Level();
                   
                }

            }

        }

    }
}
