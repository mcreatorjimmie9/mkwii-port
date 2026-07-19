/* Function at 0x8075EF8C, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8075EF8C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8075EF98
    r31 = r3;
    r3 = *(0xdc + r3); // lwz @ 0x8075EFA0
    FUN_805EEF04(); // bl 0x805EEF04
    r3 = *(0xdc + r31); // lwz @ 0x8075EFA8
    /* li r4, 0 */ // 0x8075EFAC
    r3 = *(0x28 + r3); // lwz @ 0x8075EFB0
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x8075EFB8
    r12 = *(8 + r12); // lwz @ 0x8075EFBC
    /* mtctr r12 */ // 0x8075EFC0
    /* bctrl  */ // 0x8075EFC4
    /* lis r3, 0 */ // 0x8075EFC8
    /* li r4, 0 */ // 0x8075EFCC
    /* stfs f1, 0(r3) */ // 0x8075EFD0
    r3 = *(0xdc + r31); // lwz @ 0x8075EFD4
    r12 = *(0 + r3); // lwz @ 0x8075EFD8
    r12 = *(0xc + r12); // lwz @ 0x8075EFDC
    /* mtctr r12 */ // 0x8075EFE0
    /* bctrl  */ // 0x8075EFE4
    r0 = *(0x14 + r1); // lwz @ 0x8075EFE8
    r31 = *(0xc + r1); // lwz @ 0x8075EFEC
    return;
}