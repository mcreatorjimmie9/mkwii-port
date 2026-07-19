/*
 * Address: 0x8072C5D0
 * REL Offset: 0x00219D34
 * Function: init__Q25Enemy13AIControlBaseFv
 * Size: 77 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

void init__Q25Enemy13AIControlBaseFv(void)
{

    /* 0x219D34 */ // cmpwi r0, 3
    /* 0x219D38 */ if (0xc != 0) goto loc_0x000C;
    /* 0x219D3C */ goto loc_0x002C;
    /* 0x219D40 */ r29 = *(u32*)(r4 + 0x18);
    /* 0x219D44 */ // cmpwi r29, 0
    /* 0x219D48 */ if (0x28 == 0) goto loc_0x0028;
    /* 0x219D4C */ r0 = *(u32*)(r4 + 0x30);
    /* 0x219D50 */ // cmpwi r0, 3
    /* 0x219D54 */ if (0x28 != 0) goto loc_0x0028;
    /* 0x219D58 */ goto loc_0x002C;
    /* 0x219D5C */ r29 = 0x0 /* 0 */;
    /* 0x219D60 */ r4 = *(u32*)(r3 + 0xC);
    /* 0x219D64 */ r0 = r4 + 0x-1;
    /* 0x219D68 */ *(u32*)(r3 + 0xC) = r0;
    /* 0x219D6C */ r3 = r31;
    /* 0x219D70 */ sub_0x00003DC0();
    /* 0x219D74 */ // cmpwi r3, 0
    /* 0x219D78 */ if (0x264 == 0) goto loc_0x0264;
    /* 0x219D7C */ // cmpwi r29, 0
    /* 0x219D80 */ if (0x5c != 0) goto loc_0x005C;
    /* 0x219D84 */ r0 = *(u32*)(r30 + 0xC);
    /* 0x219D88 */ // cmpwi r0, 0
    /* 0x219D8C */ if (0x264 >= 0) goto loc_0x0264;
    /* 0x219D90 */ r3 = 0x1 /* 1 */;
    /* 0x219D94 */ *(u8*)(r31 + 0x1A0) = r3;
    /* 0x219D98 */ r0 = 0x0 /* 0 */;
    /* 0x219D9C */ *(u32*)(r31 + 0x1A4) = r3;
    /* 0x219DA0 */ *(u32*)(r30 + 0xC) = r0;
    /* 0x219DA4 */ *(u32*)(r30 + 0x8) = r0;
    /* 0x219DA8 */ goto loc_0x0264;
    /* 0x219DAC */ r29 = *(u32*)(r4 + 0xC);
    /* 0x219DB0 */ // cmpwi r29, 0
    /* 0x219DB4 */ if (0x94 == 0) goto loc_0x0094;
    /* 0x219DB8 */ r0 = *(u32*)(r4 + 0x24);
    /* 0x219DBC */ // cmpwi r0, 3
    /* 0x219DC0 */ if (0x94 != 0) goto loc_0x0094;
    /* 0x219DC4 */ goto loc_0x0128;
    /* 0x219DC8 */ r29 = *(u32*)(r4 + 0x10);
    /* 0x219DCC */ // cmpwi r29, 0
    /* 0x219DD0 */ if (0xb0 == 0) goto loc_0x00B0;
    /* 0x219DD4 */ r0 = *(u32*)(r4 + 0x28);
    /* 0x219DD8 */ // cmpwi r0, 3
    /* 0x219DDC */ if (0xb0 != 0) goto loc_0x00B0;
    /* 0x219DE0 */ goto loc_0x0128;
    /* 0x219DE4 */ r29 = *(u32*)(r4 + 0x14);
    /* 0x219DE8 */ r5 = r4 + 0x8;
    /* 0x219DEC */ // cmpwi r29, 0
    /* 0x219DF0 */ if (0xd0 == 0) goto loc_0x00D0;
    /* 0x219DF4 */ r0 = *(u32*)(r5 + 0x24);
    /* 0x219DF8 */ // cmpwi r0, 3
    /* 0x219DFC */ if (0xd0 != 0) goto loc_0x00D0;
    /* 0x219E00 */ goto loc_0x0128;
    /* 0x219E04 */ r29 = *(u32*)(r5 + 0x10);
    /* 0x219E08 */ // cmpwi r29, 0
    /* 0x219E0C */ if (0xec == 0) goto loc_0x00EC;
    /* 0x219E10 */ r0 = *(u32*)(r5 + 0x28);
    /* 0x219E14 */ // cmpwi r0, 3
    /* 0x219E18 */ if (0xec != 0) goto loc_0x00EC;
    /* 0x219E1C */ goto loc_0x0128;
    /* 0x219E20 */ r29 = *(u32*)(r5 + 0x14);
    /* 0x219E24 */ // cmpwi r29, 0
    /* 0x219E28 */ if (0x108 == 0) goto loc_0x0108;
    /* 0x219E2C */ r0 = *(u32*)(r5 + 0x2C);
    /* 0x219E30 */ // cmpwi r0, 3
    /* 0x219E34 */ if (0x108 != 0) goto loc_0x0108;
    /* 0x219E38 */ goto loc_0x0128;
    /* 0x219E3C */ r29 = *(u32*)(r5 + 0x18);
    /* 0x219E40 */ // cmpwi r29, 0
    /* 0x219E44 */ if (0x124 == 0) goto loc_0x0124;
    /* 0x219E48 */ r0 = *(u32*)(r5 + 0x30);
    /* 0x219E4C */ // cmpwi r0, 3
    /* 0x219E50 */ if (0x124 != 0) goto loc_0x0124;
    /* 0x219E54 */ goto loc_0x0128;
    /* 0x219E58 */ r29 = 0x0 /* 0 */;
    /* 0x219E5C */ r28 = *(u32*)(r4 + 0xC);
    /* 0x219E60 */ // cmpwi r28, 0
    /* 0x219E64 */ if (0x144 == 0) goto loc_0x0144;
}
