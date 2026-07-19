/* Function at 0x807FA9A4, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_807FA9A4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x807FA9AC
    *(0x14 + r1) = r0; // stw @ 0x807FA9B0
    *(0xc + r1) = r31; // stw @ 0x807FA9B4
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x807FA9BC
    r12 = *(0x68 + r12); // lwz @ 0x807FA9C0
    /* mtctr r12 */ // 0x807FA9C4
    /* bctrl  */ // 0x807FA9C8
    r12 = *(0 + r31); // lwz @ 0x807FA9CC
    r3 = r31;
    r12 = *(0x30 + r12); // lwz @ 0x807FA9D4
    /* mtctr r12 */ // 0x807FA9D8
    /* bctrl  */ // 0x807FA9DC
    r5 = *(0x20 + r3); // lwz @ 0x807FA9E0
    /* lis r4, 0 */ // 0x807FA9E4
    /* lfs f0, 0(r4) */ // 0x807FA9E8
    /* li r0, 0 */ // 0x807FA9EC
    r4 = r5 | 0x2121; // 0x807FA9F0
    r4 = r4 | 0x2121; // 0x807FA9F4
    *(0x20 + r3) = r4; // stw @ 0x807FA9F8
    *(0xb0 + r31) = r0; // stw @ 0x807FA9FC
    /* stfs f0, 0xb4(r31) */ // 0x807FAA00
    /* stfs f0, 0xb8(r31) */ // 0x807FAA04
    /* stfs f0, 0xbc(r31) */ // 0x807FAA08
    r31 = *(0xc + r1); // lwz @ 0x807FAA0C
    r0 = *(0x14 + r1); // lwz @ 0x807FAA10
    return;
}