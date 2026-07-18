/*
 * Address: 0x80728778
 * REL Offset: 0x00215EDC
 * Function: isRealLocal__Q25Enemy2AIFv
 * Size: 15 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ isRealLocal__Q25Enemy2AIFv(void)
{

    /* 0x215EDC */ *(u32*)(r1 + 0x14) = r0;
    /* 0x215EE0 */ sub_0xFFFFFFFFFFE68324();
    /* 0x215EE4 */ // clrlwi r0, r3, 0x18
    /* 0x215EE8 */ r3 = 0x00000;
    /* 0x215EEC */ r0 = r0 * 0xf0;
    /* 0x215EF0 */ r3 = *(r3);
    /* 0x215EF4 */ r3 = r3 + r0;
    /* 0x215EF8 */ r3 = *(u32*)(r3 + 0x38);
    /* 0x215EFC */ r0 = r3 + 0x-3;
    /* 0x215F00 */ r0 = __builtin_clz(r0);
    /* 0x215F04 */ // srwi r3, r0, 5
    /* 0x215F08 */ r0 = *(u32*)(r1 + 0x14);
    /* 0x215F0C */ // save/restore LR
    /* 0x215F10 */ r1 = r1 + 0x10;
    /* 0x215F14 */ return;
}
