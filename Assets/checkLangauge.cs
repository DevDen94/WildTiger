using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class checkLangauge : MonoBehaviour
{
    private void OnEnable()
    {
        
        if(PlayerPrefs.GetString("CurrentLanguage")== "english")
        {
            transform.GetChild(0).gameObject.SetActive(true);
            transform.GetChild(1).gameObject.SetActive(false);
        }else if (PlayerPrefs.GetString("CurrentLanguage") == "chinese")
        {
            transform.GetChild(0).gameObject.SetActive(false);
            transform.GetChild(1).gameObject.SetActive(true);
        }
    }
}
