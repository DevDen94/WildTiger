using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CutsceneScript_lvl1 : MonoBehaviour
{
    public GameObject SmokeParticles;
    public Animator Tiger;
    public AudioSource effect;
   
    public void ShiftSmoke_Particles()
    {
        effect.enabled = true;
        SmokeParticles.SetActive(true);
        Tiger.SetBool("Roar", true);

    }

}
