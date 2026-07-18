/*
 * Address: 0x807287B8
 * REL Offset: 0x00215F1C
 * Function: isRealLocalAndCPU__Q25Enemy2AIFv
 * Size: 9 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

void isRealLocalAndCPU__Q25Enemy2AIFv(void)
{

    /* 0x215F1C */ // cmpwi r3, 0
    /* 0x215F20 */ if (0x10 >= 0) goto loc_0x0010;
    /* 0x215F24 */ r3 = 0x0 /* 0 */;
    /* 0x215F28 */ return;
    /* 0x215F2C */ r0 = *(u32*)(r4 + 0x20);
    /* 0x215F30 */ r0 = r0 - r3;
    /* 0x215F34 */ r0 = __builtin_clz(r0);
    /* 0x215F38 */ // srwi r3, r0, 5
    /* 0x215F3C */ return;
}
