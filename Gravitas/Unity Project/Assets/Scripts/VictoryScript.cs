using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class VictoryScript : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.gameObject.tag == "Player")
        {
            this.GetComponent<AudioSource>().Play();
        }

        Invoke("backToTitleScreen",2);
    }

    void backToTitleScreen()
    {
        SceneManager.LoadScene("Title Screen");
    }
}
