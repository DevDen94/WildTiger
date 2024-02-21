using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    public int TotalEnemyInLevel;

    public GameObject PausePanel,Complete,Fail,MoveMentController,TaskPanel,pickUpBtn,EatPopUp;

    public static GameManager Instance;

    public string[] AnimalsNamesToKill;
    public int KillAnimals = 0;

    public stats[] Stats;
    public Text ShowStatsText;
    public GameObject[] AnimalList;
    stats selectedLevelData;
    public GameObject[] Tigers;
    public GameObject SelectedTiger;
    private int SneakInt;
    public Text ExpTxt,Tiertxt,ExpBarTxt;
    private int TierInt;
    public Slider ExpBArSlider;
    private bool OnStart=false;

    public AudioSource StunSound;
    private void Start()
    {

        TierUpdate();
        PlayerPrefs.SetInt("First", 0);
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
        SelectedTiger.GetComponent<ItemsData>().Selected();
    }

    int abc;
    public void update_stats(string animal_name)
    {
        Debug.Log("Enter InUpdate"+ animal_name);
        for (int i = 0; i < selectedLevelData.Animals.Length; i++)
        {
            if (selectedLevelData.Animals[i] == animal_name)
            {
                Debug.Log("Enter condition" + animal_name+i);
                
                if (selectedLevelData.killCount[i]< selectedLevelData.TotalKillCount[i]) { 
                    selectedLevelData.killCount[i] = selectedLevelData.killCount[i] + 1;
                    AnimalList[i].gameObject.GetComponent<Text>().text = selectedLevelData.Animals[i] + "\t\t\t" + selectedLevelData.killCount[i] + "/" + selectedLevelData.TotalKillCount[i];
                }
            }
        }
    }
    private void Awake()
    {
        selectedLevelData = Stats[0];
        Instance = this;

        foreach (GameObject g in Tigers)
        {
            g.SetActive(false);
            SelectedTiger = Tigers[PlayerPrefs.GetInt("SelectedCharacter")];
            SelectedTiger.gameObject.SetActive(true);
        }
        for (int i = 0; i < selectedLevelData.Animals.Length; i++)
        {
          //  Debug.LogError(AnimalList[i]);
            AnimalList[i].SetActive(true);
            selectedLevelData.killCount[i] = 0;
            AnimalList[i].gameObject.GetComponent<Text>().text = selectedLevelData.Animals[i] + "                   " + selectedLevelData.killCount[i] + "/" + selectedLevelData.TotalKillCount[i];
        }
       
      
    }

    void ExpBar()
    {
        if (OnStart == true)
        {
            ExpBArSlider.maxValue = LevelLoader.Instance.TierExp[PlayerPrefs.GetInt("Tier")];
            ExpBArSlider.value = PlayerPrefs.GetInt("TigerExp");
            ExpBarTxt.text = PlayerPrefs.GetInt("TigerExp") + "/" + LevelLoader.Instance.TierExp[PlayerPrefs.GetInt("Tier")].ToString();

           
        }
        else
        {
            ExpBArSlider.maxValue = LevelLoader.Instance.TierExp[PlayerPrefs.GetInt("Tier")];
            ExpBArSlider.value = PlayerPrefs.GetInt("TigerExp");
            ExpBarTxt.text = PlayerPrefs.GetInt("TigerExp") + "/" + LevelLoader.Instance.TierExp[PlayerPrefs.GetInt("Tier")].ToString();
            int exp = PlayerPrefs.GetInt("Tier") + 1;
            Tiertxt.text = exp.ToString();
        }
       
    }
   public void TierUpdate()
    {
        if (PlayerPrefs.GetInt("TigerExp") >= LevelLoader.Instance.TierExp[0])
        {
            for (int i = 0; i < LevelLoader.Instance.TierExp.Length; i++)
            {
                if (PlayerPrefs.GetInt("TigerExp") > LevelLoader.Instance.TierExp[i])
                {
                    //TierInt = i;
                    PlayerPrefs.SetInt("Tier", i + 1);

                    Tiertxt.text = PlayerPrefs.GetInt("Tier").ToString();
                    ExpBArSlider.maxValue = LevelLoader.Instance.TierExp[PlayerPrefs.GetInt("Tier")];
                    ExpBArSlider.value = PlayerPrefs.GetInt("TigerExp");
                    OnStart = false;


                }
            }
        }
        else
        {

            ExpBArSlider.maxValue = LevelLoader.Instance.TierExp[PlayerPrefs.GetInt("Tier")];
            ExpBArSlider.value = PlayerPrefs.GetInt("TigerExp");
            int exp = PlayerPrefs.GetInt("Tier") + 1;
            Tiertxt.text = exp.ToString();
            OnStart = true;

        }
        ExpTxt.text = PlayerPrefs.GetInt("TigerExp").ToString();

        ExpBarTxt.text = PlayerPrefs.GetInt("TigerExp") + "/" + LevelLoader.Instance.TierExp[PlayerPrefs.GetInt("Tier")].ToString();
    }



    public void PauseBtnClick()
    {
        Time.timeScale = 0f;
        PausePanel.SetActive(true);
    }

   
 

    public void LevelNext()
    {
        CoinsManager.instance.addCoins(100);
        LevelLoader.Instance.LoadNextLevel();
    }
    public void ResumeGame()
    {
        Time.timeScale = 1f;
        PausePanel.SetActive(false);
    }
    public void VFX_on_Attack()
    {
        SelectedTiger.GetComponent<AnimalScript>().playVFX_slash();
    }
    public void ClickOkInTask()
    {
        TaskPanel.SetActive(false);
    }
    public void Stun()
    {
        SelectedTiger.GetComponent<AnimalScript>().Stun();
        
    }
    public void Eat()
    {

        //SelectedTiger.GetComponent<AnimalScript>().EatFunc();
      
        
    }
    private void Update()
    {
        ExpBar();
    }
  
}
