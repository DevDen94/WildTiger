using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemsData : MonoBehaviour
{
    public List<GameObject> GlassItems;
    public List<GameObject> LocketItems;
    public List<GameObject> CapsItems;
    public void Selected()
    {
        int glassitemIndex = PlayerPrefs.GetInt("GlassitemIndex", -1);
        if (glassitemIndex >= 0)
        {
            GlassItems[glassitemIndex].SetActive(true);
        }
        else
        {
            disableItems(GlassItems);
        }

        int LocketitemIndex = PlayerPrefs.GetInt("LocketitemIndex", -1);
        if (LocketitemIndex >= 0)
        {
            LocketItems[LocketitemIndex].SetActive(true);
        }
        else
        {
            disableItems(LocketItems);
        }

        int CapsitemIndex = PlayerPrefs.GetInt("CapsitemIndex", -1);
        if (CapsitemIndex >= 0)
        {
            CapsItems[CapsitemIndex].SetActive(true);
        }
        else
        {
            disableItems(CapsItems);
        }
    }
    private void OnEnable()
    {
        ///Selected();
    }
    void disableItems(List<GameObject> items)
    {
        foreach (var item in items)
        {
            item.SetActive(false);
        }
    }
    public void enableHat(int index)
    {
        int CapsitemIndex = index;
        Debug.LogError("value" + index);
        if (CapsitemIndex >= 0)
        {
            for (int i = 0; i < CapsItems.Count; i++)
            {
            CapsItems[i].SetActive(i == CapsitemIndex);

            }
        }
        else
        {
            disableItems(CapsItems);
        }
    }
    public void Enablelockets(int index)
    {
        int LocketitemIndex = index;
        Debug.LogError("value" + index);

        if (LocketitemIndex >= 0)
        {
            for (int i = 0; i < LocketItems.Count; i++)
            {
                LocketItems[i].SetActive(i == LocketitemIndex);

            }
        }
        else
        {
            disableItems(LocketItems);
        }
    }

    public void enableGlasses(int index)
    {
        int glassitemIndex = index;
        Debug.LogError("value" + index);

        if (glassitemIndex >= 0)
        {
            for (int i = 0; i < GlassItems.Count; i++)
            {
                GlassItems[i].SetActive(i == glassitemIndex);

            }
        }
        else
        {
            disableItems(GlassItems);
        }
    }
}
