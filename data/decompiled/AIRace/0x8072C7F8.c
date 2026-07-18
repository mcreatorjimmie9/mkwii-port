/*
 * Address: 0x8072C7F8
 * REL Offset: 0x00219F5C
 * Function: setStartDashTypeToKart__Q25Enemy13AIControlBaseFv
 * Size: 23 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ setStartDashTypeToKart__Q25Enemy13AIControlBaseFv(void)
{

    /* 0x219F5C */ r3 = 0x2 /* 2 */;
    /* 0x219F60 */ *(u32*)(r31 + 0x1A4) = r3;
    /* 0x219F64 */ r0 = 0x0 /* 0 */;
    /* 0x219F68 */ *(u32*)(r30 + 0xC) = r0;
    /* 0x219F6C */ *(u32*)(r30 + 0x8) = r0;
    /* 0x219F70 */ goto loc_0x003C;
    /* 0x219F74 */ r0 = *(u32*)(r30 + 0xC);
    /* 0x219F78 */ // cmpwi r0, 0
    /* 0x219F7C */ if (0x3c >= 0) goto loc_0x003C;
    /* 0x219F80 */ r3 = 0x1 /* 1 */;
    /* 0x219F84 */ *(u8*)(r31 + 0x1A0) = r3;
    /* 0x219F88 */ r0 = 0x0 /* 0 */;
    /* 0x219F8C */ *(u32*)(r31 + 0x1A4) = r3;
    /* 0x219F90 */ *(u32*)(r30 + 0xC) = r0;
    /* 0x219F94 */ *(u32*)(r30 + 0x8) = r0;
    /* 0x219F98 */ r0 = *(u32*)(r1 + 0x24);
    /* 0x219F9C */ // stack frame setup/save/restore
    /* 0x219FA0 */ // stack frame setup/save/restore
    /* 0x219FA4 */ // stack frame setup/save/restore
    /* 0x219FA8 */ r28 = *(u32*)(r1 + 0x10);
    /* 0x219FAC */ // save/restore LR
    /* 0x219FB0 */ r1 = r1 + 0x20;
    /* 0x219FB4 */ return;
}
