/*
 * Address: 0x8073569C
 * REL Offset: 0x00222E00
 * Function: AIEngineBike::Enemy2AI::<ctor>
 * Size: 33 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

void AIEngineBike::Enemy2AI(/* unknown params */)
{

    /* 0x222E00 */ r12 = r6;
    /* 0x222E04 */ goto loc_0x001C;
    /* 0x222E08 */ r0 = *(u8*)(r30 + 0x20);
    /* 0x222E0C */ // cmpwi r0, 0
    /* 0x222E10 */ if (0x1c == 0) goto loc_0x001C;
    /* 0x222E14 */ // slwi r0, r6, 2
    /* 0x222E18 */ *(u32*)(r0 + r11) = r5;
    /* 0x222E1C */ r10 = r10 + 0x4;
    /* 0x222E20 */ r31 = r31 + 0x1;
    /* 0x222E24 */ r0 = *(u32*)(r3 + 0x34);
    /* 0x222E28 */ // cmpw r31, r0
    /* 0x222E2C */ if (0xffffffffffffffa8 < 0) goto loc_0xFFFFFFFFFFFFFFA8;
    /* 0x222E30 */ // cmplwi r12, 0xb
    /* 0x222E34 */ if (0xd0 > 0) goto loc_0x00D0;
    /* 0x222E38 */ r3 = 0x00000;
    /* 0x222E3C */ // slwi r0, r12, 2
    /* 0x222E40 */ r3 = r3 + 0x0;
    /* 0x222E44 */ r0 = *(u32*)(r3 + r0);
    /* 0x222E48 */ // cmpwi r0, 0
    /* 0x222E4C */ if (0xd0 == 0) goto loc_0x00D0;
    /* 0x222E50 */ r0 = 0x14 /* 20 */;
    /* 0x222E54 */ r4 = r7 + 0x70;
    /* 0x222E58 */ // mtctr r0
    /* 0x222E5C */ r0 = *(r4);
    /* 0x222E60 */ r5 = r12 + r0;
    /* 0x222E64 */ // cmpwi r5, 0xb
    /* 0x222E68 */ if (0x74 <= 0) goto loc_0x0074;
    /* 0x222E6C */ r5 = 0xB /* 11 */;
    /* 0x222E70 */ goto loc_0x0080;
    /* 0x222E74 */ // cmpwi r5, 0
    /* 0x222E78 */ if (0x80 >= 0) goto loc_0x0080;
    /* 0x222E7C */ r5 = 0x0 /* 0 */;
    /* 0x222E80 */ // slwi r0, r5, 2
}
