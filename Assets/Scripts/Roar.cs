using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Roar : MonoBehaviour
{
    public AudioSource RoaR;
    public AudioSource jump;
    public AudioSource run;


    public void PlayRoarSound()
    {
      //  Debug.LogError("Roar");
        RoaR.Play();
    }
    public void PlayjumpSound()
    {
       // Debug.LogError("Roar");
        jump.Play();
    }
     public void PlayrunSound()
    {
        //Debug.LogError("Roar");
        run.Play();
    }
    public void StoprunSound()
    {
        //Debug.LogError("Roar");
        run.Stop();
    }
}
