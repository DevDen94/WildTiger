using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioPlay : MonoBehaviour
{
 //   public AudioClip clip;
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag =="Animal")
        {
            this.gameObject.GetComponent<AudioSource>().enabled = true;
        }
    }
    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Animal")
        {
            this.gameObject.GetComponent<AudioSource>().enabled = false;
        }
    }
}
