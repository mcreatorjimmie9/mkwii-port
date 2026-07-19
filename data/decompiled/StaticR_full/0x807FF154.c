/* Function at 0x807FF154, size=208 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_807FF154(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x807FF15C
    /* lis r31, 0 */ // 0x807FF168
    r31 = r31 + 0; // 0x807FF16C
    *(0x28 + r1) = r30; // stw @ 0x807FF170
    /* lfs f2, 0(r31) */ // 0x807FF174
    *(0x24 + r1) = r29; // stw @ 0x807FF178
    r29 = r3;
    /* lfs f1, 0x40(r31) */ // 0x807FF180
    r4 = *(0x104 + r3); // lwz @ 0x807FF184
    /* lfs f0, 0x44(r31) */ // 0x807FF188
    r30 = *(0x10 + r4); // lwz @ 0x807FF18C
    r4 = r5 + 0; // 0x807FF190
    r3 = *(0x6c + r30); // lwz @ 0x807FF194
    /* stfs f2, 0x64(r3) */ // 0x807FF198
    /* stfs f1, 0x68(r3) */ // 0x807FF19C
    /* stfs f0, 0x6c(r3) */ // 0x807FF1A0
    /* stfs f2, 0x70(r3) */ // 0x807FF1A4
    /* stfs f1, 0x74(r3) */ // 0x807FF1A8
    /* stfs f2, 0x78(r3) */ // 0x807FF1AC
    /* lfs f0, 0(r5) */ // 0x807FF1B0
    /* stfs f0, 0x7c(r3) */ // 0x807FF1B4
    /* lfs f0, 4(r4) */ // 0x807FF1B8
    /* stfs f0, 0x80(r3) */ // 0x807FF1BC
    /* lfs f0, 8(r4) */ // 0x807FF1C0
    /* stfs f0, 0x84(r3) */ // 0x807FF1C4
    r12 = *(0 + r3); // lwz @ 0x807FF1C8
    r12 = *(0x14 + r12); // lwz @ 0x807FF1CC
    /* mtctr r12 */ // 0x807FF1D0
    /* bctrl  */ // 0x807FF1D4
    /* lfs f1, 0x48(r31) */ // 0x807FF1D8
    /* li r0, 1 */ // 0x807FF1DC
    /* lfs f0, 8(r31) */ // 0x807FF1E0
    /* stfs f1, 0x158(r29) */ // 0x807FF1E4
    /* fmuls f0, f0, f1 */ // 0x807FF1E8
    /* stfs f0, 0x28(r30) */ // 0x807FF1EC
    /* stfs f0, 0x2c(r30) */ // 0x807FF1F0
    /* stfs f0, 0x30(r30) */ // 0x807FF1F4
    *(0x118 + r29) = r0; // stb @ 0x807FF1F8
    r31 = *(0x2c + r1); // lwz @ 0x807FF1FC
    r30 = *(0x28 + r1); // lwz @ 0x807FF200
    r29 = *(0x24 + r1); // lwz @ 0x807FF204
    r0 = *(0x34 + r1); // lwz @ 0x807FF208
    /* stfs f0, 8(r1) */ // 0x807FF20C
    /* stfs f0, 0xc(r1) */ // 0x807FF210
    /* stfs f0, 0x10(r1) */ // 0x807FF214
    return;
}