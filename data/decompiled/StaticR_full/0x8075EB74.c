/* Function at 0x8075EB74, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_8075EB74(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8075EB88
    r30 = r3;
    *(0x1d8 + r3) = r4; // stb @ 0x8075EB90
    r12 = *(0 + r3); // lwz @ 0x8075EB94
    r12 = *(0x68 + r12); // lwz @ 0x8075EB98
    /* mtctr r12 */ // 0x8075EB9C
    /* bctrl  */ // 0x8075EBA0
    r3 = *(0xd0 + r30); // lwz @ 0x8075EBA4
    r4 = r31;
    r12 = *(0 + r3); // lwz @ 0x8075EBAC
    r12 = *(0x68 + r12); // lwz @ 0x8075EBB0
    /* mtctr r12 */ // 0x8075EBB4
    /* bctrl  */ // 0x8075EBB8
    r3 = *(0xd4 + r30); // lwz @ 0x8075EBBC
    r4 = r31;
    r12 = *(0 + r3); // lwz @ 0x8075EBC4
    r12 = *(0x68 + r12); // lwz @ 0x8075EBC8
    /* mtctr r12 */ // 0x8075EBCC
    /* bctrl  */ // 0x8075EBD0
    r0 = *(0x14 + r1); // lwz @ 0x8075EBD4
    r31 = *(0xc + r1); // lwz @ 0x8075EBD8
    r30 = *(8 + r1); // lwz @ 0x8075EBDC
    return;
}