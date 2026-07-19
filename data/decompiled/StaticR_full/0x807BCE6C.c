/* Function at 0x807BCE6C, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_807BCE6C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807BCE78
    r31 = r3;
    r3 = *(0x14c + r3); // lwz @ 0x807BCE80
    r12 = *(0x34 + r3); // lwz @ 0x807BCE84
    r12 = *(0x20 + r12); // lwz @ 0x807BCE88
    /* mtctr r12 */ // 0x807BCE8C
    /* bctrl  */ // 0x807BCE90
    r3 = *(0x158 + r31); // lwz @ 0x807BCE94
    r12 = *(0x34 + r3); // lwz @ 0x807BCE98
    r12 = *(0x24 + r12); // lwz @ 0x807BCE9C
    /* mtctr r12 */ // 0x807BCEA0
    /* bctrl  */ // 0x807BCEA4
    r0 = *(0x14 + r1); // lwz @ 0x807BCEA8
    r31 = *(0xc + r1); // lwz @ 0x807BCEAC
    return;
}