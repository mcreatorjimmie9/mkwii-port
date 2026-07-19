/* Function at 0x808DC748, size=868 bytes */
/* Stack frame: 160 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808DC748(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -160(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r10, 0x4330 */ // 0x808DC750
    /* lis r6, 0 */ // 0x808DC754
    *(0xa4 + r1) = r0; // stw @ 0x808DC758
    r7 = r3;
    *(0x9c + r1) = r31; // stw @ 0x808DC760
    r31 = r5;
    *(0x98 + r1) = r30; // stw @ 0x808DC768
    r30 = r4;
    r9 = *(0 + r6); // lwz @ 0x808DC770
    /* lis r6, 0 */ // 0x808DC774
    r8 = *(0x104 + r3); // lwz @ 0x808DC778
    r6 = r6 + 0; // 0x808DC77C
    r9 = *(0x20 + r9); // lwz @ 0x808DC780
    r0 = *(0x108 + r3); // lwz @ 0x808DC784
    *(0x18 + r1) = r0; // stw @ 0x808DC788
    *(0x14 + r1) = r8; // stw @ 0x808DC78C
    r0 = *(0x10c + r3); // lwz @ 0x808DC790
    *(0x1c + r1) = r0; // stw @ 0x808DC794
    r5 = *(0x124 + r3); // lwz @ 0x808DC798
    r0 = *(0x118 + r3); // lwz @ 0x808DC79C
    r4 = r9 / r5; // 0x808DC7A0
    *(0x80 + r1) = r10; // stw @ 0x808DC7A4
    *(0x88 + r1) = r10; // stw @ 0x808DC7A8
    r4 = r4 * r5; // 0x808DC7AC
    /* subf r9, r4, r9 */ // 0x808DC7B0
    if (>=) goto 0x0x808dc7c4;
    /* li r5, 0 */ // 0x808DC7BC
    /* b 0x808dc7f4 */ // 0x808DC7C0
    r8 = *(0x11c + r3); // lwz @ 0x808DC7C4
    r4 = r0 + r8; // 0x808DC7C8
    if (>=) goto 0x0x808dc7dc;
    /* li r5, 1 */ // 0x808DC7D4
    /* b 0x808dc7f4 */ // 0x808DC7D8
    /* slwi r4, r0, 1 */ // 0x808DC7DC
    /* li r5, 3 */ // 0x808DC7E0
    r4 = r4 + r8; // 0x808DC7E4
    if (>=) goto 0x0x808dc7f4;
    /* li r5, 2 */ // 0x808DC7F0
    if (==) goto 0x0x808dc818;
    if (==) goto 0x0x808dc84c;
    if (==) goto 0x0x808dc854;
    if (==) goto 0x0x808dc944;
    /* b 0x808dca38 */ // 0x808DC814
    r0 = *(0x110 + r3); // lbz @ 0x808DC818
    /* li r4, 1 */ // 0x808DC81C
    if (==) goto 0x0x808dc82c;
    /* li r4, -1 */ // 0x808DC828
    /* xoris r0, r4, 0x8000 */ // 0x808DC82C
    *(0x84 + r1) = r0; // stw @ 0x808DC830
    /* lfd f2, 0x10(r6) */ // 0x808DC834
    /* lfd f1, 0x80(r1) */ // 0x808DC838
    /* lfs f0, 0x114(r3) */ // 0x808DC83C
    /* fsubs f1, f1, f2 */ // 0x808DC840
    /* fmuls f4, f0, f1 */ // 0x808DC844
    /* b 0x808dca3c */ // 0x808DC848
    /* lfs f4, 0(r6) */ // 0x808DC84C
    /* b 0x808dca3c */ // 0x808DC850
    if (>=) goto 0x0x808dc874;
    /* xoris r4, r9, 0x8000 */ // 0x808DC85C
    *(0x8c + r1) = r4; // stw @ 0x808DC860
    /* lfd f1, 0x10(r6) */ // 0x808DC864
    /* lfd f0, 0x88(r1) */ // 0x808DC868
    /* fsubs f0, f0, f1 */ // 0x808DC86C
    /* b 0x808dc8ec */ // 0x808DC870
    r8 = *(0x11c + r3); // lwz @ 0x808DC874
    r10 = r0 + r8; // 0x808DC878
    if (>=) goto 0x0x808dc8a0;
    /* subf r4, r0, r9 */ // 0x808DC884
    /* lfd f1, 0x10(r6) */ // 0x808DC888
    /* xoris r4, r4, 0x8000 */ // 0x808DC88C
    *(0x84 + r1) = r4; // stw @ 0x808DC890
    /* lfd f0, 0x80(r1) */ // 0x808DC894
    /* fsubs f0, f0, f1 */ // 0x808DC898
    /* b 0x808dc8ec */ // 0x808DC89C
    /* slwi r5, r0, 1 */ // 0x808DC8A0
    r4 = r5 + r8; // 0x808DC8A4
    if (>=) goto 0x0x808dc8cc;
    /* subf r4, r10, r9 */ // 0x808DC8B0
    /* lfd f1, 0x10(r6) */ // 0x808DC8B4
    /* xoris r4, r4, 0x8000 */ // 0x808DC8B8
    *(0x8c + r1) = r4; // stw @ 0x808DC8BC
    /* lfd f0, 0x88(r1) */ // 0x808DC8C0
    /* fsubs f0, f0, f1 */ // 0x808DC8C4
    /* b 0x808dc8ec */ // 0x808DC8C8
    /* neg r4, r5 */ // 0x808DC8CC
    /* lfd f1, 0x10(r6) */ // 0x808DC8D0
    /* subf r4, r8, r4 */ // 0x808DC8D4
    r4 = r4 + r9; // 0x808DC8D8
    /* xoris r4, r4, 0x8000 */ // 0x808DC8DC
    *(0x84 + r1) = r4; // stw @ 0x808DC8E0
    /* lfd f0, 0x80(r1) */ // 0x808DC8E4
    /* fsubs f0, f0, f1 */ // 0x808DC8E8
    /* fctiwz f0, f0 */ // 0x808DC8EC
    r4 = *(0x110 + r3); // lbz @ 0x808DC8F0
    /* li r5, 1 */ // 0x808DC8F4
    /* stfd f0, 0x90(r1) */ // 0x808DC8F8
    r4 = *(0x94 + r1); // lwz @ 0x808DC900
    if (==) goto 0x0x808dc90c;
    /* li r5, -1 */ // 0x808DC908
    r4 = r4 * r5; // 0x808DC90C
    /* xoris r0, r0, 0x8000 */ // 0x808DC910
    *(0x84 + r1) = r0; // stw @ 0x808DC914
    /* lfd f3, 0x10(r6) */ // 0x808DC918
    /* lfd f0, 0x80(r1) */ // 0x808DC91C
    /* lfs f1, 0x114(r3) */ // 0x808DC920
    /* xoris r0, r4, 0x8000 */ // 0x808DC924
    *(0x8c + r1) = r0; // stw @ 0x808DC928
    /* fsubs f0, f0, f3 */ // 0x808DC92C
    /* lfd f2, 0x88(r1) */ // 0x808DC930
    /* fsubs f2, f2, f3 */ // 0x808DC934
    /* fmuls f1, f1, f2 */ // 0x808DC938
    /* fdivs f4, f1, f0 */ // 0x808DC93C
    /* b 0x808dca3c */ // 0x808DC940
    if (>=) goto 0x0x808dc964;
    /* xoris r4, r9, 0x8000 */ // 0x808DC94C
    *(0x8c + r1) = r4; // stw @ 0x808DC950
    /* lfd f1, 0x10(r6) */ // 0x808DC954
    /* lfd f0, 0x88(r1) */ // 0x808DC958
    /* fsubs f0, f0, f1 */ // 0x808DC95C
    /* b 0x808dc9dc */ // 0x808DC960
    r8 = *(0x11c + r3); // lwz @ 0x808DC964
    r10 = r0 + r8; // 0x808DC968
    if (>=) goto 0x0x808dc990;
    /* subf r4, r0, r9 */ // 0x808DC974
    /* lfd f1, 0x10(r6) */ // 0x808DC978
    /* xoris r4, r4, 0x8000 */ // 0x808DC97C
    *(0x84 + r1) = r4; // stw @ 0x808DC980
    /* lfd f0, 0x80(r1) */ // 0x808DC984
    /* fsubs f0, f0, f1 */ // 0x808DC988
    /* b 0x808dc9dc */ // 0x808DC98C
    /* slwi r5, r0, 1 */ // 0x808DC990
    r4 = r5 + r8; // 0x808DC994
    if (>=) goto 0x0x808dc9bc;
    /* subf r4, r10, r9 */ // 0x808DC9A0
    /* lfd f1, 0x10(r6) */ // 0x808DC9A4
    /* xoris r4, r4, 0x8000 */ // 0x808DC9A8
    *(0x8c + r1) = r4; // stw @ 0x808DC9AC
    /* lfd f0, 0x88(r1) */ // 0x808DC9B0
    /* fsubs f0, f0, f1 */ // 0x808DC9B4
    /* b 0x808dc9dc */ // 0x808DC9B8
    /* neg r4, r5 */ // 0x808DC9BC
    /* lfd f1, 0x10(r6) */ // 0x808DC9C0
    /* subf r4, r8, r4 */ // 0x808DC9C4
    r4 = r4 + r9; // 0x808DC9C8
    /* xoris r4, r4, 0x8000 */ // 0x808DC9CC
    *(0x84 + r1) = r4; // stw @ 0x808DC9D0
    /* lfd f0, 0x80(r1) */ // 0x808DC9D4
    /* fsubs f0, f0, f1 */ // 0x808DC9D8
    /* fctiwz f0, f0 */ // 0x808DC9DC
    r4 = *(0x110 + r3); // lbz @ 0x808DC9E0
    /* li r5, 1 */ // 0x808DC9E4
    /* stfd f0, 0x90(r1) */ // 0x808DC9E8
    r4 = *(0x94 + r1); // lwz @ 0x808DC9F0
    if (==) goto 0x0x808dc9fc;
    /* li r5, -1 */ // 0x808DC9F8
    /* subf r4, r4, r0 */ // 0x808DC9FC
    /* xoris r0, r0, 0x8000 */ // 0x808DCA00
    r4 = r5 * r4; // 0x808DCA04
    *(0x84 + r1) = r0; // stw @ 0x808DCA08
    /* lfd f3, 0x10(r6) */ // 0x808DCA0C
    /* lfd f0, 0x80(r1) */ // 0x808DCA10
    /* lfs f1, 0x114(r3) */ // 0x808DCA14
    /* fsubs f0, f0, f3 */ // 0x808DCA18
    /* xoris r0, r4, 0x8000 */ // 0x808DCA1C
    *(0x8c + r1) = r0; // stw @ 0x808DCA20
    /* lfd f2, 0x88(r1) */ // 0x808DCA24
    /* fsubs f2, f2, f3 */ // 0x808DCA28
    /* fmuls f1, f1, f2 */ // 0x808DCA2C
    /* fdivs f4, f1, f0 */ // 0x808DCA30
    /* b 0x808dca3c */ // 0x808DCA34
    /* lfs f4, 0(r6) */ // 0x808DCA38
    /* lfs f0, 0x18(r6) */ // 0x808DCA3C
    /* .byte 0xfc, 0x04, 0x00, 0x40 */ // 0x808DCA40
    if (>=) goto 0x0x808dca50;
    /* fmr f4, f0 */ // 0x808DCA48
    /* b 0x808dca60 */ // 0x808DCA4C
    /* lfs f0, 0x1c(r6) */ // 0x808DCA50
    /* .byte 0xfc, 0x04, 0x00, 0x40 */ // 0x808DCA54
    if (<=) goto 0x0x808dca60;
    /* fmr f4, f0 */ // 0x808DCA5C
    /* fabs f2, f4 */ // 0x808DCA60
    /* lfs f3, 0x20(r6) */ // 0x808DCA64
    /* lfs f1, 0x1c(r6) */ // 0x808DCA68
    /* lfs f0, 0(r6) */ // 0x808DCA6C
    /* fmuls f2, f3, f2 */ // 0x808DCA70
    /* fdivs f1, f2, f1 */ // 0x808DCA74
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x808DCA78
    if (>=) goto 0x0x808dca84;
    /* b 0x808dca88 */ // 0x808DCA80
    /* .byte 0xfc, 0x01, 0x18, 0x40 */ // 0x808DCA84
    /* lfs f1, 0x24(r6) */ // 0x808DCA88
    /* lfs f0, 0x28(r6) */ // 0x808DCA90
    /* fmuls f1, f1, f4 */ // 0x808DCA98
    r5 = r7 + 0x30; // 0x808DCA9C
    /* fdivs f0, f1, f0 */ // 0x808DCAA0
    /* stfs f0, 0x1c(r1) */ // 0x808DCAA4
    FUN_805E3430(r4, r5); // bl 0x805E3430
}