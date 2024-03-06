using UnityEngine;
using UnityEngine.UI;
namespace Gley.MobileAds.Internal
{
    public class MobileAdsExample : MonoBehaviour
    {
        public static MobileAdsExample Instance;
        public bool isAppOpen;
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
            //Invoke(nameof(ShowBanner), 1f);
            //Invoke(nameof(showMRac), 1f);

        }
        public void ShowBanner()
        {
            Gley.MobileAds.API.ShowBanner(BannerPosition.Top, BannerType.Banner);
            // HideMRec();
        }
        public void showMRac()
        {
            API.ShowMRec(BannerPosition.TopRight);
        }
        /// <summary>
        /// Hide banner assigned from inspector
        /// </summary>
        public void HideBanner()
        {
            Gley.MobileAds.API.HideBanner();
        }
        public void HideMRec()
        {
            API.HideMRec();
        }
        public void ShowInterstitial()
        {
            if (API.IsInterstitialAvailable())
                Gley.MobileAds.API.ShowInterstitial();
        }
        public void ShowRewardedVideo()
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
                CharacterSelection.Instance.UnlockAfterAddWatch(PlayerPrefs.GetInt("SelectedCharacter"));
            }
        }
        public void showAppopen()
        {
            API.ShowAppOpen();
        }
        private void CompleteMethod(bool completed)
        {

            CharacterSelection.Instance.UnlockAfterAddWatch(PlayerPrefs.GetInt("SelectedCharacter"));
        }
    }
}