/* Function at 0x807FCA10, size=208 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_807FCA10(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807FCA1C
    r31 = r3;
    r4 = *(0xb0 + r3); // lwz @ 0x807FCA24
    r0 = r4 + -1; // 0x807FCA28
    if (<=) goto 0x0x807fca54;
    if (!=) goto 0x0x807fcacc;
    r12 = *(0 + r3); // lwz @ 0x807FCA3C
    /* li r4, 0 */ // 0x807FCA40
    r12 = *(0x68 + r12); // lwz @ 0x807FCA44
    /* mtctr r12 */ // 0x807FCA48
    /* bctrl  */ // 0x807FCA4C
    /* b 0x807fcacc */ // 0x807FCA50
    r3 = *(0x20 + r3); // lwz @ 0x807FCA54
    r12 = *(0 + r3); // lwz @ 0x807FCA58
    r12 = *(0x14 + r12); // lwz @ 0x807FCA5C
    /* mtctr r12 */ // 0x807FCA60
    /* bctrl  */ // 0x807FCA64
    if (!=) goto 0x0x807fcaa4;
    /* li r0, 0 */ // 0x807FCA70
    *(0xb0 + r31) = r0; // stw @ 0x807FCA74
    r3 = r31;
    r12 = *(0 + r31); // lwz @ 0x807FCA7C
    r12 = *(0x90 + r12); // lwz @ 0x807FCA80
    /* mtctr r12 */ // 0x807FCA84
    /* bctrl  */ // 0x807FCA88
    r12 = *(0 + r31); // lwz @ 0x807FCA8C
    r3 = r31;
    /* li r4, 0 */ // 0x807FCA94
    r12 = *(0x68 + r12); // lwz @ 0x807FCA98
    /* mtctr r12 */ // 0x807FCA9C
    /* bctrl  */ // 0x807FCAA0
    r3 = *(0x20 + r31); // lwz @ 0x807FCAA4
    r0 = *(0x2c + r31); // lhz @ 0x807FCAA8
    /* lfs f2, 0x20(r3) */ // 0x807FCAAC
    /* lfs f1, 0x1c(r3) */ // 0x807FCAB0
    r0 = r0 | 1; // 0x807FCAB4
    /* lfs f0, 0x18(r3) */ // 0x807FCAB8
    /* stfs f0, 0x30(r31) */ // 0x807FCABC
    *(0x2c + r31) = r0; // sth @ 0x807FCAC0
    /* stfs f1, 0x34(r31) */ // 0x807FCAC4
    /* stfs f2, 0x38(r31) */ // 0x807FCAC8
    r0 = *(0x14 + r1); // lwz @ 0x807FCACC
    r31 = *(0xc + r1); // lwz @ 0x807FCAD0
    return;
}