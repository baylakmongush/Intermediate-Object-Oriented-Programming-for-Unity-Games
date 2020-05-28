using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BonusBlock : Block
{
    // Start is called before the first frame update
    private void Start()
    {
        Block.score = ConfigurationUtils.BonusBlockPoints;   
    }
}
