/* Function at 0x8075EDDC, size=244 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */

int FUN_8075EDDC(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x8075EDE8
    r31 = r3;
    r0 = *(0x218 + r3); // lbz @ 0x8075EDF0
    if (!=) goto 0x0x8075ee0c;
    /* lis r4, 0 */ // 0x8075EDFC
    /* lfs f0, 0(r4) */ // 0x8075EE00
    /* stfs f0, 0x21c(r3) */ // 0x8075EE04
    /* b 0x8075ee24 */ // 0x8075EE08
    /* lis r5, 0 */ // 0x8075EE0C
    /* lis r4, 0 */ // 0x8075EE10
    /* lfs f1, 0(r5) */ // 0x8075EE14
    /* lfs f0, 0(r4) */ // 0x8075EE18
    /* fmuls f0, f1, f0 */ // 0x8075EE1C
    /* stfs f0, 0x21c(r3) */ // 0x8075EE20
    r12 = *(0 + r31); // lwz @ 0x8075EE24
    r3 = r31;
    r12 = *(0x24 + r12); // lwz @ 0x8075EE2C
    /* mtctr r12 */ // 0x8075EE30
    /* bctrl  */ // 0x8075EE34
    /* lis r4, 0 */ // 0x8075EE38
    r7 = r3 rlwinm 1; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8075EE40
    /* lis r5, 0x4330 */ // 0x8075EE44
    /* lis r4, 0 */ // 0x8075EE48
    /* lis r6, 0 */ // 0x8075EE4C
    r9 = *(4 + r3); // lwz @ 0x8075EE50
    r3 = r31;
    r0 = *(0x2c + r31); // lhz @ 0x8075EE58
    r8 = *(0xc + r9); // lwz @ 0x8075EE5C
    *(8 + r1) = r5; // stw @ 0x8075EE60
    r0 = r0 | 8; // 0x8075EE64
    /* lhax r7, r8, r7 */ // 0x8075EE68
    r9 = *(8 + r9); // lwz @ 0x8075EE6C
    /* mulli r5, r7, 0x74 */ // 0x8075EE70
    /* lfs f2, 0(r4) */ // 0x8075EE74
    /* lfd f3, 0(r6) */ // 0x8075EE78
    /* lfs f1, 0x21c(r31) */ // 0x8075EE7C
    r4 = r9 + r5; // 0x8075EE80
    r4 = *(0x6c + r4); // lha @ 0x8075EE84
    /* xoris r4, r4, 0x8000 */ // 0x8075EE88
    *(0xc + r1) = r4; // stw @ 0x8075EE8C
    /* lfd f0, 8(r1) */ // 0x8075EE90
    *(0x2c + r31) = r0; // sth @ 0x8075EE94
    /* fsubs f0, f0, f3 */ // 0x8075EE98
    /* fdivs f0, f1, f0 */ // 0x8075EE9C
    /* stfs f0, 0x3c(r31) */ // 0x8075EEA0
    /* stfs f0, 0x40(r31) */ // 0x8075EEA4
    /* stfs f0, 0x44(r31) */ // 0x8075EEA8
    r12 = *(0 + r31); // lwz @ 0x8075EEAC
    r12 = *(0x88 + r12); // lwz @ 0x8075EEB0
    /* mtctr r12 */ // 0x8075EEB4
    /* bctrl  */ // 0x8075EEB8
    r0 = *(0x24 + r1); // lwz @ 0x8075EEBC
    r31 = *(0x1c + r1); // lwz @ 0x8075EEC0
    return;
}