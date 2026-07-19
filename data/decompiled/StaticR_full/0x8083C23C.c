/* Function at 0x8083C23C, size=596 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_8083C23C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x8083C250
    r0 = *(0x78 + r3); // lwz @ 0x8083C254
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x8083C258
    if (==) goto 0x0x8083c530;
    r3 = *(0x134 + r3); // lwz @ 0x8083C260
    r0 = *(0 + r3); // lwz @ 0x8083C264
    /* rlwinm. r0, r0, 0, 0x1a, 0x1a */ // 0x8083C268
    if (==) goto 0x0x8083c278;
    r4 = r31 + 0x144; // 0x8083C270
    FUN_80842F28(r4); // bl 0x80842F28
    r3 = *(0x134 + r31); // lwz @ 0x8083C278
    r0 = *(0 + r3); // lwz @ 0x8083C27C
    /* rlwinm. r0, r0, 0, 0x19, 0x19 */ // 0x8083C280
    if (==) goto 0x0x8083c2a0;
    r4 = r31 + 0x144; // 0x8083C288
    r5 = r31 + 0xc8; // 0x8083C28C
    FUN_80842F48(r4, r5); // bl 0x80842F48
    r0 = *(0x74 + r31); // lwz @ 0x8083C294
    r0 = r0 | 0x80; // 0x8083C298
    *(0x74 + r31) = r0; // stw @ 0x8083C29C
    /* lfs f1, 0xb4(r31) */ // 0x8083C2A0
    /* lis r3, 0x6cec */ // 0x8083C2A4
    /* lfs f3, 0xc8(r31) */ // 0x8083C2A8
    /* lis r7, 0 */ // 0x8083C2AC
    /* lfs f0, 0xcc(r31) */ // 0x8083C2B0
    r6 = r3 + -0x2001; // 0x8083C2B4
    /* lfs f2, 0xd0(r31) */ // 0x8083C2B8
    /* fmuls f6, f3, f1 */ // 0x8083C2BC
    /* fmuls f4, f0, f1 */ // 0x8083C2C0
    /* lfs f5, 0x144(r31) */ // 0x8083C2C4
    /* lfs f3, 0x148(r31) */ // 0x8083C2C8
    /* fmuls f2, f2, f1 */ // 0x8083C2CC
    /* lfs f0, 0x14c(r31) */ // 0x8083C2D0
    /* fadds f5, f5, f6 */ // 0x8083C2D4
    /* fadds f3, f3, f4 */ // 0x8083C2D8
    r9 = *(0x6e + r31); // lha @ 0x8083C2DC
    /* fadds f0, f0, f2 */ // 0x8083C2E0
    /* stfs f5, 0x44(r31) */ // 0x8083C2E4
    r4 = r31 + 0x44; // 0x8083C2E8
    /* stfs f3, 0x48(r31) */ // 0x8083C2EC
    r5 = r31 + 0xbc; // 0x8083C2F0
    r8 = r31 + 0xd4; // 0x8083C2F4
    /* stfs f0, 0x4c(r31) */ // 0x8083C2F8
    /* li r30, 0 */ // 0x8083C2FC
    r3 = *(0 + r7); // lwz @ 0x8083C300
    r7 = r31 + 0xd8; // 0x8083C304
    FUN_8081A818(r8, r7); // bl 0x8081A818
    if (==) goto 0x0x8083c3f8;
    /* .byte 0xe0, 0x5f, 0x00, 0x44 */ // 0x8083C314
    /* .byte 0xe0, 0x3f, 0x00, 0xf0 */ // 0x8083C318
    /* .byte 0xe0, 0x9f, 0x01, 0x44 */ // 0x8083C31C
    /* vsel v0, v2, v1, v0 */ // 0x8083C320
    /* .byte 0xe0, 0x5f, 0x80, 0x4c */ // 0x8083C324
    /* vsel v3, v4, v1, v0 */ // 0x8083C328
    /* .byte 0xe0, 0x3f, 0x80, 0xf8 */ // 0x8083C32C
    /* xssubsp f0, v31, f0 */ // 0x8083C330
    /* vsel v0, v2, v1, v0 */ // 0x8083C334
    /* .byte 0xe0, 0x9f, 0x81, 0x4c */ // 0x8083C338
    /* xssubdp f3, v31, f0 */ // 0x8083C33C
    /* vsel v3, v4, v1, v0 */ // 0x8083C340
    r3 = *(0x134 + r31); // lwz @ 0x8083C344
    /* xsmaddmsp f0, v31, f16 */ // 0x8083C348
    /* xsmaddmdp f3, v31, f16 */ // 0x8083C34C
    r0 = *(0 + r3); // lwz @ 0x8083C350
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x8083C354
    if (==) goto 0x0x8083c3b8;
    /* lis r3, 0 */ // 0x8083C35C
    /* lfs f1, 0x128(r31) */ // 0x8083C360
    /* lfs f0, 0(r3) */ // 0x8083C364
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8083C368
    /* mfcr r0 */ // 0x8083C36C
    /* rlwinm. r0, r0, 2, 0x1f, 0x1f */ // 0x8083C370
    if (==) goto 0x0x8083c3b8;
    /* lfs f5, 0x114(r31) */ // 0x8083C378
    /* li r30, 1 */ // 0x8083C37C
    /* lfs f4, 0x118(r31) */ // 0x8083C380
    /* lfs f3, 0x11c(r31) */ // 0x8083C384
    /* lfs f2, 0x144(r31) */ // 0x8083C388
    /* lfs f1, 0x148(r31) */ // 0x8083C38C
    /* lfs f0, 0x14c(r31) */ // 0x8083C390
    /* fadds f2, f2, f5 */ // 0x8083C394
    /* fadds f1, f1, f4 */ // 0x8083C398
    /* stfs f5, 0x50(r31) */ // 0x8083C39C
    /* fadds f0, f0, f3 */ // 0x8083C3A0
    /* stfs f4, 0x54(r31) */ // 0x8083C3A4
    /* stfs f3, 0x58(r31) */ // 0x8083C3A8
    /* stfs f2, 0x144(r31) */ // 0x8083C3AC
    /* stfs f1, 0x148(r31) */ // 0x8083C3B0
    /* stfs f0, 0x14c(r31) */ // 0x8083C3B4
    /* lis r3, 0 */ // 0x8083C3B8
    /* lfs f1, 0x120(r31) */ // 0x8083C3BC
    /* lfs f0, 0(r3) */ // 0x8083C3C0
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8083C3C4
    /* mfcr r0 */ // 0x8083C3C8
    /* rlwinm. r0, r0, 2, 0x1f, 0x1f */ // 0x8083C3CC
    if (==) goto 0x0x8083c3f8;
    r0 = *(0x74 + r31); // lwz @ 0x8083C3D4
    /* lfs f2, 0xfc(r31) */ // 0x8083C3D8
    /* lfs f1, 0x100(r31) */ // 0x8083C3DC
    r0 = r0 | 0x80; // 0x8083C3E0
    /* lfs f0, 0x104(r31) */ // 0x8083C3E4
    /* stfs f2, 0xc8(r31) */ // 0x8083C3E8
    /* stfs f1, 0xcc(r31) */ // 0x8083C3EC
    /* stfs f0, 0xd0(r31) */ // 0x8083C3F0
    *(0x74 + r31) = r0; // stw @ 0x8083C3F4
    if (!=) goto 0x0x8083c420;
    /* .byte 0xe0, 0x5f, 0x00, 0x44 */ // 0x8083C400
    /* .byte 0xe0, 0x3f, 0x00, 0xbc */ // 0x8083C404
    /* vmsumshm v0, v2, v1, v0 */ // 0x8083C408
    /* .byte 0xe0, 0x5f, 0x80, 0x4c */ // 0x8083C40C
    /* .byte 0xe0, 0x3f, 0x80, 0xc4 */ // 0x8083C410
    /* xxmrghd vs0, vs31, vs0 */ // 0x8083C414
    /* vmsumshm v0, v2, v1, v0 */ // 0x8083C418
    /* xscmpgtdp vs0, f31, f16 */ // 0x8083C41C
    r0 = *(0x74 + r31); // lwz @ 0x8083C420
    /* rlwinm. r0, r0, 0, 0x18, 0x18 */ // 0x8083C424
    if (==) goto 0x0x8083c44c;
    /* lfs f2, 0xc8(r31) */ // 0x8083C42C
    r3 = r31 + 0x20; // 0x8083C430
    /* lfs f1, 0xcc(r31) */ // 0x8083C434
    /* lfs f0, 0xd0(r31) */ // 0x8083C438
    /* stfs f2, 0x2c(r31) */ // 0x8083C43C
    /* stfs f1, 0x30(r31) */ // 0x8083C440
    /* stfs f0, 0x34(r31) */ // 0x8083C444
    FUN_8081C374(); // bl 0x8081C374
    r3 = *(0x134 + r31); // lwz @ 0x8083C44C
    r3 = *(0 + r3); // lwz @ 0x8083C450
    /* rlwinm. r0, r3, 0, 0x1e, 0x1e */ // 0x8083C454
    if (==) goto 0x0x8083c4a4;
    r3 = r31;
    FUN_8082E1D0(r3); // bl 0x8082E1D0
    r0 = *(4 + r31); // lwz @ 0x8083C464
    /* lis r3, 0 */ // 0x8083C468
    /* lfs f0, 0(r3) */ // 0x8083C46C
    /* stfs f0, 0x50(r31) */ // 0x8083C474
    /* stfs f0, 0x54(r31) */ // 0x8083C478
    /* stfs f0, 0x58(r31) */ // 0x8083C47C
    if (!=) goto 0x0x8083c494;
    r3 = r31;
    /* li r4, 1 */ // 0x8083C488
    FUN_808315F4(r3, r4); // bl 0x808315F4
}