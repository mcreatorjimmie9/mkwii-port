/* Function at 0x807D1DAC, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_807D1DAC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807D1DB8
    r31 = r3;
    r12 = *(0x34 + r3); // lwz @ 0x807D1DC0
    r12 = *(0xc + r12); // lwz @ 0x807D1DC4
    /* mtctr r12 */ // 0x807D1DC8
    /* bctrl  */ // 0x807D1DCC
    r3 = *(0xbc + r31); // lwz @ 0x807D1DD0
    if (==) goto 0x0x807d1dec;
    r12 = *(0 + r3); // lwz @ 0x807D1DDC
    r12 = *(0x10 + r12); // lwz @ 0x807D1DE0
    /* mtctr r12 */ // 0x807D1DE4
    /* bctrl  */ // 0x807D1DE8
    r0 = *(0x14 + r1); // lwz @ 0x807D1DEC
    r31 = *(0xc + r1); // lwz @ 0x807D1DF0
    return;
}