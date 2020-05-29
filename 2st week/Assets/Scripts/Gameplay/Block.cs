using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Block : MonoBehaviour {

	public static int score;

	void OnCollisionEnter2D(Collision2D coll)
    {
		if (coll.gameObject.CompareTag("Ball"))
		{
			HUD.AddScore(score);
			Destroy(gameObject);
		}

	}
}
