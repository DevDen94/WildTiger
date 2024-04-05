using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.UI;
public class CharacterSelection : MonoBehaviour
{
    public static CharacterSelection Instance;
  //  public Button[] CharctersButtons;
    public int SelectedTiger;
    public Button Selectbtn;
    public GameObject AdPopup;
    public Text FirstAdtxt, Secondtxt;
    public GameObject WatchAd, CoinsButton;
    public GameObject enableTigerModel;
    private void Awake()
    {
        if (Instance == null)
            Instance = this;
    }
    // Start is called before the first frame update
    void Start()
    {
     
        if (!PlayerPrefs.HasKey("BUY"))
        {
            PlayerPrefs.SetInt("BUY", 1);
            PlayerPrefs.SetInt("BuyTiger0", 1);
        }
       
        FirstAdtxt.text = "0/1".ToString();
        Secondtxt.text = "0/1".ToString();
        LockingButtons();
        enableTigerModel.SetActive(true);

    }
    public void SelectedCharacter(int i)
    {
       
        SelectedTiger = i;
        PlayerPrefs.SetInt("SelectedCharacter", i);
       
        LockingButtons();
       
    }
    public void UnlockAfterAddWatch(int index)
    {
        WatchAd.SetActive(false);
        CoinsButton.SetActive(false); // 
        PlayerPrefs.SetInt("BuyTiger" + index, 1);
        Selectbtn.gameObject.SetActive(true);
        AdPopup.SetActive(false);
            enableTigerModel.SetActive(true);
            LockingButtons();        
    }
    public void BuyCharacter()
    {
        Admob.Instance.ShowRewardedAd();


    }
   
    
   
    
    public void LockingButtons()
    {
        if (PlayerPrefs.GetInt("BuyTiger" + SelectedTiger) == 1)
        {
            
            if (PlayerPrefs.GetInt("BuyTiger"+1) == 1)
            {

                FirstAdtxt.text = "1/1".ToString();
            }
            if (PlayerPrefs.GetInt("BuyTiger" + 2) == 1)
            {

                Secondtxt.text = "1/1".ToString();
            }
            WatchAd.SetActive( false);
            CoinsButton.SetActive(false);
            Selectbtn.gameObject.SetActive(true);

        }
        else
        {
            WatchAd.SetActive(true);
            CoinsButton.SetActive(true);
            Selectbtn.gameObject.SetActive(false);


        }

       
    }
    
    // Update is called once per frame
    void Update()
    {
      

    }
}
