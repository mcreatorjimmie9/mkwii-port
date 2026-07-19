/* Function at 0x80753B78, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80753B78(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x80753B80
    /* li r4, 0 */ // 0x80753B84
    *(0x14 + r1) = r0; // stw @ 0x80753B88
    /* lfs f1, 0(r5) */ // 0x80753B8C
    *(0xc + r1) = r31; // stw @ 0x80753B90
    r31 = r3;
    r3 = *(0x20 + r3); // lwz @ 0x80753B98
    r12 = *(0 + r3); // lwz @ 0x80753B9C
    r12 = *(0x10 + r12); // lwz @ 0x80753BA0
    /* mtctr r12 */ // 0x80753BA4
    /* bctrl  */ // 0x80753BA8
    r3 = *(0x20 + r31); // lwz @ 0x80753BAC
    /* lfs f1, 0xec(r31) */ // 0x80753BB0
    r12 = *(0 + r3); // lwz @ 0x80753BB4
    r12 = *(0x18 + r12); // lwz @ 0x80753BB8
    /* mtctr r12 */ // 0x80753BBC
    /* bctrl  */ // 0x80753BC0
    r0 = *(0x14 + r1); // lwz @ 0x80753BC4
    r31 = *(0xc + r1); // lwz @ 0x80753BC8
    return;
}