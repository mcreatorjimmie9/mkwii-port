/* Function at 0x8089886C, size=272 bytes */
/* Stack frame: 160 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8089886C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -160(r1) */
    /* saved r31 */
    /* lis r8, 0x4330 */ // 0x80898874
    /* lis r9, 0 */ // 0x80898878
    *(0xa4 + r1) = r0; // stw @ 0x8089887C
    /* lis r6, 0 */ // 0x80898880
    r9 = r9 + 0; // 0x80898884
    /* lis r7, 0 */ // 0x80898888
    *(0x9c + r1) = r31; // stw @ 0x8089888C
    r31 = r4;
    /* lfd f3, 0(r6) */ // 0x80898894
    r10 = r3;
    *(0x98 + r1) = r30; // stw @ 0x8089889C
    r30 = r5;
    r0 = *(8 + r9); // lwz @ 0x808988A4
    r7 = *(0 + r7); // lwz @ 0x808988A8
    /* xoris r0, r0, 0x8000 */ // 0x808988AC
    *(0x84 + r1) = r0; // stw @ 0x808988B0
    r6 = *(0x20 + r7); // lwz @ 0x808988B4
    *(0x80 + r1) = r8; // stw @ 0x808988B8
    r4 = *(0x134 + r3); // lwz @ 0x808988BC
    r0 = *(0x138 + r3); // lwz @ 0x808988C0
    /* lfd f0, 0x80(r1) */ // 0x808988C4
    r5 = *(0 + r9); // lha @ 0x808988C8
    /* fsubs f1, f0, f3 */ // 0x808988CC
    /* lfs f0, 4(r9) */ // 0x808988D0
    *(0x14 + r1) = r4; // stw @ 0x808988D4
    *(0x18 + r1) = r0; // stw @ 0x808988DC
    /* fmuls f4, f1, f0 */ // 0x808988E0
    r0 = *(0x13c + r3); // lwz @ 0x808988E4
    *(0x88 + r1) = r8; // stw @ 0x808988E8
    *(0x1c + r1) = r0; // stw @ 0x808988EC
    if (>) goto 0x0x808988fc;
    /* lfs f0, 0x134(r3) */ // 0x808988F4
    /* b 0x80898968 */ // 0x808988F8
    if (>) goto 0x0x80898960;
    /* xoris r0, r5, 0x8000 */ // 0x80898904
    *(0x84 + r1) = r0; // stw @ 0x80898908
    /* xoris r0, r6, 0x8000 */ // 0x8089890C
    /* lfd f0, 0x80(r1) */ // 0x80898910
    *(0x8c + r1) = r0; // stw @ 0x80898914
    /* fsubs f0, f0, f3 */ // 0x80898918
    /* lfd f1, 0x88(r1) */ // 0x8089891C
    /* fsubs f1, f1, f3 */ // 0x80898920
    /* fadds f0, f0, f4 */ // 0x80898924
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80898928
    if (>=) goto 0x0x80898960;
    /* subf r0, r5, r6 */ // 0x80898930
    /* lis r4, 0 */ // 0x80898934
    /* xoris r0, r0, 0x8000 */ // 0x80898938
    *(0x8c + r1) = r0; // stw @ 0x8089893C
    /* lfs f1, 0(r4) */ // 0x80898940
    /* lfd f2, 0x88(r1) */ // 0x80898944
    /* lfs f0, 0x134(r3) */ // 0x80898948
    /* fsubs f2, f2, f3 */ // 0x8089894C
    /* fdivs f2, f2, f4 */ // 0x80898950
    /* fsubs f1, f1, f2 */ // 0x80898954
    /* fmuls f0, f0, f1 */ // 0x80898958
    /* b 0x80898968 */ // 0x8089895C
    /* lis r3, 0 */ // 0x80898960
    /* lfs f0, 0(r3) */ // 0x80898964
    /* stfs f0, 0x14(r1) */ // 0x80898968
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
}