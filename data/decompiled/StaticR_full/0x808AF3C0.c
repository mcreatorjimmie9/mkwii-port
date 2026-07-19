/* Function at 0x808AF3C0, size=464 bytes */
/* Stack frame: 32 bytes */

void FUN_808AF3C0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* lis r0, 0x4330 */ // 0x808AF3C4
    r5 = *(0xd4 + r3); // lwz @ 0x808AF3C8
    *(8 + r1) = r0; // stw @ 0x808AF3CC
    *(0x10 + r1) = r0; // stw @ 0x808AF3D4
    if (>=) goto 0x0x808af40c;
    /* xoris r0, r4, 0x8000 */ // 0x808AF3DC
    *(0xc + r1) = r0; // stw @ 0x808AF3E0
    /* lis r4, 0 */ // 0x808AF3E4
    /* lfs f1, 0xc4(r3) */ // 0x808AF3E8
    /* lfd f3, 0(r4) */ // 0x808AF3EC
    /* lfd f2, 8(r1) */ // 0x808AF3F0
    /* lfs f0, 0xb0(r3) */ // 0x808AF3F4
    /* fsubs f2, f2, f3 */ // 0x808AF3F8
    /* fmuls f1, f2, f1 */ // 0x808AF3FC
    /* fadds f0, f0, f1 */ // 0x808AF400
    /* stfs f0, 0xec(r3) */ // 0x808AF404
    /* b 0x808af584 */ // 0x808AF408
    r7 = *(0xcc + r3); // lwz @ 0x808AF40C
    r6 = r5 + r7; // 0x808AF410
    if (>=) goto 0x0x808af458;
    /* subf r0, r5, r4 */ // 0x808AF41C
    /* lis r4, 0 */ // 0x808AF420
    /* xoris r0, r0, 0x8000 */ // 0x808AF424
    *(0x14 + r1) = r0; // stw @ 0x808AF428
    /* lfd f1, 0(r4) */ // 0x808AF42C
    /* lfd f0, 0x10(r1) */ // 0x808AF430
    /* lfs f3, 0xb0(r3) */ // 0x808AF434
    /* fsubs f1, f0, f1 */ // 0x808AF438
    /* lfs f2, 0xe0(r3) */ // 0x808AF43C
    /* lfs f0, 0xc8(r3) */ // 0x808AF440
    /* fadds f2, f3, f2 */ // 0x808AF444
    /* fmuls f0, f0, f1 */ // 0x808AF448
    /* fadds f0, f2, f0 */ // 0x808AF44C
    /* stfs f0, 0xec(r3) */ // 0x808AF450
    /* b 0x808af584 */ // 0x808AF454
    r0 = *(0xd8 + r3); // lwz @ 0x808AF458
    r0 = r0 + r6; // 0x808AF45C
    if (>=) goto 0x0x808af4c0;
    /* xoris r0, r7, 0x8000 */ // 0x808AF468
    *(0x14 + r1) = r0; // stw @ 0x808AF46C
    /* lis r5, 0 */ // 0x808AF470
    /* lfs f3, 0xb0(r3) */ // 0x808AF474
    /* subf r0, r6, r4 */ // 0x808AF478
    /* lfd f5, 0(r5) */ // 0x808AF47C
    /* lfd f0, 0x10(r1) */ // 0x808AF480
    /* xoris r0, r0, 0x8000 */ // 0x808AF484
    *(0xc + r1) = r0; // stw @ 0x808AF488
    /* fsubs f1, f0, f5 */ // 0x808AF48C
    /* lfs f0, 0xc8(r3) */ // 0x808AF490
    /* lfd f4, 8(r1) */ // 0x808AF494
    /* lfs f2, 0xe0(r3) */ // 0x808AF498
    /* fsubs f5, f4, f5 */ // 0x808AF49C
    /* lfs f4, 0xc4(r3) */ // 0x808AF4A0
    /* fmuls f0, f1, f0 */ // 0x808AF4A4
    /* fadds f1, f3, f2 */ // 0x808AF4A8
    /* fmuls f2, f4, f5 */ // 0x808AF4AC
    /* fadds f0, f1, f0 */ // 0x808AF4B0
    /* fadds f0, f2, f0 */ // 0x808AF4B4
    /* stfs f0, 0xec(r3) */ // 0x808AF4B8
    /* b 0x808af584 */ // 0x808AF4BC
    r5 = *(0xd0 + r3); // lwz @ 0x808AF4C0
    r6 = r5 + r0; // 0x808AF4C4
    if (>=) goto 0x0x808af50c;
    /* subf r0, r0, r4 */ // 0x808AF4D0
    /* lis r4, 0 */ // 0x808AF4D4
    /* xoris r0, r0, 0x8000 */ // 0x808AF4D8
    *(0xc + r1) = r0; // stw @ 0x808AF4DC
    /* lfd f1, 0(r4) */ // 0x808AF4E0
    /* lfd f0, 8(r1) */ // 0x808AF4E4
    /* lfs f3, 0xb0(r3) */ // 0x808AF4E8
    /* fsubs f1, f0, f1 */ // 0x808AF4EC
    /* lfs f2, 0xe4(r3) */ // 0x808AF4F0
    /* lfs f0, 0xc8(r3) */ // 0x808AF4F4
    /* fadds f2, f3, f2 */ // 0x808AF4F8
    /* fmuls f0, f0, f1 */ // 0x808AF4FC
    /* fadds f0, f2, f0 */ // 0x808AF500
    /* stfs f0, 0xec(r3) */ // 0x808AF504
    /* b 0x808af584 */ // 0x808AF508
    r0 = *(0xdc + r3); // lwz @ 0x808AF50C
    r0 = r0 + r6; // 0x808AF510
    if (>=) goto 0x0x808af574;
    /* xoris r0, r5, 0x8000 */ // 0x808AF51C
    *(0xc + r1) = r0; // stw @ 0x808AF520
    /* lis r5, 0 */ // 0x808AF524
    /* lfs f3, 0xb0(r3) */ // 0x808AF528
    /* subf r0, r6, r4 */ // 0x808AF52C
    /* lfd f5, 0(r5) */ // 0x808AF530
    /* lfd f0, 8(r1) */ // 0x808AF534
    /* xoris r0, r0, 0x8000 */ // 0x808AF538
    *(0x14 + r1) = r0; // stw @ 0x808AF53C
    /* fsubs f1, f0, f5 */ // 0x808AF540
    /* lfs f0, 0xc8(r3) */ // 0x808AF544
    /* lfd f4, 0x10(r1) */ // 0x808AF548
    /* lfs f2, 0xe4(r3) */ // 0x808AF54C
    /* fsubs f5, f4, f5 */ // 0x808AF550
    /* lfs f4, 0xc4(r3) */ // 0x808AF554
    /* fmuls f0, f1, f0 */ // 0x808AF558
    /* fadds f1, f3, f2 */ // 0x808AF55C
    /* fmuls f2, f4, f5 */ // 0x808AF560
    /* fadds f0, f1, f0 */ // 0x808AF564
    /* fadds f0, f2, f0 */ // 0x808AF568
    /* stfs f0, 0xec(r3) */ // 0x808AF56C
    /* b 0x808af584 */ // 0x808AF570
    /* lfs f1, 0xb0(r3) */ // 0x808AF574
    /* lfs f0, 0xe8(r3) */ // 0x808AF578
    /* fadds f0, f1, f0 */ // 0x808AF57C
    /* stfs f0, 0xec(r3) */ // 0x808AF580
    /* lfs f1, 0xec(r3) */ // 0x808AF584
    return;
}