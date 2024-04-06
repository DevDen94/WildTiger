using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
public class MainMenu : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField] private List<AssetReference> _scenes = new List<AssetReference>();
    [Header("Loading Screen")]
    public GameObject LoadingPanel;
    public GameObject MainMenuPanel;
    public Image LoadingFillAmount;
    public Text loadingText;

    public Text Coins,Play;
   
    [Space(2)]
    [Header("Level Selection")]
    public GameObject[] LevelButtons;

    void Start()
    {
  //   CharacterSelection.Instance.enableTigerModel.SetActive(false);

        StartCoroutine(LoadingComplete());

        if (!PlayerPrefs.HasKey("UnlockedLevels"))
        {
            PlayerPrefs.SetInt("TUT", 1);
            PlayerPrefs.SetInt("Coins", 200);
            UpdateLevels();
           
        }
        else
        {
            UpdateLevels();
            
        }
        Coins.text = PlayerPrefs.GetInt("Coins").ToString();
        // GoogleAdMobController.instance.ShowSmallBannerAd();
       // PlayerPrefs.SetInt("BuyTiger" + 0, 1);//ForlockedTigers
       // PlayerPrefs.SetInt("BuyTiger" + 1, 0);//ForlockedTigers
       // PlayerPrefs.SetInt("BuyTiger" + 2, 0);//ForlockedTigers
        //GoogleMobileAdsController.Instance.ShowSmallBannerAd();
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
       // Implementation.instance.ShowBanner();
        CheckLanguage();
        
    }

    IEnumerator LoadingComplete()
    {
        
        Debug.Log("Loading");
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
            loadingText.text = (int)(progress * 100) + "%";

            elapsedTime = Time.time - startTime;

            yield return null;
        }
       
            // Hide loading panel
            LoadingPanel.SetActive(false);
      

            // Show main menu panel
            MainMenuPanel.SetActive(true);


             Admob.Instance.ShowSmallBanner();

    }

    public void UpdateLevels()
    {
        for (int i = 0; i < LevelButtons.Length; i++)
        {
            int TotalUnlock = PlayerPrefs.GetInt("UnlockedLevels");
            if (i <= TotalUnlock)
            {
                LevelButtons[i].transform.GetChild(1).gameObject.SetActive(false);
                LevelButtons[i].GetComponent<Button>().enabled = true;
            }
            else
            {
               // PlayerPrefs.SetInt("LastUnlockedLevel", i);
                //Debug.Log(i);
                return;
            }
            PlayerPrefs.SetInt("LastUnlockedLevel", i);
        }
    }


    public void LevelButtonClick(int LevelNumber)
    {
        Admob.Instance.ShowInterstitialAd();

        LoadingPanel.SetActive(true);
        PlayerPrefs.SetInt("Level", LevelNumber);
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
            loadingText.text = (int)(progress * 100) + "%";

            elapsedTime = Time.time - startTime;

            yield return null;
        }
        Addressables.LoadSceneAsync(_scenes[0], LoadSceneMode.Single);
        //   SceneManager.LoadScene(1);

    }

    public void showInterstatialAD()
    {
        Admob.Instance.ShowInterstitialAd();
       
    }
    public void showBigBanner()
    {
        Admob.Instance.ShowBigBanner();

    }

    public void timeScaleSet()
    {
        Time.timeScale=1f;
    }

    public void showSmall()
    {
        Admob.Instance.ShowSmallBanner();

    }
    public void ExitBtn()
    {
        Application.Quit();
    }
    public void Links(string link)
    {
        Application.OpenURL(link);
    }

    public void CheckLanguage()
    {
        Debug.Log(Play.text);
        if (Play.text == "PLAY")
        {
            PlayerPrefs.SetInt("Localization", 2);
            Debug.Log("English");
        }
        else
        {
            PlayerPrefs.SetInt("Localization", 1);
            Debug.Log("Chinese");
        }
        Time.timeScale = 1f;
    }


}
