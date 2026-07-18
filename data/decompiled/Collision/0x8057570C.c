/*
 * Address: 0x8057570C
 * REL Offset: 0x00062E70
 * Function: PlayerSub18_handleStarCollision
 * Size: 14 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ PlayerSub18_handleStarCollision(/* unknown params */)
{

    /* 0x62E70 */ r5 = 0x00000;
    /* 0x62E74 */ r4 = *(r4);
    /* 0x62E78 */ r0 = r3;
    /* 0x62E7C */ r3 = *(r5);
    /* 0x62E80 */ r5 = *(u32*)(r4 + 0xB70);
    /* 0x62E84 */ // cmpwi r5, 3
    /* 0x62E88 */ if (0x70 != 0) goto loc_0x0070;
    /* 0x62E8C */ r4 = *(u32*)(r4 + 0xB78);
    /* 0x62E90 */ // cmpwi r4, 0
    /* 0x62E94 */ if (0x48 != 0) goto loc_0x0048;
    /* 0x62E98 */ r3 = *(u32*)(r3 + 0x10);
    /* 0x62E9C */ // clrlwi r4, r0, 0x18
    /* 0x62EA0 */ // clrlwi r5, r30, 0x18
    /* 0x62EA4 */ r12 = *(r3);
}
