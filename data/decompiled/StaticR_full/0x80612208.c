/* Function at 0x80612208, size=620 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 16 function(s) */

int FUN_80612208(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x80612210
    /* li r5, 1 */ // 0x80612214
    *(0x34 + r1) = r0; // stw @ 0x80612218
    *(0x2c + r1) = r31; // stw @ 0x8061221C
    *(0x28 + r1) = r30; // stw @ 0x80612220
    r30 = r3;
    r12 = *(0xc + r3); // lwz @ 0x80612228
    r12 = *(0x14 + r12); // lwz @ 0x8061222C
    /* mtctr r12 */ // 0x80612230
    /* bctrl  */ // 0x80612234
    r3 = r30;
    FUN_8061E59C(r3); // bl 0x8061E59C
    /* li r4, 1 */ // 0x80612240
    FUN_805F77A8(r3, r4); // bl 0x805F77A8
    r3 = r30;
    FUN_8061DC28(r3, r4, r3); // bl 0x8061DC28
    FUN_8062A78C(r4, r3); // bl 0x8062A78C
    /* li r31, 0 */ // 0x80612254
    *(0x118 + r30) = r31; // sth @ 0x80612258
    r4 = *(0 + r30); // lwz @ 0x8061225C
    /* lis r3, 0 */ // 0x80612260
    /* lfs f0, 0(r3) */ // 0x80612264
    r3 = r30;
    r4 = *(4 + r4); // lwz @ 0x8061226C
    r0 = *(4 + r4); // lwz @ 0x80612270
    r0 = r0 rlwinm 0; // rlwinm
    *(4 + r4) = r0; // stw @ 0x80612278
    r4 = *(0 + r30); // lwz @ 0x8061227C
    r4 = *(4 + r4); // lwz @ 0x80612280
    r0 = *(8 + r4); // lwz @ 0x80612284
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r4) = r0; // stw @ 0x8061228C
    *(0x102 + r30) = r31; // sth @ 0x80612290
    r4 = *(0 + r30); // lwz @ 0x80612294
    /* stfs f0, 0x1b0(r30) */ // 0x80612298
    r4 = *(4 + r4); // lwz @ 0x8061229C
    r0 = *(4 + r4); // lwz @ 0x806122A0
    r0 = r0 rlwinm 0; // rlwinm
    *(4 + r4) = r0; // stw @ 0x806122A8
    FUN_8061E6D4(); // bl 0x8061E6D4
    *(0x1c4 + r30) = r31; // sth @ 0x806122B0
    r3 = r30;
    r6 = *(0 + r30); // lwz @ 0x806122B8
    /* li r4, 4 */ // 0x806122BC
    /* li r5, 0 */ // 0x806122C0
    r7 = *(4 + r6); // lwz @ 0x806122C4
    /* li r6, 1 */ // 0x806122C8
    r0 = *(4 + r7); // lwz @ 0x806122CC
    /* clrlwi r0, r0, 1 */ // 0x806122D0
    *(4 + r7) = r0; // stw @ 0x806122D4
    FUN_8061E8CC(r6); // bl 0x8061E8CC
    *(0x12c + r30) = r31; // sth @ 0x806122DC
    /* lis r3, 0 */ // 0x806122E0
    r4 = *(0 + r30); // lwz @ 0x806122E4
    /* lfs f0, 0(r3) */ // 0x806122E8
    r3 = r30;
    r4 = *(4 + r4); // lwz @ 0x806122F0
    r0 = *(8 + r4); // lwz @ 0x806122F4
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r4) = r0; // stw @ 0x806122FC
    r0 = *(0x254 + r30); // lhz @ 0x80612300
    *(0x14c + r30) = r31; // sth @ 0x80612304
    r0 = r0 rlwinm 0; // rlwinm
    r4 = *(0 + r30); // lwz @ 0x8061230C
    r0 = r0 rlwinm 0; // rlwinm
    *(0x14e + r30) = r31; // sth @ 0x80612314
    *(0x150 + r30) = r31; // sth @ 0x80612318
    *(0x254 + r30) = r0; // sth @ 0x8061231C
    *(0xec + r30) = r31; // stw @ 0x80612320
    /* stfs f0, 0xf0(r30) */ // 0x80612324
    r4 = *(4 + r4); // lwz @ 0x80612328
    r0 = *(0xc + r4); // lwz @ 0x8061232C
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r4) = r0; // stw @ 0x80612334
    r4 = *(0 + r30); // lwz @ 0x80612338
    r4 = *(4 + r4); // lwz @ 0x8061233C
    r0 = *(0xc + r4); // lwz @ 0x80612340
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r4) = r0; // stw @ 0x80612348
    FUN_8061E6D4(); // bl 0x8061E6D4
    *(0x148 + r30) = r31; // sth @ 0x80612350
    r3 = r30;
    r4 = *(0 + r30); // lwz @ 0x80612358
    r4 = *(4 + r4); // lwz @ 0x8061235C
    r0 = *(8 + r4); // lwz @ 0x80612360
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r4) = r0; // stw @ 0x80612368
    FUN_8061E708(); // bl 0x8061E708
    r3 = r30;
    FUN_8061E720(r3); // bl 0x8061E720
    r3 = r30;
    FUN_8061DC48(r3, r3); // bl 0x8061DC48
    FUN_8063DE9C(r3, r3); // bl 0x8063DE9C
    r4 = *(0 + r30); // lwz @ 0x80612384
    r3 = *(4 + r4); // lwz @ 0x80612388
    r0 = *(0xc + r3); // lwz @ 0x8061238C
    /* rlwinm. r0, r0, 0, 3, 3 */ // 0x80612390
    if (==) goto 0x0x806123d0;
    r4 = *(4 + r4); // lwz @ 0x80612398
    r3 = r30;
    r0 = *(0xc + r4); // lwz @ 0x806123A0
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r4) = r0; // stw @ 0x806123A8
    *(0x18e + r30) = r31; // sth @ 0x806123AC
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x806123B4
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x806123BC
    /* li r4, 1 */ // 0x806123C0
    r3 = *(0x68 + r3); // lwz @ 0x806123C4
    /* lwzx r3, r3, r0 */ // 0x806123C8
    *(0x10d + r3) = r4; // stb @ 0x806123CC
    r3 = r30;
    FUN_8060BB84(r4, r3); // bl 0x8060BB84
    r5 = *(0 + r30); // lwz @ 0x806123D8
    r3 = r30;
    /* li r4, 0 */ // 0x806123E0
    r5 = *(4 + r5); // lwz @ 0x806123E4
    r0 = *(0xc + r5); // lwz @ 0x806123E8
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r5) = r0; // stw @ 0x806123F0
    FUN_8061F1F8(r4); // bl 0x8061F1F8
    r4 = *(0 + r30); // lwz @ 0x806123F8
    /* lis r31, 0 */ // 0x806123FC
    /* lfs f0, 0(r31) */ // 0x80612400
    r3 = r30;
    r6 = *(4 + r4); // lwz @ 0x80612408
    r0 = *(4 + r6); // lwz @ 0x80612414
    r0 = r0 rlwinm 0; // rlwinm
    *(4 + r6) = r0; // stw @ 0x8061241C
    r6 = *(0 + r30); // lwz @ 0x80612420
    r6 = *(4 + r6); // lwz @ 0x80612424
    r0 = *(8 + r6); // lwz @ 0x80612428
    r0 = r0 | 0x10; // 0x8061242C
    *(8 + r6) = r0; // stw @ 0x80612430
    r6 = *(0 + r30); // lwz @ 0x80612434
    r6 = *(4 + r6); // lwz @ 0x80612438
    r0 = *(0xc + r6); // lwz @ 0x8061243C
    r0 = r0 | 0x20; // 0x80612440
    *(0xc + r6) = r0; // stw @ 0x80612444
    r6 = *(0 + r30); // lwz @ 0x80612448
    r6 = *(4 + r6); // lwz @ 0x8061244C
    r0 = *(8 + r6); // lwz @ 0x80612450
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r6) = r0; // stw @ 0x80612458
    /* stfs f0, 0x1e0(r30) */ // 0x8061245C
    FUN_80612C18(); // bl 0x80612C18
    /* lfs f0, 0(r31) */ // 0x80612464
    r3 = r30;
    /* stfs f0, 0x1e4(r30) */ // 0x8061246C
    FUN_8061DA88(r3); // bl 0x8061DA88
}