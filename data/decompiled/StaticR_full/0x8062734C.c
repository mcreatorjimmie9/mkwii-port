/* Function at 0x8062734C, size=716 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_8062734C(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lfs f1, 0(r5) */ // 0x80627354
    /* lfs f0, 4(r5) */ // 0x8062735C
    *(0x3c + r1) = r31; // stw @ 0x80627360
    r31 = r4;
    *(0x38 + r1) = r30; // stw @ 0x80627368
    r30 = r3;
    /* lfs f3, 0x78(r3) */ // 0x80627370
    /* lfs f2, 0x7c(r3) */ // 0x80627374
    /* fadds f8, f3, f1 */ // 0x80627378
    /* lfs f1, 0x20(r3) */ // 0x8062737C
    /* fadds f7, f2, f0 */ // 0x80627380
    /* lfs f0, 0x24(r3) */ // 0x80627384
    /* lfs f3, 0x80(r3) */ // 0x80627388
    /* fsubs f5, f1, f8 */ // 0x8062738C
    /* fsubs f4, f0, f7 */ // 0x80627390
    /* lfs f2, 8(r5) */ // 0x80627394
    /* lfs f1, 0(r4) */ // 0x80627398
    /* fadds f6, f3, f2 */ // 0x8062739C
    /* lfs f0, 4(r4) */ // 0x806273A0
    /* lfs f3, 0x28(r3) */ // 0x806273A4
    /* fmuls f1, f1, f5 */ // 0x806273A8
    /* lfs f2, 8(r4) */ // 0x806273AC
    /* fsubs f3, f3, f6 */ // 0x806273B0
    /* fmuls f0, f0, f4 */ // 0x806273B4
    /* stfs f8, 0x20(r1) */ // 0x806273B8
    /* fmuls f2, f2, f3 */ // 0x806273BC
    /* stfs f7, 0x24(r1) */ // 0x806273C0
    /* fadds f0, f1, f0 */ // 0x806273C4
    /* stfs f6, 0x28(r1) */ // 0x806273C8
    /* fadds f0, f2, f0 */ // 0x806273CC
    /* stfs f5, 0x14(r1) */ // 0x806273D0
    /* stfs f4, 0x18(r1) */ // 0x806273D4
    /* stfs f3, 0x1c(r1) */ // 0x806273D8
    /* stfs f0, 0x44(r3) */ // 0x806273DC
    FUN_8061DFE0(); // bl 0x8061DFE0
    r4 = *(0x18 + r30); // lwz @ 0x806273E4
    /* lfs f2, 0x60(r3) */ // 0x806273E8
    /* lfs f0, 0xc(r4) */ // 0x806273EC
    /* lfs f1, 0x44(r30) */ // 0x806273F0
    /* fmuls f0, f0, f2 */ // 0x806273F4
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x806273F8
    if (<=) goto 0x0x8062741c;
    r3 = r30;
    FUN_8061DFE0(r3); // bl 0x8061DFE0
    r4 = *(0x18 + r30); // lwz @ 0x80627408
    /* lfs f1, 0x60(r3) */ // 0x8062740C
    /* lfs f0, 0xc(r4) */ // 0x80627410
    /* fmuls f0, f0, f1 */ // 0x80627414
    /* stfs f0, 0x44(r30) */ // 0x80627418
    /* lis r3, 0 */ // 0x8062741C
    /* lfs f1, 0x44(r30) */ // 0x80627420
    /* lfs f0, 0(r3) */ // 0x80627424
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80627428
    if (>=) goto 0x0x80627434;
    /* stfs f0, 0x44(r30) */ // 0x80627430
    /* lfs f3, 0x44(r30) */ // 0x80627434
    r3 = r30;
    /* lfs f2, 0(r31) */ // 0x8062743C
    /* lfs f1, 4(r31) */ // 0x80627440
    /* fmuls f5, f3, f2 */ // 0x80627444
    /* lfs f2, 0x20(r1) */ // 0x80627448
    /* fmuls f4, f3, f1 */ // 0x8062744C
    /* lfs f0, 8(r31) */ // 0x80627450
    /* lfs f1, 0x24(r1) */ // 0x80627454
    /* fadds f5, f2, f5 */ // 0x80627458
    /* fadds f4, f1, f4 */ // 0x8062745C
    /* lfs f2, 0x2c(r30) */ // 0x80627460
    /* fmuls f3, f3, f0 */ // 0x80627464
    /* lfs f0, 0x28(r1) */ // 0x80627468
    /* lfs f1, 0x30(r30) */ // 0x8062746C
    /* fsubs f2, f5, f2 */ // 0x80627470
    /* fadds f3, f0, f3 */ // 0x80627474
    /* lfs f0, 0x34(r30) */ // 0x80627478
    /* fsubs f1, f4, f1 */ // 0x8062747C
    /* stfs f5, 0x20(r30) */ // 0x80627480
    /* fsubs f0, f3, f0 */ // 0x80627484
    /* stfs f4, 0x24(r30) */ // 0x80627488
    /* stfs f3, 0x28(r30) */ // 0x8062748C
    /* stfs f2, 8(r1) */ // 0x80627490
    /* stfs f1, 0xc(r1) */ // 0x80627494
    /* stfs f0, 0x10(r1) */ // 0x80627498
    FUN_8061DC48(); // bl 0x8061DC48
    /* lfs f3, 8(r1) */ // 0x806274A0
    /* lfs f2, 0xc(r1) */ // 0x806274A4
    /* lfs f1, 0x10(r1) */ // 0x806274A8
    /* stfs f3, 0x54(r30) */ // 0x806274AC
    /* stfs f2, 0x58(r30) */ // 0x806274B0
    /* stfs f1, 0x5c(r30) */ // 0x806274B4
    /* lfs f0, 0x14c(r3) */ // 0x806274B8
    /* fsubs f3, f3, f0 */ // 0x806274BC
    /* stfs f3, 0x54(r30) */ // 0x806274C0
    /* lfs f0, 0x150(r3) */ // 0x806274C4
    /* fsubs f2, f2, f0 */ // 0x806274C8
    /* stfs f2, 0x58(r30) */ // 0x806274CC
    /* lfs f0, 0x154(r3) */ // 0x806274D0
    /* fsubs f1, f1, f0 */ // 0x806274D4
    /* stfs f1, 0x5c(r30) */ // 0x806274D8
    /* lfs f0, 0xb0(r3) */ // 0x806274DC
    /* fsubs f3, f3, f0 */ // 0x806274E0
    /* stfs f3, 0x54(r30) */ // 0x806274E4
    /* lfs f0, 0xb4(r3) */ // 0x806274E8
    /* fsubs f2, f2, f0 */ // 0x806274EC
    /* stfs f2, 0x58(r30) */ // 0x806274F0
    /* lfs f0, 0xb8(r3) */ // 0x806274F4
    /* fsubs f1, f1, f0 */ // 0x806274F8
    /* stfs f1, 0x5c(r30) */ // 0x806274FC
    /* lfs f0, 0xc8(r3) */ // 0x80627500
    /* fsubs f0, f3, f0 */ // 0x80627504
    /* stfs f0, 0x54(r30) */ // 0x80627508
    /* lfs f0, 0xcc(r3) */ // 0x8062750C
    /* fsubs f0, f2, f0 */ // 0x80627510
    /* stfs f0, 0x58(r30) */ // 0x80627514
    /* lfs f0, 0xd0(r3) */ // 0x80627518
    r3 = r30;
    /* fsubs f0, f1, f0 */ // 0x80627520
    /* stfs f0, 0x5c(r30) */ // 0x80627524
    FUN_8061E098(r3); // bl 0x8061E098
    /* lfs f1, 0x54(r30) */ // 0x8062752C
    /* lfs f0, 0x4c(r3) */ // 0x80627530
    /* lfs f2, 0x58(r30) */ // 0x80627534
    /* fsubs f0, f1, f0 */ // 0x80627538
    /* lfs f1, 0x5c(r30) */ // 0x8062753C
    /* stfs f0, 0x54(r30) */ // 0x80627540
    /* lfs f0, 0x50(r3) */ // 0x80627544
    /* fsubs f0, f2, f0 */ // 0x80627548
    /* stfs f0, 0x58(r30) */ // 0x8062754C
    /* lfs f0, 0x54(r3) */ // 0x80627550
    r3 = r30;
    /* fsubs f0, f1, f0 */ // 0x80627558
    /* stfs f0, 0x5c(r30) */ // 0x8062755C
    FUN_8061E0C8(r3); // bl 0x8061E0C8
    /* lfs f1, 0x54(r30) */ // 0x80627564
    /* lfs f0, 0x3c(r3) */ // 0x80627568
    /* lfs f3, 0x58(r30) */ // 0x8062756C
    /* fsubs f5, f1, f0 */ // 0x80627570
    /* lfs f4, 0x5c(r30) */ // 0x80627574
    r4 = *(0x1c + r30); // lwz @ 0x80627578
    /* stfs f5, 0x54(r30) */ // 0x8062757C
    /* lfs f2, 0x20(r1) */ // 0x80627580
    /* lfs f0, 0x40(r3) */ // 0x80627584
    /* lfs f1, 0x24(r1) */ // 0x80627588
    /* fsubs f3, f3, f0 */ // 0x8062758C
    /* lfs f0, 0x28(r1) */ // 0x80627590
    /* stfs f3, 0x58(r30) */ // 0x80627594
    /* lfs f3, 0x44(r3) */ // 0x80627598
    /* fsubs f3, f4, f3 */ // 0x8062759C
    /* stfs f3, 0x5c(r30) */ // 0x806275A0
    /* lfs f3, 0x3c(r4) */ // 0x806275A4
    /* fadds f3, f3, f5 */ // 0x806275A8
    /* stfs f3, 0x3c(r4) */ // 0x806275AC
    /* lfs f4, 0x40(r4) */ // 0x806275B0
    /* lfs f3, 0x58(r30) */ // 0x806275B4
    /* fadds f3, f4, f3 */ // 0x806275B8
    /* stfs f3, 0x40(r4) */ // 0x806275BC
    /* lfs f4, 0x44(r4) */ // 0x806275C0
    /* lfs f3, 0x5c(r30) */ // 0x806275C4
    /* fadds f3, f4, f3 */ // 0x806275C8
    /* stfs f3, 0x44(r4) */ // 0x806275CC
    /* lfs f5, 0x20(r30) */ // 0x806275D0
    /* lfs f4, 0x24(r30) */ // 0x806275D4
    /* lfs f3, 0x28(r30) */ // 0x806275D8
    /* fsubs f2, f5, f2 */ // 0x806275DC
    /* fsubs f1, f4, f1 */ // 0x806275E0
    /* stfs f5, 0x2c(r30) */ // 0x806275E4
    /* fsubs f0, f3, f0 */ // 0x806275E8
    /* stfs f4, 0x30(r30) */ // 0x806275EC
    /* stfs f3, 0x34(r30) */ // 0x806275F0
    /* stfs f2, 0x38(r30) */ // 0x806275F4
    /* stfs f1, 0x3c(r30) */ // 0x806275F8
    /* stfs f0, 0x40(r30) */ // 0x806275FC
    r31 = *(0x3c + r1); // lwz @ 0x80627600
    r30 = *(0x38 + r1); // lwz @ 0x80627604
    r0 = *(0x44 + r1); // lwz @ 0x80627608
    return;
}