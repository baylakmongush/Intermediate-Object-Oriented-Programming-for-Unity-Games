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
		angle = 20f;
	}
	
	// Update is called once per frame
	void Update () {
		direction = new Vector2(Mathf.Cos(Mathf.PI * angle / 180), Mathf.Sin(Mathf.PI * angle / 180));
		rb.AddForce(direction * ConfigurationUtils.BallImpulseForce);
	}

    public void SetDirection(Vector2 direction)
    {
		rb.velocity = rb.velocity.magnitude * direction;
    }
}
