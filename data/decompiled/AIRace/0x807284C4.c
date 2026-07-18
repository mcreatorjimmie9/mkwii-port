/*
 * Address: 0x807284C4
 * REL Offset: 0x00215C28
 * Function: AI::<ctor>
 * Size: 32 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ AI(/* unknown params */)
{
    // Saved registers: r31, r30

    /* 0x215C28 */ // cmpwi r3, 0
    /* 0x215C2C */ *(u32*)(r1 + 0x14) = r0;
    /* 0x215C30 */ // stack frame setup/save/restore
    /* 0x215C34 */ local_31 = r4;
    /* 0x215C38 */ // stack frame setup/save/restore
    /* 0x215C3C */ local_30 = r3;
    /* 0x215C40 */ if (0x64 == 0) goto loc_0x0064;
    /* 0x215C44 */ r0 = *(u32*)(r3 + 0x10);
    /* 0x215C48 */ r4 = 0x00000;
    /* 0x215C4C */ r4 = r4 + 0x0;
    /* 0x215C50 */ *(u32*)(r3 + 0xC) = r4;
    /* 0x215C54 */ // cmpwi r0, 0
    /* 0x215C58 */ if (0x4c == 0) goto loc_0x004C;
    /* 0x215C5C */ r3 = r0;
    /* 0x215C60 */ r4 = 0x1 /* 1 */;
    /* 0x215C64 */ r12 = *(u32*)(r3 + 0x34);
    /* 0x215C68 */ r12 = *(u32*)(r12 + 0x8);
    /* 0x215C6C */ // mtctr r12
    /* 0x215C70 */ // bctrl 
    /* 0x215C74 */ // cmpwi local_31, 0
    /* 0x215C78 */ r0 = 0x0 /* 0 */;
    /* 0x215C7C */ *(u32*)(local_30 + 0x10) = r0;
    /* 0x215C80 */ if (0x64 <= 0) goto loc_0x0064;
    /* 0x215C84 */ r3 = local_30;
    /* 0x215C88 */ sub_0xFFFFFFFFFFE2D730();
    /* 0x215C8C */ r3 = local_30;
    /* 0x215C90 */ // stack frame setup/save/restore
    /* 0x215C94 */ // stack frame setup/save/restore
    /* 0x215C98 */ r0 = *(u32*)(r1 + 0x14);
    /* 0x215C9C */ // save/restore LR
    /* 0x215CA0 */ r1 = r1 + 0x10;
    /* 0x215CA4 */ return;
}
