/* Function at 0x807C8D78, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_807C8D78(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x807C8D80
    /* lfs f0, 0(r5) */ // 0x807C8D88
    *(0xc + r1) = r31; // stw @ 0x807C8D8C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807C8D94
    r30 = r3;
    /* stfs f0, 0xe0(r3) */ // 0x807C8D9C
    r3 = *(0xc4 + r3); // lwz @ 0x807C8DA0
    r12 = *(0 + r3); // lwz @ 0x807C8DA4
    r12 = *(0xc + r12); // lwz @ 0x807C8DA8
    /* mtctr r12 */ // 0x807C8DAC
    /* bctrl  */ // 0x807C8DB0
    r12 = *(0x34 + r30); // lwz @ 0x807C8DB4
    r3 = r30;
    r12 = *(0xc + r12); // lwz @ 0x807C8DBC
    /* mtctr r12 */ // 0x807C8DC0
    /* bctrl  */ // 0x807C8DC4
    /* lfs f1, 0xc(r31) */ // 0x807C8DC8
    /* lfs f0, 0xe0(r30) */ // 0x807C8DCC
    /* fmuls f0, f1, f0 */ // 0x807C8DD0
    /* stfs f0, 0xc(r31) */ // 0x807C8DD4
    r31 = *(0xc + r1); // lwz @ 0x807C8DD8
    r30 = *(8 + r1); // lwz @ 0x807C8DDC
    r0 = *(0x14 + r1); // lwz @ 0x807C8DE0
    return;
}