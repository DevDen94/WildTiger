using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public int TotalEnemyInLevel;

    public GameObject PausePanel,Complete,Fail;

    public static GameManager Instance;

    private void Awake()
    {
        Instance = this;
    }










}
