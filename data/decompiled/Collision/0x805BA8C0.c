/*
 * Address: 0x805BA8C0
 * REL Offset: 0x000A8024
 * Function: setHitboxScale__Q24Kart11HitboxGroupFf
 * Size: 18 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ setHitboxScale__Q24Kart11HitboxGroupFf(/* unknown params */)
{
    // Saved registers: r31

    /* 0xA8024 */ // stack frame setup/save/restore
    /* 0xA8028 */ local_31 = r3;
    /* 0xA802C */ sub_0xFFFFFFFFFFF9B334();
    /* 0xA8030 */ r3 = 0x00000;
    /* 0xA8034 */ r4 = local_31 + 0x10;
    /* 0xA8038 */ r3 = r3 + 0x0;
    /* 0xA803C */ *(local_31) = r3;
    /* 0xA8040 */ r0 = local_31 + 0x1C;
    /* 0xA8044 */ r3 = 0x0 /* 0 */;
    /* 0xA8048 */ *(r4) = r3;
    /* 0xA804C */ r4 = r4 + 0x4;
    /* 0xA8050 */ // cmplw r4, r0
    /* 0xA8054 */ if (0x24 < 0) goto loc_0x0024;
    /* 0xA8058 */ r4 = 0x1 /* 1 */;
    /* 0xA805C */ r3 = 0x0 /* 0 */;
    /* 0xA8060 */ r0 = 0x-1 /* -1 */;
    /* 0xA8064 */ *(u32*)(local_31 + 0x1C) = r3;
    /* 0xA8068 */ r3 = local_31;
}
