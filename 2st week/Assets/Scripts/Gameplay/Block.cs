using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Block : MonoBehaviour {

<<<<<<< HEAD
<<<<<<< HEAD
	public static int score;

	void OnCollisionEnter2D(Collision2D coll)
    {
		if (coll.gameObject.CompareTag("Ball"))
		{
			HUD.AddScore(score);
			Destroy(gameObject);
		}
=======
=======
>>>>>>> 1a040698e19c0385e398f06b89103fb91c42aeaa
	void OnCollisionEnter2D(Collision2D coll)
    {
		if (coll.gameObject.CompareTag("Ball"))
			Destroy(gameObject);
<<<<<<< HEAD
>>>>>>> 1a040698e19c0385e398f06b89103fb91c42aeaa
=======
>>>>>>> 1a040698e19c0385e398f06b89103fb91c42aeaa

	}
}
