using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Cinemachine;
public class LevelLoader : MonoBehaviour
{
    public Level_Manager[] Levels;
    public int[] LevelRewardedExp,TierExp;
    public static LevelLoader Instance;
    public GameObject SelectedTiger;
    public Texture[] TigerSprites;
    public Material MyMaterial;
    public GameObject[] GameObject_DeactiveOnStart;
    public CinemachineFreeLook cm_Camera;
    int selected_Level;
    [HideInInspector]
    public Level_Manager lvl_M;

    private int SneakInt; private int TierInt;

    [Header("--------------------UI ELEMENTS-----------------------")]
    public Slider ExpBArSlider;
    public Text ExpTxt, Tiertxt, ExpBarTxt;
    public GameObject PausePanel, Complete, Fail, MoveMentController, TaskPanel, pickUpBtn, EatPopUp;
   
    public GameObject InstructionPanel;
    public Text Instruction_Text;
    public GameObject fadeScreen;
    public Text[] AnimalList;
    public Text timerText;
    float totalTimeInSeconds;
    public GameObject secondPlayer; public AudioSource StunSound;
    public GameObject Characters_Parent;
    private void Awake()
    {
        Instance = this;
    }

    private void Start()
    {
        PlayerPrefs.SetInt("Level", 1);
        selected_Level = PlayerPrefs.GetInt("Level");
        lvl_M = Instantiate(Levels[selected_Level]);
        SelectedTiger.transform.SetPositionAndRotation(lvl_M.SpawnPoint.transform.position, lvl_M.SpawnPoint.transform.rotation);
        MyMaterial.SetTexture("_BaseMap", TigerSprites[PlayerPrefs.GetInt("SelectedCharacter")]);
        Instruction_Text.text = lvl_M.Stats.StartingInstructions.ToString();
        cm_Camera.m_YAxis.Value = 0.7f;
       // Level_Start();
        TierUpdate();
        totalTimeInSeconds = lvl_M.Time;
        foreach(GameObject a in GameObject_DeactiveOnStart)
        {
            a.SetActive(false);
        }
   


    }
    public void Pasued_Level()
    {
        PausePanel.SetActive(true);
        Time.timeScale = 0f;
    }
    public void Resume_Level()
    {
        PausePanel.SetActive(false);
        Time.timeScale = 1f;
    }

    public void Level_Start()
    {
        InstructionPanel.SetActive(false);
        foreach(GameObject a in GameObject_DeactiveOnStart)
        {
            a.SetActive(true);
        }
        StartCoroutine(StartTimer());
    }

    public void LoadNextLevel()
    {
        if (selected_Level == PlayerPrefs.GetInt("UnlockedLevels"))
        {
            PlayerPrefs.SetInt("UnlockedLevels", PlayerPrefs.GetInt("UnlockedLevels" + 1));
        }
        PlayerPrefs.SetInt("Level", selected_Level + 1);
        
        if (selected_Level < Levels.Length)
        {
            Debug.Log("Levels_Remaining");
            SceneManager.LoadScene(1);
        }
        else
        {
            SceneManager.LoadScene(0);
            Debug.Log("All levels completed!");
        }

    }

 
    public void LevelFail()
    {
        Time.timeScale = 0f;
        Fail.SetActive(true);
        Implementation.instance.ShowInterstitial();
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


    public void CompletePanelFunc()
    {
        Time.timeScale = 0f;
        Complete.SetActive(true);
        if (selected_Level == PlayerPrefs.GetInt("UnlockedLevels"))
        {
            if (!lvl_Compl)
            {
                PlayerPrefs.SetInt("UnlockedLevels", PlayerPrefs.GetInt("UnlockedLevels") + 1);
                PlayerPrefs.SetInt("TigerExp", PlayerPrefs.GetInt("TigerExp") + LevelRewardedExp[selected_Level]);
                Debug.LogError("ExpLevelReward" + LevelRewardedExp[selected_Level]);
                lvl_Compl = true;
            }

        }
    }


    bool lvl_Compl = false;
    private bool OnStart = false;
    public void TierUpdate()
    {
        if (PlayerPrefs.GetInt("TigerExp") >= TierExp[0])
        {
            for (int i = 0; i<TierExp.Length; i++)
            {
                if (PlayerPrefs.GetInt("TigerExp") > TierExp[i])
                {
                    PlayerPrefs.SetInt("Tier", i + 1);
                    Tiertxt.text = PlayerPrefs.GetInt("Tier").ToString();
                    ExpBArSlider.maxValue = TierExp[PlayerPrefs.GetInt("Tier")];
                    ExpBArSlider.value = PlayerPrefs.GetInt("TigerExp");
                    OnStart = false;
                }
            }
        }
        else
        {
            ExpBArSlider.maxValue = TierExp[PlayerPrefs.GetInt("Tier")];
            ExpBArSlider.value = PlayerPrefs.GetInt("TigerExp");
            int exp = PlayerPrefs.GetInt("Tier") + 1;
            Tiertxt.text = exp.ToString();
            OnStart = true;
        }
        ExpTxt.text = PlayerPrefs.GetInt("TigerExp").ToString();
        ExpBarTxt.text = PlayerPrefs.GetInt("TigerExp") + "/" + TierExp[PlayerPrefs.GetInt("Tier")].ToString();
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
    private void Update()
    {
        ExpBar();
    }
    void ExpBar()
    {
        if (OnStart == true)
        {
            ExpBArSlider.maxValue = TierExp[PlayerPrefs.GetInt("Tier")];
            ExpBArSlider.value = PlayerPrefs.GetInt("TigerExp");
            ExpBarTxt.text = PlayerPrefs.GetInt("TigerExp") + "/" + TierExp[PlayerPrefs.GetInt("Tier")].ToString();


        }
        else
        {
            ExpBArSlider.maxValue = TierExp[PlayerPrefs.GetInt("Tier")];
            ExpBArSlider.value = PlayerPrefs.GetInt("TigerExp");
            ExpBarTxt.text = PlayerPrefs.GetInt("TigerExp") + "/" + TierExp[PlayerPrefs.GetInt("Tier")].ToString();
            int exp = PlayerPrefs.GetInt("Tier") + 1;
            Tiertxt.text = exp.ToString();
        }

    }

    IEnumerator StartTimer()
    {
        float timeRemaining = totalTimeInSeconds;

        while (timeRemaining > 0)
        {
            UpdateTimerText(timeRemaining);
            yield return new WaitForSeconds(1f);
            timeRemaining--;
        }
        Debug.LogError("aaaa");
        LevelFail();
    }
    void UpdateTimerText(float timeInSeconds)
    {
        int minutes = Mathf.FloorToInt(timeInSeconds / 60);
        int seconds = Mathf.FloorToInt(timeInSeconds % 60);

        timerText.text = string.Format("{0:00}:{1:00}", minutes, seconds);
    }
}
