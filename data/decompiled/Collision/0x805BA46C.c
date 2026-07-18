/*
 * Address: 0x805BA46C
 * REL Offset: 0x000A7BD0
 * Function: reset__Q24Kart6HitboxFv
 * Size: 14 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ reset__Q24Kart6HitboxFv(void)
{

    /* 0xA7BD0 */ f0 = *(f32*)(r3 + 0x0);
    /* 0xA7BD4 */ r3 = r6 + r0;
    /* 0xA7BD8 */ *(u32*)(r6 + 0x28) = r4;
    /* 0xA7BDC */ r0 = r3 + 0x10;
    /* 0xA7BE0 */ r30 = 0x00000;
    /* 0xA7BE4 */ *(u32*)(r6 + 0x1C) = r0;
    /* 0xA7BE8 */ *(f32*)(r6 + 0x20) = f0;
    /* 0xA7BEC */ *(u8*)(r6 + 0x24) = r5;
    /* 0xA7BF0 */ goto loc_0x003C;
    /* 0xA7BF4 */ r3 = *(r30);
    /* 0xA7BF8 */ // clrlwi r4, r29, 0x18
    /* 0xA7BFC */ sub_0xFFFFFFFFFFFD5CD4();
    /* 0xA7C00 */ r4 = 0x1 /* 1 */;
    /* 0xA7C04 */ sub_0xFFFFFFFFFFFD72E0();
}
