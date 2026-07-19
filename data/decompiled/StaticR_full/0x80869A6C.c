/* Function at 0x80869A6C, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80869A6C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, 1 */ // 0x80869A78
    *(0xc + r1) = r31; // stw @ 0x80869A7C
    *(8 + r1) = r30; // stw @ 0x80869A80
    r30 = r3;
    *(0 + r3) = r0; // stw @ 0x80869A88
    FUN_808695B0(); // bl 0x808695B0
    r3 = *(4 + r30); // lwz @ 0x80869A90
    r4 = *(8 + r30); // lwz @ 0x80869A94
    FUN_805ECA00(); // bl 0x805ECA00
    r3 = *(4 + r30); // lwz @ 0x80869A9C
    /* lis r31, 0 */ // 0x80869AA0
    /* lis r5, 0 */ // 0x80869AA4
    /* lfs f1, 0(r31) */ // 0x80869AA8
    r3 = *(0x28 + r3); // lwz @ 0x80869AAC
    /* li r4, 1 */ // 0x80869AB0
    /* lfs f2, 0(r5) */ // 0x80869AB4
    FUN_805E70EC(r5, r4); // bl 0x805E70EC
    r12 = *(0x20 + r30); // lwz @ 0x80869ABC
    r3 = r30 + 0x20; // 0x80869AC0
    /* lfs f1, 0(r31) */ // 0x80869AC4
    /* li r4, 0x126 */ // 0x80869AC8
    r12 = *(0xe0 + r12); // lwz @ 0x80869ACC
    /* mtctr r12 */ // 0x80869AD0
    /* bctrl  */ // 0x80869AD4
    r0 = *(0x14 + r1); // lwz @ 0x80869AD8
    r31 = *(0xc + r1); // lwz @ 0x80869ADC
    r30 = *(8 + r1); // lwz @ 0x80869AE0
    return;
}