/* Function at 0x8075D06C, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8075D06C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8075D074
    *(0x24 + r1) = r0; // stw @ 0x8075D078
    *(0x1c + r1) = r31; // stw @ 0x8075D07C
    r31 = r3;
    /* lfs f2, 0x174(r3) */ // 0x8075D084
    /* lfs f1, 0(r4) */ // 0x8075D088
    /* lfs f0, 0xf0(r3) */ // 0x8075D08C
    /* fsubs f1, f2, f1 */ // 0x8075D090
    /* stfs f1, 0x174(r3) */ // 0x8075D094
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8075D098
    if (>=) goto 0x0x8075d0ac;
    /* li r0, 0 */ // 0x8075D0A0
    /* stfs f0, 0x174(r3) */ // 0x8075D0A4
    *(0xb8 + r3) = r0; // stw @ 0x8075D0A8
    r3 = *(0x20 + r3); // lwz @ 0x8075D0AC
    /* lfs f1, 0x174(r31) */ // 0x8075D0B0
    r12 = *(0 + r3); // lwz @ 0x8075D0B4
    r12 = *(0x18 + r12); // lwz @ 0x8075D0B8
    /* mtctr r12 */ // 0x8075D0BC
    /* bctrl  */ // 0x8075D0C0
    r4 = *(0x20 + r31); // lwz @ 0x8075D0C4
    /* lfs f1, 0x174(r31) */ // 0x8075D0CC
    r4 = r4 + 0x24; // 0x8075D0D0
    FUN_805A86E4(r3, r4); // bl 0x805A86E4
    /* lfs f0, 8(r1) */ // 0x8075D0D8
    /* stfs f0, 0x168(r31) */ // 0x8075D0DC
    /* lfs f0, 0xc(r1) */ // 0x8075D0E0
    /* stfs f0, 0x16c(r31) */ // 0x8075D0E4
    /* lfs f0, 0x10(r1) */ // 0x8075D0E8
    /* stfs f0, 0x170(r31) */ // 0x8075D0EC
    r31 = *(0x1c + r1); // lwz @ 0x8075D0F0
    r0 = *(0x24 + r1); // lwz @ 0x8075D0F4
    return;
}