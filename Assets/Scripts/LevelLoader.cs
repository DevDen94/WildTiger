using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelLoader : MonoBehaviour
{
    public GameObject[] Levels;
    public int[] LevelRewardedExp,TierExp;
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
        if (PlayerPrefs.GetInt("Level") == PlayerPrefs.GetInt("UnlockedLevels"))
        {
            PlayerPrefs.SetInt("UnlockedLevels", PlayerPrefs.GetInt("UnlockedLevels" + 1));
        }
        PlayerPrefs.SetInt("Level", PlayerPrefs.GetInt("Level")+1);
        
        if (PlayerPrefs.GetInt("Level") < Levels.Length)
        {
            Debug.Log("All levels completed!");
            //LoadLevel(PlayerPrefs.GetInt("Level"));
            
            
               
            SceneManager.LoadScene(1);
        }
        else
        {
            // All levels are complete, you can add logic for game completion
            SceneManager.LoadScene(0);
            Debug.Log("All levels completed!");
        }

       
    }






    private void LoadLevel(int index)
    {
        Debug.LogError(PlayerPrefs.GetInt("UnlockedLevels"));
        // Load the next level prefab
        Instantiate(Levels[index]);
    }


}
