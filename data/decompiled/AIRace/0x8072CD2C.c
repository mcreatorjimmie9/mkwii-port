/*
 * Address: 0x8072CD2C
 * REL Offset: 0x0021A490
 * Function: isSameTeam__Q25Enemy12AIPowAvoiderFl
 * Size: 12 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ isSameTeam__Q25Enemy12AIPowAvoiderFl(/* unknown params */)
{

    /* 0x21A490 */ goto loc_0x0118;
    /* 0x21A494 */ r3 = *(r28);
    /* 0x21A498 */ r3 = *(u32*)(r3 + 0x4);
    /* 0x21A49C */ r0 = *(u32*)(r3 + 0x8);
    /* 0x21A4A0 */ // clrlwi. r0, r0, 0x1f
    /* 0x21A4A4 */ if (0x28 != 0) goto loc_0x0028;
    /* 0x21A4A8 */ f1 = *(f32*)(r29 + 0x2C);
    /* 0x21A4AC */ f0 = *(f32*)(r31 + 0x1C);
    /* 0x21A4B0 */ f0 = f1 - f0;
    /* 0x21A4B4 */ *(f32*)(r29 + 0x2C) = f0;
    /* 0x21A4B8 */ f1 = *(f32*)(r29 + 0x2C);
    /* 0x21A4BC */ f0 = *(f32*)(r31 + 0x0);
}
