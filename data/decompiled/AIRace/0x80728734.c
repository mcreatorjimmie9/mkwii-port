/*
 * Address: 0x80728734
 * REL Offset: 0x00215E98
 * Function: isCPU__Q25Enemy2AIFv
 * Size: 14 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ isCPU__Q25Enemy2AIFv(void)
{

    /* 0x215E98 */ // cmpwi r0, 0
    /* 0x215E9C */ if (0x20 != 0) goto loc_0x0020;
    /* 0x215EA0 */ r3 = r31;
    /* 0x215EA4 */ sub_0xFFFFFFFFFFE67F70();
    /* 0x215EA8 */ // cmpwi r3, 0
    /* 0x215EAC */ if (0x20 == 0) goto loc_0x0020;
    /* 0x215EB0 */ r3 = 0x1 /* 1 */;
    /* 0x215EB4 */ goto loc_0x0024;
    /* 0x215EB8 */ r3 = 0x0 /* 0 */;
    /* 0x215EBC */ r0 = *(u32*)(r1 + 0x14);
    /* 0x215EC0 */ // stack frame setup/save/restore
    /* 0x215EC4 */ // save/restore LR
    /* 0x215EC8 */ r1 = r1 + 0x10;
    /* 0x215ECC */ return;
}
