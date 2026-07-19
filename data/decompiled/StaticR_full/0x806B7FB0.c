/* Function at 0x806B7FB0, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_806B7FB0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x806B7FB8
    *(0x14 + r1) = r0; // stw @ 0x806B7FBC
    *(0xc + r1) = r31; // stw @ 0x806B7FC0
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x806B7FC8
    r3 = *(8 + r3); // lwz @ 0x806B7FCC
    r12 = *(0 + r3); // lwz @ 0x806B7FD0
    r12 = *(0x30 + r12); // lwz @ 0x806B7FD4
    /* mtctr r12 */ // 0x806B7FD8
    /* bctrl  */ // 0x806B7FDC
    /* li r0, -1 */ // 0x806B7FE0
    *(0x54 + r31) = r0; // stw @ 0x806B7FE4
    r31 = *(0xc + r1); // lwz @ 0x806B7FE8
    r0 = *(0x14 + r1); // lwz @ 0x806B7FEC
    return;
}