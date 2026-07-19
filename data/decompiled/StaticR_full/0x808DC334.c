/* Function at 0x808DC334, size=744 bytes */
/* Stack frame: 32 bytes */

void FUN_808DC334(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* lis r7, 0x4330 */ // 0x808DC338
    r6 = *(0x124 + r3); // lwz @ 0x808DC33C
    r0 = *(0x118 + r3); // lwz @ 0x808DC340
    r5 = r4 / r6; // 0x808DC344
    *(8 + r1) = r7; // stw @ 0x808DC348
    *(0x10 + r1) = r7; // stw @ 0x808DC34C
    r5 = r5 * r6; // 0x808DC350
    /* subf r7, r5, r4 */ // 0x808DC354
    if (>=) goto 0x0x808dc368;
    /* li r5, 0 */ // 0x808DC360
    /* b 0x808dc398 */ // 0x808DC364
    r6 = *(0x11c + r3); // lwz @ 0x808DC368
    r4 = r0 + r6; // 0x808DC36C
    if (>=) goto 0x0x808dc380;
    /* li r5, 1 */ // 0x808DC378
    /* b 0x808dc398 */ // 0x808DC37C
    /* slwi r4, r0, 1 */ // 0x808DC380
    /* li r5, 3 */ // 0x808DC384
    r4 = r4 + r6; // 0x808DC388
    if (>=) goto 0x0x808dc398;
    /* li r5, 2 */ // 0x808DC394
    if (==) goto 0x0x808dc3bc;
    if (==) goto 0x0x808dc3f4;
    if (==) goto 0x0x808dc400;
    if (==) goto 0x0x808dc504;
    /* b 0x808dc60c */ // 0x808DC3B8
    r0 = *(0x110 + r3); // lbz @ 0x808DC3BC
    /* li r4, 1 */ // 0x808DC3C0
    if (==) goto 0x0x808dc3d0;
    /* li r4, -1 */ // 0x808DC3CC
    /* xoris r0, r4, 0x8000 */ // 0x808DC3D0
    *(0xc + r1) = r0; // stw @ 0x808DC3D4
    /* lis r4, 0 */ // 0x808DC3D8
    /* lfs f0, 0x114(r3) */ // 0x808DC3DC
    /* lfd f2, 0(r4) */ // 0x808DC3E0
    /* lfd f1, 8(r1) */ // 0x808DC3E4
    /* fsubs f1, f1, f2 */ // 0x808DC3E8
    /* fmuls f1, f0, f1 */ // 0x808DC3EC
    /* b 0x808dc614 */ // 0x808DC3F0
    /* lis r3, 0 */ // 0x808DC3F4
    /* lfs f1, 0(r3) */ // 0x808DC3F8
    /* b 0x808dc614 */ // 0x808DC3FC
    if (>=) goto 0x0x808dc424;
    /* xoris r4, r7, 0x8000 */ // 0x808DC408
    *(0x14 + r1) = r4; // stw @ 0x808DC40C
    /* lis r4, 0 */ // 0x808DC410
    /* lfd f1, 0(r4) */ // 0x808DC414
    /* lfd f0, 0x10(r1) */ // 0x808DC418
    /* fsubs f0, f0, f1 */ // 0x808DC41C
    /* b 0x808dc4a8 */ // 0x808DC420
    r6 = *(0x11c + r3); // lwz @ 0x808DC424
    r8 = r0 + r6; // 0x808DC428
    if (>=) goto 0x0x808dc454;
    /* subf r4, r0, r7 */ // 0x808DC434
    /* lis r5, 0 */ // 0x808DC438
    /* xoris r4, r4, 0x8000 */ // 0x808DC43C
    *(0xc + r1) = r4; // stw @ 0x808DC440
    /* lfd f1, 0(r5) */ // 0x808DC444
    /* lfd f0, 8(r1) */ // 0x808DC448
    /* fsubs f0, f0, f1 */ // 0x808DC44C
    /* b 0x808dc4a8 */ // 0x808DC450
    /* slwi r5, r0, 1 */ // 0x808DC454
    r4 = r5 + r6; // 0x808DC458
    if (>=) goto 0x0x808dc484;
    /* subf r4, r8, r7 */ // 0x808DC464
    /* lis r5, 0 */ // 0x808DC468
    /* xoris r4, r4, 0x8000 */ // 0x808DC46C
    *(0x14 + r1) = r4; // stw @ 0x808DC470
    /* lfd f1, 0(r5) */ // 0x808DC474
    /* lfd f0, 0x10(r1) */ // 0x808DC478
    /* fsubs f0, f0, f1 */ // 0x808DC47C
    /* b 0x808dc4a8 */ // 0x808DC480
    /* neg r5, r5 */ // 0x808DC484
    /* lis r4, 0 */ // 0x808DC488
    /* subf r5, r6, r5 */ // 0x808DC48C
    /* lfd f1, 0(r4) */ // 0x808DC490
    r4 = r5 + r7; // 0x808DC494
    /* xoris r4, r4, 0x8000 */ // 0x808DC498
    *(0xc + r1) = r4; // stw @ 0x808DC49C
    /* lfd f0, 8(r1) */ // 0x808DC4A0
    /* fsubs f0, f0, f1 */ // 0x808DC4A4
    /* fctiwz f0, f0 */ // 0x808DC4A8
    r4 = *(0x110 + r3); // lbz @ 0x808DC4AC
    /* li r5, 1 */ // 0x808DC4B0
    /* stfd f0, 0x18(r1) */ // 0x808DC4B4
    r4 = *(0x1c + r1); // lwz @ 0x808DC4BC
    if (==) goto 0x0x808dc4c8;
    /* li r5, -1 */ // 0x808DC4C4
    r5 = r4 * r5; // 0x808DC4C8
    /* xoris r0, r0, 0x8000 */ // 0x808DC4CC
    *(0xc + r1) = r0; // stw @ 0x808DC4D0
    /* lis r4, 0 */ // 0x808DC4D4
    /* lfd f3, 0(r4) */ // 0x808DC4D8
    /* lfd f0, 8(r1) */ // 0x808DC4DC
    /* xoris r0, r5, 0x8000 */ // 0x808DC4E0
    *(0x14 + r1) = r0; // stw @ 0x808DC4E4
    /* lfs f1, 0x114(r3) */ // 0x808DC4E8
    /* fsubs f0, f0, f3 */ // 0x808DC4EC
    /* lfd f2, 0x10(r1) */ // 0x808DC4F0
    /* fsubs f2, f2, f3 */ // 0x808DC4F4
    /* fmuls f1, f1, f2 */ // 0x808DC4F8
    /* fdivs f1, f1, f0 */ // 0x808DC4FC
    /* b 0x808dc614 */ // 0x808DC500
    if (>=) goto 0x0x808dc528;
    /* xoris r4, r7, 0x8000 */ // 0x808DC50C
    *(0x14 + r1) = r4; // stw @ 0x808DC510
    /* lis r4, 0 */ // 0x808DC514
    /* lfd f1, 0(r4) */ // 0x808DC518
    /* lfd f0, 0x10(r1) */ // 0x808DC51C
    /* fsubs f0, f0, f1 */ // 0x808DC520
    /* b 0x808dc5ac */ // 0x808DC524
    r6 = *(0x11c + r3); // lwz @ 0x808DC528
    r8 = r0 + r6; // 0x808DC52C
    if (>=) goto 0x0x808dc558;
    /* subf r4, r0, r7 */ // 0x808DC538
    /* lis r5, 0 */ // 0x808DC53C
    /* xoris r4, r4, 0x8000 */ // 0x808DC540
    *(0xc + r1) = r4; // stw @ 0x808DC544
    /* lfd f1, 0(r5) */ // 0x808DC548
    /* lfd f0, 8(r1) */ // 0x808DC54C
    /* fsubs f0, f0, f1 */ // 0x808DC550
    /* b 0x808dc5ac */ // 0x808DC554
    /* slwi r5, r0, 1 */ // 0x808DC558
    r4 = r5 + r6; // 0x808DC55C
    if (>=) goto 0x0x808dc588;
    /* subf r4, r8, r7 */ // 0x808DC568
    /* lis r5, 0 */ // 0x808DC56C
    /* xoris r4, r4, 0x8000 */ // 0x808DC570
    *(0x14 + r1) = r4; // stw @ 0x808DC574
    /* lfd f1, 0(r5) */ // 0x808DC578
    /* lfd f0, 0x10(r1) */ // 0x808DC57C
    /* fsubs f0, f0, f1 */ // 0x808DC580
    /* b 0x808dc5ac */ // 0x808DC584
    /* neg r5, r5 */ // 0x808DC588
    /* lis r4, 0 */ // 0x808DC58C
    /* subf r5, r6, r5 */ // 0x808DC590
    /* lfd f1, 0(r4) */ // 0x808DC594
    r4 = r5 + r7; // 0x808DC598
    /* xoris r4, r4, 0x8000 */ // 0x808DC59C
    *(0xc + r1) = r4; // stw @ 0x808DC5A0
    /* lfd f0, 8(r1) */ // 0x808DC5A4
    /* fsubs f0, f0, f1 */ // 0x808DC5A8
    /* fctiwz f0, f0 */ // 0x808DC5AC
    r4 = *(0x110 + r3); // lbz @ 0x808DC5B0
    /* li r6, 1 */ // 0x808DC5B4
    /* stfd f0, 0x18(r1) */ // 0x808DC5B8
    r4 = *(0x1c + r1); // lwz @ 0x808DC5C0
    if (==) goto 0x0x808dc5cc;
    /* li r6, -1 */ // 0x808DC5C8
    /* subf r5, r4, r0 */ // 0x808DC5CC
    /* xoris r0, r0, 0x8000 */ // 0x808DC5D0
    r5 = r6 * r5; // 0x808DC5D4
    *(0xc + r1) = r0; // stw @ 0x808DC5D8
    /* lis r4, 0 */ // 0x808DC5DC
    /* lfs f1, 0x114(r3) */ // 0x808DC5E0
    /* lfd f3, 0(r4) */ // 0x808DC5E4
    /* lfd f0, 8(r1) */ // 0x808DC5E8
    /* xoris r0, r5, 0x8000 */ // 0x808DC5EC
    *(0x14 + r1) = r0; // stw @ 0x808DC5F0
    /* fsubs f0, f0, f3 */ // 0x808DC5F4
    /* lfd f2, 0x10(r1) */ // 0x808DC5F8
    /* fsubs f2, f2, f3 */ // 0x808DC5FC
    /* fmuls f1, f1, f2 */ // 0x808DC600
    /* fdivs f1, f1, f0 */ // 0x808DC604
    /* b 0x808dc614 */ // 0x808DC608
    /* lis r3, 0 */ // 0x808DC60C
    /* lfs f1, 0(r3) */ // 0x808DC610
    return;
}