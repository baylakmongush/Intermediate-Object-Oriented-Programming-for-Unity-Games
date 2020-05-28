using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ball : MonoBehaviour {

	Rigidbody2D rb;
	float angle;
	Vector2 direction;
	Timer lifeTime;
	BallSpawner ballSpawner;
	float waitedMove = 0;
	bool movingBall = false;

	// Use this for initialization
	void Start () {
		rb = GetComponent<Rigidbody2D>();
		lifeTime = GetComponent<Timer>();
		ballSpawner = FindObjectOfType<BallSpawner>();
		angle = 20;
		lifeTime.Duration = ConfigurationUtils.configurationData.LifeTime;
		lifeTime.Run();
	}
	
	// Update is called once per frame
	void Update () {
		//move ball
		waitedMove += Time.deltaTime;
		bool moveBool = waitedMove >= 1f;
		if  (moveBool && !movingBall)
        {
			direction = new Vector2(Mathf.Cos(angle), Mathf.Sin(angle));
			rb.AddForce(direction * ConfigurationUtils.BallImpulseForce);
			movingBall = true;
		}

		//destroy
        if (lifeTime.Finished)
        {
			Destroy(gameObject);
        }
		if (transform.position.y < (ScreenUtils.ScreenBottom - 2))
		{
			ballSpawner.SpawnBall();
			HUD.BallLeftScreen();
			Destroy(gameObject);
		}
	}

    public void SetDirection(Vector2 direction)
    {
		Rigidbody2D rb2d = GetComponent<Rigidbody2D>();
		rb2d.velocity = rb2d.velocity.magnitude * direction;
    }
}
