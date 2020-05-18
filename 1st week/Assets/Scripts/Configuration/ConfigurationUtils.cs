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
    public static float PaddleMoveUnitsPerSecond
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        get { return 10f; }
=======
        get { return 10; }
>>>>>>> 4446c978e4b1ee518de5ebea2f70803a6f1f6a72
=======
        get { return 10; }
>>>>>>> 4446c978e4b1ee518de5ebea2f70803a6f1f6a72
=======
        get { return 10; }
>>>>>>> 4446c978e4b1ee518de5ebea2f70803a6f1f6a72
    }

    public static float BallImpulseForce
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        get { return 200f; }
    }

    public static ConfigurationData configurationData;

=======
        get { return 200; }
    }

>>>>>>> 4446c978e4b1ee518de5ebea2f70803a6f1f6a72
=======
        get { return 200; }
    }

>>>>>>> 4446c978e4b1ee518de5ebea2f70803a6f1f6a72
=======
        get { return 200; }
    }

>>>>>>> 4446c978e4b1ee518de5ebea2f70803a6f1f6a72
    #endregion
    
    /// <summary>
    /// Initializes the configuration utils
    /// </summary>
    public static void Initialize()
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        configurationData = new ConfigurationData();
=======

>>>>>>> 4446c978e4b1ee518de5ebea2f70803a6f1f6a72
=======

>>>>>>> 4446c978e4b1ee518de5ebea2f70803a6f1f6a72
=======

>>>>>>> 4446c978e4b1ee518de5ebea2f70803a6f1f6a72
    }
}
