/*
 * Address: 0x80571978
 * REL Offset: 0x0005F0DC
 * Function: processCannon__Q24Kart11KartCollideFPUl
 * Size: 32 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

void processCannon__Q24Kart11KartCollideFPUl(/* unknown params */)
{

    /* 0x5F0DC */ r5 = 0x1 /* 1 */;
    /* 0x5F0E0 */ r12 = *(u32*)(r12 + 0xC);
    /* 0x5F0E4 */ r6 = 0x1 /* 1 */;
    /* 0x5F0E8 */ r7 = 0x0 /* 0 */;
    /* 0x5F0EC */ r9 = 0x0 /* 0 */;
    /* 0x5F0F0 */ // mtctr r12
    /* 0x5F0F4 */ // bctrl 
    /* 0x5F0F8 */ // cmpwi r3, 0
    /* 0x5F0FC */ if (0x7d8 == 0) goto loc_0x07D8;
    /* 0x5F100 */ r3 = r31;
    /* 0x5F104 */ sub_0x0001EE5C();
    /* 0x5F108 */ r12 = *(r3);
    /* 0x5F10C */ r4 = 0x110 /* 272 */;
    /* 0x5F110 */ f1 = *(f32*)(r28 + 0x0);
    /* 0x5F114 */ r12 = *(u32*)(r12 + 0xE4);
    /* 0x5F118 */ // mtctr r12
    /* 0x5F11C */ // bctrl 
    /* 0x5F120 */ r3 = r30 + 0x4;
    /* 0x5F124 */ sub_0x0001FF84();
    /* 0x5F128 */ r3 = r31;
    /* 0x5F12C */ sub_0x0001FFA8();
    /* 0x5F130 */ goto loc_0x07D8;
    /* 0x5F134 */ r18 = 0x1 /* 1 */;
    /* 0x5F138 */ goto loc_0x07D8;
    /* 0x5F13C */ // cmpwi r26, 0
    /* 0x5F140 */ if (0x70 == 0) goto loc_0x0070;
    /* 0x5F144 */ // cmpwi r25, 0
    /* 0x5F148 */ if (0x80 == 0) goto loc_0x0080;
    /* 0x5F14C */ // cmpwi r26, 0
    /* 0x5F150 */ if (0x440 != 0) goto loc_0x0440;
    /* 0x5F154 */ // cmpwi r25, 0
    /* 0x5F158 */ if (0x440 == 0) goto loc_0x0440;
}
