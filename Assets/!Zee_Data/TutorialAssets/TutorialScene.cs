using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening.Core;
using DG.Tweening;
public class TutorialScene : MonoBehaviour
{
    
  
    public GameObject[] TutorialPanels;
    public GameObject[] EnablePanels;
 
    int counter = 0;

  
    public static TutorialScene instance;
   
 

    public GameObject TextPanel;
    public Text cs;

    public string[] Instructions;
    public enemyFinderbyCompanion en;
    public stats st;
    private void Start()
    {
        counter_Start = false;
        instance = this;
        Invoke("LoadTutorial", 3f);


    }
    bool counter_Start;
   
 
    public  void LoadTutorial()  // loadTutorials_ 1/1
    {
        if (counter_Start)
        {
            counter = counter + 1;
        }
        if (TutorialPanels.Length <= counter)
        {
            return;
        }
        TutorialPanels[counter].SetActive(true);
        print(counter);

         switch (counter)
        {
            case 0:
                print(counter);
                counter_Start = true;
                TextPanel.SetActive(true);
                cs.text = Instructions[counter].ToString();
                cs.gameObject.SetActive(true);
                break;
            case 1:
                TextPanel.SetActive(true);
                cs.text = Instructions[counter].ToString();
                cs.gameObject.SetActive(true);
                break;
            case 2:
                TextPanel.SetActive(true);
                cs.text = Instructions[counter].ToString();
                cs.gameObject.SetActive(true);
                break;
            case 3:
                TextPanel.SetActive(true);
                cs.text = Instructions[counter].ToString();
                cs.gameObject.SetActive(true);
                Invoke("off", 3f);
                break;
            case 4:
                TextPanel.SetActive(true);
                cs.text = Instructions[counter].ToString();
                cs.gameObject.SetActive(true);
                break;
            case 5:
                TextPanel.SetActive(true);
                cs.text = Instructions[counter].ToString();
                cs.gameObject.SetActive(true);
                break;
            case 6:
                TextPanel.SetActive(true);
                cs.text = Instructions[counter].ToString();
                cs.gameObject.SetActive(true);
                LevelLoader.Instance.tut_g.Enemy.SetActive(true);
                break;


            default:
                Debug.Log("Master");
                break;
        }
        
    }

    void off()
    {
        OffPanel(3);
    }
   


    public void OffPanel(int i)
    {
        TutorialPanels[i].SetActive(false);
        EnablePanels[i].SetActive(true);
        TextPanel.SetActive(false);
        cs.gameObject.SetActive(false);
        if (i == 4)
        {
            en.enabled = true;
        }
        Invoke("LoadTutorial", 5f);
    }

 
   
}
