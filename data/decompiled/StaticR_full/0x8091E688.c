/* Function at 0x8091E688, size=496 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_8091E688(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r7, 0 */ // 0x8091E68C
    /* lis r6, 1 */ // 0x8091E690
    /* lfs f0, 0(r7) */ // 0x8091E694
    r7 = r6 + -1; // 0x8091E69C
    /* li r9, 0 */ // 0x8091E6A0
    *(0x28 + r1) = r30; // stw @ 0x8091E6A4
    *(0x24 + r1) = r29; // stw @ 0x8091E6A8
    *(0x20 + r1) = r28; // stw @ 0x8091E6AC
    /* b 0x8091e6d0 */ // 0x8091E6B0
    r8 = *(0x2c + r3); // lwz @ 0x8091E6B4
    r6 = r9 rlwinm 2; // rlwinm
    r0 = r9 rlwinm 1; // rlwinm
    r9 = r9 + 1; // 0x8091E6C0
    /* stfsx f0, r8, r6 */ // 0x8091E6C4
    r6 = *(0x30 + r3); // lwz @ 0x8091E6C8
    /* sthx r7, r6, r0 */ // 0x8091E6CC
    r0 = *(0x10 + r3); // lhz @ 0x8091E6D0
    /* clrlwi r6, r9, 0x10 */ // 0x8091E6D4
    if (<) goto 0x0x8091e6b4;
    r7 = *(0x2c + r3); // lwz @ 0x8091E6E0
    r0 = r4 rlwinm 2; // rlwinm
    /* lfs f0, 0x20(r3) */ // 0x8091E6E8
    r8 = r4 rlwinm 1; // rlwinm
    /* stfsx f0, r7, r0 */ // 0x8091E6F0
    /* lis r6, 1 */ // 0x8091E6F4
    r0 = r6 + -1; // 0x8091E6F8
    /* lis r7, 0 */ // 0x8091E6FC
    r6 = *(0x30 + r3); // lwz @ 0x8091E700
    /* li r9, 0 */ // 0x8091E704
    /* lfs f3, 0(r7) */ // 0x8091E708
    /* li r4, 0 */ // 0x8091E70C
    /* sthx r9, r6, r8 */ // 0x8091E710
    /* mtctr r0 */ // 0x8091E714
    /* clrlwi r9, r4, 0x10 */ // 0x8091E718
    /* li r29, 0 */ // 0x8091E71C
    /* li r6, 0 */ // 0x8091E724
    /* b 0x8091e7cc */ // 0x8091E728
    r7 = *(0x30 + r3); // lwz @ 0x8091E72C
    r0 = r6 rlwinm 1; // rlwinm
    /* lhzx r0, r7, r0 */ // 0x8091E734
    if (!=) goto 0x0x8091e7c8;
    /* clrlwi r0, r6, 0x10 */ // 0x8091E740
    r12 = r6 rlwinm 2; // rlwinm
    /* mulli r11, r0, 0x24 */ // 0x8091E748
    /* li r28, 0 */ // 0x8091E74C
    /* b 0x8091e7b0 */ // 0x8091E750
    r8 = r11 + r30; // 0x8091E754
    r31 = *(0x2c + r3); // lwz @ 0x8091E758
    r7 = *(0x20 + r8); // lwz @ 0x8091E75C
    r0 = r28 rlwinm 1; // rlwinm
    /* lfs f4, 0x14(r8) */ // 0x8091E764
    /* lhzx r8, r7, r0 */ // 0x8091E768
    /* lfsx f1, r12, r31 */ // 0x8091E76C
    /* mulli r7, r8, 0x24 */ // 0x8091E770
    /* slwi r0, r8, 2 */ // 0x8091E774
    /* lfsx f0, r31, r0 */ // 0x8091E778
    r7 = r30 + r7; // 0x8091E77C
    /* lfs f2, 0x14(r7) */ // 0x8091E780
    /* fadds f2, f4, f2 */ // 0x8091E784
    /* fmuls f2, f3, f2 */ // 0x8091E788
    /* fsubs f1, f1, f2 */ // 0x8091E78C
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x8091E790
    if (>=) goto 0x0x8091e7ac;
    /* stfsx f1, r31, r0 */ // 0x8091E798
    r0 = r8 rlwinm 1; // rlwinm
    /* li r29, 1 */ // 0x8091E7A0
    r7 = *(0x30 + r3); // lwz @ 0x8091E7A4
    /* sthx r10, r7, r0 */ // 0x8091E7A8
    r28 = r28 + 1; // 0x8091E7AC
    r30 = *(0x14 + r3); // lwz @ 0x8091E7B0
    /* clrlwi r8, r28, 0x10 */ // 0x8091E7B4
    r7 = r11 + r30; // 0x8091E7B8
    r0 = *(0x1c + r7); // lhz @ 0x8091E7BC
    if (<) goto 0x0x8091e754;
    r6 = r6 + 1; // 0x8091E7C8
    r0 = *(0x10 + r3); // lhz @ 0x8091E7CC
    /* clrlwi r7, r6, 0x10 */ // 0x8091E7D0
    if (<) goto 0x0x8091e72c;
    if (==) goto 0x0x8091e7ec;
    r4 = r4 + 1; // 0x8091E7E4
    if (counter-- != 0) goto 0x0x8091e718;
    /* lis r4, 0 */ // 0x8091E7EC
    /* xoris r6, r5, 0x8000 */ // 0x8091E7F0
    /* lfd f2, 0(r4) */ // 0x8091E7F4
    /* li r9, 0 */ // 0x8091E7F8
    /* lis r5, 0x4330 */ // 0x8091E7FC
    /* b 0x8091e850 */ // 0x8091E800
    r4 = *(0x2c + r3); // lwz @ 0x8091E804
    r8 = r9 rlwinm 2; // rlwinm
    /* lfs f1, 0x24(r3) */ // 0x8091E80C
    r9 = r9 + 1; // 0x8091E810
    /* lfsx f0, r4, r8 */ // 0x8091E814
    *(0xc + r1) = r6; // stw @ 0x8091E818
    /* fmuls f0, f1, f0 */ // 0x8091E81C
    r7 = *(0x28 + r3); // lwz @ 0x8091E820
    *(8 + r1) = r5; // stw @ 0x8091E824
    /* lwzx r4, r7, r8 */ // 0x8091E828
    /* lfd f1, 8(r1) */ // 0x8091E82C
    /* fmuls f0, f0, f0 */ // 0x8091E830
    /* fsubs f1, f1, f2 */ // 0x8091E834
    /* fmuls f0, f1, f0 */ // 0x8091E838
    /* fctiwz f0, f0 */ // 0x8091E83C
    /* stfd f0, 0x10(r1) */ // 0x8091E840
    r0 = *(0x14 + r1); // lwz @ 0x8091E844
    r0 = r4 + r0; // 0x8091E848
    /* stwx r0, r7, r8 */ // 0x8091E84C
    r0 = *(0x10 + r3); // lhz @ 0x8091E850
    /* clrlwi r4, r9, 0x10 */ // 0x8091E854
    if (<) goto 0x0x8091e804;
    r31 = *(0x2c + r1); // lwz @ 0x8091E860
    r30 = *(0x28 + r1); // lwz @ 0x8091E864
    r29 = *(0x24 + r1); // lwz @ 0x8091E868
    r28 = *(0x20 + r1); // lwz @ 0x8091E86C
    return;
}