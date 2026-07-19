/* Function at 0x808874E4, size=528 bytes */
/* Stack frame: 32 bytes */

void FUN_808874E4(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* lis r8, 0x4330 */ // 0x808874E8
    /* lis r7, 0 */ // 0x808874EC
    /* xoris r6, r4, 0x8000 */ // 0x808874F0
    r9 = *(0x170 + r3); // lwz @ 0x808874F4
    /* lis r5, 0 */ // 0x808874F8
    *(0x10 + r1) = r8; // stw @ 0x808874FC
    /* xoris r0, r9, 0x8000 */ // 0x80887500
    /* lfd f2, 0(r7) */ // 0x80887504
    *(0x14 + r1) = r0; // stw @ 0x80887508
    /* lfs f1, 0(r5) */ // 0x8088750C
    /* lfd f0, 0x10(r1) */ // 0x80887510
    *(8 + r1) = r8; // stw @ 0x80887514
    /* fsubs f0, f0, f2 */ // 0x80887518
    *(0xc + r1) = r6; // stw @ 0x8088751C
    /* lfd f3, 8(r1) */ // 0x80887520
    /* fsubs f0, f0, f1 */ // 0x80887524
    /* fsubs f3, f3, f2 */ // 0x80887528
    /* .byte 0xfc, 0x03, 0x00, 0x40 */ // 0x8088752C
    if (>=) goto 0x0x8088753c;
    /* lfs f1, 0x178(r3) */ // 0x80887534
    /* b 0x808876ec */ // 0x80887538
    if (>=) goto 0x0x80887568;
    /* subf r0, r4, r9 */ // 0x80887544
    /* lfs f0, 0x178(r3) */ // 0x80887548
    /* xoris r0, r0, 0x8000 */ // 0x8088754C
    *(0xc + r1) = r0; // stw @ 0x80887550
    /* lfd f3, 8(r1) */ // 0x80887554
    /* fsubs f2, f3, f2 */ // 0x80887558
    /* fmuls f0, f0, f2 */ // 0x8088755C
    /* fdivs f1, f0, f1 */ // 0x80887560
    /* b 0x808876ec */ // 0x80887564
    *(0xc + r1) = r0; // stw @ 0x80887568
    /* lis r5, 0 */ // 0x8088756C
    /* lfs f0, 0(r5) */ // 0x80887570
    /* lfd f3, 8(r1) */ // 0x80887574
    *(0x14 + r1) = r6; // stw @ 0x80887578
    /* fsubs f3, f3, f2 */ // 0x8088757C
    /* lfd f4, 0x10(r1) */ // 0x80887580
    /* fsubs f4, f4, f2 */ // 0x80887584
    /* fadds f3, f3, f0 */ // 0x80887588
    /* .byte 0xfc, 0x04, 0x18, 0x40 */ // 0x8088758C
    /* cror cr0eq, cr0lt, cr0eq */ // 0x80887590
    if (!=) goto 0x0x808875a4;
    /* lis r3, 0 */ // 0x80887598
    /* lfs f1, 0(r3) */ // 0x8088759C
    /* b 0x808876ec */ // 0x808875A0
    *(0xc + r1) = r0; // stw @ 0x808875A4
    /* lfd f3, 8(r1) */ // 0x808875A8
    *(0x14 + r1) = r6; // stw @ 0x808875AC
    /* fsubs f3, f3, f2 */ // 0x808875B0
    /* lfd f4, 0x10(r1) */ // 0x808875B4
    /* fadds f3, f3, f0 */ // 0x808875B8
    /* fsubs f4, f4, f2 */ // 0x808875BC
    /* fadds f3, f1, f3 */ // 0x808875C0
    /* .byte 0xfc, 0x04, 0x18, 0x40 */ // 0x808875C4
    if (>=) goto 0x0x808875fc;
    *(0xc + r1) = r0; // stw @ 0x808875CC
    /* lfs f3, 0x17c(r3) */ // 0x808875D0
    /* lfd f4, 8(r1) */ // 0x808875D4
    *(0x14 + r1) = r6; // stw @ 0x808875D8
    /* fsubs f4, f4, f2 */ // 0x808875DC
    /* lfd f5, 0x10(r1) */ // 0x808875E0
    /* fsubs f2, f5, f2 */ // 0x808875E4
    /* fadds f0, f4, f0 */ // 0x808875E8
    /* fsubs f0, f2, f0 */ // 0x808875EC
    /* fmuls f0, f3, f0 */ // 0x808875F0
    /* fdivs f1, f0, f1 */ // 0x808875F4
    /* b 0x808876ec */ // 0x808875F8
    r5 = *(0x174 + r3); // lwz @ 0x808875FC
    *(0x14 + r1) = r6; // stw @ 0x80887600
    /* xoris r0, r5, 0x8000 */ // 0x80887604
    *(0xc + r1) = r0; // stw @ 0x80887608
    /* lfd f4, 0x10(r1) */ // 0x8088760C
    /* lfd f3, 8(r1) */ // 0x80887610
    /* fsubs f4, f4, f2 */ // 0x80887614
    /* fsubs f3, f3, f2 */ // 0x80887618
    /* fsubs f3, f3, f1 */ // 0x8088761C
    /* .byte 0xfc, 0x04, 0x18, 0x40 */ // 0x80887620
    if (>=) goto 0x0x80887630;
    /* lfs f1, 0x17c(r3) */ // 0x80887628
    /* b 0x808876ec */ // 0x8088762C
    if (>=) goto 0x0x8088765c;
    /* subf r0, r4, r5 */ // 0x80887638
    /* lfs f0, 0x17c(r3) */ // 0x8088763C
    /* xoris r0, r0, 0x8000 */ // 0x80887640
    *(0x14 + r1) = r0; // stw @ 0x80887644
    /* lfd f3, 0x10(r1) */ // 0x80887648
    /* fsubs f2, f3, f2 */ // 0x8088764C
    /* fmuls f0, f0, f2 */ // 0x80887650
    /* fdivs f1, f0, f1 */ // 0x80887654
    /* b 0x808876ec */ // 0x80887658
    *(0x14 + r1) = r0; // stw @ 0x8088765C
    /* lfd f3, 0x10(r1) */ // 0x80887660
    *(0xc + r1) = r6; // stw @ 0x80887664
    /* fsubs f3, f3, f2 */ // 0x80887668
    /* lfd f4, 8(r1) */ // 0x8088766C
    /* fsubs f4, f4, f2 */ // 0x80887670
    /* fadds f3, f3, f0 */ // 0x80887674
    /* .byte 0xfc, 0x04, 0x18, 0x40 */ // 0x80887678
    /* cror cr0eq, cr0lt, cr0eq */ // 0x8088767C
    if (!=) goto 0x0x80887690;
    /* lis r3, 0 */ // 0x80887684
    /* lfs f1, 0(r3) */ // 0x80887688
    /* b 0x808876ec */ // 0x8088768C
    *(0x14 + r1) = r0; // stw @ 0x80887690
    /* lfd f3, 0x10(r1) */ // 0x80887694
    *(0xc + r1) = r6; // stw @ 0x80887698
    /* fsubs f3, f3, f2 */ // 0x8088769C
    /* lfd f4, 8(r1) */ // 0x808876A0
    /* fadds f3, f3, f0 */ // 0x808876A4
    /* fsubs f4, f4, f2 */ // 0x808876A8
    /* fadds f3, f1, f3 */ // 0x808876AC
    /* .byte 0xfc, 0x04, 0x18, 0x40 */ // 0x808876B0
    if (>=) goto 0x0x808876e8;
    *(0x14 + r1) = r0; // stw @ 0x808876B8
    /* lfs f3, 0x180(r3) */ // 0x808876BC
    /* lfd f4, 0x10(r1) */ // 0x808876C0
    *(0xc + r1) = r6; // stw @ 0x808876C4
    /* fsubs f4, f4, f2 */ // 0x808876C8
    /* lfd f5, 8(r1) */ // 0x808876CC
    /* fsubs f2, f5, f2 */ // 0x808876D0
    /* fadds f0, f4, f0 */ // 0x808876D4
    /* fsubs f0, f2, f0 */ // 0x808876D8
    /* fmuls f0, f3, f0 */ // 0x808876DC
    /* fdivs f1, f0, f1 */ // 0x808876E0
    /* b 0x808876ec */ // 0x808876E4
    /* lfs f1, 0x180(r3) */ // 0x808876E8
    return;
}