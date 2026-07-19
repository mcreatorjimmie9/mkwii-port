/* Function at 0x805AE6CC, size=136 bytes */
/* Stack frame: 16 bytes */

void FUN_805AE6CC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* lis r5, 0 */ // 0x805AE6D0
    *(0x18 + r3) = r4; // stb @ 0x805AE6D4
    r5 = *(0 + r5); // lwz @ 0x805AE6D8
    r0 = *(0x4155 + r5); // lbz @ 0x805AE6DC
    if (==) goto 0x0x805ae71c;
    /* lis r0, 0x4330 */ // 0x805AE6E8
    *(0xc + r1) = r4; // stw @ 0x805AE6EC
    /* lis r5, 0 */ // 0x805AE6F0
    /* lis r4, 0 */ // 0x805AE6F4
    *(8 + r1) = r0; // stw @ 0x805AE6F8
    /* lfd f2, 0(r5) */ // 0x805AE6FC
    /* lfd f0, 8(r1) */ // 0x805AE700
    /* lfs f1, 0(r4) */ // 0x805AE704
    /* fsubs f0, f0, f2 */ // 0x805AE708
    /* fsubs f0, f0, f1 */ // 0x805AE70C
    /* fdivs f0, f0, f1 */ // 0x805AE710
    /* fneg f0, f0 */ // 0x805AE714
    /* b 0x805ae748 */ // 0x805AE718
    /* lis r0, 0x4330 */ // 0x805AE71C
    *(0xc + r1) = r4; // stw @ 0x805AE720
    /* lis r5, 0 */ // 0x805AE724
    /* lis r4, 0 */ // 0x805AE728
    *(8 + r1) = r0; // stw @ 0x805AE72C
    /* lfd f2, 0(r5) */ // 0x805AE730
    /* lfd f0, 8(r1) */ // 0x805AE734
    /* lfs f1, 0(r4) */ // 0x805AE738
    /* fsubs f0, f0, f2 */ // 0x805AE73C
    /* fsubs f0, f0, f1 */ // 0x805AE740
    /* fdivs f0, f0, f1 */ // 0x805AE744
    /* stfs f0, 8(r3) */ // 0x805AE748
    return;
}