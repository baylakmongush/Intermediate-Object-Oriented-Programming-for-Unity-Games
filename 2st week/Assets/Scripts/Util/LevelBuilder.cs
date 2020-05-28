using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelBuilder : MonoBehaviour
{
    [SerializeField]
    GameObject paddlePrefab;

    [SerializeField]
    GameObject prefabStandartBlock;

    [SerializeField]
    GameObject prefabBonusBlock;

    [SerializeField]
    GameObject prefabPickupBlock;

    private List<GameObject> blockPrefabs = new List<GameObject>();
    private List<GameObject> randomBlocks = new List<GameObject>();

    private List<PickupEffect> pickupBlocks = new List<PickupEffect>();
    private List<PickupEffect> randomPickupBlocks = new List<PickupEffect>();
    private PickupEffect pickupEffect;

    private GameObject randomBlockPrefab;
    float x;
    float y;
    float temp;
    int i = 0;
    bool flag = true;

    void Start()
    {
        Instantiate(paddlePrefab);
        y = prefabStandartBlock.transform.position.y;
    }

    void Update()
    {
        if (flag)
        {
            while (i < 3)
            {
                temp = ScreenUtils.ScreenLeft + 0.5f;
                x = temp;
                while (x < ScreenUtils.ScreenRight)
                {
                    x = temp;
                    PickRandomBlock();
                    Instantiate(randomBlockPrefab, new Vector3(x, y,
                                                            prefabStandartBlock.transform.position.z), Quaternion.identity);
                    x++;
                    temp = x;
                }
                y--;
                i++;
            }
            flag = false;
        }
    }

    private void PickRandomBlock()
    {
        for (int i = 0; i < ConfigurationUtils.StandartBlockProbability; i++)
        {
            blockPrefabs.Add(prefabStandartBlock);
        }

        for (int i = 0; i < ConfigurationUtils.BonusBlockProbability; i++)
        {
            blockPrefabs.Add(prefabBonusBlock);
        }

        float totalPickupBlocks = ConfigurationUtils.FreezerBlockProbability + ConfigurationUtils.SpeedupBlockProbability;
        for (int i = 0; i < totalPickupBlocks; i++)
        {
            blockPrefabs.Add(prefabPickupBlock);
            RandomPickupEffect();
        }

        int randomIndex = 0;
        while (blockPrefabs.Count > 0)
        {
            randomIndex = Random.Range(0, blockPrefabs.Count);
            randomBlocks.Add(blockPrefabs[randomIndex]);
            blockPrefabs.RemoveAt(randomIndex);
        }

        randomBlockPrefab = randomBlocks[Random.Range(0, randomBlocks.Count - 1)];
    }

    private void RandomPickupEffect()
    {
        for (int i = 0; i < ConfigurationUtils.FreezerBlockProbability; i++)
        {
            pickupBlocks.Add(PickupEffect.Freezer);
        }

        for (int i = 0; i < ConfigurationUtils.SpeedupBlockProbability; i++)
        {
            pickupBlocks.Add(PickupEffect.Speedup);
        }

        int randomIndex = 0;
        while (pickupBlocks.Count > 0)
        {
            randomIndex = Random.Range(0, pickupBlocks.Count);
            randomPickupBlocks.Add(pickupBlocks[randomIndex]);
            pickupBlocks.RemoveAt(randomIndex);
        }

        pickupEffect = randomPickupBlocks[Random.Range(0, randomPickupBlocks.Count)];
    }
}
