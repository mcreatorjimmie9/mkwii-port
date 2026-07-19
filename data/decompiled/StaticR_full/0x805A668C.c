/* Function at 0x805A668C, size=336 bytes */
/* Stack frame: 80 bytes */

void FUN_805A668C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -80(r1) */
    /* li r9, 0 */ // 0x805A6690
    r7 = *(0x2c + r3); // lwz @ 0x805A6694
    /* cntlzw r0, r7 */ // 0x805A6698
    /* srwi r6, r0, 5 */ // 0x805A669C
    /* b 0x805a67b0 */ // 0x805A66A0
    /* clrlwi r3, r9, 0x10 */ // 0x805A66A8
    if (==) goto 0x0x805a66b8;
    r0 = *(4 + r7); // lhz @ 0x805A66B0
    /* b 0x805a66bc */ // 0x805A66B4
    /* li r0, 0 */ // 0x805A66B8
    if (>=) goto 0x0x805a66f4;
    r0 = *(4 + r7); // lhz @ 0x805A66C4
    /* clrlwi r3, r9, 0x10 */ // 0x805A66C8
    if (>=) goto 0x0x805a66ec;
    r3 = *(0x10 + r7); // lwz @ 0x805A66D4
    if (==) goto 0x0x805a66ec;
    r0 = r9 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x805A66E4
    /* b 0x805a66f8 */ // 0x805A66E8
    /* li r3, 0 */ // 0x805A66EC
    /* b 0x805a66f8 */ // 0x805A66F0
    /* li r3, 0 */ // 0x805A66F4
    r8 = *(4 + r3); // lwz @ 0x805A66F8
    r3 = *(0x28 + r8); // lha @ 0x805A6700
    if (==) goto 0x0x805a67ac;
    r0 = *(1 + r8); // lbz @ 0x805A6708
    if (!=) goto 0x0x805a67ac;
    if (!=) goto 0x0x805a67ac;
    /* lis r6, 0 */ // 0x805A671C
    /* lfs f11, 0x24(r8) */ // 0x805A6720
    /* lfs f12, 0x20(r8) */ // 0x805A6724
    /* li r3, 1 */ // 0x805A6728
    /* lfs f0, 0(r6) */ // 0x805A672C
    /* lfs f13, 0x1c(r8) */ // 0x805A6730
    /* lfs f9, 8(r8) */ // 0x805A6734
    /* fmuls f1, f0, f12 */ // 0x805A6738
    /* fmuls f4, f0, f13 */ // 0x805A673C
    /* lfs f10, 4(r8) */ // 0x805A6740
    /* lfs f8, 0xc(r8) */ // 0x805A6744
    /* fmuls f0, f0, f11 */ // 0x805A6748
    /* fadds f3, f9, f1 */ // 0x805A674C
    /* lfs f5, 0x18(r8) */ // 0x805A6750
    /* lfs f6, 0x14(r8) */ // 0x805A6754
    /* fadds f2, f8, f0 */ // 0x805A6758
    /* lfs f7, 0x10(r8) */ // 0x805A675C
    /* fsubs f1, f10, f4 */ // 0x805A6760
    /* fsubs f0, f8, f0 */ // 0x805A6764
    /* stfs f7, 0x38(r1) */ // 0x805A6768
    /* stfs f1, 0(r4) */ // 0x805A676C
    /* fadds f1, f10, f4 */ // 0x805A6770
    /* stfs f3, 4(r4) */ // 0x805A6774
    /* stfs f2, 8(r4) */ // 0x805A6778
    /* stfs f6, 0xc(r1) */ // 0x805A677C
    /* stfs f5, 0x1c(r1) */ // 0x805A6780
    /* stfs f10, 0x2c(r1) */ // 0x805A6784
    /* stfs f9, 0x30(r1) */ // 0x805A6788
    /* stfs f8, 0x34(r1) */ // 0x805A678C
    /* stfs f13, 0x20(r1) */ // 0x805A6790
    /* stfs f12, 0x24(r1) */ // 0x805A6794
    /* stfs f11, 0x28(r1) */ // 0x805A6798
    /* stfs f1, 0(r5) */ // 0x805A679C
    /* stfs f3, 4(r5) */ // 0x805A67A0
    /* stfs f0, 8(r5) */ // 0x805A67A4
    /* b 0x805a67d4 */ // 0x805A67A8
    r9 = r9 + 1; // 0x805A67AC
    /* clrlwi r3, r9, 0x10 */ // 0x805A67B4
    if (==) goto 0x0x805a67c4;
    /* li r0, 0 */ // 0x805A67BC
    /* b 0x805a67c8 */ // 0x805A67C0
    r0 = *(4 + r7); // lhz @ 0x805A67C4
    if (<) goto 0x0x805a66a4;
    /* li r3, 0 */ // 0x805A67D0
    return;
}