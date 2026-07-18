/*
 * Address: 0x8057130C
 * REL Offset: 0x0005EA70
 * Function: updateHitboxes__Q24Kart11KartCollideFv
 * Size: 52 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ updateHitboxes__Q24Kart11KartCollideFv(void)
{

    /* 0x5EA70 */ if (0x1c != 0) goto loc_0x001C;
    /* 0x5EA74 */ r3 = *(u32*)(r30 + 0x4);
    /* 0x5EA78 */ r3 = *(u32*)(r3 + 0x4);
    /* 0x5EA7C */ r0 = *(u32*)(r3 + 0x10);
    /* 0x5EA80 */ // rlwinm. r0, r0, 0, 0x19, 0x19
    /* 0x5EA84 */ if (0x1c != 0) goto loc_0x001C;
    /* 0x5EA88 */ r27 = 0x0 /* 0 */;
    /* 0x5EA8C */ // cmpwi r27, 0
    /* 0x5EA90 */ if (0x1408 != 0) goto loc_0x1408;
    /* 0x5EA94 */ r3 = *(r31);
    /* 0x5EA98 */ r26 = 0x1 /* 1 */;
    /* 0x5EA9C */ r27 = 0x1 /* 1 */;
    /* 0x5EAA0 */ r29 = 0x1 /* 1 */;
    /* 0x5EAA4 */ r4 = *(u32*)(r3 + 0x4);
    /* 0x5EAA8 */ r18 = 0x1 /* 1 */;
    /* 0x5EAAC */ r19 = 0x1 /* 1 */;
    /* 0x5EAB0 */ r5 = 0x1 /* 1 */;
    /* 0x5EAB4 */ r0 = *(u32*)(r4 + 0x8);
    /* 0x5EAB8 */ r0 = r0 & 0x102;
    /* 0x5EABC */ if (0x68 != 0) goto loc_0x0068;
    /* 0x5EAC0 */ r3 = 0x20C0000;
    /* 0x5EAC4 */ r4 = *(u32*)(r4 + 0xC);
    /* 0x5EAC8 */ r0 = r3 + 0x6000;
    /* 0x5EACC */ // and. r0, r4, r0
    /* 0x5EAD0 */ if (0x68 != 0) goto loc_0x0068;
    /* 0x5EAD4 */ r5 = 0x0 /* 0 */;
    /* 0x5EAD8 */ // cmpwi r5, 0
    /* 0x5EADC */ if (0x84 != 0) goto loc_0x0084;
    /* 0x5EAE0 */ r3 = r31;
    /* 0x5EAE4 */ sub_0x0001F3AC();
    /* 0x5EAE8 */ // cmpwi r3, 0
    /* 0x5EAEC */ if (0x84 != 0) goto loc_0x0084;
    /* 0x5EAF0 */ r19 = 0x0 /* 0 */;
    /* 0x5EAF4 */ // cmpwi r19, 0
    /* 0x5EAF8 */ if (0xa4 != 0) goto loc_0x00A4;
    /* 0x5EAFC */ r3 = *(r31);
    /* 0x5EB00 */ r3 = *(u32*)(r3 + 0x4);
    /* 0x5EB04 */ r0 = *(u32*)(r3 + 0x8);
    /* 0x5EB08 */ // rlwinm. r0, r0, 0, 0x1b, 0x1c
    /* 0x5EB0C */ if (0xa4 != 0) goto loc_0x00A4;
    /* 0x5EB10 */ r18 = 0x0 /* 0 */;
    /* 0x5EB14 */ // cmpwi r18, 0
    /* 0x5EB18 */ if (0xc4 != 0) goto loc_0x00C4;
    /* 0x5EB1C */ r3 = *(r31);
    /* 0x5EB20 */ r3 = *(u32*)(r3 + 0x4);
    /* 0x5EB24 */ r0 = *(u32*)(r3 + 0xC);
    /* 0x5EB28 */ // rlwinm. r0, r0, 0, 0x17, 0x17
    /* 0x5EB2C */ if (0xc4 != 0) goto loc_0x00C4;
    /* 0x5EB30 */ r29 = 0x0 /* 0 */;
    /* 0x5EB34 */ // cmpwi r29, 0
    /* 0x5EB38 */ if (0xfc != 0) goto loc_0x00FC;
    /* 0x5EB3C */ r3 = *(r31);
}
