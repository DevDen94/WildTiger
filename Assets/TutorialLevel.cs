using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TutorialLevel : MonoBehaviour
{
    public GameObject SpawnPoint;
    public GameObject SpawnPoint_Tigeress;
    public EnemyAIAggressive[] agg;
    public GameObject FinishLevel;
    public GameObject Enemy;
    bool is_Comp;
    private void Start()
    {
        is_Comp = false;
    }
    public void End_Level()
    {
        if (is_Comp == false)
        {
            Invoke("Finish_Cutscene_", 2f);
            is_Comp = true;
           
        }
    }

    void Finish_Cutscene_()
    {
        
        LevelLoader.Instance.fadeScreen.SetActive(true);
        FinishLevel.SetActive(true);
        foreach (GameObject a in LevelLoader.Instance.GameObject_DeactiveOnStart)
        {
            a.SetActive(false);
        }
        LevelLoader.Instance.Characters_Parent.SetActive(false);
        PlayerPrefs.SetInt("TUT", 2);
    }
}
