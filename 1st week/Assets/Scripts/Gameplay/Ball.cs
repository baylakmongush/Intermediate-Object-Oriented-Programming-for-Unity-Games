using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ball : MonoBehaviour {

	Rigidbody2D rb;
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
	float angle;
=======
	float angle = 20f;
>>>>>>> 4446c978e4b1ee518de5ebea2f70803a6f1f6a72
=======
	float angle = 20f;
>>>>>>> 4446c978e4b1ee518de5ebea2f70803a6f1f6a72
=======
	float angle = 20f;
>>>>>>> 4446c978e4b1ee518de5ebea2f70803a6f1f6a72
	Vector2 direction;

	// Use this for initialization
	void Start () {
		rb = GetComponent<Rigidbody2D>();
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
		angle = 20f;
=======
>>>>>>> 4446c978e4b1ee518de5ebea2f70803a6f1f6a72
=======
>>>>>>> 4446c978e4b1ee518de5ebea2f70803a6f1f6a72
=======
>>>>>>> 4446c978e4b1ee518de5ebea2f70803a6f1f6a72
	}
	
	// Update is called once per frame
	void Update () {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
		direction = new Vector2(Mathf.Cos(Mathf.PI * angle / 180), Mathf.Sin(Mathf.PI * angle / 180));
=======
		direction = new Vector2(Mathf.Cos(angle), Mathf.Sin(angle));
>>>>>>> 4446c978e4b1ee518de5ebea2f70803a6f1f6a72
=======
		direction = new Vector2(Mathf.Cos(angle), Mathf.Sin(angle));
>>>>>>> 4446c978e4b1ee518de5ebea2f70803a6f1f6a72
=======
		direction = new Vector2(Mathf.Cos(angle), Mathf.Sin(angle));
>>>>>>> 4446c978e4b1ee518de5ebea2f70803a6f1f6a72
		rb.AddForce(direction * ConfigurationUtils.BallImpulseForce);
	}

    public void SetDirection(Vector2 direction)
    {
		rb.velocity = rb.velocity.magnitude * direction;
    }
}
