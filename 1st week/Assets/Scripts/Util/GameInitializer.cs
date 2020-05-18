using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Initializes the game
/// </summary>
public class GameInitializer : MonoBehaviour 
{
    /// <summary>
    /// Awake is called before Start
    /// </summary>
	void Awake()
    {
        // initialize screen utils
        ScreenUtils.Initialize();
<<<<<<< HEAD
        ConfigurationUtils.Initialize();
=======
>>>>>>> 4446c978e4b1ee518de5ebea2f70803a6f1f6a72
    }
}
