/* Function at 0x8076A694, size=568 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 9 function(s) */

int FUN_8076A694(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0x4330 */ // 0x8076A69C
    /* lis r31, 0 */ // 0x8076A6A8
    r31 = r31 + 0; // 0x8076A6AC
    *(0x68 + r1) = r30; // stw @ 0x8076A6B0
    r30 = r3;
    *(0x64 + r1) = r29; // stw @ 0x8076A6B8
    /* lis r29, 0 */ // 0x8076A6BC
    r29 = r29 + 0; // 0x8076A6C0
    r0 = *(0x518 + r3); // lbz @ 0x8076A6C4
    *(0x48 + r1) = r4; // stw @ 0x8076A6C8
    *(0x50 + r1) = r4; // stw @ 0x8076A6D0
    if (!=) goto 0x0x8076a714;
    /* lfs f1, 0x98(r29) */ // 0x8076A6D8
    r3 = *(0x4f8 + r3); // lwz @ 0x8076A6DC
    /* lfs f2, 8(r29) */ // 0x8076A6E0
    FUN_807455C0(); // bl 0x807455C0
    r0 = *(0x4f8 + r30); // lwz @ 0x8076A6E8
    /* lfd f3, 0x30(r31) */ // 0x8076A6EC
    /* xoris r0, r0, 0x8000 */ // 0x8076A6F0
    *(0x4c + r1) = r0; // stw @ 0x8076A6F4
    /* lfs f0, 0x504(r30) */ // 0x8076A6F8
    /* lfd f2, 0x48(r1) */ // 0x8076A6FC
    /* stfs f1, 0x4fc(r30) */ // 0x8076A700
    /* fsubs f1, f2, f3 */ // 0x8076A704
    /* fmuls f0, f0, f1 */ // 0x8076A708
    /* stfs f0, 0x500(r30) */ // 0x8076A70C
    /* b 0x8076a778 */ // 0x8076A710
    r0 = *(0x4f8 + r3); // lwz @ 0x8076A714
    /* lfd f2, 0x30(r31) */ // 0x8076A718
    /* xoris r0, r0, 0x8000 */ // 0x8076A71C
    *(0x54 + r1) = r0; // stw @ 0x8076A720
    /* lfs f0, 0x508(r3) */ // 0x8076A724
    /* lfd f1, 0x50(r1) */ // 0x8076A728
    /* fsubs f1, f1, f2 */ // 0x8076A72C
    /* fsubs f1, f1, f0 */ // 0x8076A730
    FUN_805E3430(); // bl 0x805E3430
    /* lfs f1, 0xdc(r31) */ // 0x8076A738
    /* lfs f0, 0x98(r29) */ // 0x8076A73C
    /* lfs f2, 8(r29) */ // 0x8076A740
    /* fmuls f1, f1, f0 */ // 0x8076A744
    FUN_807455C0(); // bl 0x807455C0
    /* stfs f1, 0x4fc(r30) */ // 0x8076A74C
    /* lfs f3, 0x84(r31) */ // 0x8076A750
    /* lfs f0, 0x9c(r29) */ // 0x8076A754
    /* lfs f2, 0xdc(r31) */ // 0x8076A758
    /* lfs f1, 0x508(r30) */ // 0x8076A75C
    /* fmuls f3, f3, f0 */ // 0x8076A760
    /* lfs f0, 0x500(r30) */ // 0x8076A764
    /* fmuls f1, f2, f1 */ // 0x8076A768
    /* fdivs f1, f3, f1 */ // 0x8076A76C
    /* fsubs f0, f0, f1 */ // 0x8076A770
    /* stfs f0, 0x500(r30) */ // 0x8076A774
    /* lfs f2, 0x10(r29) */ // 0x8076A778
    /* lis r4, 0 */ // 0x8076A77C
    /* lfs f1, 0x54(r31) */ // 0x8076A780
    /* lfs f0, 4(r31) */ // 0x8076A788
    r4 = r4 + 0; // 0x8076A78C
    /* fsubs f1, f2, f1 */ // 0x8076A790
    /* stfs f0, 0x38(r1) */ // 0x8076A794
    /* stfs f1, 0x3c(r1) */ // 0x8076A798
    /* stfs f0, 0x40(r1) */ // 0x8076A79C
    /* lfs f1, 0x4fc(r30) */ // 0x8076A7A0
    FUN_805A443C(); // bl 0x805A443C
    r4 = r30 + 0x30; // 0x8076A7AC
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    FUN_805A4464(r5, r3, r4, r5); // bl 0x805A4464
    /* lis r3, 0 */ // 0x8076A7C8
    /* lis r7, 0 */ // 0x8076A7CC
    /* lis r6, 0 */ // 0x8076A7D0
    /* lis r5, 0 */ // 0x8076A7D4
    /* lis r9, 0x64ec */ // 0x8076A7D8
    r8 = *(0 + r6); // lwz @ 0x8076A7DC
    r6 = r9 + -0x2001; // 0x8076A7E0
    r3 = *(0 + r3); // lwz @ 0x8076A7E4
    /* lfs f1, 0xe0(r31) */ // 0x8076A7E8
    r7 = *(0 + r7); // lwz @ 0x8076A7F0
    r5 = r5 + 0; // 0x8076A7F4
    /* li r9, 0 */ // 0x8076A7F8
    FUN_8081A1D4(r4, r5, r9); // bl 0x8081A1D4
    if (==) goto 0x0x8076a84c;
    r4 = *(0x4f8 + r30); // lwz @ 0x8076A808
    if (<=) goto 0x0x8076a84c;
    r0 = *(0x518 + r30); // lbz @ 0x8076A814
    if (!=) goto 0x0x8076a84c;
    /* xoris r0, r4, 0x8000 */ // 0x8076A820
    *(0x4c + r1) = r0; // stw @ 0x8076A824
    /* lfs f0, 4(r31) */ // 0x8076A828
    /* li r0, 1 */ // 0x8076A82C
    /* lfd f2, 0x30(r31) */ // 0x8076A830
    /* lfd f1, 0x48(r1) */ // 0x8076A834
    *(0x518 + r30) = r0; // stb @ 0x8076A838
    /* fsubs f1, f1, f2 */ // 0x8076A83C
    /* stfs f0, 0x4fc(r30) */ // 0x8076A840
    /* stfs f1, 0x508(r30) */ // 0x8076A844
    /* b 0x8076a8e4 */ // 0x8076A848
    if (==) goto 0x0x8076a8e4;
    r0 = *(0x4f8 + r30); // lwz @ 0x8076A854
    /* lfd f3, 0x30(r31) */ // 0x8076A858
    /* xoris r0, r0, 0x8000 */ // 0x8076A85C
    *(0x54 + r1) = r0; // stw @ 0x8076A860
    /* lfs f1, 0x1c(r31) */ // 0x8076A864
    /* lfd f2, 0x50(r1) */ // 0x8076A868
    /* lfs f0, 0x508(r30) */ // 0x8076A86C
    /* fsubs f2, f2, f3 */ // 0x8076A870
    /* fadds f0, f1, f0 */ // 0x8076A874
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x8076A878
    if (<=) goto 0x0x8076a8e4;
    r0 = *(0x518 + r30); // lbz @ 0x8076A880
    if (==) goto 0x0x8076a8e4;
    /* lfs f0, 4(r31) */ // 0x8076A88C
    /* li r0, -1 */ // 0x8076A890
    *(0x4f8 + r30) = r0; // stw @ 0x8076A894
    r3 = r30;
    /* stfs f0, 0x4fc(r30) */ // 0x8076A89C
    r12 = *(0 + r30); // lwz @ 0x8076A8A0
    r12 = *(0x94 + r12); // lwz @ 0x8076A8A4
    /* mtctr r12 */ // 0x8076A8A8
    /* bctrl  */ // 0x8076A8AC
    r3 = r30;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r4 = r30 + 0x58; // 0x8076A8BC
    /* li r5, 1 */ // 0x8076A8C0
    FUN_805C70D8(r3, r3, r4, r5); // bl 0x805C70D8
    /* lfs f0, 8(r1) */ // 0x8076A8C8
}