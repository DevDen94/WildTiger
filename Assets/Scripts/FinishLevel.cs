using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FinishLevel : MonoBehaviour
{


    public Animator[] Level_9_Animators;
    public Animator[] LionAnim;
    int anim_counter;
    private void Start()
    {
        
    }
    public void FinishLevel_()
    {
        LevelLoader.Instance.CompletePanelFunc();
    }


    public void Level_9_Tigerrs()
    {
        if (PlayerPrefs.GetInt("SelectedCharacter") == 0)
        {
            anim_counter = anim_counter + 1;
            Level_9_Animators[anim_counter].enabled = true;
        }
        else
        {
            anim_counter = anim_counter + 1;
            LionAnim[anim_counter].enabled = true;
        }
    }
}
