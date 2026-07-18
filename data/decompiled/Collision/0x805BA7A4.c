/*
 * Address: 0x805BA7A4
 * REL Offset: 0x000A7F08
 * Function: HitboxGroup::<ctor>
 * Size: 27 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ HitboxGroup(void)
{

    /* 0xA7F08 */ if (0x40 == 0) goto loc_0x0040;
    /* 0xA7F0C */ *(r4) = r0;
    /* 0xA7F10 */ if (0x40 == 0) goto loc_0x0040;
    /* 0xA7F14 */ if (0x38 == 0) goto loc_0x0038;
    /* 0xA7F18 */ *(r30) = r3;
    /* 0xA7F1C */ r3 = *(r4);
    /* 0xA7F20 */ // cmpwi r3, 0
    /* 0xA7F24 */ if (0x2c == 0) goto loc_0x002C;
    /* 0xA7F28 */ *(r4) = r0;
    /* 0xA7F2C */ r4 = 0x1 /* 1 */;
    /* 0xA7F30 */ sub_0x0000006C();
    /* 0xA7F34 */ r3 = r30;
    /* 0xA7F38 */ r4 = 0x0 /* 0 */;
    /* 0xA7F3C */ sub_0xFFFFFFFFFFF9B450();
    /* 0xA7F40 */ r3 = r30;
    /* 0xA7F44 */ sub_0xFFFFFFFFFFF9B450();
    /* 0xA7F48 */ r3 = r31;
    /* 0xA7F4C */ r4 = 0x0 /* 0 */;
    /* 0xA7F50 */ sub_0xFFFFFFFFFFF9B450();
    /* 0xA7F54 */ r3 = r31;
    /* 0xA7F58 */ sub_0xFFFFFFFFFFF9B450();
    /* 0xA7F5C */ r0 = *(u32*)(r1 + 0x14);
    /* 0xA7F60 */ // stack frame setup/save/restore
    /* 0xA7F64 */ // stack frame setup/save/restore
    /* 0xA7F68 */ // save/restore LR
    /* 0xA7F6C */ r1 = r1 + 0x10;
    /* 0xA7F70 */ return;
}
