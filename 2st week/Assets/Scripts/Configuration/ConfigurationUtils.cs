using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Provides access to configuration data
/// </summary>
public static class ConfigurationUtils
{
    #region Properties

    /// <summary>
    /// Gets the paddle move units per second
    /// </summary>
    /// <value>paddle move units per second</value>

    public static ConfigurationData configurationData;

    public static float PaddleMoveUnitsPerSecond
    {
        get { return configurationData.PaddleMoveUnitsPerSecond; }
    }

    public static float BallImpulseForce
    {
        get { return configurationData.BallImpulseForce; }
    }

    public static float MinSpawnTime
    {
        get { return configurationData.MinSpawnTime; }
    }

    public static float MaxSpawnTime
    {
        get { return configurationData.MaxSpawnTime; }
    }


    public static int StandartBlockPoints
    {
        get { return configurationData.StandartBlockPoints; }
    }

    public static int BonusBlockPoints
    {
        get { return configurationData.BonusBlockPoints; }
    }

    public static int PickupBlockPoints
    {
        get { return configurationData.PickupBlockPoints; }
    }
    public static int StandartBlockProbability
    {
        get { return configurationData.StandartBlockProbability; }
    }

    public static int BonusBlockProbability
    {
        get { return configurationData.BonusBlockProbability; }
    }

    public static int SpeedupBlockProbability
    {
        get { return configurationData.SpeedupBlockProbability; }
    }

    public static int FreezerBlockProbability
    {
        get { return configurationData.FreezerBlockProbability; }
    }

    public static int BallLeft
    {
        get { return configurationData.BallLeft; }
    }
    #endregion

    /// <summary>
    /// Initializes the configuration utils
    /// </summary>
    public static void Initialize()
    {
        configurationData = new ConfigurationData();
    }
}
