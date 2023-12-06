using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelLoader : MonoBehaviour
{
    public GameObject[] Levels;

    public static LevelLoader Instance;
   
    private void Awake()
    {
        Instance = this;
    }

    private void Start()
    {
        LoadLevel(PlayerPrefs.GetInt("Level"));
        
    }

    public void LoadNextLevel()
    {
        
        PlayerPrefs.SetInt("Level", PlayerPrefs.GetInt("Level")+1);

        if (PlayerPrefs.GetInt("Level") < Levels.Length)
        {
            LoadLevel(PlayerPrefs.GetInt("Level"));
        }
        else
        {
            // All levels are complete, you can add logic for game completion
            Debug.Log("All levels completed!");
        }
        SceneManager.LoadScene(1);
    }






    private void LoadLevel(int index)
    {
        // Load the next level prefab
        Instantiate(Levels[index]);
    }


}
