using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Paddle : MonoBehaviour {

	Rigidbody2D rb;
	float moveX;
	Vector3 position;
	BoxCollider2D boxColl;
	float halfWidth;
	const float BounceAngleHalfRange = 60f;

	// Use this for initialization
	void Start () {
		rb = GetComponent<Rigidbody2D>();
		boxColl = GetComponent<BoxCollider2D>();
		halfWidth = boxColl.size.x / 2;
		Debug.Log(halfWidth);
	}
	
	// Update is called once per frame
	void FixedUpdate () {
		moveX = Input.GetAxis("Horizontal");
        if (moveX != 0)
        {
			position = rb.transform.position;
			position.x += moveX * ConfigurationUtils.PaddleMoveUnitsPerSecond * Time.fixedDeltaTime;
			position.x = CalculateClampedX(position.x);
			rb.MovePosition(position);
        }
	}

    float   CalculateClampedX(float x)
	{
		if (x - halfWidth < ScreenUtils.ScreenLeft || x + halfWidth > ScreenUtils.ScreenRight)
			return transform.position.x;
		return (x);
	}

	/// <summary>
	/// Detects collision with a ball to aim the ball
	/// </summary>
	/// <param name="coll">collision info</param>
	void OnCollisionEnter2D(Collision2D coll)
	{
		if (coll.gameObject.CompareTag("Ball"))
		{
			// calculate new ball direction
			float ballOffsetFromPaddleCenter = transform.position.x -
				coll.transform.position.x;
			float normalizedBallOffset = ballOffsetFromPaddleCenter /
				halfWidth;
			float angleOffset = normalizedBallOffset * BounceAngleHalfRange;
			float angle = Mathf.PI / 2 + angleOffset;
			Vector2 direction = new Vector2(Mathf.Cos(angle), Mathf.Sin(angle));

			// tell ball to set direction to new direction
			Ball ballScript = coll.gameObject.GetComponent<Ball>();
			ballScript.SetDirection(direction);
		}
	}
}
