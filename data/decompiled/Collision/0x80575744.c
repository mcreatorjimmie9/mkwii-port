/*
 * Address: 0x80575744
 * REL Offset: 0x00062EA8
 * Function: PlayerSub18_handleFibCollision
 * Size: 90 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ PlayerSub18_handleFibCollision(/* unknown params */)
{

    /* 0x62EA8 */ r12 = *(u32*)(r12 + 0x2C);
    /* 0x62EAC */ // mtctr r12
    /* 0x62EB0 */ // bctrl 
    /* 0x62EB4 */ goto loc_0x0098;
    /* 0x62EB8 */ // cmpwi r4, 1
    /* 0x62EBC */ if (0x98 != 0) goto loc_0x0098;
    /* 0x62EC0 */ r3 = *(u32*)(r3 + 0x10);
    /* 0x62EC4 */ // clrlwi r4, r0, 0x18
    /* 0x62EC8 */ // clrlwi r5, r30, 0x18
    /* 0x62ECC */ r12 = *(r3);
    /* 0x62ED0 */ r12 = *(u32*)(r12 + 0x2C);
    /* 0x62ED4 */ // mtctr r12
    /* 0x62ED8 */ // bctrl 
    /* 0x62EDC */ goto loc_0x0098;
    /* 0x62EE0 */ // cmpwi r5, 9
    /* 0x62EE4 */ if (0x48 == 0) goto loc_0x0048;
    /* 0x62EE8 */ // cmpwi r5, 0xa
    /* 0x62EEC */ if (0x98 != 0) goto loc_0x0098;
    /* 0x62EF0 */ r4 = *(u32*)(r4 + 0xB78);
    /* 0x62EF4 */ // cmpwi r4, 0
    /* 0x62EF8 */ if (0x74 != 0) goto loc_0x0074;
    /* 0x62EFC */ r3 = *(u32*)(r3 + 0x10);
    /* 0x62F00 */ // clrlwi r4, r0, 0x18
    /* 0x62F04 */ // clrlwi r5, r30, 0x18
    /* 0x62F08 */ r12 = *(r3);
    /* 0x62F0C */ r12 = *(u32*)(r12 + 0x2C);
    /* 0x62F10 */ // mtctr r12
    /* 0x62F14 */ // bctrl 
    /* 0x62F18 */ goto loc_0x0098;
    /* 0x62F1C */ // cmpwi r4, 1
    /* 0x62F20 */ if (0x98 != 0) goto loc_0x0098;
    /* 0x62F24 */ r3 = *(u32*)(r3 + 0x10);
    /* 0x62F28 */ // clrlwi r4, r0, 0x18
    /* 0x62F2C */ // clrlwi r5, r30, 0x18
    /* 0x62F30 */ r12 = *(r3);
    /* 0x62F34 */ r12 = *(u32*)(r12 + 0x2C);
    /* 0x62F38 */ // mtctr r12
    /* 0x62F3C */ // bctrl 
    /* 0x62F40 */ r3 = r27;
    /* 0x62F44 */ r4 = r29;
    /* 0x62F48 */ r5 = r28;
    /* 0x62F4C */ sub_0xFFFFFFFFFFFFD754();
    /* 0x62F50 */ // cmpwi r28, 0
    /* 0x62F54 */ r3 = r27 + 0x4;
    /* 0x62F58 */ r4 = 0x11 /* 17 */;
    /* 0x62F5C */ if (0xbc == 0) goto loc_0x00BC;
    /* 0x62F60 */ r4 = 0x10 /* 16 */;
    /* 0x62F64 */ r5 = 0x00000;
    /* 0x62F68 */ f1 = *(f32*)(r5 + 0x0);
    /* 0x62F6C */ r5 = 0x1 /* 1 */;
    /* 0x62F70 */ sub_0x0001AD18();
    /* 0x62F74 */ // cmpwi r31, 0
    /* 0x62F78 */ if (0xe8 == 0) goto loc_0x00E8;
    /* 0x62F7C */ r3 = *(u32*)(r27 + 0x4);
    /* 0x62F80 */ r3 = *(u32*)(r3 + 0x4);
    /* 0x62F84 */ r0 = *(u32*)(r3 + 0x10);
    /* 0x62F88 */ r0 = r0 | 0x400;
    /* 0x62F8C */ *(u32*)(r3 + 0x10) = r0;
    /* 0x62F90 */ // cmpwi r28, 0
    /* 0x62F94 */ if (0xf8 != 0) goto loc_0x00F8;
    /* 0x62F98 */ r3 = r27 + 0x4;
    /* 0x62F9C */ sub_0x0001B86C();
    /* 0x62FA0 */ r0 = 0x82 /* 130 */;
    /* 0x62FA4 */ *(u16*)(r27 + 0x48) = r0;
    /* 0x62FA8 */ r3 = 0x00000;
    /* 0x62FAC */ r4 = 0x0 /* 0 */;
    /* 0x62FB0 */ r3 = *(r3);
    /* 0x62FB4 */ r3 = *(u32*)(r3 + 0xB70);
    /* 0x62FB8 */ r0 = r3 + 0x-3;
    /* 0x62FBC */ // cmplwi r0, 7
    /* 0x62FC0 */ if (0x130 > 0) goto loc_0x0130;
    /* 0x62FC4 */ r3 = 0x1 /* 1 */;
    /* 0x62FC8 */ r0 = r3 << r0;
    /* 0x62FCC */ r0 = r0 & 0xc1;
    /* 0x62FD0 */ if (0x130 == 0) goto loc_0x0130;
    /* 0x62FD4 */ r4 = r3;
    /* 0x62FD8 */ // cmpwi r4, 0
    /* 0x62FDC */ if (0x144 == 0) goto loc_0x0144;
    /* 0x62FE0 */ // lha r3, 0x48(r27)
    /* 0x62FE4 */ r0 = r3 + 0x3C;
    /* 0x62FE8 */ *(u16*)(r27 + 0x48) = r0;
    /* 0x62FEC */ r3 = *(u32*)(r27 + 0x4);
    /* 0x62FF0 */ r3 = *(u32*)(r3 + 0x4);
    /* 0x62FF4 */ r0 = *(u32*)(r3 + 0x4);
    /* 0x62FF8 */ r0 = r0 | 0x10;
    /* 0x62FFC */ *(u32*)(r3 + 0x4) = r0;
    /* 0x63000 */ goto loc_0x017C;
    /* 0x63004 */ // cmpwi r4, 0
    /* 0x63008 */ if (0x16c != 0) goto loc_0x016C;
    /* 0x6300C */ r3 = r3 + 0x4;
}
