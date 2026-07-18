/*
 * Address: 0x805B8C0C
 * REL Offset: 0x000A6370
 * Function: PlayerSub18_findCollisionInner
 * Size: 35 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ PlayerSub18_findCollisionInner(/* unknown params */)
{

    /* 0xA6370 */ r3 = r0 - r3;
    /* 0xA6374 */ r3 = r5 * r3;
    /* 0xA6378 */ r3 = (s32)r3 >> 2;
    /* 0xA637C */ // srwi r4, r3, 0x1f
    /* 0xA6380 */ r3 = r3 + r4;
    /* 0xA6384 */ // cmpwi r3, 1
    /* 0xA6388 */ if (0x28 != 0) goto loc_0x0028;
    /* 0xA638C */ r3 = *(u32*)(r31 + 0x44);
    /* 0xA6390 */ r3 = r3 | 0x10;
    /* 0xA6394 */ *(u32*)(r31 + 0x44) = r3;
    /* 0xA6398 */ r4 = 0x10620000;
    /* 0xA639C */ r3 = 0x51EC0000;
    /* 0xA63A0 */ r4 = r4 + 0x4DD3;
    /* 0xA63A4 */ r4 = r4 * r0;
    /* 0xA63A8 */ r5 = r3 + 0x-7AE1;
    /* 0xA63AC */ r3 = (s32)r4 >> 6;
    /* 0xA63B0 */ // srwi r4, r3, 0x1f
    /* 0xA63B4 */ r3 = r3 + r4;
    /* 0xA63B8 */ r3 = r3 * 0x3e8;
    /* 0xA63BC */ r0 = r0 - r3;
    /* 0xA63C0 */ r0 = r5 * r0;
    /* 0xA63C4 */ r0 = (s32)r0 >> 5;
    /* 0xA63C8 */ // srwi r3, r0, 0x1f
    /* 0xA63CC */ r0 = r0 + r3;
    /* 0xA63D0 */ // cmpwi r0, 1
    /* 0xA63D4 */ if (0x74 != 0) goto loc_0x0074;
    /* 0xA63D8 */ r0 = *(u32*)(r31 + 0x44);
    /* 0xA63DC */ r0 = r0 | 0x20;
    /* 0xA63E0 */ *(u32*)(r31 + 0x44) = r0;
    /* 0xA63E4 */ r0 = *(u32*)(r1 + 0x14);
    /* 0xA63E8 */ // stack frame setup/save/restore
    /* 0xA63EC */ // stack frame setup/save/restore
    /* 0xA63F0 */ // save/restore LR
    /* 0xA63F4 */ r1 = r1 + 0x10;
    /* 0xA63F8 */ return;
}
