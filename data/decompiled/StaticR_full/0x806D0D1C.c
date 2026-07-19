/* Function at 0x806D0D1C, size=384 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 15 function(s) */

int FUN_806D0D1C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x806D0D24
    /* li r5, 0 */ // 0x806D0D28
    *(0x14 + r1) = r0; // stw @ 0x806D0D2C
    /* li r0, 0 */ // 0x806D0D30
    *(0xc + r1) = r31; // stw @ 0x806D0D34
    *(8 + r1) = r30; // stw @ 0x806D0D38
    r30 = r3;
    *(0xa30 + r3) = r0; // stw @ 0x806D0D40
    r12 = *(0x6c + r3); // lwzu @ 0x806D0D44
    r12 = *(0x10 + r12); // lwz @ 0x806D0D48
    /* mtctr r12 */ // 0x806D0D4C
    /* bctrl  */ // 0x806D0D50
    r3 = r30;
    r4 = r30 + 0x6c; // 0x806D0D58
    FUN_80671C34(r3, r4); // bl 0x80671C34
    r3 = r30 + 0x6c; // 0x806D0D60
    /* li r4, 1 */ // 0x806D0D64
    FUN_8066A380(r3, r4, r3, r4); // bl 0x8066A380
    r3 = r30 + 0x6c; // 0x806D0D6C
    r5 = r30 + 0x58; // 0x806D0D70
    /* li r4, 1 */ // 0x806D0D74
    /* li r6, 0 */ // 0x806D0D78
    /* li r7, 0 */ // 0x806D0D7C
    FUN_8066A350(r3, r5, r4, r6, r7); // bl 0x8066A350
    r3 = r30;
    /* li r4, 4 */ // 0x806D0D88
    FUN_80671C1C(r6, r7, r3, r4); // bl 0x80671C1C
    r3 = r30;
    r5 = r30 + 0x290; // 0x806D0D94
    /* li r4, 0 */ // 0x806D0D98
    /* li r6, 0 */ // 0x806D0D9C
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x290; // 0x806D0DA4
    /* li r4, 1 */ // 0x806D0DA8
    FUN_808D5444(r4, r6, r3, r4); // bl 0x808D5444
    r3 = r30;
    r5 = r30 + 0x404; // 0x806D0DB4
    /* li r4, 1 */ // 0x806D0DB8
    /* li r6, 0 */ // 0x806D0DBC
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* lis r31, 0 */ // 0x806D0DC4
    r3 = r30 + 0x404; // 0x806D0DC8
    r31 = r31 + 0; // 0x806D0DCC
    r4 = r31 + 0x157; // 0x806D0DD0
    r5 = r31 + 0x166; // 0x806D0DD4
    r6 = r31 + 0x174; // 0x806D0DD8
    FUN_8066CF50(r3, r4, r5, r6); // bl 0x8066CF50
    r3 = r30;
    r5 = r30 + 0x578; // 0x806D0DE4
    /* li r4, 2 */ // 0x806D0DE8
    /* li r6, 0 */ // 0x806D0DEC
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x578; // 0x806D0DF4
    r4 = r31 + 0x182; // 0x806D0DF8
    r5 = r31 + 0x189; // 0x806D0DFC
    r6 = r31 + 0x1a1; // 0x806D0E00
    /* li r7, 1 */ // 0x806D0E04
    /* li r8, 0 */ // 0x806D0E08
    /* li r9, 0 */ // 0x806D0E0C
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    /* li r0, 2 */ // 0x806D0E14
    *(0x7b8 + r30) = r0; // stw @ 0x806D0E18
    r3 = r30 + 0x578; // 0x806D0E1C
    r4 = r30 + 0x44; // 0x806D0E20
    /* li r5, 0 */ // 0x806D0E24
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r3 = r30;
    r5 = r30 + 0x7cc; // 0x806D0E30
    /* li r4, 3 */ // 0x806D0E34
    /* li r6, 0 */ // 0x806D0E38
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x7cc; // 0x806D0E40
    r4 = r31 + 0x1a6; // 0x806D0E44
    r5 = r31 + 0x1ad; // 0x806D0E48
    r6 = r31 + 0x1b2; // 0x806D0E4C
    /* li r7, 1 */ // 0x806D0E50
    /* li r8, 0 */ // 0x806D0E54
    /* li r9, 1 */ // 0x806D0E58
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    /* li r0, 3 */ // 0x806D0E60
    *(0xa0c + r30) = r0; // stw @ 0x806D0E64
    r3 = r30 + 0x7cc; // 0x806D0E68
    r4 = r30 + 0x44; // 0x806D0E6C
    /* li r5, 0 */ // 0x806D0E70
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r3 = r30 + 0x578; // 0x806D0E78
    /* li r4, 0 */ // 0x806D0E7C
    FUN_80649EEC(r4, r5, r3, r4); // bl 0x80649EEC
    r0 = *(0x14 + r1); // lwz @ 0x806D0E84
    r31 = *(0xc + r1); // lwz @ 0x806D0E88
    r30 = *(8 + r1); // lwz @ 0x806D0E8C
    return;
}