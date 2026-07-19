/* Function at 0x807E7E6C, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_807E7E6C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807E7E78
    r31 = r3;
    r3 = *(0x20 + r3); // lwz @ 0x807E7E80
    r12 = *(0 + r3); // lwz @ 0x807E7E84
    r12 = *(0x14 + r12); // lwz @ 0x807E7E88
    /* mtctr r12 */ // 0x807E7E8C
    /* bctrl  */ // 0x807E7E90
    if (!=) goto 0x0x807e7ea4;
    /* li r0, 1 */ // 0x807E7E9C
    *(0x124 + r31) = r0; // stw @ 0x807E7EA0
    r3 = *(0x20 + r31); // lwz @ 0x807E7EA4
    r0 = *(0x2c + r31); // lhz @ 0x807E7EA8
    /* lfs f2, 0x20(r3) */ // 0x807E7EAC
    /* lfs f1, 0x1c(r3) */ // 0x807E7EB0
    r0 = r0 | 1; // 0x807E7EB4
    /* lfs f0, 0x18(r3) */ // 0x807E7EB8
    /* stfs f0, 0x30(r31) */ // 0x807E7EBC
    /* stfs f2, 0x38(r31) */ // 0x807E7EC0
    *(0x2c + r31) = r0; // sth @ 0x807E7EC4
    /* stfs f1, 0x34(r31) */ // 0x807E7EC8
    r31 = *(0xc + r1); // lwz @ 0x807E7ECC
    r0 = *(0x14 + r1); // lwz @ 0x807E7ED0
    return;
}