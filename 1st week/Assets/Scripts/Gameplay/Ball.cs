using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ball : MonoBehaviour {

	Rigidbody2D rb;
	float angle = 20f;
	Vector2 direction;

	// Use this for initialization
	void Start () {
		rb = GetComponent<Rigidbody2D>();
	}
	
	// Update is called once per frame
	void Update () {
		direction = new Vector2(Mathf.Cos(angle), Mathf.Sin(angle));
		rb.AddForce(direction * ConfigurationUtils.BallImpulseForce);
	}

    public void SetDirection(Vector2 direction)
    {
		rb.velocity = rb.velocity.magnitude * direction;
    }
}
