using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class HUD : MonoBehaviour {

    private static GameObject textScoreGO;
    private static GameObject textRemainingBallGO;

    private static TextMeshProUGUI textScore;
    private static TextMeshProUGUI textRemainingBall;

    private static int score = 0;
    private static int remainingBall;
    private static int ballLeftScreen = 0;

    private void Start()
    {
<<<<<<< HEAD
<<<<<<< HEAD
        textScoreGO = GameObject.FindGameObjectWithTag("HUD_Text");
        textScore = textScoreGO.GetComponent<TextMeshProUGUI>();
        textScore.text = "Score: " + HUD.score;

        textRemainingBallGO = GameObject.FindGameObjectWithTag("Ball_Left");
        textRemainingBall = textRemainingBallGO.GetComponent<TextMeshProUGUI>();
        remainingBall = ConfigurationUtils.BallLeft;
=======
=======
>>>>>>> 1a040698e19c0385e398f06b89103fb91c42aeaa
        textScoreGO = GameObject.FindGameObjectWithTag("TextScore");
        textScore = textScoreGO.GetComponent<TextMeshProUGUI>();
        textScore.text = "Score: " + HUD.score;

        textRemainingBallGO = GameObject.FindGameObjectWithTag("TextBallRemaining");
        textRemainingBall = textRemainingBallGO.GetComponent<TextMeshProUGUI>();
        remainingBall = ConfigurationUtils.BallsPerGame;
<<<<<<< HEAD
>>>>>>> 1a040698e19c0385e398f06b89103fb91c42aeaa
=======
>>>>>>> 1a040698e19c0385e398f06b89103fb91c42aeaa
        textRemainingBall.text = "Balls: " + remainingBall;
    }

    public static void AddScore(int score)
    {
        HUD.score += score;
        textScore.text = "Score: " + HUD.score;
    }

    public static void BallLeftScreen()
    {
        ballLeftScreen++;
        textRemainingBall.text = "Balls: " + (remainingBall - ballLeftScreen);
    }
}
