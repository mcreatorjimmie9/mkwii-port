/* Function at 0x806425D0, size=172 bytes */
/* Stack frame: 0 bytes */

int FUN_806425D0(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* cntlzw r0, r4 */ // 0x806425D0
    r7 = r3 + 0x10; // 0x806425D4
    r0 = r0 rlwinm 0x1b; // rlwinm
    /* lis r6, 0 */ // 0x806425DC
    /* neg r3, r0 */ // 0x806425E0
    /* lis r5, 0 */ // 0x806425E4
    r0 = r3 + 2; // 0x806425E8
    *(0 + r7) = r0; // stw @ 0x806425EC
    /* slwi r8, r0, 2 */ // 0x806425F0
    r6 = r6 + 0; // 0x806425F4
    r5 = r5 + 0; // 0x806425F8
    /* lfsx f9, r6, r8 */ // 0x806425FC
    r4 = r7 + r8; // 0x80642600
    /* lfsx f0, r5, r8 */ // 0x80642604
    /* lfs f1, 0x40(r4) */ // 0x80642608
    /* li r0, 1 */ // 0x8064260C
    /* lfs f8, 0x1c(r7) */ // 0x80642610
    /* fsubs f7, f0, f9 */ // 0x80642614
    /* lfs f5, 0x20(r7) */ // 0x80642618
    /* lis r3, 0 */ // 0x8064261C
    /* fsubs f4, f1, f8 */ // 0x80642620
    /* lfs f0, 0(r3) */ // 0x80642624
    /* lfs f3, 0x24(r7) */ // 0x80642628
    /* fsubs f2, f1, f5 */ // 0x8064262C
    /* stfs f0, 0x2c(r7) */ // 0x80642630
    /* fdivs f6, f4, f7 */ // 0x80642634
    *(0x28 + r7) = r0; // stb @ 0x80642638
    /* stfs f6, 0x10(r7) */ // 0x8064263C
    /* fdivs f4, f2, f7 */ // 0x80642640
    /* stfs f4, 0x14(r7) */ // 0x80642644
    /* fsubs f1, f1, f3 */ // 0x80642648
    /* fmuls f2, f6, f9 */ // 0x8064264C
    /* fdivs f0, f1, f7 */ // 0x80642650
    /* stfs f0, 0x18(r7) */ // 0x80642654
    /* fmuls f1, f4, f9 */ // 0x80642658
    /* fmuls f0, f0, f9 */ // 0x8064265C
    /* fsubs f2, f8, f2 */ // 0x80642660
    /* fsubs f1, f5, f1 */ // 0x80642664
    /* fsubs f0, f3, f0 */ // 0x80642668
    /* stfs f2, 4(r7) */ // 0x8064266C
    /* stfs f1, 8(r7) */ // 0x80642670
    /* stfs f0, 0xc(r7) */ // 0x80642674
    return;
}