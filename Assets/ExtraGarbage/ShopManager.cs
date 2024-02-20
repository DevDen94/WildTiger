using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using TMPro;
using UnityEngine.UI;

public class ShopManager : MonoBehaviour
{
    int glassitemIndex ;
    int LocketitemIndex;
    int CapsitemIndex ;

    public int[] glassPrice;
    public int[] LocketPrice;
    public int[] CapsPrice;
    public Material[] skins; 
    public ItemsData itemData;
    public GameObject BuyButton, SelectButton, watchadButton ; 
    int selectedIndex = -1;
    public SkinnedMeshRenderer SkinnedMeshRenderer;
    public GameObject notcoins;
    
    bool isItemPurchased
    {
        
        get
        {
            return PlayerPrefs.GetInt("Purcashed" + selectedIndex + "_" + itemIndex, 0) == 1;
        }
        set
        {
          
            PlayerPrefs.SetInt("Purcashed" + selectedIndex + "_" + itemIndex, Convert.ToInt32(value));
        }
    }
  

    public void SetMterial(int index)
    {
        notcoins.SetActive(false);
        SkinnedMeshRenderer.material = skins[index];
        PlayerPrefs.SetInt("SelectedCharacter",index);
        Debug.LogError(PlayerPrefs.GetInt("BuyTiger" + index, 1));
        if (PlayerPrefs.GetInt("BuyTiger" + index, 1)==1) 
        {
            BuyButton.SetActive(false);
            watchadButton.SetActive(false);
            SelectButton.SetActive(true);
            
        }
        else
        {
            BuyButton.SetActive(true); 
            watchadButton.SetActive(true);
            SelectButton.SetActive(false);

            // 
        }

        BuyButton.transform.GetChild(0).GetComponent<Text>().text = skinprices[index].ToString();
    }
    public int[] skinprices;
    public  void unlockTigerWithCoins()
    {
        if (CoinsManager.instance.coins >= skinprices[PlayerPrefs.GetInt("SelectedCharacter")])
        {
            CoinsManager.instance.deductCoins(skinprices[PlayerPrefs.GetInt("SelectedCharacter")]); 
            CharacterSelection.Instance.UnlockAfterAddWatch(PlayerPrefs.GetInt("SelectedCharacter"));
            BuyButton.SetActive(false);
            watchadButton.SetActive(false);

        }
        else
        {
            notcoins.SetActive(true);
        }
    }
    public void Start()
    {

        glassitemIndex = PlayerPrefs.GetInt("GlassitemIndex", -1);
        LocketitemIndex = PlayerPrefs.GetInt("LocketitemIndex", -1);
        CapsitemIndex = PlayerPrefs.GetInt("CapsitemIndex", -1);
    }
    public void BuyglassItem(int index)
    {
        selectedIndex = 0;
        itemIndex = index;
        SetItems();
        BuyButton.SetActive(isItemPurchased == false);
     
    }
    public void BuylocketItem(int index)
    {
        selectedIndex = 1;
        itemIndex = index;
        SetItems();
        BuyButton.SetActive(isItemPurchased == false);


    }
    public void BuycapsItem(int index)
    {
        selectedIndex = 2;
        itemIndex = index;
        SetItems();
        BuyButton.SetActive(isItemPurchased == false);
     

    }
    int itemIndex = -1;
     public void BuyItems()
    {
        if (selectedIndex == 0)
        {
            if (itemIndex >= 0)
            {
                CoinsManager.instance.deductCoins(glassPrice[itemIndex]);
                BuyButton.SetActive(false);
                isItemPurchased = true;
                 PlayerPrefs.SetInt("GlassitemIndex", itemIndex);
            }
           
        }
        else if (selectedIndex == 1)
        {
            if (itemIndex >= 0)
            {
                CoinsManager.instance.deductCoins(LocketPrice[itemIndex]);
                BuyButton.SetActive(false);
                isItemPurchased = true;
            PlayerPrefs.SetInt("LocketitemIndex", itemIndex);
            }


        }
        else if (selectedIndex == 2)
        {

            if (itemIndex >= 0)
            {
                CoinsManager.instance.deductCoins(CapsPrice[itemIndex]);
                BuyButton.SetActive(false);
                isItemPurchased = true;
            PlayerPrefs.SetInt("CapsitemIndex", itemIndex);
            }
            
        } 
    }
    
    public void SetItems()
    {

        if (selectedIndex == 0)
        {
            if (isItemPurchased)
            {

            PlayerPrefs.SetInt("GlassitemIndex", itemIndex);
            }
            itemData.enableGlasses(itemIndex);
        }
        else if (selectedIndex == 1)
        {
            if (isItemPurchased)
            {

            PlayerPrefs.SetInt("LocketitemIndex", itemIndex);
            }
            itemData.Enablelockets(itemIndex);

        }
        else if (selectedIndex == 2)
        {
            if (isItemPurchased)
            {

            PlayerPrefs.SetInt("CapsitemIndex", itemIndex);
            }
            itemData.enableHat(itemIndex);
        }
    }
}
