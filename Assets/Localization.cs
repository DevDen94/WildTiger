using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Localization : MonoBehaviour
{

    public Transform Button;

    private void Awake()
    {

        if (!PlayerPrefs.HasKey("CurrentLanguage"))
        {
            
            PlayerPrefs.SetString("CurrentLanguage", "english");
        }


        
    }
    private void Start()
    {
        if (PlayerPrefs.GetString("CurrentLanguage") == "chinese")
        {
            Button.GetChild(0).gameObject.SetActive(true);
            Button.GetChild(1).gameObject.SetActive(false);
        }
        else if (PlayerPrefs.GetString("CurrentLanguage") == "english")
        {
            Button.GetChild(1).gameObject.SetActive(true);
            Button.GetChild(0).gameObject.SetActive(false);
        }
    }


    public void SelectLanguage() 
    {
        if (PlayerPrefs.GetString("CurrentLanguage") == "english")
        {
            PlayerPrefs.SetString("CurrentLanguage", "chinese");
            Button.GetChild(1).gameObject.SetActive(false);
            Button.GetChild(0).gameObject.SetActive(true);

        }
        else if (PlayerPrefs.GetString("CurrentLanguage") == "chinese")
        {
            PlayerPrefs.SetString("CurrentLanguage", "english");
            Button.GetChild(0).gameObject.SetActive(false);
            Button.GetChild(1).gameObject.SetActive(true);
        }
        MainMenu.Instance.MainMenuPanel.SetActive(false);
        StartCoroutine(waitforReenable());
    }
    IEnumerator waitforReenable()
    {
        
        yield return new WaitForSeconds(0.1f);
        MainMenu.Instance.MainMenuPanel.SetActive(true);
    }
}
