using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RPG : MonoBehaviour
{

    public MalbersAnimations.Controller.Jump JumpState;

    private void OnTriggerEnter(Collider other)
    {

        //For Health Increase
        if (other.gameObject.tag == "Health")
        {
            GetComponentInParent<AnimalScript>().PlayerHealth.value = GetComponentInParent<AnimalScript>().PlayerHealth.value+0.10f;
            Destroy(other.gameObject);
        }

        //for Super Jump
        if (other.gameObject.tag == "Jump")
        {
            Debug.Log(JumpState.jumpProfiles[0].HeightMultiplier);
            //JumpState.jumpProfiles<>.HeightMultiplier = 10f;
            //JumpState.jumpProfiles[0].HeightMultiplier
            Destroy(other.gameObject);
        }

    }
}
