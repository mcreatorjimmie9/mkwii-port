/* Function at 0x806C4CEC, size=376 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 15 function(s) */

int FUN_806C4CEC(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x806C4CF4
    /* li r5, 0 */ // 0x806C4CF8
    *(0x14 + r1) = r0; // stw @ 0x806C4CFC
    *(0xc + r1) = r31; // stw @ 0x806C4D00
    *(8 + r1) = r30; // stw @ 0x806C4D04
    r30 = r3;
    r12 = *(0x6c + r3); // lwz @ 0x806C4D0C
    r12 = *(0x10 + r12); // lwz @ 0x806C4D10
    /* mtctr r12 */ // 0x806C4D14
    r3 = r3 + 0x6c; // 0x806C4D18
    /* bctrl  */ // 0x806C4D1C
    r3 = r30;
    r4 = r30 + 0x6c; // 0x806C4D24
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r30 + 0x6c; // 0x806C4D2C
    r5 = r30 + 0x58; // 0x806C4D30
    /* li r4, 1 */ // 0x806C4D34
    /* li r6, 0 */ // 0x806C4D38
    /* li r7, 0 */ // 0x806C4D3C
    FUN_8066A350(r3, r5, r4, r6, r7); // bl 0x8066A350
    r3 = r30;
    /* li r4, 4 */ // 0x806C4D48
    FUN_80671C1C(r6, r7, r3, r4); // bl 0x80671C1C
    r3 = r30;
    r5 = r30 + 0x290; // 0x806C4D54
    /* li r4, 0 */ // 0x806C4D58
    /* li r6, 0 */ // 0x806C4D5C
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x290; // 0x806C4D64
    /* li r4, 0 */ // 0x806C4D68
    FUN_808D5444(r4, r6, r3, r4); // bl 0x808D5444
    r3 = r30 + 0x290; // 0x806C4D70
    /* li r4, 0xfa3 */ // 0x806C4D74
    /* li r5, 0 */ // 0x806C4D78
    FUN_808D5844(r4, r3, r4, r5); // bl 0x808D5844
    r3 = r30;
    r5 = r30 + 0x404; // 0x806C4D84
    /* li r4, 1 */ // 0x806C4D88
    /* li r6, 0 */ // 0x806C4D8C
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* lis r31, 0 */ // 0x806C4D94
    r3 = r30 + 0x404; // 0x806C4D98
    r31 = r31 + 0; // 0x806C4D9C
    r4 = r31 + 0x6b; // 0x806C4DA0
    FUN_80660B08(r3, r4); // bl 0x80660B08
    r3 = r30;
    r5 = r30 + 0x650; // 0x806C4DAC
    /* li r4, 2 */ // 0x806C4DB0
    /* li r6, 0 */ // 0x806C4DB4
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x650; // 0x806C4DBC
    r4 = r31 + 0x7b; // 0x806C4DC0
    r5 = r31 + 0x82; // 0x806C4DC4
    r6 = r31 + 0x95; // 0x806C4DC8
    /* li r7, 1 */ // 0x806C4DCC
    /* li r8, 0 */ // 0x806C4DD0
    /* li r9, 0 */ // 0x806C4DD4
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    /* li r0, 2 */ // 0x806C4DDC
    *(0x890 + r30) = r0; // stw @ 0x806C4DE0
    r3 = r30 + 0x650; // 0x806C4DE4
    r4 = r30 + 0x44; // 0x806C4DE8
    /* li r5, 0 */ // 0x806C4DEC
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r3 = r30;
    r5 = r30 + 0x8a4; // 0x806C4DF8
    /* li r4, 3 */ // 0x806C4DFC
    /* li r6, 0 */ // 0x806C4E00
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x8a4; // 0x806C4E08
    r4 = r31 + 0x9f; // 0x806C4E0C
    r5 = r31 + 0xa6; // 0x806C4E10
    r6 = r31 + 0xab; // 0x806C4E14
    /* li r7, 1 */ // 0x806C4E18
    /* li r8, 0 */ // 0x806C4E1C
    /* li r9, 1 */ // 0x806C4E20
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    /* li r0, 3 */ // 0x806C4E28
    *(0xae4 + r30) = r0; // stw @ 0x806C4E2C
    r3 = r30 + 0x8a4; // 0x806C4E30
    r4 = r30 + 0x44; // 0x806C4E34
    /* li r5, 0 */ // 0x806C4E38
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r3 = r30 + 0x650; // 0x806C4E40
    /* li r4, 0 */ // 0x806C4E44
    FUN_80649EEC(r4, r5, r3, r4); // bl 0x80649EEC
    r0 = *(0x14 + r1); // lwz @ 0x806C4E4C
    r31 = *(0xc + r1); // lwz @ 0x806C4E50
    r30 = *(8 + r1); // lwz @ 0x806C4E54
    return;
}