using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using System;

/// <summary>
/// A container for the configuration data
/// </summary>
public class ConfigurationData
{
    #region Fields

    const string ConfigurationDataFileName = "ConfigurationData.csv";

    // configuration data
    static float paddleMoveUnitsPerSecond = 10f;
    static float ballImpulseForce = 200f;
    static float lifeTime = 10f;
    static float minSpawnTime = 5f;
    static float maxSpawnTime = 10f;
    static int standartBlockPoints = 10;
    static int bonusBlockPoints = 15;
    static int pickupBlockPoints = 20;
    static int standartBlockProbability = 50;
    static int bonusBlockProbability = 25;
    static int freezerBlockProbability = 10;
    static int speedupBlockProbability = 10;
    static int ballLeft = 10;

    #endregion

    #region Properties

    /// <summary>
    /// Gets the paddle move units per second
    /// </summary>
    /// <value>paddle move units per second</value>
    public float PaddleMoveUnitsPerSecond
    {
        get { return paddleMoveUnitsPerSecond; }
    }

    /// <summary>
    /// Gets the impulse force to apply to move the ball
    /// </summary>
    /// <value>impulse force</value>
    public float BallImpulseForce
    {
        get { return ballImpulseForce; }    
    }

    public float LifeTime
    {
        get { return lifeTime; }
    }

    public float MinSpawnTime
    {
        get { return minSpawnTime; }
    }

    public float MaxSpawnTime
    {
        get { return maxSpawnTime; }
    }

    public int StandartBlockPoints
    {
        get { return standartBlockPoints; }
    }

    public int BonusBlockPoints
    {
        get { return bonusBlockPoints; }
    }

    public int PickupBlockPoints
    {
        get { return pickupBlockPoints; }
    }

    public int StandartBlockProbability
    {
        get { return standartBlockProbability; }
    }

    public int BonusBlockProbability
    {
        get { return bonusBlockProbability; }
    }

    public int SpeedupBlockProbability
    {
        get { return speedupBlockProbability; }
    }

    public int FreezerBlockProbability
    {
        get { return freezerBlockProbability; }
    }

    public int BallLeft
    {
        get { return ballLeft; }
    }

    #endregion

    #region Constructor

    /// <summary>
    /// Constructor
    /// Reads configuration data from a file. If the file
    /// read fails, the object contains default values for
    /// the configuration data
    /// </summary>
    public ConfigurationData()
    {
        StreamReader input = null;
        try
        {
            // open and read the csv file
            input = File.OpenText(Path.Combine(Application.streamingAssetsPath, ConfigurationDataFileName));
            string names = input.ReadLine();
            string value = input.ReadLine();
            string[] values = value.Split(',');
            paddleMoveUnitsPerSecond = float.Parse(values[0]);
            ballImpulseForce = float.Parse(values[1]);
            lifeTime = float.Parse(values[2]);
            minSpawnTime = float.Parse(values[3]);
            maxSpawnTime = float.Parse(values[4]);
            standartBlockPoints = int.Parse(values[5]);
            bonusBlockPoints = int.Parse(values[6]);
            pickupBlockPoints = int.Parse(values[7]);
            standartBlockProbability = int.Parse(values[8]);
            bonusBlockProbability = int.Parse(values[9]);
            speedupBlockProbability = int.Parse(values[10]);
            freezerBlockProbability = int.Parse(values[11]);
            ballLeft = int.Parse(values[12]);
        }
        catch (Exception e)
        {

        }
        finally
        {
            // close the file once done
            if (input != null)
            {
                input.Close();
            }
        }
    }
    #endregion
}
