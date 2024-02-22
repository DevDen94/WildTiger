using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartingCutscenes : MonoBehaviour
{
    public GameObject Cage;
    public GameObject[] LevelObjects_ToBeOff;
    public GameObject[] LevelObjects_ToBeOn;
    public Level_Manager lvl;
    public GameObject Helicopter;
    int instruction_no;
    private void Start()
    {
        instruction_no = 0;
        
    }
    public void Cage_On()
    {
        Cage.SetActive(true);
    }
   
    public void Helicopter_()
    {
        Helicopter.SetActive(true);
    }
    public void Level_Start()
    {
        LevelLoader.Instance.Level_Start();
        LevelLoader.Instance.fadeScreen.SetActive(true);
        foreach(GameObject a in LevelObjects_ToBeOff)
        {
            a.SetActive(true);
        }
        foreach (GameObject a in LevelObjects_ToBeOn)
        {
            a.SetActive(false);
        }
    }
    public void Load_Instructions()
    {
        instruction_no = instruction_no + 1;
        LevelLoader.Instance.Instruction_Text.text = lvl.Stats.StartingInstructions[instruction_no].ToString();
        LevelLoader.Instance.InstructionPanel.SetActive(true);
               
    }
}
