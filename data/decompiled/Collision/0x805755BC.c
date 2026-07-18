/*
 * Address: 0x805755BC
 * REL Offset: 0x00062D20
 * Function: PlayerSub18_initHitboxes
 * Size: 39 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ PlayerSub18_initHitboxes(/* unknown params */)
{

    /* 0x62D20 */ r4 = 0x00000;
    /* 0x62D24 */ // clrlwi r0, r3, 0x18
    /* 0x62D28 */ r3 = *(r4);
    /* 0x62D2C */ r0 = r0 * 0x248;
    /* 0x62D30 */ r3 = *(u32*)(r3 + 0x14);
    /* 0x62D34 */ r3 = r3 + r0;
    /* 0x62D38 */ sub_0x00220CA8();
    /* 0x62D3C */ // cmpwi r30, 0
    /* 0x62D40 */ if (0x230 != 0) goto loc_0x0230;
    /* 0x62D44 */ r3 = 0x00000;
    /* 0x62D48 */ r4 = 0x0 /* 0 */;
    /* 0x62D4C */ r5 = *(r3);
    /* 0x62D50 */ r3 = *(u32*)(r5 + 0xB70);
    /* 0x62D54 */ r3 = r3 + 0x-3;
    /* 0x62D58 */ // cmplwi r3, 7
    /* 0x62D5C */ if (0x54 > 0) goto loc_0x0054;
    /* 0x62D60 */ r0 = 0x1 /* 1 */;
    /* 0x62D64 */ r0 = r0 << r3;
    /* 0x62D68 */ r0 = r0 & 0xc1;
    /* 0x62D6C */ if (0x54 == 0) goto loc_0x0054;
    /* 0x62D70 */ r4 = 0x1 /* 1 */;
    /* 0x62D74 */ // cmpwi r4, 0
    /* 0x62D78 */ if (0x138 == 0) goto loc_0x0138;
    /* 0x62D7C */ r0 = *(u32*)(r5 + 0xB78);
    /* 0x62D80 */ // cmpwi r0, 0
    /* 0x62D84 */ if (0x138 != 0) goto loc_0x0138;
    /* 0x62D88 */ r3 = r27 + 0x4;
    /* 0x62D8C */ sub_0x0001B4E0();
    /* 0x62D90 */ r4 = 0x00000;
    /* 0x62D94 */ r5 = 0x00000;
    /* 0x62D98 */ r4 = *(r4);
    /* 0x62D9C */ r0 = r3;
    /* 0x62DA0 */ r3 = *(r5);
    /* 0x62DA4 */ r5 = *(u32*)(r4 + 0xB70);
    /* 0x62DA8 */ // cmpwi r5, 3
    /* 0x62DAC */ if (0xdc != 0) goto loc_0x00DC;
    /* 0x62DB0 */ r4 = *(u32*)(r4 + 0xB78);
    /* 0x62DB4 */ // cmpwi r4, 0
    /* 0x62DB8 */ if (0xb8 != 0) goto loc_0x00B8;
}
