/*
 * Address: 0x8057166C
 * REL Offset: 0x0005EDD0
 * Function: processWall__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoRCQ25Field7ColInfoPUl
 * Size: 58 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ processWall__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoRCQ25Field7ColInfoPUl(/* unknown params */)
{

    /* 0x5EDD0 */ f1 = f0 + f5;
    /* 0x5EDD4 */ f0 = *(f32*)(r1 + 0x7C);
    /* 0x5EDD8 */ *(f32*)(r3 + 0x34) = f1;
    /* 0x5EDDC */ f1 = *(f32*)(r3 + 0x38);
    /* 0x5EDE0 */ f1 = f1 + f3;
    /* 0x5EDE4 */ *(f32*)(r3 + 0x38) = f1;
    /* 0x5EDE8 */ f1 = *(f32*)(r3 + 0x3C);
    /* 0x5EDEC */ f1 = f1 + f7;
    /* 0x5EDF0 */ *(f32*)(r3 + 0x3C) = f1;
    /* 0x5EDF4 */ f1 = *(f32*)(r3 + 0x40);
    /* 0x5EDF8 */ f1 = f1 + f5;
    /* 0x5EDFC */ *(f32*)(r3 + 0x40) = f1;
    /* 0x5EE00 */ f1 = *(f32*)(r3 + 0x44);
    /* 0x5EE04 */ f1 = f1 + f3;
    /* 0x5EE08 */ *(f32*)(r3 + 0x44) = f1;
    /* 0x5EE0C */ r3 = r30 + 0x4;
    /* 0x5EE10 */ f5 = *(f32*)(r1 + 0x80);
    /* 0x5EE14 */ f3 = *(f32*)(r1 + 0x84);
    /* 0x5EE18 */ f1 = *(f32*)(r1 + 0x88);
    /* 0x5EE1C */ f5 = f6 * f5;
    /* 0x5EE20 */ f3 = f6 * f3;
    /* 0x5EE24 */ f1 = f6 * f1;
    /* 0x5EE28 */ f4 = f4 + f5;
    /* 0x5EE2C */ f2 = f2 + f3;
    /* 0x5EE30 */ f0 = f0 + f1;
    /* 0x5EE34 */ *(f32*)(r1 + 0x5C) = f4;
    /* 0x5EE38 */ *(f32*)(r1 + 0x60) = f2;
    /* 0x5EE3C */ r5 = *(u32*)(r1 + 0x5C);
    /* 0x5EE40 */ *(f32*)(r1 + 0x64) = f0;
    /* 0x5EE44 */ r4 = *(u32*)(r1 + 0x60);
    /* 0x5EE48 */ r0 = *(u32*)(r1 + 0x64);
    /* 0x5EE4C */ *(u32*)(r1 + 0x50) = r5;
    /* 0x5EE50 */ *(u32*)(r1 + 0x54) = r4;
    /* 0x5EE54 */ *(u32*)(r1 + 0x58) = r0;
    /* 0x5EE58 */ sub_0x0001F430();
    /* 0x5EE5C */ r4 = 0x00000;
    /* 0x5EE60 */ r0 = ROTL(r3, 2) & MASK(0x16, 0x1d);
    /* 0x5EE64 */ r4 = *(r4);
    /* 0x5EE68 */ r3 = r31;
    /* 0x5EE6C */ r4 = *(u32*)(r4 + 0x68);
    /* 0x5EE70 */ r18 = *(u32*)(r4 + r0);
    /* 0x5EE74 */ sub_0x0001F430();
    /* 0x5EE78 */ r0 = r3;
    /* 0x5EE7C */ r3 = r18;
    /* 0x5EE80 */ r4 = r1 + 0x5C;
    /* 0x5EE84 */ // clrlwi r5, r0, 0x18
    /* 0x5EE88 */ sub_0x00137198();
    /* 0x5EE8C */ r3 = 0x00000;
    /* 0x5EE90 */ r4 = *(u32*)(r30 + 0x4);
    /* 0x5EE94 */ r29 = *(r3);
    /* 0x5EE98 */ r3 = *(r31);
    /* 0x5EE9C */ r0 = *(u32*)(r29 + 0xB90);
    /* 0x5EEA0 */ r4 = *(u32*)(r4 + 0x4);
    /* 0x5EEA4 */ r5 = *(u32*)(r3 + 0x4);
    /* 0x5EEA8 */ // rlwinm. r27, r0, 0x1f, 0x1f, 0x1f
    /* 0x5EEAC */ r6 = *(u32*)(r4 + 0xC);
    /* 0x5EEB0 */ r7 = *(u32*)(r5 + 0xC);
    /* 0x5EEB4 */ r3 = *(u32*)(r4 + 0x8);
}
