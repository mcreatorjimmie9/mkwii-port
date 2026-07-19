/*
 * Address: 0x807285F8
 * REL Offset: 0x00215D5C
 * Function: init__Q25Enemy2AIFv
 * Size: 34 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ init__Q25Enemy2AIFv(void)
{
    // Has prologue (saves LR)

    /* 0x215D5C */ r4 = *(r4);
    /* 0x215D60 */ r4 = *(u32*)(r4 + 0xC);
    /* 0x215D64 */ // cmpwi r4, 0
    /* 0x215D68 */ if (0x20 == 0) goto loc_0x0020;
    /* 0x215D6C */ r0 = *(u16*)(r4 + 0x4);
    /* 0x215D70 */ // cmpwi r0, 0
    /* 0x215D74 */ if (0x20 == 0) goto loc_0x0020;
    /* 0x215D78 */ r5 = 0x1 /* 1 */;
    /* 0x215D7C */ // cmpwi r5, 0
    /* 0x215D80 */ // beqlr 
    /* 0x215D84 */ r3 = *(u32*)(r3 + 0x10);
    /* 0x215D88 */ r12 = *(u32*)(r3 + 0x34);
    /* 0x215D8C */ r12 = *(u32*)(r12 + 0x1C);
    /* 0x215D90 */ // mtctr r12
    /* 0x215D94 */ // bctr 
    /* 0x215D98 */ return;
    /* 0x215D9C */ // stwu r1, -0x10(r1)
    /* 0x215DA0 */ // save/restore LR
    /* 0x215DA4 */ *(u32*)(r1 + 0x14) = r0;
    /* 0x215DA8 */ // stack frame setup/save/restore
    /* 0x215DAC */ r31 = r3;
    /* 0x215DB0 */ sub_0xFFFFFFFFFFE680AC();
    /* 0x215DB4 */ // cmpwi r3, 0
    /* 0x215DB8 */ if (0x68 == 0) goto loc_0x0068;
    /* 0x215DBC */ r3 = r31 + 0x14;
    /* 0x215DC0 */ goto loc_0x0074;
    /* 0x215DC4 */ r3 = r31;
    /* 0x215DC8 */ sub_0xFFFFFFFFFFE67E3C();
    /* 0x215DCC */ r3 = r3 + 0x30;
    /* 0x215DD0 */ r0 = *(u32*)(r1 + 0x14);
    /* 0x215DD4 */ // stack frame setup/save/restore
    /* 0x215DD8 */ // save/restore LR
    /* 0x215DDC */ r1 = r1 + 0x10;
    /* 0x215DE0 */ return;
}
