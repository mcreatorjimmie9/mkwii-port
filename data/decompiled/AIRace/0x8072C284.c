/*
 * Address: 0x8072C284
 * REL Offset: 0x002199E8
 * Function: AIControlBase::Enemy6AIInfo::<ctor>
 * Size: 46 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ AIControlBase::Enemy6AIInfo(/* unknown params */)
{
    // Has prologue (saves LR)

    /* 0x2199E8 */ goto loc_0x0044;
    /* 0x2199EC */ r4 = *(u32*)(r3 + 0xC);
    /* 0x2199F0 */ r0 = r4 + 0x-1;
    /* 0x2199F4 */ *(u32*)(r3 + 0xC) = r0;
    /* 0x2199F8 */ r3 = r30;
    /* 0x2199FC */ sub_0x0000410C();
    /* 0x219A00 */ // cmpwi r3, 0
    /* 0x219A04 */ if (0x44 == 0) goto loc_0x0044;
    /* 0x219A08 */ r0 = *(u32*)(r31 + 0xC);
    /* 0x219A0C */ // cmpwi r0, 0
    /* 0x219A10 */ if (0x44 >= 0) goto loc_0x0044;
    /* 0x219A14 */ r3 = 0x1 /* 1 */;
    /* 0x219A18 */ *(u8*)(r30 + 0x1A0) = r3;
    /* 0x219A1C */ r0 = 0x0 /* 0 */;
    /* 0x219A20 */ *(u32*)(r30 + 0x1A4) = r3;
    /* 0x219A24 */ *(u32*)(r31 + 0xC) = r0;
    /* 0x219A28 */ *(u32*)(r31 + 0x8) = r0;
    /* 0x219A2C */ r0 = *(u32*)(r1 + 0x14);
    /* 0x219A30 */ // stack frame setup/save/restore
    /* 0x219A34 */ // stack frame setup/save/restore
    /* 0x219A38 */ // save/restore LR
    /* 0x219A3C */ r1 = r1 + 0x10;
    /* 0x219A40 */ return;
    /* 0x219A44 */ r3 = 0xB4 /* 180 */;
    /* 0x219A48 */ return;
    /* 0x219A4C */ r5 = 0x00000;
    /* 0x219A50 */ *(u32*)(r3 + 0x4) = r4;
    /* 0x219A54 */ r5 = r5 + 0x0;
    /* 0x219A58 */ *(r3) = r5;
    /* 0x219A5C */ return;
    /* 0x219A60 */ // stwu r1, -0x10(r1)
    /* 0x219A64 */ // save/restore LR
    /* 0x219A68 */ // cmpwi r3, 0
    /* 0x219A6C */ *(u32*)(r1 + 0x14) = r0;
    /* 0x219A70 */ // stack frame setup/save/restore
    /* 0x219A74 */ r31 = r3;
    /* 0x219A78 */ if (0xa0 == 0) goto loc_0x00A0;
    /* 0x219A7C */ // cmpwi r4, 0
    /* 0x219A80 */ if (0xa0 <= 0) goto loc_0x00A0;
    /* 0x219A84 */ sub_0xFFFFFFFFFFE29970();
    /* 0x219A88 */ r3 = r31;
    /* 0x219A8C */ // stack frame setup/save/restore
    /* 0x219A90 */ r0 = *(u32*)(r1 + 0x14);
    /* 0x219A94 */ // save/restore LR
    /* 0x219A98 */ r1 = r1 + 0x10;
    /* 0x219A9C */ return;
}
