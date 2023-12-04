using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
public class MainMenu : MonoBehaviour
{
    // Start is called before the first frame update

    [Header("Loading Screen")]
    public GameObject LoadingPanel;
    public GameObject MainMenuPanel;
    public Image LoadingFillAmount;
    public Text loadingText;

    [Space(2)]
    [Header("Level Selection")]
    public GameObject[] LevelButtons;

    void Start()
    {
        StartCoroutine(LoadingComplete());

        if (!PlayerPrefs.HasKey("UnlockedLevels"))
        {
            PlayerPrefs.SetInt("UnlockedLevels", 1);
            UpdateLevels();
        }
        else
        {
            UpdateLevels();
        }

    }

    IEnumerator LoadingComplete()
    {
        // Show loading panel
        LoadingPanel.SetActive(true);

        // Set initial values
        LoadingFillAmount.fillAmount = 0f;
        loadingText.text = "Loading 0%";

        // Simulate loading by waiting for 4 seconds
        float startTime = Time.time;
        float elapsedTime = 0f;

        while (elapsedTime < 5f)
        {
            // Update the loading slider and text
            float progress = elapsedTime / 5f;
            LoadingFillAmount.fillAmount = progress;
            loadingText.text = "Loading " + (int)(progress * 100) + "%";

            elapsedTime = Time.time - startTime;

            yield return null;
        }
       
            // Hide loading panel
            LoadingPanel.SetActive(false);

            // Show main menu panel
            MainMenuPanel.SetActive(true);
        
    }

    public void UpdateLevels()
    {
        for (int i = 0; i < LevelButtons.Length; i++)
        {
            int TotalUnlock = PlayerPrefs.GetInt("UnlockedLevels");
            if (i < TotalUnlock)
            {
                LevelButtons[i].transform.GetChild(1).gameObject.SetActive(false);
            }
            else
            {
                PlayerPrefs.SetInt("LastUnlockedLevel", i);
                Debug.Log(i);
                return;
            }
        }
    }


    public void LevelButtonClick(int LevelNumber)
    {
        LoadingPanel.SetActive(true);
        PlayerPrefs.SetInt("LevelNumber", LevelNumber);
        StartCoroutine(LoadingAfterLEvelSelectionComplete());
    }
    IEnumerator LoadingAfterLEvelSelectionComplete()
    {
        // Show loading panel
        LoadingPanel.SetActive(true);

        // Set initial values
        LoadingFillAmount.fillAmount = 0f;
        loadingText.text = "Loading 0%";

        // Simulate loading by waiting for 4 seconds
        float startTime = Time.time;
        float elapsedTime = 0f;

        while (elapsedTime < 5f)
        {
            // Update the loading slider and text
            float progress = elapsedTime / 5f;
            LoadingFillAmount.fillAmount = progress;
            loadingText.text = "Loading " + (int)(progress * 100) + "%";

            elapsedTime = Time.time - startTime;

            yield return null;
        }

        SceneManager.LoadScene(1);

    }
}
