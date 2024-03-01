using MalbersAnimations.Controller.AI;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class enemyFinderbyCompanion : MonoBehaviour
{
    public MAIState AttackState;
    public MAIState FOllowPalyerState;
    public MAIState StopState;
    public MAIState gotoPoint;
    public MAIState AttackCurrentTarget;

    public LayerMask enemyLayer;
    public float detectionRadius = 5f;
    public MAnimalBrain Tigress; public GameObject Tigeress;
    public MAnimalBrain Child;public GameObject Child_;
    public MAnimalBrain Current_Companion;
    public GameObject[] CompanionBtns;
    public GameObject[] Unfollow;
    public static enemyFinderbyCompanion instance;
   
    private void Start()
    {
        instance = this;
        
        Invoke("Activate", 0.5f);
      
    }
    void Activate()
    {
        if (PlayerPrefs.GetInt("TUT") == 1)
        {
            Current_Companion = Tigress;
            Tigeress.SetActive(true);
            Tigeress.transform.SetPositionAndRotation(LevelLoader.Instance.tut_g.SpawnPoint_Tigeress.transform.position,
            LevelLoader.Instance.tut_g.SpawnPoint_Tigeress.transform.rotation);
            GetComponent<LevelLoader>().secondPlayer = Tigeress;
            foreach (EnemyAIAggressive a in LevelLoader.Instance.tut_g.agg)
            {
                a.TargetPlayer2 = Tigeress.transform;
            }


        }
        else
        {
            if (GetComponent<LevelLoader>().lvl_M.Tigress == true)
            {
                Current_Companion = Tigress;
                Tigeress.SetActive(true);
                Tigeress.transform.SetPositionAndRotation(GetComponent<LevelLoader>().lvl_M.SpawnPoint_Tigeress.transform.position,
                GetComponent<LevelLoader>().lvl_M.SpawnPoint_Tigeress.transform.rotation);
                GetComponent<LevelLoader>().secondPlayer = Tigeress;
                foreach (EnemyAIAggressive a in GetComponent<LevelLoader>().lvl_M.agg_Animals)
                {
                    a.TargetPlayer2 = Tigeress.transform;
                }
            }
            else if (GetComponent<LevelLoader>().lvl_M.Child == true)
            {
                Current_Companion = Child;
                Child_.SetActive(true);
                Child_.transform.SetPositionAndRotation(GetComponent<LevelLoader>().lvl_M.SpawnPoint_Child.transform.position,
                    GetComponent<LevelLoader>().lvl_M.SpawnPoint_Child.transform.rotation);
                LevelLoader.Instance.secondPlayer = Child_;
            }
            else
            {
                foreach (GameObject a in CompanionBtns)
                {
                    a.SetActive(false);
                }
            }
        }
    }
    public void fightWithEnemey()
    {


        Collider[] colliders = Physics.OverlapSphere(Current_Companion.transform.position, detectionRadius, enemyLayer);

        foreach (Collider collider in colliders)
        {
            // Do something with the detected enemy collider
            Current_Companion.currentState = gotoPoint;
            Current_Companion.currentState = AttackState;
            Current_Companion.enabled = false;

            Invoke(nameof(enebaleTrue), 0.5f);
            Debug.Log("Enemy detected: " + collider.gameObject.name);
        }


        
        
    }
    public void IdleToFollow()
    {

        if (Current_Companion.currentState == StopState)
        {
            Unfollow[0].SetActive(true);
            Unfollow[1].SetActive(true);
            Current_Companion.currentState = FOllowPalyerState;
            Current_Companion.enabled = false;
            Invoke(nameof(enebaleTrue), 0.5f);
        }
        else if (Current_Companion.currentState == FOllowPalyerState)
        {
            Unfollow[0].SetActive(false);
            Unfollow[1].SetActive(false);
            Current_Companion.currentState = StopState;
            Current_Companion.enabled = false;
            Invoke(nameof(enebaleTrue), 0.5f);
        }else if (Current_Companion.currentState == AttackState)
        {
            Unfollow[0].SetActive(false);
            Unfollow[1].SetActive(false);
            Current_Companion.currentState = StopState;
            Current_Companion.enabled = false;
            Invoke(nameof(enebaleTrue), 0.5f);
        }else if(Current_Companion.currentState == AttackCurrentTarget)
        {
            Unfollow[0].SetActive(false);
            Unfollow[1].SetActive(false);
            Current_Companion.currentState = StopState;
            Current_Companion.enabled = false;
            Invoke(nameof(enebaleTrue), 0.5f);
        }
    }



    public void enebaleTrue()
    {
        Current_Companion.enabled = true;

    }

}
