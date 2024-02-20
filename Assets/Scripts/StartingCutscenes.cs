using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartingCutscenes : MonoBehaviour
{
    public GameObject Cage;
    public GameObject[] LevelObjects_ToBeOff;
    public GameObject[] LevelObjects_ToBeOn;
    public GameObject fadeScreen;
    public GameObject Helicopter;
    public GameObject InstructionPanel;
    public void Cage_On()
    {
        Cage.SetActive(true);
    }
    public void Instr_Panel()
    {
        InstructionPanel.SetActive(true);
    }
    public void Helicopter_()
    {
        Helicopter.SetActive(true);
    }
    public void Level_Start()
    {
      
        fadeScreen.SetActive(true);
        foreach(GameObject a in LevelObjects_ToBeOff)
        {
            a.SetActive(true);
        }
        foreach (GameObject a in LevelObjects_ToBeOn)
        {
            a.SetActive(false);
        }
    }
}
