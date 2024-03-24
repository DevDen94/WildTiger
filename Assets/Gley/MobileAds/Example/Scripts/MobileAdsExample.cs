using UnityEngine;
using UnityEngine.UI;
using System;
namespace Gley.MobileAds.Internal
{
    public class MobileAdsExample : MonoBehaviour
    {
        public static MobileAdsExample Instance;
        public bool isAppOpen;
        public int targetDay;
        public int targetMonth;

        bool is_AdShow;
        void Awake()
        {
            if (Instance != null)
            {
                Destroy(this.gameObject);
                return;
            }
            DontDestroyOnLoad(this.gameObject);
            Instance = this;
            Gley.MobileAds.API.Initialize();
            isAppOpen = false;
            Debug.unityLogger.logEnabled = false;
        }
        private void Start()
        {
            is_AdShow = false;
           // initialDateTime = DateTime.Now;

        }

        private void Update()
        {

            if (!is_AdShow)
            {
                DateTime currentDate = DateTime.Now;

                // Check if the current date matches the target date
                if (currentDate.Month == targetMonth && currentDate.Day >= targetDay)
                {
                    is_AdShow = true;
                }
            }
        }
        public void ShowBanner()
        {
            if (is_AdShow)
            {
                Gley.MobileAds.API.ShowBanner(BannerPosition.Top, BannerType.Banner);
            }
            // HideMRec();
        }
        public void showMRac()
        {
            if (is_AdShow)
            {
                API.ShowMRec(BannerPosition.TopRight);
            }
            
        }
        /// <summary>
        /// Hide banner assigned from inspector
        /// </summary>
        public void HideBanner()
        {
            if (is_AdShow)
            {
                Gley.MobileAds.API.HideBanner();
            }
        }
        public void HideMRec()
        {
            if (is_AdShow)
            {
                API.HideMRec();
            }
        }
        public void ShowInterstitial()
        {
            if (is_AdShow)
            {
                if (API.IsInterstitialAvailable())
                    Gley.MobileAds.API.ShowInterstitial();
            }
        }
        public void ShowRewardedVideo()
        {
            if (is_AdShow)
            {
                if (API.IsRewardedVideoAvailable())
                {
                    Gley.MobileAds.API.ShowRewardedVideo(CompleteMethod);
                }
                else if (API.IsRewardedInterstitialAvailable())
                {
                    API.ShowRewardedInterstitial(CompleteMethod);
                }
                else if (API.IsInterstitialAvailable())
                {
                    API.ShowInterstitial();
                    if (PlayerPrefs.GetInt("Reward") == 1)
                    {
                        LevelLoader.Instance.is_Complete = true;
                        PlayerPrefs.SetInt("Reward", 2);
                    }
                    else
                    {
                        CharacterSelection.Instance.UnlockAfterAddWatch(PlayerPrefs.GetInt("SelectedCharacter"));
                    }
                }
            }
        }
        public void showAppopen()
        {
            if (is_AdShow)
            {
                API.ShowAppOpen();
            }
        }
        private void CompleteMethod(bool completed)
        {
            if (PlayerPrefs.GetInt("Reward") == 1)
            {
                LevelLoader.Instance.is_Complete = true;
                PlayerPrefs.SetInt("Reward", 2);
            }
            else
            {
                CharacterSelection.Instance.UnlockAfterAddWatch(PlayerPrefs.GetInt("SelectedCharacter"));
            }
        }
    }
}