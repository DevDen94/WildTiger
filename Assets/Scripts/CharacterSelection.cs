using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class CharacterSelection : MonoBehaviour
{
    public static CharacterSelection Instance;
    public Button[] CharctersButtons;
    public int SelectedTiger;
    public Button Selectbtn;
    public GameObject AdPopup;
    public Text FirstAdtxt, Secondtxt;
    private void Awake()
    {
        if (Instance == null)
            Instance = this;
    }
    // Start is called before the first frame update
    void Start()
    {
        PlayerPrefs.SetInt("BuyTiger" + 0, 1);
        FirstAdtxt.text = "0/1".ToString();
        Secondtxt.text = "0/1".ToString();
        //LockingButtons();

    }
    public void SelectedCharacter(int i)
    {
       
        SelectedTiger = i;
        PlayerPrefs.SetInt("SelectedCharacter", i);
       
        LockingButtons();
       
    }
    public void UnlockAfterAddWatch()
    {
        if (SelectedTiger > 0)
        {
            PlayerPrefs.SetInt("BuyTiger" + SelectedTiger, 1);

            Selectbtn.gameObject.SetActive(true);

            AdPopup.SetActive(false);
            PlayerPrefs.SetInt("FirstTime", 1);

            CharctersButtons[SelectedTiger].transform.GetChild(0).gameObject.SetActive(false);
            if (PlayerPrefs.GetInt("BuyTiger" + 1) == 1)
            {

                FirstAdtxt.text = "1/1".ToString();
            }
            if (PlayerPrefs.GetInt("BuyTiger" + 2) == 1)
            {

                Secondtxt.text = "1/1".ToString();
            }

        }
    }
    public void BuyCharacter()
    {
        GoogleMobileAdsController.Instance.ShowRewardedAd();
        
       
    }
   
    
   
    
    public void LockingButtons()
    {
        if (PlayerPrefs.GetInt("BuyTiger" + SelectedTiger) > 0)
        {
            if (CharctersButtons[SelectedTiger].transform.GetChild(0) != null)
            {
                CharctersButtons[SelectedTiger].transform.GetChild(0).gameObject.SetActive(false);
                Selectbtn.gameObject.SetActive(true);
                AdPopup.SetActive(false);
               
            }
            if (PlayerPrefs.GetInt("BuyTiger" + 1) == 1)
            {

                FirstAdtxt.text = "1/1".ToString();
            }
            if (PlayerPrefs.GetInt("BuyTiger" + 2) == 1)
            {

                Secondtxt.text = "1/1".ToString();
            }
            


        }
        else
        {
            if (CharctersButtons[SelectedTiger].transform.GetChild(0) != null)
            {
                CharctersButtons[SelectedTiger].transform.GetChild(0).gameObject.SetActive(true);
                Selectbtn.gameObject.SetActive(false);
                AdPopup.SetActive(true);
                
            }


          
        }

       
    }
    
    // Update is called once per frame
    void Update()
    {
        
    }
}
