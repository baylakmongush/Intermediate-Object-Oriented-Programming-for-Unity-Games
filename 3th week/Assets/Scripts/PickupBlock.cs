using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PickupBlock : Block
{
    [SerializeField]
    private Sprite[] pickupSprite;

    private SpriteRenderer spriteRenderer;

    private PickupEffect pickupBlockEffect;

    public PickupEffect PickupBlockEffect
    {
        set {
            pickupBlockEffect = value;
            if (pickupBlockEffect == PickupEffect.Freezer)
                spriteRenderer.sprite = pickupSprite[0];
            else
                spriteRenderer.sprite = pickupSprite[1];
        }
    }

    private void Awake()
    {
        spriteRenderer = GetComponent<SpriteRenderer>();
    }

    private void Start()
    {
        score = ConfigurationUtils.PickupBlockPoints;
    }
}
