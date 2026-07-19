/* Function at 0x805E40A4, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_805E40A4(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805E40B0
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x805E40B8
    r12 = *(0x34 + r12); // lwz @ 0x805E40BC
    /* mtctr r12 */ // 0x805E40C0
    /* bctrl  */ // 0x805E40C4
    r12 = *(0 + r31); // lwz @ 0x805E40C8
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x805E40D0
    /* mtctr r12 */ // 0x805E40D4
    /* bctrl  */ // 0x805E40D8
    r0 = *(0x14 + r1); // lwz @ 0x805E40DC
    r31 = *(0xc + r1); // lwz @ 0x805E40E0
    return;
}