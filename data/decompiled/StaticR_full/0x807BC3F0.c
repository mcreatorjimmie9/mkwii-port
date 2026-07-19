/* Function at 0x807BC3F0, size=368 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_807BC3F0(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x24 + r1) = r29; // stw @ 0x807BC404
    r29 = r3;
    r3 = *(0x144 + r3); // lwz @ 0x807BC40C
    r12 = *(0x34 + r3); // lwz @ 0x807BC410
    r12 = *(0x18 + r12); // lwz @ 0x807BC414
    /* mtctr r12 */ // 0x807BC418
    /* bctrl  */ // 0x807BC41C
    r3 = *(0x14c + r29); // lwz @ 0x807BC420
    r12 = *(0x34 + r3); // lwz @ 0x807BC424
    r12 = *(0x18 + r12); // lwz @ 0x807BC428
    /* mtctr r12 */ // 0x807BC42C
    /* bctrl  */ // 0x807BC430
    r3 = *(0x148 + r29); // lwz @ 0x807BC434
    r12 = *(0 + r3); // lwz @ 0x807BC438
    r12 = *(0xc + r12); // lwz @ 0x807BC43C
    /* mtctr r12 */ // 0x807BC440
    /* bctrl  */ // 0x807BC444
    r3 = *(0x154 + r29); // lwz @ 0x807BC448
    r12 = *(0 + r3); // lwz @ 0x807BC44C
    r12 = *(0xc + r12); // lwz @ 0x807BC450
    /* mtctr r12 */ // 0x807BC454
    /* bctrl  */ // 0x807BC458
    r3 = *(0x158 + r29); // lwz @ 0x807BC45C
    r12 = *(0x34 + r3); // lwz @ 0x807BC460
    r12 = *(0x18 + r12); // lwz @ 0x807BC464
    /* mtctr r12 */ // 0x807BC468
    /* bctrl  */ // 0x807BC46C
    r4 = *(0x140 + r29); // lwz @ 0x807BC470
    /* li r0, 0 */ // 0x807BC474
    *(0x15c + r29) = r0; // stw @ 0x807BC478
    /* lis r3, 0 */ // 0x807BC47C
    /* lfs f0, 0(r3) */ // 0x807BC480
    *(0x160 + r29) = r0; // stb @ 0x807BC484
    *(0x161 + r29) = r0; // stb @ 0x807BC488
    *(0x163 + r29) = r0; // stb @ 0x807BC48C
    *(0xc + r4) = r0; // sth @ 0x807BC490
    /* stfs f0, 0x10(r4) */ // 0x807BC494
    r3 = *(0x150 + r29); // lwz @ 0x807BC498
    FUN_805AE488(); // bl 0x805AE488
    r4 = *(0x140 + r29); // lwz @ 0x807BC4A0
    /* lis r3, 0 */ // 0x807BC4A4
    /* lfs f2, 0(r3) */ // 0x807BC4A8
    r30 = *(0 + r4); // lwz @ 0x807BC4AC
    r3 = *(0x150 + r29); // lwz @ 0x807BC4B0
    /* fctiwz f1, f2 */ // 0x807BC4B4
    r0 = *(0xc + r4); // lhz @ 0x807BC4B8
    *(4 + r3) = r0; // sth @ 0x807BC4BC
    /* lfs f0, 0x10(r4) */ // 0x807BC4C0
    /* stfd f1, 8(r1) */ // 0x807BC4C4
    /* fmuls f0, f2, f0 */ // 0x807BC4C8
    r3 = *(0x150 + r29); // lwz @ 0x807BC4CC
    r4 = *(0xc + r1); // lwz @ 0x807BC4D0
    /* fctiwz f0, f0 */ // 0x807BC4D4
    /* stfd f0, 0x10(r1) */ // 0x807BC4D8
    r0 = *(0x14 + r1); // lwz @ 0x807BC4DC
    r4 = r4 + r0; // 0x807BC4E0
    /* clrlwi r4, r4, 0x18 */ // 0x807BC4E4
    FUN_805AE614(); // bl 0x805AE614
    r31 = *(0x150 + r29); // lwz @ 0x807BC4EC
    r3 = r30;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807BC4F8
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x807BC500
    r4 = r31;
    r3 = *(0xc + r3); // lwz @ 0x807BC508
    /* lwzx r3, r3, r0 */ // 0x807BC50C
    FUN_805C4C70(r4); // bl 0x805C4C70
    r3 = *(0x140 + r29); // lwz @ 0x807BC514
    r3 = *(0 + r3); // lwz @ 0x807BC518
    FUN_807B5FAC(); // bl 0x807B5FAC
    if (==) goto 0x0x807bc538;
    r3 = r29;
    r4 = r29 + 0xbc; // 0x807BC52C
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    /* b 0x807bc544 */ // 0x807BC534
    r3 = r29;
    r4 = r29 + 0x38; // 0x807BC53C
    FUN_807CF1B4(r4, r3, r4); // bl 0x807CF1B4
    r0 = *(0x34 + r1); // lwz @ 0x807BC544
    r31 = *(0x2c + r1); // lwz @ 0x807BC548
    r30 = *(0x28 + r1); // lwz @ 0x807BC54C
    r29 = *(0x24 + r1); // lwz @ 0x807BC550
    return;
}