/*
 * Address: 0x80728570
 * REL Offset: 0x00215CD4
 * Function: AI::<dtor>
 * Size: 31 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ AI(/* unknown params */)
{

    /* 0x215CD4 */ *(u32*)(r3 + 0x1C) = r31;
    /* 0x215CD8 */ sub_0x0000A538();
    /* 0x215CDC */ // cmpwi r3, 0
    /* 0x215CE0 */ if (0x50 == 0) goto loc_0x0050;
    /* 0x215CE4 */ r3 = r30;
    /* 0x215CE8 */ sub_0xFFFFFFFFFFE6852C();
    /* 0x215CEC */ // clrlwi r0, r3, 0x18
    /* 0x215CF0 */ r3 = 0x00000;
    /* 0x215CF4 */ r0 = r0 * 0xf0;
    /* 0x215CF8 */ r3 = *(r3);
    /* 0x215CFC */ r3 = r3 + r0;
    /* 0x215D00 */ r0 = *(u32*)(r3 + 0xF4);
    /* 0x215D04 */ // cmpwi r0, 0
    /* 0x215D08 */ if (0x40 != 0) goto loc_0x0040;
    /* 0x215D0C */ *(u32*)(r30 + 0x20) = r31;
    /* 0x215D10 */ goto loc_0x0050;
    /* 0x215D14 */ // cmpwi r0, 1
    /* 0x215D18 */ if (0x50 != 0) goto loc_0x0050;
    /* 0x215D1C */ r0 = 0x1 /* 1 */;
    /* 0x215D20 */ *(u32*)(r30 + 0x20) = r0;
    /* 0x215D24 */ r3 = *(u32*)(r30 + 0x10);
    /* 0x215D28 */ r12 = *(u32*)(r3 + 0x34);
    /* 0x215D2C */ r12 = *(u32*)(r12 + 0x18);
    /* 0x215D30 */ // mtctr r12
    /* 0x215D34 */ // bctrl 
    /* 0x215D38 */ r0 = *(u32*)(r1 + 0x14);
    /* 0x215D3C */ // stack frame setup/save/restore
    /* 0x215D40 */ // stack frame setup/save/restore
    /* 0x215D44 */ // save/restore LR
    /* 0x215D48 */ r1 = r1 + 0x10;
    /* 0x215D4C */ return;
}
