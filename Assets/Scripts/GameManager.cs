using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    public int TotalEnemyInLevel;

    public GameObject PausePanel,Complete,Fail,MoveMentController,TaskPanel;

    public static GameManager Instance;

    public string[] AnimalsNamesToKill;
    public int KillAnimals = 0;

    public stats[] Stats;
    public Text ShowStatsText;
    public GameObject[] AnimalList;
    stats selectedLevelData;

    int abc;
    public void update_stats(string animal_name)
    {
        Debug.Log("Enter InUpdate"+ animal_name);
        for (int i = 0; i < selectedLevelData.Animals.Length; i++)
        {
            if (selectedLevelData.Animals[i] == animal_name)
            {
                
                if(selectedLevelData.killCount[i]< selectedLevelData.TotalKillCount[i])
                    AnimalList[i].gameObject.GetComponent<Text>().text = selectedLevelData.Animals[i] + "                   " + selectedLevelData.killCount[i]+1 + "/" + selectedLevelData.TotalKillCount[i];
            }
        }
    }
    private void Awake()
    {
        selectedLevelData = Stats[0];
        Instance = this;

        for(int i = 0; i < selectedLevelData.Animals.Length; i++)
        {
            AnimalList[i].SetActive(true);
            AnimalList[i].gameObject.GetComponent<Text>().text = selectedLevelData.Animals[i] + "                   " + selectedLevelData.killCount[i] + "/" + selectedLevelData.TotalKillCount[i];
        }

        
    }


    public void PauseBtnClick()
    {
        Time.timeScale = 0f;
        PausePanel.SetActive(true);
    }

    public void Home()
    {
        Time.timeScale = 1f;
        SceneManager.LoadScene("Main");
    }

    public void Restart()
    {
        Time.timeScale = 1f;
        SceneManager.LoadScene("Gameplay");
    }

    public void LevelComplete()
    {
        Time.timeScale = 0f;
        Complete.SetActive(true);
    }

    public void LevelFail()
    {
        Time.timeScale = 0f;
        Fail.SetActive(true);
    }


    public void LevelNext()
    {
        LevelLoader.Instance.LoadNextLevel();
    }
    public void ResumeGame()
    {
        Time.timeScale = 1f;
        PausePanel.SetActive(false);
    }

    public void ClickOkInTask()
    {
        TaskPanel.SetActive(false);
    }


}
