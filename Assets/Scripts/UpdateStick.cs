using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using CompassNavigatorPro;
public class UpdateStick : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Animal")
        {
            GetComponent<MapMarker>().isActive = false;
           
            
            AnimalScript.Instance.Planks.SetActive(true);
            Level_Manager.instance.FireTriggerPoint.SetActive(true); 
            Level_Manager.instance.FireTriggerPoint.gameObject.GetComponent<FirePoint>().ON();
            GetComponent<CompassProPOI>().enabled = false;
            gameObject.SetActive(false);
        }
    }
}
