/* Function at 0x807C2054, size=180 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_807C2054(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x807C205C
    /* lfs f0, 0(r5) */ // 0x807C2064
    *(0x1c + r1) = r31; // stw @ 0x807C2068
    /* li r31, 0 */ // 0x807C206C
    *(0x18 + r1) = r30; // stw @ 0x807C2070
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x807C2078
    r29 = r3;
    *(0x20 + r3) = r31; // stb @ 0x807C2080
    r0 = *(0x15 + r4); // lbz @ 0x807C2084
    *(0x21 + r3) = r0; // stb @ 0x807C2088
    *(0x22 + r3) = r31; // stb @ 0x807C208C
    r0 = *(0x10 + r4); // lwz @ 0x807C2090
    *(0x24 + r3) = r0; // stw @ 0x807C2094
    r0 = *(0x10 + r4); // lwz @ 0x807C2098
    *(0x28 + r3) = r0; // stw @ 0x807C209C
    r0 = *(0x10 + r4); // lwz @ 0x807C20A0
    *(0x2c + r3) = r0; // stw @ 0x807C20A4
    /* lfs f1, 8(r4) */ // 0x807C20A8
    /* stfs f1, 0x30(r3) */ // 0x807C20AC
    /* stfs f1, 0x34(r3) */ // 0x807C20B0
    /* lfs f1, 4(r4) */ // 0x807C20B4
    /* stfs f1, 0x38(r3) */ // 0x807C20B8
    /* stfs f0, 0x3c(r3) */ // 0x807C20BC
    *(4 + r3) = r31; // stb @ 0x807C20C0
    r3 = *(0x14 + r3); // lwz @ 0x807C20C4
    r4 = *(0x14 + r4); // lbz @ 0x807C20C8
    r12 = *(0 + r3); // lwz @ 0x807C20CC
    /* lfs f1, 0(r30) */ // 0x807C20D0
    r12 = *(0xc + r12); // lwz @ 0x807C20D4
    /* mtctr r12 */ // 0x807C20D8
    /* bctrl  */ // 0x807C20DC
    r0 = *(0xc + r30); // lwz @ 0x807C20E0
    *(0x18 + r29) = r0; // stw @ 0x807C20E4
    *(0x1c + r29) = r31; // stb @ 0x807C20E8
    r31 = *(0x1c + r1); // lwz @ 0x807C20EC
    r30 = *(0x18 + r1); // lwz @ 0x807C20F0
    r29 = *(0x14 + r1); // lwz @ 0x807C20F4
    r0 = *(0x24 + r1); // lwz @ 0x807C20F8
    return;
}