using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class Level_Manager : MonoBehaviour
{
    public int TotalEnemyInLevel;
    public GameObject SpawnPoint;
    public GameObject SpawnPoint_Tigeress;
    public GameObject SpawnPoint_Child;
    public GameObject[] Stun_Enemies;
    public GameObject[] SuperAttack_En;
    public stats Stats;
    private LevelLoader lvl_loader;
    public GameObject FinishLevel;
    public string[] AnimalsNamesToKill;
    public int KillAnimals = 0;
    public bool Off_MainCh;
    public static Level_Manager instance;
    public float Time;
    public EnemyAIAggressive[] agg_Animals;
    [Header("Level---------------4--------------------")]
    public GameObject[] FireStick;
    public GameObject FireTriggerPoint;

    [Header("If you level includes female companion/ Child companion")]
    public bool Tigress;
    public bool Child;
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
        is_Comp = false;
    }
    void TransferGameObjects()
    {
        LevelLoader.Instance.SelectedTiger.GetComponent<AnimalScript>().Enemy = new GameObject[Stun_Enemies.Length];
        for (int i = 0; i < Stun_Enemies.Length; i++)
        {
            LevelLoader.Instance.SelectedTiger.GetComponent<AnimalScript>().Enemy[i] = Stun_Enemies[i];
        }

        LevelLoader.Instance.SelectedTiger.GetComponent<AnimalScript>().SuperAttack_Enemies = new GameObject[SuperAttack_En.Length];
        for (int i = 0; i < SuperAttack_En.Length; i++)
        {
            LevelLoader.Instance.SelectedTiger.GetComponent<AnimalScript>().SuperAttack_Enemies[i] = SuperAttack_En[i];
        }
    }
    public void update_stats(string animal_name)
    {
     
          if (Stats.killCount[0] < Stats.TotalKillCount[0])
            {
            Debug.LogError("Up");
                Stats.killCount[0] = Stats.killCount[0] + 1;
                 lvl_loader.AnimalList[0].gameObject.GetComponent<Text>().text = Stats.Animals[0] + " \t" + KillAnimals + "/" + Stats.TotalKillCount[0];
           }
       
    }
    public void update_stats_E(string animal_name)
    {

        if (Stats.killCount[0] < Stats.TotalKillCount[0])
        {
            Debug.LogError("Upy");
            Stats.killCount[0] = Stats.killCount[0] + 1;
            lvl_loader.AnimalList[0].gameObject.GetComponent<Text>().text = Stats.Animals[0] + " \t" + Stats.killCount[0] + "/" + Stats.TotalKillCount[0];
        }

    }
    private bool is_Comp;
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
    }
}
