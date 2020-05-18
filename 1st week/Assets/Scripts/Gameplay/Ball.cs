using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ball : MonoBehaviour {

	Rigidbody2D rb;
	float angle;
	Vector2 direction;

	// Use this for initialization
	void Start () {
		rb = GetComponent<Rigidbody2D>();
		angle = 20;
        direction = new Vector2(Mathf.Cos(angle), Mathf.Sin(angle));
		rb.AddForce(direction * ConfigurationUtils.BallImpulseForce);
	}
	
	// Update is called once per frame
	void Update () {
	}

    public void SetDirection(Vector2 direction)
    {
		Rigidbody2D rb2d = GetComponent<Rigidbody2D>();
		rb2d.velocity = rb2d.velocity.magnitude * direction;
    }
}
