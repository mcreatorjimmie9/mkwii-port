/* Function at 0x8075EED0, size=188 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */

int FUN_8075EED0(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x8075EEDC
    r31 = r3;
    r0 = *(0x2c + r3); // lhz @ 0x8075EEE4
    /* lfs f0, 0x15c(r3) */ // 0x8075EEE8
    r0 = r0 | 8; // 0x8075EEEC
    *(0x2c + r3) = r0; // sth @ 0x8075EEF0
    /* stfs f0, 0x3c(r3) */ // 0x8075EEF4
    /* stfs f0, 0x40(r3) */ // 0x8075EEF8
    /* stfs f0, 0x44(r3) */ // 0x8075EEFC
    r12 = *(0 + r3); // lwz @ 0x8075EF00
    r12 = *(0x24 + r12); // lwz @ 0x8075EF04
    /* mtctr r12 */ // 0x8075EF08
    /* bctrl  */ // 0x8075EF0C
    /* lis r4, 0 */ // 0x8075EF10
    r6 = r3;
    r4 = *(0 + r4); // lwz @ 0x8075EF18
    /* lis r0, 0x4330 */ // 0x8075EF1C
    r12 = *(0 + r31); // lwz @ 0x8075EF20
    /* lis r5, 0 */ // 0x8075EF24
    r8 = *(4 + r4); // lwz @ 0x8075EF28
    /* lis r4, 0 */ // 0x8075EF2C
    r6 = r6 rlwinm 1; // rlwinm
    *(8 + r1) = r0; // stw @ 0x8075EF34
    r7 = *(0xc + r8); // lwz @ 0x8075EF38
    r3 = r31;
    r8 = *(8 + r8); // lwz @ 0x8075EF40
    /* lhax r6, r7, r6 */ // 0x8075EF44
    /* lfs f2, 0(r4) */ // 0x8075EF48
    /* mulli r0, r6, 0x74 */ // 0x8075EF4C
    /* lfd f1, 0(r5) */ // 0x8075EF50
    r12 = *(0x88 + r12); // lwz @ 0x8075EF54
    r4 = r8 + r0; // 0x8075EF58
    r0 = *(0x6c + r4); // lha @ 0x8075EF5C
    /* xoris r0, r0, 0x8000 */ // 0x8075EF60
    *(0xc + r1) = r0; // stw @ 0x8075EF64
    /* lfd f0, 8(r1) */ // 0x8075EF68
    /* fsubs f1, f0, f1 */ // 0x8075EF6C
    /* mtctr r12 */ // 0x8075EF70
    /* bctrl  */ // 0x8075EF74
    r0 = *(0x24 + r1); // lwz @ 0x8075EF78
    r31 = *(0x1c + r1); // lwz @ 0x8075EF7C
    return;
}