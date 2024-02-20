using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class cameraAssigner : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        GetComponent<CompassNavigatorPro.CompassPro>().cameraMain = Camera.main; 
    }

   
}
