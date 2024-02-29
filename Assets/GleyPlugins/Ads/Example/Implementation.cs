using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Implementation : MonoBehaviour
{


    public static Implementation instance;
    void Awake()
    {
        instance = this;
        Advertisements.Instance.Initialize();
        Debug.unityLogger.logEnabled = false;
        DontDestroyOnLoad(this);
    }


    void Start()
    {
       
    }

    /// <summary>
    /// Show banner, assigned from inspector
    /// </summary>
    public void ShowBanner()
    {
        Advertisements.Instance.ShowBanner(BannerPosition.TOP,BannerType.Banner);
    }

    public void HideBanner()
    {
        Advertisements.Instance.HideBanner();
    }


    /// <summary>
    /// Show Interstitial, assigned from inspector
    /// </summary>
    public void ShowInterstitial()
    {
        Advertisements.Instance.ShowInterstitial();
    }

    /// <summary>
    /// Show rewarded video, assigned from inspector
    /// </summary>
    public void ShowRewardedVideo()
    {
        Advertisements.Instance.ShowRewardedVideo(CompleteMethod);
    }


    /// <summary>
    /// This is for testing purpose
    /// </summary>
    void Update()
    {
        
    }

    private void CompleteMethod(bool completed)
    {
        
            CharacterSelection.Instance.UnlockAfterAddWatch(PlayerPrefs.GetInt("SelectedCharacter"));
        
    }
}
