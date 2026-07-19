/* Function at 0x805FB6A8, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_805FB6A8(int r3, int r4, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r6;
    *(8 + r1) = r30; // stw @ 0x805FB6BC
    r30 = r3;
    r12 = *(0xc + r3); // lwz @ 0x805FB6C4
    r12 = *(0x5c + r12); // lwz @ 0x805FB6C8
    /* mtctr r12 */ // 0x805FB6CC
    /* bctrl  */ // 0x805FB6D0
    r12 = *(0xc + r30); // lwz @ 0x805FB6D4
    r3 = r30;
    r4 = r31;
    r12 = *(0x10 + r12); // lwz @ 0x805FB6E0
    /* mtctr r12 */ // 0x805FB6E4
    /* bctrl  */ // 0x805FB6E8
    r0 = *(0x14 + r1); // lwz @ 0x805FB6EC
    r31 = *(0xc + r1); // lwz @ 0x805FB6F0
    r30 = *(8 + r1); // lwz @ 0x805FB6F4
    return;
}