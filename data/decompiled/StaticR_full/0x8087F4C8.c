/* Function at 0x8087F4C8, size=724 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_8087F4C8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r0, 0x4330 */ // 0x8087F4D4
    /* lis r31, 0 */ // 0x8087F4DC
    r31 = r31 + 0; // 0x8087F4E0
    *(0x28 + r1) = r30; // stw @ 0x8087F4E4
    r30 = r3;
    *(0x24 + r1) = r29; // stw @ 0x8087F4EC
    *(0x20 + r1) = r28; // stw @ 0x8087F4F0
    r4 = *(0x64 + r3); // lwz @ 0x8087F4F4
    *(8 + r1) = r0; // stw @ 0x8087F4F8
    r4 = *(0xc + r4); // lwz @ 0x8087F4FC
    *(0x10 + r1) = r0; // stw @ 0x8087F500
    r0 = *(8 + r4); // lwz @ 0x8087F504
    if (!=) goto 0x0x8087f77c;
    /* lfs f1, 0x188(r3) */ // 0x8087F510
    /* lis r4, 0x6666 */ // 0x8087F514
    r6 = *(0x17d + r3); // lbz @ 0x8087F518
    r5 = r4 + 0x6667; // 0x8087F51C
    /* fctiwz f0, f1 */ // 0x8087F520
    /* stfd f0, 0x18(r1) */ // 0x8087F528
    r0 = *(0x1c + r1); // lwz @ 0x8087F52C
    /* mulhw r0, r5, r0 */ // 0x8087F530
    r0 = r0 >> 2; // srawi
    /* srwi r4, r0, 0x1f */ // 0x8087F538
    r0 = r0 + r4; // 0x8087F53C
    if (==) goto 0x0x8087f654;
    /* lfs f4, 0x180(r3) */ // 0x8087F544
    /* lfs f5, 0x144(r31) */ // 0x8087F548
    /* .byte 0xfc, 0x04, 0x28, 0x40 */ // 0x8087F54C
    if (<=) goto 0x0x8087f654;
    /* lfs f3, 0x184(r3) */ // 0x8087F554
    /* xoris r0, r0, 0x8000 */ // 0x8087F558
    *(0x14 + r1) = r0; // stw @ 0x8087F55C
    /* fadds f1, f1, f3 */ // 0x8087F560
    /* lfd f2, 0x130(r31) */ // 0x8087F564
    /* fsubs f4, f4, f3 */ // 0x8087F568
    /* lfd f0, 0x10(r1) */ // 0x8087F56C
    /* stfs f1, 0x188(r3) */ // 0x8087F570
    /* fctiwz f3, f1 */ // 0x8087F574
    /* fsubs f0, f0, f2 */ // 0x8087F578
    /* stfs f4, 0x180(r3) */ // 0x8087F57C
    /* stfd f3, 0x18(r1) */ // 0x8087F580
    /* fsubs f0, f0, f5 */ // 0x8087F584
    r0 = *(0x1c + r1); // lwz @ 0x8087F588
    /* mulhw r0, r5, r0 */ // 0x8087F58C
    r0 = r0 >> 2; // srawi
    /* srwi r4, r0, 0x1f */ // 0x8087F594
    r0 = r0 + r4; // 0x8087F598
    /* xoris r0, r0, 0x8000 */ // 0x8087F59C
    *(0xc + r1) = r0; // stw @ 0x8087F5A0
    /* lfd f1, 8(r1) */ // 0x8087F5A4
    /* fsubs f1, f1, f2 */ // 0x8087F5A8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8087F5AC
    if (<=) goto 0x0x8087f77c;
    /* stfd f3, 0x18(r1) */ // 0x8087F5B4
    r0 = *(0x17c + r3); // lbz @ 0x8087F5B8
    r4 = *(0x1c + r1); // lwz @ 0x8087F5BC
    /* mulhw r0, r5, r4 */ // 0x8087F5C4
    r0 = r0 >> 2; // srawi
    /* srwi r4, r0, 0x1f */ // 0x8087F5CC
    r4 = r0 + r4; // 0x8087F5D0
    r28 = r4 + 1; // 0x8087F5D4
    if (==) goto 0x0x8087f5e8;
    /* li r4, 0xde */ // 0x8087F5DC
    /* li r5, -1 */ // 0x8087F5E0
    FUN_806A03CC(r4, r5); // bl 0x806A03CC
    /* lis r3, 0x6666 */ // 0x8087F5E8
    r0 = *(0x18c + r30); // lwz @ 0x8087F5EC
    r3 = r3 + 0x6667; // 0x8087F5F0
    /* mulhw r0, r3, r0 */ // 0x8087F5F4
    r0 = r0 >> 2; // srawi
    /* srwi r3, r0, 0x1f */ // 0x8087F5FC
    r0 = r0 + r3; // 0x8087F600
    if (>=) goto 0x0x8087f618;
    /* lfs f0, 0x128(r31) */ // 0x8087F60C
    r28 = r0;
    /* stfs f0, 0x180(r30) */ // 0x8087F614
    /* lis r31, 0 */ // 0x8087F618
    /* lis r29, 0 */ // 0x8087F61C
    r29 = r29 + 0; // 0x8087F620
    *(0 + r31) = r28; // stw @ 0x8087F624
    r3 = r30;
    r6 = r31 + 0; // 0x8087F62C
    r4 = r29 + 0x121; // 0x8087F630
    /* li r5, 0x522 */ // 0x8087F634
    FUN_806A093C(r3, r6, r4, r5); // bl 0x806A093C
    r5 = *(0x190 + r30); // lwz @ 0x8087F63C
    r3 = r30;
    r4 = r29 + 0x12d; // 0x8087F644
    r6 = r31 + 0; // 0x8087F648
    FUN_806A093C(r3, r4, r6); // bl 0x806A093C
    /* b 0x8087f77c */ // 0x8087F650
    if (!=) goto 0x0x8087f77c;
    /* lfs f2, 0x180(r3) */ // 0x8087F65C
    /* lfs f0, 0x148(r31) */ // 0x8087F660
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x8087F664
    if (>=) goto 0x0x8087f77c;
    /* lfs f1, 0x184(r3) */ // 0x8087F66C
    /* lis r4, 0x6666 */ // 0x8087F670
    /* lfs f0, 0x188(r3) */ // 0x8087F674
    /* xoris r0, r0, 0x8000 */ // 0x8087F678
    /* fsubs f5, f2, f1 */ // 0x8087F67C
    *(0x14 + r1) = r0; // stw @ 0x8087F680
    /* fadds f4, f0, f1 */ // 0x8087F684
    r5 = r4 + 0x6667; // 0x8087F688
    /* lfd f2, 0x130(r31) */ // 0x8087F68C
    /* lfd f1, 0x10(r1) */ // 0x8087F690
    /* fctiwz f3, f4 */ // 0x8087F694
    /* lfs f0, 0x144(r31) */ // 0x8087F698
    /* fsubs f1, f1, f2 */ // 0x8087F69C
    /* stfs f5, 0x180(r3) */ // 0x8087F6A0
    /* stfd f3, 0x18(r1) */ // 0x8087F6A4
    /* fadds f0, f0, f1 */ // 0x8087F6A8
    r0 = *(0x1c + r1); // lwz @ 0x8087F6AC
    /* stfs f4, 0x188(r3) */ // 0x8087F6B0
    /* mulhw r0, r5, r0 */ // 0x8087F6B4
    r0 = r0 >> 2; // srawi
    /* srwi r4, r0, 0x1f */ // 0x8087F6BC
    r0 = r0 + r4; // 0x8087F6C0
    /* xoris r0, r0, 0x8000 */ // 0x8087F6C4
    *(0xc + r1) = r0; // stw @ 0x8087F6C8
    /* lfd f1, 8(r1) */ // 0x8087F6CC
    /* fsubs f1, f1, f2 */ // 0x8087F6D0
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8087F6D4
    if (>=) goto 0x0x8087f77c;
    /* stfd f3, 0x18(r1) */ // 0x8087F6DC
    r0 = *(0x17c + r3); // lbz @ 0x8087F6E0
    r3 = *(0x1c + r1); // lwz @ 0x8087F6E4
    /* mulhw r0, r5, r3 */ // 0x8087F6EC
    r0 = r0 >> 2; // srawi
    /* srwi r3, r0, 0x1f */ // 0x8087F6F4
    r3 = r0 + r3; // 0x8087F6F8
    r28 = r3 + -1; // 0x8087F6FC
    if (==) goto 0x0x8087f714;
    r3 = r30;
    /* li r4, 0xde */ // 0x8087F708
    /* li r5, -1 */ // 0x8087F70C
    FUN_806A03CC(r3, r4, r5); // bl 0x806A03CC
    /* lis r3, 0x6666 */ // 0x8087F714
    r0 = *(0x18c + r30); // lwz @ 0x8087F718
    r3 = r3 + 0x6667; // 0x8087F71C
    /* mulhw r0, r3, r0 */ // 0x8087F720
    r0 = r0 >> 2; // srawi
    /* srwi r3, r0, 0x1f */ // 0x8087F728
    r0 = r0 + r3; // 0x8087F72C
    if (<=) goto 0x0x8087f744;
    /* lfs f0, 0x128(r31) */ // 0x8087F738
    r28 = r0;
    /* stfs f0, 0x180(r30) */ // 0x8087F740
    /* lis r29, 0 */ // 0x8087F744
    /* lis r31, 0 */ // 0x8087F748
    r31 = r31 + 0; // 0x8087F74C
    *(0 + r29) = r28; // stw @ 0x8087F750
    r3 = r30;
    r6 = r29 + 0; // 0x8087F758
    r4 = r31 + 0x139; // 0x8087F75C
    /* li r5, 0x522 */ // 0x8087F760
    FUN_806A093C(r3, r6, r4, r5); // bl 0x806A093C
    r5 = *(0x190 + r30); // lwz @ 0x8087F768
    r3 = r30;
    r4 = r31 + 0x145; // 0x8087F770
    r6 = r29 + 0; // 0x8087F774
    FUN_806A093C(r3, r4, r6); // bl 0x806A093C
    r0 = *(0x34 + r1); // lwz @ 0x8087F77C
    r31 = *(0x2c + r1); // lwz @ 0x8087F780
    r30 = *(0x28 + r1); // lwz @ 0x8087F784
    r29 = *(0x24 + r1); // lwz @ 0x8087F788
    r28 = *(0x20 + r1); // lwz @ 0x8087F78C
    return;
}