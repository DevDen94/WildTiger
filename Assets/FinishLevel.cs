using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FinishLevel : MonoBehaviour
{
   public void FinishLevel_()
    {
        LevelLoader.Instance.CompletePanelFunc();
    }
}
