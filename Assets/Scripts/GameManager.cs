using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class GameManager : MonoBehaviour
{
    public int TotalEnemyInLevel;

    public GameObject PausePanel,Complete,Fail,MoveMentController,TaskPanel;

    public static GameManager Instance;

    public string[] AnimalsNamesToKill;


    private void Awake()
    {
        Instance = this;
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
