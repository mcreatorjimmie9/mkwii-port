/* Function at 0x806075E4, size=376 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_806075E4(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x24 + r1) = r29; // stw @ 0x806075F8
    r29 = r3;
    r4 = *(0 + r3); // lwz @ 0x80607600
    r4 = *(4 + r4); // lwz @ 0x80607604
    r0 = *(0xc + r4); // lwz @ 0x80607608
    /* rlwinm. r0, r0, 0, 6, 6 */ // 0x8060760C
    if (==) goto 0x0x80607740;
    FUN_8061DC48(); // bl 0x8061DC48
    /* lis r4, 0 */ // 0x80607618
    r0 = *(0x6c + r3); // lwz @ 0x8060761C
    /* lfs f1, 0(r4) */ // 0x80607620
    /* lfs f0, 0x170(r29) */ // 0x80607624
    *(0x18 + r1) = r0; // stw @ 0x80607628
    /* fmuls f1, f1, f0 */ // 0x8060762C
    r4 = *(0x68 + r3); // lwz @ 0x80607630
    /* lfs f0, 0x18(r1) */ // 0x80607634
    r0 = *(0x70 + r3); // lwz @ 0x80607638
    r3 = r29;
    /* fsubs f0, f0, f1 */ // 0x80607640
    *(0x14 + r1) = r4; // stw @ 0x80607644
    *(0x1c + r1) = r0; // stw @ 0x80607648
    /* stfs f0, 0x18(r1) */ // 0x8060764C
    FUN_8061DC48(r3); // bl 0x8061DC48
    /* lfs f0, 0x14(r1) */ // 0x80607654
    /* stfs f0, 0x68(r3) */ // 0x80607658
    /* lfs f0, 0x18(r1) */ // 0x8060765C
    /* stfs f0, 0x6c(r3) */ // 0x80607660
    /* lfs f0, 0x1c(r1) */ // 0x80607664
    /* stfs f0, 0x70(r3) */ // 0x80607668
    r3 = r29;
    FUN_8061DC48(r3); // bl 0x8061DC48
    /* li r0, 1 */ // 0x80607674
    *(0x171 + r3) = r0; // stb @ 0x80607678
    /* lis r30, 0 */ // 0x8060767C
    r3 = r29;
    /* lfs f1, 0x20(r29) */ // 0x80607684
    /* lfs f0, 0(r30) */ // 0x80607688
    /* fmuls f0, f1, f0 */ // 0x8060768C
    /* stfs f0, 0x20(r29) */ // 0x80607690
    FUN_8061DC48(r3); // bl 0x8061DC48
    r5 = *(0x74 + r3); // lwz @ 0x80607698
    *(8 + r1) = r5; // stw @ 0x8060769C
    r4 = *(0x78 + r3); // lwz @ 0x806076A0
    r0 = *(0x7c + r3); // lwz @ 0x806076A4
    r3 = r29;
    *(0xc + r1) = r4; // stw @ 0x806076AC
    /* lfs f3, 0(r30) */ // 0x806076B0
    /* lfs f0, 8(r1) */ // 0x806076B4
    /* lfs f1, 0xc(r1) */ // 0x806076B8
    /* fmuls f2, f0, f3 */ // 0x806076BC
    *(0x10 + r1) = r0; // stw @ 0x806076C0
    /* fmuls f1, f1, f3 */ // 0x806076C4
    /* lfs f0, 0x10(r1) */ // 0x806076C8
    /* stfs f2, 8(r1) */ // 0x806076CC
    /* fmuls f0, f0, f3 */ // 0x806076D0
    /* stfs f1, 0xc(r1) */ // 0x806076D4
    /* stfs f0, 0x10(r1) */ // 0x806076D8
    FUN_8061DC48(); // bl 0x8061DC48
    /* lfs f0, 8(r1) */ // 0x806076E0
    /* stfs f0, 0x74(r3) */ // 0x806076E4
    /* lfs f0, 0xc(r1) */ // 0x806076E8
    /* stfs f0, 0x78(r3) */ // 0x806076EC
    /* lfs f0, 0x10(r1) */ // 0x806076F0
    /* stfs f0, 0x7c(r3) */ // 0x806076F4
    r3 = r29;
    FUN_8061DC48(r3); // bl 0x8061DC48
    /* lis r30, 0 */ // 0x80607700
    /* lfs f0, 0(r30) */ // 0x80607704
    r31 = r30 + 0; // 0x80607708
    /* stfs f0, 0xb0(r3) */ // 0x8060770C
    /* lfs f0, 4(r31) */ // 0x80607710
    /* stfs f0, 0xb4(r3) */ // 0x80607714
    /* lfs f0, 8(r31) */ // 0x80607718
    /* stfs f0, 0xb8(r3) */ // 0x8060771C
    r3 = r29;
    FUN_8061DC48(r3); // bl 0x8061DC48
    /* lfs f0, 0(r30) */ // 0x80607728
    /* stfs f0, 0xc8(r3) */ // 0x8060772C
    /* lfs f0, 4(r31) */ // 0x80607730
    /* stfs f0, 0xcc(r3) */ // 0x80607734
    /* lfs f0, 8(r31) */ // 0x80607738
    /* stfs f0, 0xd0(r3) */ // 0x8060773C
    r0 = *(0x34 + r1); // lwz @ 0x80607740
    r31 = *(0x2c + r1); // lwz @ 0x80607744
    r30 = *(0x28 + r1); // lwz @ 0x80607748
    r29 = *(0x24 + r1); // lwz @ 0x8060774C
    return;
}