using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Paddle : MonoBehaviour {

	Rigidbody2D rb;
	float moveX;
	Vector3 position;
	// Use this for initialization
	void Start () {
		rb = GetComponent<Rigidbody2D>();
	}
	
	// Update is called once per frame
	void FixedUpdate () {
		moveX = Input.GetAxis("Horizontal");
        if (moveX != 0)
        {
			position = transform.position;
			position.x += moveX * ConfigurationUtils.PaddleMoveUnitsPerSecond;
			rb.MovePosition(position);
        }
	}
}
