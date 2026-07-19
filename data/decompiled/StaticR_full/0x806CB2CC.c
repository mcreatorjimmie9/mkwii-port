/* Function at 0x806CB2CC, size=404 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_806CB2CC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806CB2D4
    r31 = r3;
    *(0x38 + r1) = r30; // stw @ 0x806CB2E4
    *(0x34 + r1) = r29; // stw @ 0x806CB2E8
    r3 = *(0 + r4); // lwz @ 0x806CB2EC
    r3 = *(0 + r3); // lwz @ 0x806CB2F0
    r30 = *(0x204 + r3); // lwz @ 0x806CB2F4
    if (!=) goto 0x0x806cb308;
    /* li r30, 0 */ // 0x806CB300
    /* b 0x806cb35c */ // 0x806CB304
    /* lis r29, 0 */ // 0x806CB308
    r29 = r29 + 0; // 0x806CB30C
    if (==) goto 0x0x806cb358;
    r12 = *(0 + r30); // lwz @ 0x806CB314
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806CB31C
    /* mtctr r12 */ // 0x806CB320
    /* bctrl  */ // 0x806CB324
    /* b 0x806cb340 */ // 0x806CB328
    if (!=) goto 0x0x806cb33c;
    /* li r0, 1 */ // 0x806CB334
    /* b 0x806cb34c */ // 0x806CB338
    r3 = *(0 + r3); // lwz @ 0x806CB33C
    if (!=) goto 0x0x806cb32c;
    /* li r0, 0 */ // 0x806CB348
    if (==) goto 0x0x806cb358;
    /* b 0x806cb35c */ // 0x806CB354
    /* li r30, 0 */ // 0x806CB358
    if (==) goto 0x0x806cb444;
    r0 = *(0x174 + r31); // lbz @ 0x806CB364
    r3 = r30 + 0x94; // 0x806CB368
    r5 = *(0x178 + r31); // lwz @ 0x806CB36C
    /* li r6, 1 */ // 0x806CB370
    /* mulli r0, r0, 0xc */ // 0x806CB374
    r4 = r30 + r0; // 0x806CB378
    r4 = *(0x54 + r4); // lwz @ 0x806CB37C
    FUN_806CD160(r6); // bl 0x806CD160
    r0 = *(0x174 + r31); // lbz @ 0x806CB384
    r29 = r3;
    r5 = *(0x178 + r31); // lwz @ 0x806CB38C
    r3 = r30 + 0x94; // 0x806CB390
    /* mulli r0, r0, 0xc */ // 0x806CB394
    /* li r6, 2 */ // 0x806CB398
    r4 = r30 + r0; // 0x806CB39C
    r4 = *(0x54 + r4); // lwz @ 0x806CB3A0
    FUN_806CD160(r3, r6); // bl 0x806CD160
    /* lis r4, 0 */ // 0x806CB3A8
    r30 = r3;
    r4 = r4 + 0; // 0x806CB3B0
    r3 = r31 + 0xa8; // 0x806CB3B4
    r4 = r4 + 0x9f; // 0x806CB3B8
    FUN_80665D1C(r4, r4, r3, r4); // bl 0x80665D1C
    /* lis r5, 0 */ // 0x806CB3C0
    /* lfs f8, 0x180(r31) */ // 0x806CB3C4
    /* lfs f1, 0(r5) */ // 0x806CB3C8
    /* lis r4, 0 */ // 0x806CB3CC
    /* lfs f0, 0(r30) */ // 0x806CB3D0
    /* fsubs f7, f1, f8 */ // 0x806CB3D4
    /* lfs f2, 0(r29) */ // 0x806CB3D8
    /* lfs f1, 4(r29) */ // 0x806CB3DC
    /* fmuls f5, f0, f8 */ // 0x806CB3E0
    /* lfs f0, 4(r30) */ // 0x806CB3E4
    /* fmuls f6, f2, f7 */ // 0x806CB3E8
    /* fmuls f4, f1, f7 */ // 0x806CB3EC
    /* lfs f2, 8(r29) */ // 0x806CB3F0
    /* fmuls f3, f0, f8 */ // 0x806CB3F4
    /* lfs f1, 8(r30) */ // 0x806CB3F8
    /* fadds f5, f6, f5 */ // 0x806CB3FC
    /* lfs f0, 0(r4) */ // 0x806CB400
    /* fadds f3, f4, f3 */ // 0x806CB404
    /* stfs f5, 0x2c(r3) */ // 0x806CB408
    /* fmuls f2, f2, f7 */ // 0x806CB40C
    /* fmuls f1, f1, f8 */ // 0x806CB410
    /* stfs f3, 0x30(r3) */ // 0x806CB414
    /* stfs f0, 0x34(r3) */ // 0x806CB418
    /* fadds f1, f2, f1 */ // 0x806CB41C
    /* stfs f5, 0x10(r1) */ // 0x806CB420
    /* stfs f1, 0x44(r3) */ // 0x806CB424
    /* stfs f3, 0x14(r1) */ // 0x806CB428
    /* stfs f5, 0x18(r1) */ // 0x806CB42C
    /* stfs f3, 0x1c(r1) */ // 0x806CB430
    /* stfs f0, 0x20(r1) */ // 0x806CB434
    /* stfs f1, 8(r1) */ // 0x806CB438
    /* stfs f1, 0xc(r1) */ // 0x806CB43C
    /* stfs f1, 0x48(r3) */ // 0x806CB440
    r0 = *(0x44 + r1); // lwz @ 0x806CB444
    r31 = *(0x3c + r1); // lwz @ 0x806CB448
    r30 = *(0x38 + r1); // lwz @ 0x806CB44C
    r29 = *(0x34 + r1); // lwz @ 0x806CB450
    return;
}