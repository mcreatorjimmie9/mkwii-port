/*
 * Address: 0x807286A0
 * REL Offset: 0x00215E04
 * Function: update__Q25Enemy2AIFv
 * Size: 9 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ update__Q25Enemy2AIFv(void)
{

    /* 0x215E04 */ r3 = r3 + r0;
    /* 0x215E08 */ r3 = *(u32*)(r3 + 0x38);
    /* 0x215E0C */ r0 = r3 + 0x-1;
    /* 0x215E10 */ r0 = __builtin_clz(r0);
    /* 0x215E14 */ // srwi r3, r0, 5
    /* 0x215E18 */ r0 = *(u32*)(r1 + 0x14);
    /* 0x215E1C */ // save/restore LR
    /* 0x215E20 */ r1 = r1 + 0x10;
    /* 0x215E24 */ return;
}
