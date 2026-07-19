/* Function at 0x806DE5D0, size=596 bytes */
/* Stack frame: 32 bytes */

int FUN_806DE5D0(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* lis r5, 0 */ // 0x806DE5D4
    r5 = r5 + 0; // 0x806DE5D8
    /* lfs f2, 8(r3) */ // 0x806DE5DC
    /* lfs f1, 0xc(r3) */ // 0x806DE5E0
    /* lfs f0, 0x20(r5) */ // 0x806DE5E4
    /* fsubs f1, f2, f1 */ // 0x806DE5E8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x806DE5EC
    if (>=) goto 0x0x806de5fc;
    /* fsubs f0, f2, f0 */ // 0x806DE5F4
    /* stfs f0, 0xc(r3) */ // 0x806DE5F8
    /* lfs f1, 8(r3) */ // 0x806DE5FC
    /* lfs f2, 0xc(r3) */ // 0x806DE600
    /* lfs f0, 0x24(r5) */ // 0x806DE604
    /* fsubs f1, f1, f2 */ // 0x806DE608
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x806DE60C
    if (<=) goto 0x0x806de61c;
    /* fadds f0, f0, f2 */ // 0x806DE614
    /* stfs f0, 8(r3) */ // 0x806DE618
    /* lfs f3, 0xc(r3) */ // 0x806DE61C
    /* lis r4, 0 */ // 0x806DE620
    /* lfs f1, 8(r3) */ // 0x806DE624
    /* lfs f0, 0x28(r5) */ // 0x806DE628
    /* fsubs f2, f3, f1 */ // 0x806DE62C
    /* fsubs f1, f1, f2 */ // 0x806DE630
    /* stfs f1, 0x10(r3) */ // 0x806DE634
    /* fsubs f3, f1, f3 */ // 0x806DE638
    /* lfs f1, 0(r4) */ // 0x806DE63C
    /* fdivs f1, f1, f2 */ // 0x806DE640
    /* stfs f1, 0x14(r3) */ // 0x806DE644
    /* .byte 0xfc, 0x03, 0x00, 0x40 */ // 0x806DE648
    /* cror cr0eq, cr0lt, cr0eq */ // 0x806DE64C
    if (!=) goto 0x0x806de65c;
    /* li r7, 0xc8 */ // 0x806DE654
    /* b 0x806de6f4 */ // 0x806DE658
    /* lfs f0, 0x2c(r5) */ // 0x806DE65C
    /* .byte 0xfc, 0x03, 0x00, 0x40 */ // 0x806DE660
    /* cror cr0eq, cr0lt, cr0eq */ // 0x806DE664
    if (!=) goto 0x0x806de674;
    /* li r7, 0x1f4 */ // 0x806DE66C
    /* b 0x806de6f4 */ // 0x806DE670
    /* lfs f0, 0x30(r5) */ // 0x806DE674
    /* .byte 0xfc, 0x03, 0x00, 0x40 */ // 0x806DE678
    /* cror cr0eq, cr0lt, cr0eq */ // 0x806DE67C
    if (!=) goto 0x0x806de68c;
    /* li r7, 0x3e8 */ // 0x806DE684
    /* b 0x806de6f4 */ // 0x806DE688
    /* lfs f0, 0x34(r5) */ // 0x806DE68C
    /* .byte 0xfc, 0x03, 0x00, 0x40 */ // 0x806DE690
    /* cror cr0eq, cr0lt, cr0eq */ // 0x806DE694
    if (!=) goto 0x0x806de6a4;
    /* li r7, 0x7d0 */ // 0x806DE69C
    /* b 0x806de6f4 */ // 0x806DE6A0
    /* lfs f0, 0x38(r5) */ // 0x806DE6A4
    /* .byte 0xfc, 0x03, 0x00, 0x40 */ // 0x806DE6A8
    /* cror cr0eq, cr0lt, cr0eq */ // 0x806DE6AC
    if (!=) goto 0x0x806de6bc;
    /* li r7, 0x1388 */ // 0x806DE6B4
    /* b 0x806de6f4 */ // 0x806DE6B8
    /* lfs f0, 0x3c(r5) */ // 0x806DE6BC
    /* .byte 0xfc, 0x03, 0x00, 0x40 */ // 0x806DE6C0
    /* cror cr0eq, cr0lt, cr0eq */ // 0x806DE6C4
    if (!=) goto 0x0x806de6d4;
    /* li r7, 0x2710 */ // 0x806DE6CC
    /* b 0x806de6f4 */ // 0x806DE6D0
    /* lfs f0, 0x40(r5) */ // 0x806DE6D4
    /* .byte 0xfc, 0x03, 0x00, 0x40 */ // 0x806DE6D8
    /* cror cr0eq, cr0lt, cr0eq */ // 0x806DE6DC
    if (!=) goto 0x0x806de6ec;
    /* li r7, 0x7530 */ // 0x806DE6E4
    /* b 0x806de6f4 */ // 0x806DE6E8
    /* lis r4, 1 */ // 0x806DE6EC
    r7 = r4 + -0x15a0; // 0x806DE6F0
    /* xoris r4, r7, 0x8000 */ // 0x806DE6F4
    /* lis r0, 0x4330 */ // 0x806DE6F8
    *(0xc + r1) = r4; // stw @ 0x806DE6FC
    /* lfd f3, 0x18(r5) */ // 0x806DE700
    *(8 + r1) = r0; // stw @ 0x806DE704
    /* lfs f1, 0xc(r3) */ // 0x806DE708
    /* lfd f2, 8(r1) */ // 0x806DE70C
    /* lfs f0, 0x10(r5) */ // 0x806DE710
    /* fsubs f2, f2, f3 */ // 0x806DE714
    /* fdivs f1, f1, f2 */ // 0x806DE718
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x806DE71C
    /* cror cr0eq, cr0gt, cr0eq */ // 0x806DE720
    if (!=) goto 0x0x806de73c;
    /* fctiwz f0, f1 */ // 0x806DE728
    /* stfd f0, 0x10(r1) */ // 0x806DE72C
    r4 = *(0x14 + r1); // lwz @ 0x806DE730
    r0 = r4 + 1; // 0x806DE734
    /* b 0x806de748 */ // 0x806DE738
    /* fctiwz f0, f1 */ // 0x806DE73C
    /* stfd f0, 0x18(r1) */ // 0x806DE740
    r0 = *(0x1c + r1); // lwz @ 0x806DE744
    r8 = r7 * r0; // 0x806DE748
    /* lfd f2, 0x18(r5) */ // 0x806DE74C
    /* li r0, 2 */ // 0x806DE750
    r6 = r3;
    /* li r9, 0 */ // 0x806DE758
    /* lis r5, 0x4330 */ // 0x806DE75C
    /* li r4, -1 */ // 0x806DE760
    /* mtctr r0 */ // 0x806DE764
    /* xoris r0, r8, 0x8000 */ // 0x806DE768
    *(0x1c + r1) = r0; // stw @ 0x806DE76C
    /* lfs f0, 0x10(r3) */ // 0x806DE770
    *(0x18 + r1) = r5; // stw @ 0x806DE774
    /* lfd f1, 0x18(r1) */ // 0x806DE778
    /* fsubs f1, f1, f2 */ // 0x806DE77C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x806DE780
    if (>=) goto 0x0x806de790;
    *(0x18 + r6) = r8; // stw @ 0x806DE788
    /* b 0x806de794 */ // 0x806DE78C
    *(0x18 + r6) = r4; // stw @ 0x806DE790
    r8 = r8 + r7; // 0x806DE794
    *(0x18 + r1) = r5; // stw @ 0x806DE798
    /* xoris r0, r8, 0x8000 */ // 0x806DE79C
    /* lfs f0, 0x10(r3) */ // 0x806DE7A0
    *(0x1c + r1) = r0; // stw @ 0x806DE7A4
    /* lfd f1, 0x18(r1) */ // 0x806DE7A8
    /* fsubs f1, f1, f2 */ // 0x806DE7AC
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x806DE7B0
    if (>=) goto 0x0x806de7c0;
    *(0x1c + r6) = r8; // stw @ 0x806DE7B8
    /* b 0x806de7c4 */ // 0x806DE7BC
    *(0x1c + r6) = r4; // stw @ 0x806DE7C0
    r8 = r8 + r7; // 0x806DE7C4
    *(0x18 + r1) = r5; // stw @ 0x806DE7C8
    /* xoris r0, r8, 0x8000 */ // 0x806DE7CC
    /* lfs f0, 0x10(r3) */ // 0x806DE7D0
    *(0x1c + r1) = r0; // stw @ 0x806DE7D4
    /* lfd f1, 0x18(r1) */ // 0x806DE7D8
    /* fsubs f1, f1, f2 */ // 0x806DE7DC
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x806DE7E0
    if (>=) goto 0x0x806de7f0;
    *(0x20 + r6) = r8; // stw @ 0x806DE7E8
    /* b 0x806de7f4 */ // 0x806DE7EC
    *(0x20 + r6) = r4; // stw @ 0x806DE7F0
    r8 = r8 + r7; // 0x806DE7F4
    r6 = r6 + 0xc; // 0x806DE7F8
    r9 = r9 + 2; // 0x806DE7FC
    if (counter-- != 0) goto 0x0x806de768;
    /* xori r4, r7, 0x3e8 */ // 0x806DE804
    /* andi. r0, r4, 0x3e8 */ // 0x806DE808
    r4 = r4 >> 1; // srawi
    /* subf r0, r0, r4 */ // 0x806DE810
    /* srwi r0, r0, 0x1f */ // 0x806DE814
    *(0x30 + r3) = r0; // stb @ 0x806DE818
    return;
}