using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimalScript : MonoBehaviour
{
    public GameObject JoystickMovement;

    public void DiasbaleJoystick()
    {

    }
    IEnumerator EnableJoystick()
    {
        yield return new WaitForSeconds(5f);


    }




}
