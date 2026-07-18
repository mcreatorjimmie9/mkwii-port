/*
 * Address: 0x807286EC
 * REL Offset: 0x00215E50
 * Function: getStick__Q25Enemy2AIFv
 * Size: 6 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

void getStick__Q25Enemy2AIFv(void)
{

    /* 0x215E50 */ r0 = __builtin_clz(r0);
    /* 0x215E54 */ // srwi r3, r0, 5
    /* 0x215E58 */ r0 = *(u32*)(r1 + 0x14);
    /* 0x215E5C */ // save/restore LR
    /* 0x215E60 */ r1 = r1 + 0x10;
    /* 0x215E64 */ return;
}
