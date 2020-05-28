using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallSpawner : MonoBehaviour {

	[SerializeField]
	private GameObject prefabBall;
	Timer spawnTimer;
	bool retrySpawn = false;
	Vector2 spawnLocationMin;
	Vector2 spawnLocationMax;

	// Use this for initialization
	void Start () {
		GameObject tempBall = Instantiate(prefabBall, Vector3.zero, Quaternion.identity);
		float ballColliderHalfWidth = tempBall.transform.lossyScale.x / 2;
		float ballColliderHalfHeight = tempBall.transform.lossyScale.y / 2;
		spawnLocationMin = new Vector2(
			tempBall.transform.position.x - ballColliderHalfWidth,
			tempBall.transform.position.y - ballColliderHalfHeight);
		spawnLocationMax = new Vector2(
			tempBall.transform.position.x + ballColliderHalfWidth,
			tempBall.transform.position.y + ballColliderHalfHeight);
		Destroy(tempBall);
		spawnTimer = GetComponent<Timer>();
		spawnTimer.Duration = 1f;
		spawnTimer.Run();
	}
	
	// Update is called once per frame
	void Update () {
		if (spawnTimer.Finished || retrySpawn)
        {
			SpawnBall();
			spawnTimer.Duration = Random.Range(ConfigurationUtils.MinSpawnTime, ConfigurationUtils.MaxSpawnTime); ;
			spawnTimer.Run();
		}
	}

	public void SpawnBall()
    {
		if (Physics2D.OverlapArea(spawnLocationMin, spawnLocationMax) == null)
		{
			retrySpawn = false;
			Vector2 spawnPosition = new Vector2(Random.Range(ScreenUtils.ScreenLeft, ScreenUtils.ScreenRight),
												Random.Range(0, ScreenUtils.ScreenTop));
			Instantiate(prefabBall, spawnPosition, Quaternion.identity);
		}
		else
		{
			retrySpawn = true;
		}
	}
}
