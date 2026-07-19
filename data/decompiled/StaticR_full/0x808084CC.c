/* Function at 0x808084CC, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_808084CC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 2 */ // 0x808084D8
    *(0xc + r1) = r31; // stw @ 0x808084DC
    r31 = r3;
    *(0xb4 + r3) = r0; // stw @ 0x808084E4
    r12 = *(0 + r3); // lwz @ 0x808084E8
    r12 = *(0x12c + r12); // lwz @ 0x808084EC
    /* mtctr r12 */ // 0x808084F0
    /* bctrl  */ // 0x808084F4
    /* li r0, 1 */ // 0x808084F8
    *(0x11d + r31) = r0; // stb @ 0x808084FC
    r31 = *(0xc + r1); // lwz @ 0x80808500
    r0 = *(0x14 + r1); // lwz @ 0x80808504
    return;
}