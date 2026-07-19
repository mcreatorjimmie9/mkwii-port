/* Function at 0x80746CE8, size=252 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80746CE8(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x80746CF0
    *(0x34 + r1) = r0; // stw @ 0x80746CF4
    /* lis r0, 0x4330 */ // 0x80746CF8
    r5 = r5 + 0; // 0x80746CFC
    *(0x2c + r1) = r31; // stw @ 0x80746D00
    /* lis r31, 0 */ // 0x80746D04
    r31 = r31 + 0; // 0x80746D08
    r5 = r5 + 0x18; // 0x80746D0C
    *(0x28 + r1) = r30; // stw @ 0x80746D10
    r30 = r3;
    *(0x24 + r1) = r29; // stw @ 0x80746D18
    *(0x20 + r1) = r28; // stw @ 0x80746D1C
    r28 = r4;
    *(8 + r1) = r0; // stw @ 0x80746D24
    *(0x10 + r1) = r0; // stw @ 0x80746D28
    FUN_8089F578(); // bl 0x8089F578
    /* lis r3, 0 */ // 0x80746D30
    r5 = *(0xa0 + r30); // lwz @ 0x80746D34
    r3 = r3 + 0; // 0x80746D38
    *(0 + r30) = r3; // stw @ 0x80746D3C
    /* lis r3, 0 */ // 0x80746D40
    r4 = *(0 + r28); // lwz @ 0x80746D44
    r0 = *(0x2c + r4); // lha @ 0x80746D48
    *(0xb4 + r30) = r0; // stw @ 0x80746D4C
    r4 = *(0 + r28); // lwz @ 0x80746D50
    r0 = *(0x2e + r4); // lha @ 0x80746D54
    *(0xb8 + r30) = r0; // stw @ 0x80746D58
    r4 = *(0 + r28); // lwz @ 0x80746D5C
    r0 = *(0x36 + r4); // lha @ 0x80746D60
    *(0xbc + r30) = r0; // stw @ 0x80746D64
    r4 = *(0 + r5); // lwz @ 0x80746D68
    r3 = *(0 + r3); // lwz @ 0x80746D6C
    r29 = *(0x2a + r4); // lha @ 0x80746D70
    r4 = *(0x28 + r4); // lha @ 0x80746D74
    FUN_80770F48(); // bl 0x80770F48
    r12 = *(0 + r3); // lwz @ 0x80746D7C
    r12 = *(0xc + r12); // lwz @ 0x80746D80
    /* mtctr r12 */ // 0x80746D84
    /* bctrl  */ // 0x80746D88
    /* xoris r0, r29, 0x8000 */ // 0x80746D8C
    *(0xc + r1) = r0; // stw @ 0x80746D90
    /* lis r3, 0 */ // 0x80746D94
    r0 = *(0xb4 + r30); // lwz @ 0x80746D98
    /* lfd f3, 0(r3) */ // 0x80746D9C
    /* lfd f0, 8(r1) */ // 0x80746DA0
    /* xoris r0, r0, 0x8000 */ // 0x80746DA4
    *(0x14 + r1) = r0; // stw @ 0x80746DA8
    /* fsubs f2, f0, f3 */ // 0x80746DAC
    r0 = *(0xb8 + r30); // lwz @ 0x80746DB0
    /* lfd f0, 0x10(r1) */ // 0x80746DB4
    /* fdivs f1, f1, f2 */ // 0x80746DB8
    /* fsubs f0, f0, f3 */ // 0x80746DBC
    /* fdivs f0, f1, f0 */ // 0x80746DC0
    /* fctiwz f0, f0 */ // 0x80746DC4
    /* stfd f0, 0x18(r1) */ // 0x80746DC8
    r3 = *(0x1c + r1); // lwz @ 0x80746DCC
    r3 = r3 + 1; // 0x80746DD0
    r0 = r3 * r0; // 0x80746DD4
    *(0xc0 + r30) = r0; // stw @ 0x80746DD8
    /* slwi r3, r0, 2 */ // 0x80746DDC
    FUN_805E3430(r3); // bl 0x805E3430
}