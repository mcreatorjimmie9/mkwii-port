/* Function at 0x808A9600, size=404 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808A9600(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x2c + r1) = r31; // stw @ 0x808A960C
    r31 = r3;
    FUN_808A8DEC(); // bl 0x808A8DEC
    r3 = *(0x20 + r31); // lwz @ 0x808A9618
    r0 = *(0x46 + r3); // lha @ 0x808A961C
    r4 = *(8 + r3); // lwz @ 0x808A9620
    /* slwi r0, r0, 4 */ // 0x808A9624
    r4 = r4 + r0; // 0x808A9628
    r0 = *(0xe + r4); // lhz @ 0x808A962C
    if (!=) goto 0x0x808a96e8;
    /* lis r6, 0 */ // 0x808A9638
    r9 = *(0 + r6); // lwzu @ 0x808A963C
    *(0x14 + r1) = r9; // stw @ 0x808A9640
    r3 = r31;
    r8 = *(4 + r6); // lwz @ 0x808A9648
    r0 = *(8 + r6); // lwz @ 0x808A9650
    /* li r4, 0 */ // 0x808A9654
    *(0x18 + r1) = r8; // stw @ 0x808A9658
    /* li r5, 0 */ // 0x808A965C
    /* li r6, 0 */ // 0x808A9660
    *(0x1c + r1) = r0; // stw @ 0x808A9664
    r12 = *(0 + r31); // lwz @ 0x808A9668
    r12 = *(0xc0 + r12); // lwz @ 0x808A966C
    /* mtctr r12 */ // 0x808A9670
    /* bctrl  */ // 0x808A9674
    r3 = *(0x20 + r31); // lwz @ 0x808A9678
    /* lis r4, 0 */ // 0x808A967C
    /* lfs f1, 0(r4) */ // 0x808A9680
    /* li r4, 0 */ // 0x808A9684
    r12 = *(0 + r3); // lwz @ 0x808A9688
    r12 = *(0x10 + r12); // lwz @ 0x808A968C
    /* mtctr r12 */ // 0x808A9690
    /* bctrl  */ // 0x808A9694
    r3 = *(0x20 + r31); // lwz @ 0x808A9698
    r0 = *(0x46 + r3); // lha @ 0x808A969C
    r4 = *(8 + r3); // lwz @ 0x808A96A0
    /* slwi r0, r0, 4 */ // 0x808A96A4
    r4 = r4 + r0; // 0x808A96A8
    r5 = *(0xc + r4); // lhz @ 0x808A96AC
    if (==) goto 0x0x808a9744;
    /* lis r0, 0x4330 */ // 0x808A96B8
    *(0x24 + r1) = r5; // stw @ 0x808A96BC
    r12 = *(0 + r3); // lwz @ 0x808A96C0
    /* lis r4, 0 */ // 0x808A96C4
    *(0x20 + r1) = r0; // stw @ 0x808A96C8
    /* lfd f1, 0(r4) */ // 0x808A96CC
    /* lfd f0, 0x20(r1) */ // 0x808A96D0
    r12 = *(0x18 + r12); // lwz @ 0x808A96D4
    /* fsubs f1, f0, f1 */ // 0x808A96D8
    /* mtctr r12 */ // 0x808A96DC
    /* bctrl  */ // 0x808A96E0
    /* b 0x808a9744 */ // 0x808A96E4
    r12 = *(0 + r3); // lwz @ 0x808A96E8
    r12 = *(0x14 + r12); // lwz @ 0x808A96EC
    /* mtctr r12 */ // 0x808A96F0
    /* bctrl  */ // 0x808A96F4
    r3 = *(0x20 + r31); // lwz @ 0x808A96F8
    r0 = *(0x46 + r3); // lha @ 0x808A96FC
    r4 = *(8 + r3); // lwz @ 0x808A9700
    /* slwi r0, r0, 4 */ // 0x808A9704
    r4 = r4 + r0; // 0x808A9708
    r5 = *(0xc + r4); // lhz @ 0x808A970C
    if (==) goto 0x0x808a9744;
    /* lis r0, 0x4330 */ // 0x808A9718
    *(0x24 + r1) = r5; // stw @ 0x808A971C
    r12 = *(0 + r3); // lwz @ 0x808A9720
    /* lis r4, 0 */ // 0x808A9724
    *(0x20 + r1) = r0; // stw @ 0x808A9728
    /* lfd f1, 0(r4) */ // 0x808A972C
    /* lfd f0, 0x20(r1) */ // 0x808A9730
    r12 = *(0x18 + r12); // lwz @ 0x808A9734
    /* fsubs f1, f0, f1 */ // 0x808A9738
    /* mtctr r12 */ // 0x808A973C
    /* bctrl  */ // 0x808A9740
    r4 = *(0x20 + r31); // lwz @ 0x808A9744
    /* lis r5, 0 */ // 0x808A9748
    r4 = r4 + 0x18; // 0x808A9750
    r5 = r5 + 0; // 0x808A9754
    FUN_805A4464(r5, r3, r4, r5); // bl 0x805A4464
    r0 = *(0x2c + r31); // lhz @ 0x808A975C
    /* lfs f0, 0x10(r1) */ // 0x808A9760
    /* lfs f1, 0xc(r1) */ // 0x808A9764
    r0 = r0 | 1; // 0x808A9768
    /* lfs f2, 8(r1) */ // 0x808A976C
    /* stfs f2, 0x30(r31) */ // 0x808A9770
    *(0x2c + r31) = r0; // sth @ 0x808A9774
    /* stfs f1, 0x34(r31) */ // 0x808A9778
    /* stfs f0, 0x38(r31) */ // 0x808A977C
    r31 = *(0x2c + r1); // lwz @ 0x808A9780
    r0 = *(0x34 + r1); // lwz @ 0x808A9784
    return;
}