/* Function at 0x806713C8, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_806713C8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806713D4
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x806713DC
    r12 = *(0x34 + r12); // lwz @ 0x806713E0
    /* mtctr r12 */ // 0x806713E4
    /* bctrl  */ // 0x806713E8
    /* li r0, 1 */ // 0x806713EC
    *(8 + r31) = r0; // stw @ 0x806713F0
    r31 = *(0xc + r1); // lwz @ 0x806713F4
    r0 = *(0x14 + r1); // lwz @ 0x806713F8
    return;
}