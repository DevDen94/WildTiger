using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FirePoint : MonoBehaviour
{


    public int Woods;
    public GameObject[] Woods_Planks;
    public GameObject FireParticles;
    public Level_Manager lvl;
    public GameObject Pointer;
    public void ON()
    {
        Pointer.SetActive(true);
        gameObject.GetComponent<BoxCollider>().enabled = true;
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Animal")
        {
            gameObject.GetComponent<BoxCollider>().enabled = false;
            Pointer.SetActive(false);
            LevelLoader.Instance.SelectedTiger.GetComponent<AnimalScript>().Planks.SetActive(false);
            lvl.update_stats_E("Sticks");
            if (Woods == 3)
            {
                Woods_Planks[Woods].SetActive(true);
                FireParticles.SetActive(true);
                lvl.End_Level();

                return;
            }
            lvl.FireStick[Woods + 1].SetActive(true);
            Woods = Woods + 1;
            Woods_Planks[Woods].SetActive(true);
    
        }
    }
}
