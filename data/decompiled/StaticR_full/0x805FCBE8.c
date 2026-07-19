/* Function at 0x805FCBE8, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_805FCBE8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805FCBFC
    r30 = r3;
    r12 = *(0xc + r3); // lwz @ 0x805FCC04
    r12 = *(0x14 + r12); // lwz @ 0x805FCC08
    /* mtctr r12 */ // 0x805FCC0C
    /* bctrl  */ // 0x805FCC10
    r12 = *(0x244 + r30); // lwz @ 0x805FCC14
    r3 = r30 + 0x238; // 0x805FCC18
    r4 = r31;
    r12 = *(0x14 + r12); // lwz @ 0x805FCC20
    /* mtctr r12 */ // 0x805FCC24
    /* bctrl  */ // 0x805FCC28
    r12 = *(0x2d8 + r30); // lwz @ 0x805FCC2C
    r3 = r30 + 0x2cc; // 0x805FCC30
    r4 = r31;
    r12 = *(0x14 + r12); // lwz @ 0x805FCC38
    /* mtctr r12 */ // 0x805FCC3C
    /* bctrl  */ // 0x805FCC40
    r0 = *(0x14 + r1); // lwz @ 0x805FCC44
    r31 = *(0xc + r1); // lwz @ 0x805FCC48
    r30 = *(8 + r1); // lwz @ 0x805FCC4C
    return;
}