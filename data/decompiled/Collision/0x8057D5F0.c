/*
 * Address: 0x8057D5F0
 * REL Offset: 0x0006AD54
 * Function: PlayerSub10_computeWallCollisionSpeedFactor
 * Size: 54 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

void PlayerSub10_computeWallCollisionSpeedFactor(/* unknown params */)
{

    /* 0x6AD54 */ f0 = *(f32*)(r1 + 0x2C);
    /* 0x6AD58 */ *(f32*)(r29 + 0x44) = f0;
    /* 0x6AD5C */ f0 = *(f32*)(r1 + 0x30);
    /* 0x6AD60 */ *(f32*)(r29 + 0x48) = f0;
    /* 0x6AD64 */ f0 = *(f32*)(r1 + 0x34);
    /* 0x6AD68 */ *(f32*)(r29 + 0x4C) = f0;
    /* 0x6AD6C */ goto loc_0x0034;
    /* 0x6AD70 */ f0 = *(f32*)(r29 + 0x44);
    /* 0x6AD74 */ *(f32*)(r1 + 0x2C) = f0;
    /* 0x6AD78 */ f0 = *(f32*)(r29 + 0x48);
    /* 0x6AD7C */ *(f32*)(r1 + 0x30) = f0;
    /* 0x6AD80 */ f0 = *(f32*)(r29 + 0x4C);
    /* 0x6AD84 */ *(f32*)(r1 + 0x34) = f0;
    /* 0x6AD88 */ r3 = *(r29);
    /* 0x6AD8C */ f30 = *(f32*)(r30 + 0x4);
    /* 0x6AD90 */ r3 = *(u32*)(r3 + 0x4);
    /* 0x6AD94 */ r4 = *(u32*)(r3 + 0x8);
    /* 0x6AD98 */ // rlwinm. r0, r4, 0, 0x16, 0x16
    /* 0x6AD9C */ if (0x88 != 0) goto loc_0x0088;
    /* 0x6ADA0 */ r3 = *(u32*)(r3 + 0x4);
    /* 0x6ADA4 */ // rlwinm. r0, r3, 0, 0xb, 0xb
    /* 0x6ADA8 */ if (0xf4 != 0) goto loc_0x00F4;
    /* 0x6ADAC */ // rlwinm. r0, r3, 0, 0, 0
    /* 0x6ADB0 */ if (0xf4 != 0) goto loc_0x00F4;
    /* 0x6ADB4 */ // rlwinm. r0, r3, 0, 2, 2
    /* 0x6ADB8 */ if (0xf4 != 0) goto loc_0x00F4;
    /* 0x6ADBC */ // rlwinm. r0, r4, 0, 0x15, 0x15
    /* 0x6ADC0 */ if (0xf4 != 0) goto loc_0x00F4;
    /* 0x6ADC4 */ // rlwinm. r0, r4, 0, 0x12, 0x12
    /* 0x6ADC8 */ if (0x88 == 0) goto loc_0x0088;
    /* 0x6ADCC */ // lha r3, 0x12c(r29)
    /* 0x6ADD0 */ // lha r0, 0xc(r30)
    /* 0x6ADD4 */ // cmpw r3, r0
    /* 0x6ADD8 */ if (0xf4 <= 0) goto loc_0x00F4;
    /* 0x6ADDC */ r3 = r29;
    /* 0x6ADE0 */ sub_0x00013734();
    /* 0x6ADE4 */ f3 = *(f32*)(r1 + 0x2C);
    /* 0x6ADE8 */ f2 = *(f32*)(r3 + 0x0);
    /* 0x6ADEC */ f1 = *(f32*)(r1 + 0x30);
    /* 0x6ADF0 */ f0 = *(f32*)(r3 + 0x4);
    /* 0x6ADF4 */ f2 = f3 * f2;
    /* 0x6ADF8 */ f4 = *(f32*)(r1 + 0x34);
    /* 0x6ADFC */ f1 = f1 * f0;
    /* 0x6AE00 */ f3 = *(f32*)(r3 + 0x8);
    /* 0x6AE04 */ f0 = *(f32*)(r30 + 0x8);
    /* 0x6AE08 */ f3 = f4 * f3;
    /* 0x6AE0C */ f4 = *(f32*)(r30 + 0x0);
    /* 0x6AE10 */ f1 = f2 + f1;
    /* 0x6AE14 */ f2 = *(f32*)(r30 + 0x4);
    /* 0x6AE18 */ f1 = f3 + f1;
    /* 0x6AE1C */ f1 = fabsf(f1);
    /* 0x6AE20 */ f1 = fabsf(f1);
    /* 0x6AE24 */ f0 = f0 * f1;
    /* 0x6AE28 */ f30 = f30 - f0;
}
