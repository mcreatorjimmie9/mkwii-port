/*
 * Address: 0x805BAD24
 * REL Offset: 0x000A8488
 * Function: computeCollisionLimits__Q24Kart11HitboxGroupFv
 * Size: 77 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ computeCollisionLimits__Q24Kart11HitboxGroupFv(void)
{

    /* 0xA8488 */ *(u8*)(r31 + 0x24) = r0;
    /* 0xA848C */ r5 = 0x00000;
    /* 0xA8490 */ r3 = 0x00000;
    /* 0xA8494 */ r4 = *(r5);
    /* 0xA8498 */ r3 = r3 + 0x0;
    /* 0xA849C */ r0 = *(u32*)(r31 + 0x1C);
    /* 0xA84A0 */ *(u32*)(r4 + 0x8C) = r0;
    /* 0xA84A4 */ r4 = *(r5);
    /* 0xA84A8 */ f0 = *(f32*)(r31 + 0x20);
    /* 0xA84AC */ *(f32*)(r4 + 0x90) = f0;
    /* 0xA84B0 */ r0 = *(u32*)(r3 + 0x4);
    /* 0xA84B4 */ // cmpwi r0, 0
    /* 0xA84B8 */ if (0x44 > 0) goto loc_0x0044;
    /* 0xA84BC */ r12 = *(r3);
    /* 0xA84C0 */ r12 = *(u32*)(r12 + 0x18);
    /* 0xA84C4 */ // mtctr r12
    /* 0xA84C8 */ // bctrl 
    /* 0xA84CC */ r5 = 0x00000;
    /* 0xA84D0 */ r3 = *(u32*)(r31 + 0x1C);
    /* 0xA84D4 */ r5 = r5 + 0x0;
    /* 0xA84D8 */ r4 = r1 + 0xC;
    /* 0xA84DC */ r7 = *(u32*)(r5 + 0x8);
    /* 0xA84E0 */ r5 = 0x0 /* 0 */;
    /* 0xA84E4 */ r0 = *(r3);
    /* 0xA84E8 */ r6 = 0x6 /* 6 */;
    /* 0xA84EC */ r3 = *(r7);
    /* 0xA84F0 */ *(u32*)(r1 + 0xC) = r0;
    /* 0xA84F4 */ f1 = *(f32*)(r31 + 0x20);
    /* 0xA84F8 */ sub_0xFFFFFFFFFFF9AED0();
    /* 0xA84FC */ goto loc_0x00F4;
    /* 0xA8500 */ r7 = 0x00000;
    /* 0xA8504 */ r5 = 0x00000;
    /* 0xA8508 */ r6 = *(r7);
    /* 0xA850C */ r4 = 0x00000;
    /* 0xA8510 */ r0 = *(u32*)(r3 + 0x1C);
    /* 0xA8514 */ r4 = r4 + 0x0;
    /* 0xA8518 */ *(u32*)(r6 + 0x8C) = r0;
    /* 0xA851C */ f0 = *(f32*)(r5 + 0x0);
    /* 0xA8520 */ r3 = *(r7);
    /* 0xA8524 */ *(f32*)(r3 + 0x90) = f0;
    /* 0xA8528 */ r0 = *(u32*)(r4 + 0x4);
    /* 0xA852C */ // cmpwi r0, 0
    /* 0xA8530 */ if (0xc0 > 0) goto loc_0x00C0;
    /* 0xA8534 */ r12 = *(r4);
    /* 0xA8538 */ r3 = r4;
    /* 0xA853C */ r12 = *(u32*)(r12 + 0x18);
    /* 0xA8540 */ // mtctr r12
    /* 0xA8544 */ // bctrl 
    /* 0xA8548 */ r4 = 0x00000;
    /* 0xA854C */ r3 = *(u32*)(r31 + 0x1C);
    /* 0xA8550 */ r4 = r4 + 0x0;
    /* 0xA8554 */ r7 = 0x00000;
    /* 0xA8558 */ r6 = *(u32*)(r4 + 0x8);
    /* 0xA855C */ r4 = r1 + 0x8;
    /* 0xA8560 */ r0 = *(r3);
    /* 0xA8564 */ r5 = 0x0 /* 0 */;
    /* 0xA8568 */ r3 = *(r6);
    /* 0xA856C */ r6 = 0x6 /* 6 */;
    /* 0xA8570 */ f1 = *(f32*)(r7 + 0x0);
    /* 0xA8574 */ *(u32*)(r1 + 0x8) = r0;
    /* 0xA8578 */ sub_0xFFFFFFFFFFF9AED0();
    /* 0xA857C */ r0 = *(u32*)(r31 + 0x1C);
    /* 0xA8580 */ // cmpwi r0, 0
    /* 0xA8584 */ if (0x11c == 0) goto loc_0x011C;
    /* 0xA8588 */ r3 = 0x00000;
    /* 0xA858C */ r5 = 0x00000;
    /* 0xA8590 */ r4 = *(r3);
    /* 0xA8594 */ r3 = *(r5);
    /* 0xA8598 */ r4 = *(u32*)(r4 + 0x18);
    /* 0xA859C */ r4 = *(r4);
    /* 0xA85A0 */ sub_0xFFFFFFFFFFFAB3F8();
    /* 0xA85A4 */ r0 = *(u32*)(r1 + 0x24);
    /* 0xA85A8 */ // stack frame setup/save/restore
    /* 0xA85AC */ // stack frame setup/save/restore
    /* 0xA85B0 */ // save/restore LR
    /* 0xA85B4 */ r1 = r1 + 0x20;
    /* 0xA85B8 */ return;
}
