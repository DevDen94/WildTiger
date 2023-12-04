using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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
        LoadLevel(PlayerPrefs.GetInt("LevelNumber")-1);
        
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
    }






    private void LoadLevel(int index)
    {
        // Load the next level prefab
        Instantiate(Levels[index]);
    }


}
