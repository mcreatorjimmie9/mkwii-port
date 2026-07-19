/* Function at 0x807D1CE0, size=204 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_807D1CE0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x807D1CE8
    /* lis r4, 0 */ // 0x807D1CEC
    *(0x14 + r1) = r0; // stw @ 0x807D1CF0
    /* li r0, 0 */ // 0x807D1CF4
    /* li r6, 0 */ // 0x807D1CF8
    *(0xc + r1) = r31; // stw @ 0x807D1CFC
    r31 = r3;
    *(0xc8 + r3) = r0; // stw @ 0x807D1D04
    r5 = *(0 + r5); // lwz @ 0x807D1D08
    r3 = *(0 + r4); // lwz @ 0x807D1D0C
    /* li r4, 0 */ // 0x807D1D10
    r0 = *(0x14 + r5); // lwz @ 0x807D1D14
    /* li r5, 0 */ // 0x807D1D18
    r7 = r3 + 0x28; // 0x807D1D1C
    /* mtctr r0 */ // 0x807D1D20
    if (<=) goto 0x0x807d1d60;
    /* clrlwi r0, r6, 0x18 */ // 0x807D1D2C
    /* mulli r0, r0, 0xf0 */ // 0x807D1D30
    r3 = r7 + r0; // 0x807D1D34
    r0 = *(0xcc + r3); // lwz @ 0x807D1D38
    if (!=) goto 0x0x807d1d4c;
    r4 = r4 + 1; // 0x807D1D44
    /* b 0x807d1d58 */ // 0x807D1D48
    if (!=) goto 0x0x807d1d58;
    r5 = r5 + 1; // 0x807D1D54
    r6 = r6 + 1; // 0x807D1D58
    if (counter-- != 0) goto 0x0x807d1d2c;
    r3 = r31;
    FUN_807D2068(r5, r6, r3); // bl 0x807D2068
    r3 = r31;
    FUN_807D2190(r6, r3, r3); // bl 0x807D2190
    r3 = *(0xbc + r31); // lwz @ 0x807D1D70
    if (==) goto 0x0x807d1d8c;
    r12 = *(0 + r3); // lwz @ 0x807D1D7C
    r12 = *(0xc + r12); // lwz @ 0x807D1D80
    /* mtctr r12 */ // 0x807D1D84
    /* bctrl  */ // 0x807D1D88
    r3 = r31;
    r4 = r31 + 0x38; // 0x807D1D90
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    r0 = *(0x14 + r1); // lwz @ 0x807D1D98
    r31 = *(0xc + r1); // lwz @ 0x807D1D9C
    return;
}