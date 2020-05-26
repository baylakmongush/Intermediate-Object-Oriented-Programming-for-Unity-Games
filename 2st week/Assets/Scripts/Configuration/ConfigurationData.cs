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
    static float paddleMoveUnitsPerSecond;
    static float ballImpulseForce;
    static float lifeTime;
    static float minSpawnTime;
    static float maxSpawnTime;

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
