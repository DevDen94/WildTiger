using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UpdateStick : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Animal")
        {
            
           gameObject.SetActive(false);
            AnimalScript.Instance.Planks.SetActive(true);
            Level_Manager.instance.FireTriggerPoint.SetActive(true); 
            Level_Manager.instance.FireTriggerPoint.gameObject.GetComponent<FirePoint>().ON();
        }
    }
}
