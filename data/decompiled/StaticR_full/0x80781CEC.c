/* Function at 0x80781CEC, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80781CEC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80781CF8
    r31 = r3;
    r3 = *(0x20 + r3); // lwz @ 0x80781D00
    /* lfs f1, 0xd0(r31) */ // 0x80781D04
    r12 = *(0 + r3); // lwz @ 0x80781D08
    r12 = *(0x18 + r12); // lwz @ 0x80781D0C
    /* mtctr r12 */ // 0x80781D10
    /* bctrl  */ // 0x80781D14
    /* lis r3, 0 */ // 0x80781D18
    /* lfs f0, 0(r3) */ // 0x80781D1C
    /* stfs f0, 0xe0(r31) */ // 0x80781D20
    r31 = *(0xc + r1); // lwz @ 0x80781D24
    r0 = *(0x14 + r1); // lwz @ 0x80781D28
    return;
}