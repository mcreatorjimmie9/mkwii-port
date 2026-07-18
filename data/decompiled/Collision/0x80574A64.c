/*
 * Address: 0x80574A64
 * REL Offset: 0x000621C8
 * Function: PlayerSub18_checkItemCollision
 * Size: 21 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

f32 PlayerSub18_checkItemCollision(/* unknown params */)
{

    /* 0x621C8 */ r3 = *(u32*)(r3 + 0xC);
    /* 0x621CC */ // clrlwi. r0, r0, 0x1f
    /* 0x621D0 */ r28 = ROTL(r3, 0xa) & MASK(0x1f, 0x1f);
    /* 0x621D4 */ if (0x18 == 0) goto loc_0x0018;
    /* 0x621D8 */ f31 = *(f32*)(r31 + 0x2C);
    /* 0x621DC */ goto loc_0x001C;
    /* 0x621E0 */ f31 = *(f32*)(r31 + 0x34);
    /* 0x621E4 */ r3 = r30 + 0x4;
    /* 0x621E8 */ sub_0x0001B988();
    /* 0x621EC */ r31 = r3;
    /* 0x621F0 */ r3 = r30 + 0x4;
    /* 0x621F4 */ sub_0x0001B9A8();
    /* 0x621F8 */ f1 = f31;
    /* 0x621FC */ r0 = __builtin_clz(r28);
    /* 0x62200 */ f2 = f30;
    /* 0x62204 */ r5 = *(u32*)(r31 + 0x8);
    /* 0x62208 */ r4 = r3;
    /* 0x6220C */ r3 = r30;
    /* 0x62210 */ r6 = r29;
    /* 0x62214 */ // srwi r7, r0, 5
    /* 0x62218 */ sub_0x0003E190();
}
