using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Skid1Check : MonoBehaviour
{
    public GameObject cover;

    // Update is called once per frame
    void Update()
    {
        int var = PlayerPrefs.GetInt("SkidMarker1");
        if(var == 1)
        {
            cover.SetActive(true);
        }
        else
        {
            cover.SetActive(false);
        }
    }
}
