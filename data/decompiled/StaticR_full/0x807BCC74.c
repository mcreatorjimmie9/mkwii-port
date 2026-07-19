/* Function at 0x807BCC74, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_807BCC74(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807BCC80
    r31 = r3;
    r3 = *(0x14c + r3); // lwz @ 0x807BCC88
    r12 = *(0x34 + r3); // lwz @ 0x807BCC8C
    r12 = *(0x20 + r12); // lwz @ 0x807BCC90
    /* mtctr r12 */ // 0x807BCC94
    /* bctrl  */ // 0x807BCC98
    r3 = *(0x158 + r31); // lwz @ 0x807BCC9C
    r12 = *(0x34 + r3); // lwz @ 0x807BCCA0
    r12 = *(0x24 + r12); // lwz @ 0x807BCCA4
    /* mtctr r12 */ // 0x807BCCA8
    /* bctrl  */ // 0x807BCCAC
    r0 = *(0x14 + r1); // lwz @ 0x807BCCB0
    r31 = *(0xc + r1); // lwz @ 0x807BCCB4
    return;
}