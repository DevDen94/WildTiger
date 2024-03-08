using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InternetChecker : MonoBehaviour
{

    public GameObject CanvasInternetError;
    public AddresableScenes ad_scene;
    public bool Is_test;

    private void Awake()
    {
       
       // DontDestroyOnLoad(this);
    }



    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(CheckForInternet());
        Is_test = false;
    }

    IEnumerator CheckForInternet()
    {
        yield return new WaitForSeconds(0.5f);
        
        if (Application.internetReachability == NetworkReachability.NotReachable)
        {
            //Time.timeScale = 0f;
            
            CanvasInternetError.SetActive(true);
            Is_test = true;
        }
        else
        {
            if (Is_test == true)
            {
                //Debug.Log("----working---");
                //Time.timeScale = 1f;
                CanvasInternetError.SetActive(false);
                ad_scene.Start();
                Is_test = false;
            }
          
        }
        StartCoroutine(CheckForInternet());
    }
}
