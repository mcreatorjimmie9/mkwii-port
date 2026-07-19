/* Function at 0x808792C0, size=304 bytes */
/* Stack frame: 64 bytes */

void FUN_808792C0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* lis r7, 0 */ // 0x808792CC
    *(0x44 + r1) = r0; // stw @ 0x808792D0
    r7 = r7 + 0; // 0x808792D4
    if (>) goto 0x0x808793e0;
    /* lis r6, 0x4330 */ // 0x808792DC
    /* xoris r0, r4, 0x8000 */ // 0x808792E0
    *(0x1c + r1) = r0; // stw @ 0x808792E4
    /* li r0, 0 */ // 0x808792E8
    /* lfd f8, 0x58(r7) */ // 0x808792EC
    r4 = r4 + -8; // 0x808792F0
    *(0x18 + r1) = r6; // stw @ 0x808792F4
    /* xoris r5, r4, 0x8000 */ // 0x808792F8
    /* li r4, 0x40 */ // 0x808792FC
    /* lfd f1, 0x28(r7) */ // 0x80879300
    /* lfd f0, 0x18(r1) */ // 0x80879304
    /* xoris r4, r4, 0x8000 */ // 0x80879308
    *(0x24 + r1) = r5; // stw @ 0x8087930C
    /* fsub f2, f0, f8 */ // 0x80879310
    /* lfs f5, 0x30(r7) */ // 0x80879314
    *(0x20 + r1) = r6; // stw @ 0x80879318
    /* lfd f4, 0x20(r7) */ // 0x8087931C
    /* fmul f6, f1, f2 */ // 0x80879320
    /* lfd f0, 0x20(r1) */ // 0x80879324
    *(0x2c + r1) = r4; // stw @ 0x80879328
    /* fsub f1, f0, f8 */ // 0x8087932C
    /* lfs f3, 4(r7) */ // 0x80879330
    *(0x28 + r1) = r6; // stw @ 0x80879334
    /* fmul f7, f6, f1 */ // 0x80879338
    /* lfd f0, 0x28(r1) */ // 0x8087933C
    /* lfs f2, 0x34(r7) */ // 0x80879340
    /* fsubs f6, f0, f8 */ // 0x80879344
    /* lfs f1, 0x3c(r7) */ // 0x80879348
    r4 = *(0x1a4 + r3); // lwz @ 0x8087934C
    /* fmuls f5, f5, f6 */ // 0x80879350
    /* lfs f0, 0x38(r7) */ // 0x80879354
    *(8 + r1) = r0; // stw @ 0x80879358
    /* fdiv f5, f7, f5 */ // 0x8087935C
    *(0xc + r1) = r0; // stw @ 0x80879360
    /* fsub f4, f4, f5 */ // 0x80879364
    /* frsp f4, f4 */ // 0x80879368
    /* stfs f4, 0x14(r1) */ // 0x8087936C
    /* fsubs f3, f4, f3 */ // 0x80879370
    /* fmuls f2, f2, f3 */ // 0x80879374
    /* fmuls f1, f1, f3 */ // 0x80879378
    /* fadds f2, f4, f2 */ // 0x8087937C
    /* fmuls f0, f0, f1 */ // 0x80879380
    /* stfs f2, 0x44(r4) */ // 0x80879384
    /* stfs f4, 0x48(r4) */ // 0x80879388
    /* fctiwz f0, f0 */ // 0x8087938C
    r3 = *(0x1a4 + r3); // lwz @ 0x80879390
    /* stfd f0, 0x30(r1) */ // 0x80879394
    r12 = *(0 + r3); // lwz @ 0x80879398
    r0 = *(0x34 + r1); // lwz @ 0x8087939C
    r12 = *(0x68 + r12); // lwz @ 0x808793A0
    /* clrlwi r0, r0, 0x18 */ // 0x808793A4
    /* stfs f2, 0x10(r1) */ // 0x808793A8
    *(8 + r1) = r0; // sth @ 0x808793AC
    *(0xa + r1) = r0; // sth @ 0x808793B0
    *(0xc + r1) = r0; // sth @ 0x808793B4
    /* mtctr r12 */ // 0x808793B8
    /* bctrl  */ // 0x808793BC
    r0 = *(8 + r1); // lha @ 0x808793C0
    *(0x10 + r3) = r0; // sth @ 0x808793C4
    r0 = *(0xa + r1); // lha @ 0x808793C8
    *(0x12 + r3) = r0; // sth @ 0x808793CC
    r0 = *(0xc + r1); // lha @ 0x808793D0
    *(0x14 + r3) = r0; // sth @ 0x808793D4
    r0 = *(0xe + r1); // lha @ 0x808793D8
    *(0x16 + r3) = r0; // sth @ 0x808793DC
    r0 = *(0x44 + r1); // lwz @ 0x808793E0
    return;
}