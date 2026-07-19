/* Function at 0x806D19D8, size=396 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 17 function(s) */

int FUN_806D19D8(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x806D19E0
    /* li r5, 0 */ // 0x806D19E4
    *(0x14 + r1) = r0; // stw @ 0x806D19E8
    *(0xc + r1) = r31; // stw @ 0x806D19EC
    *(8 + r1) = r30; // stw @ 0x806D19F0
    r30 = r3;
    r12 = *(0x80 + r3); // lwz @ 0x806D19F8
    r12 = *(0x10 + r12); // lwz @ 0x806D19FC
    /* mtctr r12 */ // 0x806D1A00
    r3 = r3 + 0x80; // 0x806D1A04
    /* bctrl  */ // 0x806D1A08
    r3 = r30;
    r4 = r30 + 0x80; // 0x806D1A10
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r30 + 0x80; // 0x806D1A18
    /* li r4, 1 */ // 0x806D1A1C
    FUN_8066A380(r3, r4, r3, r4); // bl 0x8066A380
    r3 = r30 + 0x80; // 0x806D1A24
    r5 = r30 + 0x6c; // 0x806D1A28
    /* li r4, 1 */ // 0x806D1A2C
    /* li r6, 0 */ // 0x806D1A30
    /* li r7, 0 */ // 0x806D1A34
    FUN_8066A350(r3, r5, r4, r6, r7); // bl 0x8066A350
    r3 = r30;
    /* li r4, 4 */ // 0x806D1A40
    FUN_80671C1C(r6, r7, r3, r4); // bl 0x80671C1C
    r3 = r30;
    r5 = r30 + 0x2a4; // 0x806D1A4C
    /* li r4, 0 */ // 0x806D1A50
    /* li r6, 0 */ // 0x806D1A54
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x2a4; // 0x806D1A5C
    /* li r4, 1 */ // 0x806D1A60
    FUN_808D5444(r4, r6, r3, r4); // bl 0x808D5444
    r3 = r30 + 0x2a4; // 0x806D1A68
    /* li r4, 0x1c20 */ // 0x806D1A6C
    /* li r5, 0 */ // 0x806D1A70
    FUN_808D5844(r4, r3, r4, r5); // bl 0x808D5844
    r3 = r30;
    r5 = r30 + 0x418; // 0x806D1A7C
    /* li r4, 1 */ // 0x806D1A80
    /* li r6, 0 */ // 0x806D1A84
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* lis r31, 0 */ // 0x806D1A8C
    r3 = r30 + 0x418; // 0x806D1A90
    r31 = r31 + 0; // 0x806D1A94
    r4 = r31 + 0x272; // 0x806D1A98
    r5 = r31 + 0x281; // 0x806D1A9C
    r6 = r31 + 0x293; // 0x806D1AA0
    FUN_8066CF50(r3, r4, r5, r6); // bl 0x8066CF50
    r3 = r30 + 0x418; // 0x806D1AA8
    /* li r4, 0x1c21 */ // 0x806D1AAC
    /* li r5, 0 */ // 0x806D1AB0
    FUN_806A0A34(r6, r3, r4, r5); // bl 0x806A0A34
    r3 = r30;
    r5 = r30 + 0x58c; // 0x806D1ABC
    /* li r4, 2 */ // 0x806D1AC0
    /* li r6, 0 */ // 0x806D1AC4
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x58c; // 0x806D1ACC
    r4 = r31 + 0x2a5; // 0x806D1AD0
    r5 = r31 + 0x2ac; // 0x806D1AD4
    r6 = r31 + 0x2b6; // 0x806D1AD8
    /* li r7, 1 */ // 0x806D1ADC
    /* li r8, 0 */ // 0x806D1AE0
    /* li r9, 0 */ // 0x806D1AE4
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    r3 = r30 + 0x58c; // 0x806D1AEC
    r4 = r30 + 0x44; // 0x806D1AF0
    /* li r5, 0 */ // 0x806D1AF4
    FUN_80649EC4(r9, r3, r4, r5); // bl 0x80649EC4
    r3 = r30;
    r5 = r30 + 0x7e0; // 0x806D1B00
    /* li r4, 3 */ // 0x806D1B04
    /* li r6, 0 */ // 0x806D1B08
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x7e0; // 0x806D1B10
    r4 = r31 + 0x2b9; // 0x806D1B14
    r5 = r31 + 0x2c0; // 0x806D1B18
    r6 = r31 + 0x2c5; // 0x806D1B1C
    /* li r7, 1 */ // 0x806D1B20
    /* li r8, 0 */ // 0x806D1B24
    /* li r9, 1 */ // 0x806D1B28
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    r3 = r30 + 0x7e0; // 0x806D1B30
    r4 = r30 + 0x58; // 0x806D1B34
    /* li r5, 0 */ // 0x806D1B38
    FUN_80649EC4(r9, r3, r4, r5); // bl 0x80649EC4
    r3 = r30 + 0x58c; // 0x806D1B40
    /* li r4, 0 */ // 0x806D1B44
    FUN_80649EEC(r4, r5, r3, r4); // bl 0x80649EEC
    r0 = *(0x14 + r1); // lwz @ 0x806D1B4C
    r31 = *(0xc + r1); // lwz @ 0x806D1B50
    r30 = *(8 + r1); // lwz @ 0x806D1B54
    return;
}