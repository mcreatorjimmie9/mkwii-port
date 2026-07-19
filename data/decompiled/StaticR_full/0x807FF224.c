/* Function at 0x807FF224, size=216 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_807FF224(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x807FF22C
    /* lis r31, 0 */ // 0x807FF238
    r31 = r31 + 0; // 0x807FF23C
    *(0x28 + r1) = r30; // stw @ 0x807FF240
    /* lfs f2, 0x4c(r31) */ // 0x807FF244
    *(0x24 + r1) = r29; // stw @ 0x807FF248
    r29 = r3;
    /* lfs f1, 0x50(r31) */ // 0x807FF250
    r4 = *(0x104 + r3); // lwz @ 0x807FF254
    /* lfs f0, 0x54(r31) */ // 0x807FF258
    r30 = *(0x10 + r4); // lwz @ 0x807FF25C
    r4 = r5 + 0; // 0x807FF260
    r3 = *(0x6c + r30); // lwz @ 0x807FF264
    /* stfs f2, 0x64(r3) */ // 0x807FF268
    /* stfs f1, 0x68(r3) */ // 0x807FF26C
    /* lfs f1, 0x58(r31) */ // 0x807FF270
    /* stfs f0, 0x6c(r3) */ // 0x807FF274
    /* lfs f0, 0(r31) */ // 0x807FF278
    /* stfs f2, 0x70(r3) */ // 0x807FF27C
    /* stfs f1, 0x74(r3) */ // 0x807FF280
    /* stfs f0, 0x78(r3) */ // 0x807FF284
    /* lfs f0, 0(r5) */ // 0x807FF288
    /* stfs f0, 0x7c(r3) */ // 0x807FF28C
    /* lfs f0, 4(r4) */ // 0x807FF290
    /* stfs f0, 0x80(r3) */ // 0x807FF294
    /* lfs f0, 8(r4) */ // 0x807FF298
    /* stfs f0, 0x84(r3) */ // 0x807FF29C
    r12 = *(0 + r3); // lwz @ 0x807FF2A0
    r12 = *(0x14 + r12); // lwz @ 0x807FF2A4
    /* mtctr r12 */ // 0x807FF2A8
    /* bctrl  */ // 0x807FF2AC
    /* lfs f1, 0x5c(r31) */ // 0x807FF2B0
    /* li r0, 1 */ // 0x807FF2B4
    /* lfs f0, 8(r31) */ // 0x807FF2B8
    /* stfs f1, 0x158(r29) */ // 0x807FF2BC
    /* fmuls f0, f0, f1 */ // 0x807FF2C0
    /* stfs f0, 0x28(r30) */ // 0x807FF2C4
    /* stfs f0, 0x2c(r30) */ // 0x807FF2C8
    /* stfs f0, 0x30(r30) */ // 0x807FF2CC
    *(0x118 + r29) = r0; // stb @ 0x807FF2D0
    r31 = *(0x2c + r1); // lwz @ 0x807FF2D4
    r30 = *(0x28 + r1); // lwz @ 0x807FF2D8
    r29 = *(0x24 + r1); // lwz @ 0x807FF2DC
    r0 = *(0x34 + r1); // lwz @ 0x807FF2E0
    /* stfs f0, 8(r1) */ // 0x807FF2E4
    /* stfs f0, 0xc(r1) */ // 0x807FF2E8
    /* stfs f0, 0x10(r1) */ // 0x807FF2EC
    return;
}