using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class Level_Manager : MonoBehaviour
{
    public GameObject SpawnPoint;
    public GameObject[] Stun_Enemies;
    public stats Stats;
    private LevelLoader lvl_loader;



    void Start()
    {
        lvl_loader = LevelLoader.Instance;
        for (int i = 0; i <  Stats.Animals.Length; i++)
        {
            lvl_loader.AnimalList[i].gameObject.SetActive(true);
            Stats.killCount[i] = 0;
            lvl_loader.AnimalList[i].text = Stats.Animals[i] + "\n \n \n" +Stats.killCount[i] + "/" + Stats.TotalKillCount[i];
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



}
