/* Function at 0x805FD284, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_805FD284(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805FD290
    r31 = r3;
    r12 = *(0xc + r3); // lwz @ 0x805FD298
    r12 = *(0x20 + r12); // lwz @ 0x805FD29C
    /* mtctr r12 */ // 0x805FD2A0
    /* bctrl  */ // 0x805FD2A4
    r12 = *(0x244 + r31); // lwz @ 0x805FD2A8
    r3 = r31 + 0x238; // 0x805FD2AC
    r12 = *(0x20 + r12); // lwz @ 0x805FD2B0
    /* mtctr r12 */ // 0x805FD2B4
    /* bctrl  */ // 0x805FD2B8
    r12 = *(0x2d8 + r31); // lwz @ 0x805FD2BC
    r3 = r31 + 0x2cc; // 0x805FD2C0
    r12 = *(0x20 + r12); // lwz @ 0x805FD2C4
    /* mtctr r12 */ // 0x805FD2C8
    /* bctrl  */ // 0x805FD2CC
    r0 = *(0x14 + r1); // lwz @ 0x805FD2D0
    r31 = *(0xc + r1); // lwz @ 0x805FD2D4
    return;
}