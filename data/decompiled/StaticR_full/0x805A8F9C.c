/* Function at 0x805A8F9C, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_805A8F9C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805A8FA8
    r31 = r3;
    r4 = *(8 + r3); // lwz @ 0x805A8FB0
    if (==) goto 0x0x805a8fe0;
    r3 = *(0x10 + r3); // lwz @ 0x805A8FBC
    r12 = *(0 + r3); // lwz @ 0x805A8FC0
    r12 = *(0x18 + r12); // lwz @ 0x805A8FC4
    /* mtctr r12 */ // 0x805A8FC8
    /* bctrl  */ // 0x805A8FCC
    /* li r0, 0 */ // 0x805A8FD0
    *(8 + r31) = r0; // stw @ 0x805A8FD4
    *(0xc + r31) = r0; // stw @ 0x805A8FD8
    *(0x10 + r31) = r0; // stw @ 0x805A8FDC
    r0 = *(0x14 + r1); // lwz @ 0x805A8FE0
    r31 = *(0xc + r1); // lwz @ 0x805A8FE4
    return;
}