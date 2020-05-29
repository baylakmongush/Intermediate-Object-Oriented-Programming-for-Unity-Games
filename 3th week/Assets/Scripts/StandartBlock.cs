using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StandartBlock : Block
{
    Block block;
    // Start is called before the first frame update
    private void Start()
    {
        score = ConfigurationUtils.StandartBlockPoints;
    }
}
