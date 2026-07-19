/* Function at 0x8091E498, size=496 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_8091E498(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r7, 0 */ // 0x8091E49C
    /* lis r6, 1 */ // 0x8091E4A0
    /* lfs f0, 0(r7) */ // 0x8091E4A4
    r7 = r6 + -1; // 0x8091E4AC
    /* li r9, 0 */ // 0x8091E4B0
    *(0x28 + r1) = r30; // stw @ 0x8091E4B4
    *(0x24 + r1) = r29; // stw @ 0x8091E4B8
    *(0x20 + r1) = r28; // stw @ 0x8091E4BC
    /* b 0x8091e4e0 */ // 0x8091E4C0
    r8 = *(0x2c + r3); // lwz @ 0x8091E4C4
    r6 = r9 rlwinm 2; // rlwinm
    r0 = r9 rlwinm 1; // rlwinm
    r9 = r9 + 1; // 0x8091E4D0
    /* stfsx f0, r8, r6 */ // 0x8091E4D4
    r6 = *(0x30 + r3); // lwz @ 0x8091E4D8
    /* sthx r7, r6, r0 */ // 0x8091E4DC
    r0 = *(0x10 + r3); // lhz @ 0x8091E4E0
    /* clrlwi r6, r9, 0x10 */ // 0x8091E4E4
    if (<) goto 0x0x8091e4c4;
    r7 = *(0x2c + r3); // lwz @ 0x8091E4F0
    r0 = r4 rlwinm 2; // rlwinm
    /* lfs f0, 0x20(r3) */ // 0x8091E4F8
    r8 = r4 rlwinm 1; // rlwinm
    /* stfsx f0, r7, r0 */ // 0x8091E500
    /* lis r6, 1 */ // 0x8091E504
    r0 = r6 + -1; // 0x8091E508
    /* lis r7, 0 */ // 0x8091E50C
    r6 = *(0x30 + r3); // lwz @ 0x8091E510
    /* li r9, 0 */ // 0x8091E514
    /* lfs f3, 0(r7) */ // 0x8091E518
    /* li r4, 0 */ // 0x8091E51C
    /* sthx r9, r6, r8 */ // 0x8091E520
    /* mtctr r0 */ // 0x8091E524
    /* clrlwi r9, r4, 0x10 */ // 0x8091E528
    /* li r29, 0 */ // 0x8091E52C
    /* li r6, 0 */ // 0x8091E534
    /* b 0x8091e5dc */ // 0x8091E538
    r7 = *(0x30 + r3); // lwz @ 0x8091E53C
    r0 = r6 rlwinm 1; // rlwinm
    /* lhzx r0, r7, r0 */ // 0x8091E544
    if (!=) goto 0x0x8091e5d8;
    /* clrlwi r0, r6, 0x10 */ // 0x8091E550
    r12 = r6 rlwinm 2; // rlwinm
    /* mulli r11, r0, 0x24 */ // 0x8091E558
    /* li r28, 0 */ // 0x8091E55C
    /* b 0x8091e5c0 */ // 0x8091E560
    r8 = r11 + r30; // 0x8091E564
    r31 = *(0x2c + r3); // lwz @ 0x8091E568
    r7 = *(0x20 + r8); // lwz @ 0x8091E56C
    r0 = r28 rlwinm 1; // rlwinm
    /* lfs f4, 0x14(r8) */ // 0x8091E574
    /* lhzx r8, r7, r0 */ // 0x8091E578
    /* lfsx f1, r12, r31 */ // 0x8091E57C
    /* mulli r7, r8, 0x24 */ // 0x8091E580
    /* slwi r0, r8, 2 */ // 0x8091E584
    /* lfsx f0, r31, r0 */ // 0x8091E588
    r7 = r30 + r7; // 0x8091E58C
    /* lfs f2, 0x14(r7) */ // 0x8091E590
    /* fadds f2, f4, f2 */ // 0x8091E594
    /* fmuls f2, f3, f2 */ // 0x8091E598
    /* fsubs f1, f1, f2 */ // 0x8091E59C
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x8091E5A0
    if (>=) goto 0x0x8091e5bc;
    /* stfsx f1, r31, r0 */ // 0x8091E5A8
    r0 = r8 rlwinm 1; // rlwinm
    /* li r29, 1 */ // 0x8091E5B0
    r7 = *(0x30 + r3); // lwz @ 0x8091E5B4
    /* sthx r10, r7, r0 */ // 0x8091E5B8
    r28 = r28 + 1; // 0x8091E5BC
    r30 = *(0x14 + r3); // lwz @ 0x8091E5C0
    /* clrlwi r8, r28, 0x10 */ // 0x8091E5C4
    r7 = r11 + r30; // 0x8091E5C8
    r0 = *(0x1c + r7); // lhz @ 0x8091E5CC
    if (<) goto 0x0x8091e564;
    r6 = r6 + 1; // 0x8091E5D8
    r0 = *(0x10 + r3); // lhz @ 0x8091E5DC
    /* clrlwi r7, r6, 0x10 */ // 0x8091E5E0
    if (<) goto 0x0x8091e53c;
    if (==) goto 0x0x8091e5fc;
    r4 = r4 + 1; // 0x8091E5F4
    if (counter-- != 0) goto 0x0x8091e528;
    /* lis r4, 0 */ // 0x8091E5FC
    /* xoris r6, r5, 0x8000 */ // 0x8091E600
    /* lfd f2, 0(r4) */ // 0x8091E604
    /* li r9, 0 */ // 0x8091E608
    /* lis r5, 0x4330 */ // 0x8091E60C
    /* b 0x8091e660 */ // 0x8091E610
    r4 = *(0x2c + r3); // lwz @ 0x8091E614
    r8 = r9 rlwinm 2; // rlwinm
    /* lfs f1, 0x24(r3) */ // 0x8091E61C
    r9 = r9 + 1; // 0x8091E620
    /* lfsx f0, r4, r8 */ // 0x8091E624
    *(0xc + r1) = r6; // stw @ 0x8091E628
    /* fmuls f0, f1, f0 */ // 0x8091E62C
    r7 = *(0x28 + r3); // lwz @ 0x8091E630
    *(8 + r1) = r5; // stw @ 0x8091E634
    /* lwzx r4, r7, r8 */ // 0x8091E638
    /* lfd f1, 8(r1) */ // 0x8091E63C
    /* fmuls f0, f0, f0 */ // 0x8091E640
    /* fsubs f1, f1, f2 */ // 0x8091E644
    /* fmuls f0, f1, f0 */ // 0x8091E648
    /* fctiwz f0, f0 */ // 0x8091E64C
    /* stfd f0, 0x10(r1) */ // 0x8091E650
    r0 = *(0x14 + r1); // lwz @ 0x8091E654
    r0 = r4 + r0; // 0x8091E658
    /* stwx r0, r7, r8 */ // 0x8091E65C
    r0 = *(0x10 + r3); // lhz @ 0x8091E660
    /* clrlwi r4, r9, 0x10 */ // 0x8091E664
    if (<) goto 0x0x8091e614;
    r31 = *(0x2c + r1); // lwz @ 0x8091E670
    r30 = *(0x28 + r1); // lwz @ 0x8091E674
    r29 = *(0x24 + r1); // lwz @ 0x8091E678
    r28 = *(0x20 + r1); // lwz @ 0x8091E67C
    return;
}