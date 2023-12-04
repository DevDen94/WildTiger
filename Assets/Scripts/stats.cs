using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
[CreateAssetMenu(fileName = "stats", menuName = "Custom/LevelData")]
public class stats : ScriptableObject
{
    public string[] Animals;
    public int[] TotalKillCount;
    public int[] killCount;

}
