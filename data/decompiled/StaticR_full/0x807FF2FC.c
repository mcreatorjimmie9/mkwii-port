/* Function at 0x807FF2FC, size=328 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_807FF2FC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x807FF30C
    r31 = r31 + 0; // 0x807FF310
    *(0x28 + r1) = r30; // stw @ 0x807FF314
    *(0x24 + r1) = r29; // stw @ 0x807FF318
    r29 = r3;
    r4 = *(0x104 + r3); // lwz @ 0x807FF320
    r0 = *(0x1b8 + r3); // lbz @ 0x807FF324
    r30 = *(0x10 + r4); // lwz @ 0x807FF328
    r6 = *(0x6c + r30); // lwz @ 0x807FF330
    if (==) goto 0x0x807ff3a0;
    /* lfs f0, 0x1a0(r3) */ // 0x807FF338
    /* lis r5, 0 */ // 0x807FF33C
    /* stfs f0, 0x64(r6) */ // 0x807FF340
    r4 = r5 + 0; // 0x807FF344
    /* lfs f0, 0x1a4(r3) */ // 0x807FF348
    /* stfs f0, 0x68(r6) */ // 0x807FF34C
    /* lfs f0, 0x1a8(r3) */ // 0x807FF350
    /* stfs f0, 0x6c(r6) */ // 0x807FF354
    /* lfs f0, 0x1ac(r3) */ // 0x807FF358
    /* stfs f0, 0x70(r6) */ // 0x807FF35C
    /* lfs f0, 0x1b0(r3) */ // 0x807FF360
    /* stfs f0, 0x74(r6) */ // 0x807FF364
    /* lfs f0, 0x1b4(r3) */ // 0x807FF368
    r3 = r6;
    /* stfs f0, 0x78(r6) */ // 0x807FF370
    /* lfs f0, 0(r5) */ // 0x807FF374
    /* stfs f0, 0x7c(r6) */ // 0x807FF378
    /* lfs f0, 4(r4) */ // 0x807FF37C
    /* stfs f0, 0x80(r6) */ // 0x807FF380
    /* lfs f0, 8(r4) */ // 0x807FF384
    /* stfs f0, 0x84(r6) */ // 0x807FF388
    r12 = *(0 + r6); // lwz @ 0x807FF38C
    r12 = *(0x14 + r12); // lwz @ 0x807FF390
    /* mtctr r12 */ // 0x807FF394
    /* bctrl  */ // 0x807FF398
    /* b 0x807ff3f8 */ // 0x807FF39C
    /* lfs f2, 0(r31) */ // 0x807FF3A0
    /* lis r5, 0 */ // 0x807FF3A4
    /* stfs f2, 0x64(r6) */ // 0x807FF3A8
    r4 = r5 + 0; // 0x807FF3AC
    /* lfs f1, 0x60(r31) */ // 0x807FF3B0
    r3 = r6;
    /* stfs f1, 0x68(r6) */ // 0x807FF3B8
    /* lfs f0, 0x64(r31) */ // 0x807FF3BC
    /* stfs f0, 0x6c(r6) */ // 0x807FF3C0
    /* stfs f2, 0x70(r6) */ // 0x807FF3C4
    /* stfs f1, 0x74(r6) */ // 0x807FF3C8
    /* stfs f2, 0x78(r6) */ // 0x807FF3CC
    /* lfs f0, 0(r5) */ // 0x807FF3D0
    /* stfs f0, 0x7c(r6) */ // 0x807FF3D4
    /* lfs f0, 4(r4) */ // 0x807FF3D8
    /* stfs f0, 0x80(r6) */ // 0x807FF3DC
    /* lfs f0, 8(r4) */ // 0x807FF3E0
    /* stfs f0, 0x84(r6) */ // 0x807FF3E4
    r12 = *(0 + r6); // lwz @ 0x807FF3E8
    r12 = *(0x14 + r12); // lwz @ 0x807FF3EC
    /* mtctr r12 */ // 0x807FF3F0
    /* bctrl  */ // 0x807FF3F4
    /* lfs f1, 0x68(r31) */ // 0x807FF3F8
    /* li r0, 1 */ // 0x807FF3FC
    /* lfs f0, 8(r31) */ // 0x807FF400
    /* stfs f1, 0x158(r29) */ // 0x807FF404
    /* fmuls f0, f0, f1 */ // 0x807FF408
    /* stfs f0, 0x28(r30) */ // 0x807FF40C
    /* stfs f0, 0x2c(r30) */ // 0x807FF410
    /* stfs f0, 0x30(r30) */ // 0x807FF414
    *(0x118 + r29) = r0; // stb @ 0x807FF418
    r31 = *(0x2c + r1); // lwz @ 0x807FF41C
    r30 = *(0x28 + r1); // lwz @ 0x807FF420
    r29 = *(0x24 + r1); // lwz @ 0x807FF424
    r0 = *(0x34 + r1); // lwz @ 0x807FF428
    /* stfs f0, 8(r1) */ // 0x807FF42C
    /* stfs f0, 0xc(r1) */ // 0x807FF430
    /* stfs f0, 0x10(r1) */ // 0x807FF434
    return;
}