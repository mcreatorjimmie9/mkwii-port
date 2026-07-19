/* Function at 0x807CF5F0, size=444 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_807CF5F0(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* mulli r0, r6, 0xc */ // 0x807CF5FC
    /* mulli r6, r7, 0xc */ // 0x807CF608
    *(0x58 + r1) = r30; // stw @ 0x807CF60C
    r30 = r31;
    *(0x54 + r1) = r29; // stw @ 0x807CF614
    r29 = r31;
    r31 = r31 + r0; // 0x807CF61C
    r30 = r30 + r6; // 0x807CF620
    *(0x50 + r1) = r28; // stw @ 0x807CF624
    /* mulli r0, r8, 0xc */ // 0x807CF628
    r28 = r3;
    /* lfs f0, 0(r5) */ // 0x807CF630
    /* lfs f2, 0(r4) */ // 0x807CF638
    r29 = r29 + r0; // 0x807CF63C
    /* fsubs f0, f0, f2 */ // 0x807CF640
    /* fmuls f0, f1, f0 */ // 0x807CF644
    /* fadds f0, f2, f0 */ // 0x807CF648
    /* stfs f0, 0x20(r1) */ // 0x807CF64C
    /* lfs f0, 0x10(r5) */ // 0x807CF650
    /* lfs f2, 0x10(r4) */ // 0x807CF654
    /* fsubs f0, f0, f2 */ // 0x807CF658
    /* fmuls f0, f1, f0 */ // 0x807CF65C
    /* fadds f0, f2, f0 */ // 0x807CF660
    /* stfs f0, 0x24(r1) */ // 0x807CF664
    /* lfs f0, 0x20(r5) */ // 0x807CF668
    /* lfs f2, 0x20(r4) */ // 0x807CF66C
    /* fsubs f0, f0, f2 */ // 0x807CF670
    /* fmuls f0, f1, f0 */ // 0x807CF674
    /* fadds f0, f2, f0 */ // 0x807CF678
    /* stfs f0, 0x28(r1) */ // 0x807CF67C
    /* lfs f0, 4(r5) */ // 0x807CF680
    /* lfs f2, 4(r4) */ // 0x807CF684
    /* fsubs f0, f0, f2 */ // 0x807CF688
    /* fmuls f0, f1, f0 */ // 0x807CF68C
    /* fadds f0, f2, f0 */ // 0x807CF690
    /* stfs f0, 0x2c(r1) */ // 0x807CF694
    /* lfs f0, 0x14(r5) */ // 0x807CF698
    /* lfs f2, 0x14(r4) */ // 0x807CF69C
    /* fsubs f0, f0, f2 */ // 0x807CF6A0
    /* fmuls f0, f1, f0 */ // 0x807CF6A4
    /* fadds f0, f2, f0 */ // 0x807CF6A8
    /* stfs f0, 0x30(r1) */ // 0x807CF6AC
    /* lfs f0, 0x24(r5) */ // 0x807CF6B0
    /* lfs f2, 0x24(r4) */ // 0x807CF6B4
    /* fsubs f0, f0, f2 */ // 0x807CF6B8
    /* fmuls f0, f1, f0 */ // 0x807CF6BC
    /* fadds f0, f2, f0 */ // 0x807CF6C0
    /* stfs f0, 0x34(r1) */ // 0x807CF6C4
    /* lfs f0, 8(r5) */ // 0x807CF6C8
    /* lfs f2, 8(r4) */ // 0x807CF6CC
    /* fsubs f0, f0, f2 */ // 0x807CF6D0
    /* fmuls f0, f1, f0 */ // 0x807CF6D4
    /* fadds f0, f2, f0 */ // 0x807CF6D8
    /* stfs f0, 0x38(r1) */ // 0x807CF6DC
    /* lfs f0, 0x18(r5) */ // 0x807CF6E0
    /* lfs f2, 0x18(r4) */ // 0x807CF6E4
    /* fsubs f0, f0, f2 */ // 0x807CF6E8
    /* fmuls f0, f1, f0 */ // 0x807CF6EC
    /* fadds f0, f2, f0 */ // 0x807CF6F0
    /* stfs f0, 0x3c(r1) */ // 0x807CF6F4
    /* lfs f0, 0x28(r5) */ // 0x807CF6F8
    /* lfs f2, 0x28(r4) */ // 0x807CF6FC
    /* fsubs f0, f0, f2 */ // 0x807CF700
    /* fmuls f0, f1, f0 */ // 0x807CF704
    /* fadds f0, f2, f0 */ // 0x807CF708
    /* stfs f0, 0x40(r1) */ // 0x807CF70C
    /* lfs f0, 0xc(r5) */ // 0x807CF710
    /* lfs f2, 0xc(r4) */ // 0x807CF714
    /* fsubs f0, f0, f2 */ // 0x807CF718
    /* fmuls f0, f1, f0 */ // 0x807CF71C
    /* fadds f0, f2, f0 */ // 0x807CF720
    /* stfs f0, 0x44(r1) */ // 0x807CF724
    /* lfs f0, 0x1c(r5) */ // 0x807CF728
    /* lfs f2, 0x1c(r4) */ // 0x807CF72C
    /* fsubs f0, f0, f2 */ // 0x807CF730
    /* fmuls f0, f1, f0 */ // 0x807CF734
    /* fadds f0, f2, f0 */ // 0x807CF738
    /* stfs f0, 0x48(r1) */ // 0x807CF73C
    /* lfs f0, 0x2c(r5) */ // 0x807CF740
    r5 = r30;
    /* lfs f2, 0x2c(r4) */ // 0x807CF748
    r4 = r31;
    /* fsubs f0, f0, f2 */ // 0x807CF750
    /* fmuls f0, f1, f0 */ // 0x807CF754
    /* fadds f0, f2, f0 */ // 0x807CF758
    /* stfs f0, 0x4c(r1) */ // 0x807CF75C
    FUN_805C6D88(r4); // bl 0x805C6D88
    /* lfs f0, 0x14(r1) */ // 0x807CF764
    r4 = r30;
    /* stfs f0, 0(r29) */ // 0x807CF76C
    r5 = r29;
    /* lfs f0, 0x18(r1) */ // 0x807CF774
    /* stfs f0, 4(r29) */ // 0x807CF77C
    /* lfs f0, 0x1c(r1) */ // 0x807CF780
    /* stfs f0, 8(r29) */ // 0x807CF784
    FUN_805C6D88(r3); // bl 0x805C6D88
    /* lfs f0, 8(r1) */ // 0x807CF78C
    r3 = r31;
    /* stfs f0, 0(r31) */ // 0x807CF794
    /* lfs f0, 0xc(r1) */ // 0x807CF798
    /* stfs f0, 4(r31) */ // 0x807CF79C
    /* lfs f0, 0x10(r1) */ // 0x807CF7A0
    /* stfs f0, 8(r31) */ // 0x807CF7A4
    FUN_805E3430(); // bl 0x805E3430
}