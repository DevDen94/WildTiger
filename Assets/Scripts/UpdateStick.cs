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
           
       
           
            
            AnimalScript.Instance.Planks.SetActive(true);
            Level_Manager.instance.FireTriggerPoint.SetActive(true); 
            Level_Manager.instance.FireTriggerPoint.gameObject.GetComponent<FirePoint>().ON();
          
            Invoke("Callled", 0.3f);
            gameObject.GetComponent<MapMarker>().isActive = false;
           // GetComponent<CompassProPOI>().enabled = false;
        }
        
    }
    void Callled()
    {
        gameObject.SetActive(false);
    }
}
