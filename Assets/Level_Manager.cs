using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class Level_Manager : MonoBehaviour
{
    public int TotalEnemyInLevel;
    public GameObject SpawnPoint;
    public GameObject[] Stun_Enemies;
    public stats Stats;
    private LevelLoader lvl_loader;
    public GameObject FinishLevel;
    public string[] AnimalsNamesToKill;
    public int KillAnimals = 0;
    public bool Off_MainCh;
    public static Level_Manager instance;

    [Header("Level---------------4--------------------")]
    public GameObject[] FireStick;
    public GameObject FireTriggerPoint;
    void Start()
    {
        instance = this;
        lvl_loader = LevelLoader.Instance;
        for (int i = 0; i <  Stats.Animals.Length; i++)
        {
            lvl_loader.AnimalList[i].gameObject.SetActive(true);
            Stats.killCount[i] = 0;
            lvl_loader.AnimalList[i].text = Stats.Animals[i] + "\t" +Stats.killCount[i] + "/" + Stats.TotalKillCount[i];
        }

        TransferGameObjects();

    }
    void TransferGameObjects()
    {
        LevelLoader.Instance.SelectedTiger.GetComponent<AnimalScript>().Enemy = new GameObject[Stun_Enemies.Length];
        for (int i = 0; i < Stun_Enemies.Length; i++)
        {
            LevelLoader.Instance.SelectedTiger.GetComponent<AnimalScript>().Enemy[i] = Stun_Enemies[i];
        }
    }
    public void update_stats(string animal_name)
    {
        Debug.Log("Enter InUpdate" + animal_name);
        for (int i = 0; i < Stats.Animals.Length; i++)
        {
            if (Stats.Animals[i] == animal_name)
            {
                Debug.Log("Enter condition" + animal_name + i);

                if (Stats.killCount[i] < Stats.TotalKillCount[i])
                {
                    Stats.killCount[i] = Stats.killCount[i] + 1;
                    lvl_loader.AnimalList[i].gameObject.GetComponent<Text>().text = Stats.Animals[i] + " \t" + Stats.killCount[i] + "/" + Stats.TotalKillCount[i];
                }
            }
        }
    }
    public void End_Level()
    {
        Invoke("Finish_Cutscene_", 2f);
    }

    void Finish_Cutscene_()
    {
         LevelLoader.Instance.fadeScreen.SetActive(true);
         FinishLevel.SetActive(true);
         foreach (GameObject a in LevelLoader.Instance.GameObject_DeactiveOnStart)
         {
                a.SetActive(false);
          }

    }
}
