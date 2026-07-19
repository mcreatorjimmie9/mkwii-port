/* Function at 0x80717988, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80717988(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80717994
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x8071799C
    r12 = *(0x134 + r12); // lwz @ 0x807179A0
    /* mtctr r12 */ // 0x807179A4
    /* bctrl  */ // 0x807179A8
    /* lfs f0, 0xf8(r31) */ // 0x807179AC
    r31 = *(0xc + r1); // lwz @ 0x807179B0
    r0 = *(0x14 + r1); // lwz @ 0x807179B4
    /* fadds f1, f0, f1 */ // 0x807179B8
    return;
}