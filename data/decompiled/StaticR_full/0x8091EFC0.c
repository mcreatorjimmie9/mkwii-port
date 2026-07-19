/* Function at 0x8091EFC0, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

void FUN_8091EFC0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8091EFCC
    /* lis r31, 0 */ // 0x8091EFD0
    /* b 0x8091eff4 */ // 0x8091EFD4
    r0 = *(0 + r3); // lwz @ 0x8091EFD8
    /* li r4, -1 */ // 0x8091EFDC
    *(0 + r31) = r0; // stw @ 0x8091EFE0
    r12 = *(4 + r3); // lwz @ 0x8091EFE4
    r3 = *(8 + r3); // lwz @ 0x8091EFE8
    /* mtctr r12 */ // 0x8091EFEC
    /* bctrl  */ // 0x8091EFF0
    r3 = *(0 + r31); // lwz @ 0x8091EFF4
    if (!=) goto 0x0x8091efd8;
    r0 = *(0x14 + r1); // lwz @ 0x8091F000
    r31 = *(0xc + r1); // lwz @ 0x8091F004
    return;
}