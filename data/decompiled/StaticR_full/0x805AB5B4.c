/* Function at 0x805AB5B4, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_805AB5B4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805AB5C0
    r31 = r3;
    r3 = r4;
    r12 = *(0 + r4); // lwz @ 0x805AB5CC
    r12 = *(0x1c + r12); // lwz @ 0x805AB5D0
    /* mtctr r12 */ // 0x805AB5D4
    /* bctrl  */ // 0x805AB5D8
    r3 = *(0x253c + r31); // lwz @ 0x805AB5DC
    r0 = r3 + -1; // 0x805AB5E0
    *(0x253c + r31) = r0; // stw @ 0x805AB5E4
    r31 = *(0xc + r1); // lwz @ 0x805AB5E8
    r0 = *(0x14 + r1); // lwz @ 0x805AB5EC
    return;
}