/*
 * Address: 0x80570E18
 * REL Offset: 0x0005E57C
 * Function: processMovingWater__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoPUl
 * Size: 12 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

f32 processMovingWater__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoPUl(/* unknown params */)
{

    /* 0x5E57C */ f1 = f1 * f1;
    /* 0x5E580 */ f2 = *(f32*)(r31 + 0x20);
    /* 0x5E584 */ f0 = f0 * f0;
    /* 0x5E588 */ f2 = f2 * f2;
    /* 0x5E58C */ f0 = f1 + f0;
    /* 0x5E590 */ f0 = f2 + f0;
    /* 0x5E594 */ *(u32*)(r0 + r29) = f0;
    /* 0x5E598 */ r23 = r23 + 0x1;
    /* 0x5E59C */ // cmplwi r23, 2
    /* 0x5E5A0 */ if (0xffffffffffffff58 < 0) goto loc_0xFFFFFFFFFFFFFF58;
    /* 0x5E5A4 */ f1 = *(f32*)(r1 + 0x8);
    /* 0x5E5A8 */ f0 = *(f32*)(r1 + 0xC);
}
