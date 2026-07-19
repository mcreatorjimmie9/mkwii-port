/* Function at 0x8074CFA0, size=756 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 16 function(s) */

int FUN_8074CFA0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x8074CFA8
    /* lis r31, 0 */ // 0x8074CFB4
    r31 = r31 + 0; // 0x8074CFB8
    *(0x28 + r1) = r30; // stw @ 0x8074CFBC
    r30 = r3;
    *(0x24 + r1) = r29; // stw @ 0x8074CFC4
    r4 = *(0 + r4); // lwz @ 0x8074CFC8
    r5 = *(0xb0 + r3); // lwz @ 0x8074CFCC
    r0 = *(0x20 + r4); // lwz @ 0x8074CFD0
    r6 = r5 + -0x3c; // 0x8074CFD4
    if (>=) goto 0x0x8074d044;
    r3 = *(8 + r3); // lwz @ 0x8074CFE0
    /* li r4, 3 */ // 0x8074CFE4
    /* lfs f1, 0(r31) */ // 0x8074CFE8
    /* li r5, 1 */ // 0x8074CFEC
    r3 = *(0x28 + r3); // lwz @ 0x8074CFF0
    /* lfs f2, 0x60(r31) */ // 0x8074CFF4
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    r3 = *(8 + r30); // lwz @ 0x8074CFFC
    /* li r4, 0 */ // 0x8074D000
    r3 = *(0x28 + r3); // lwz @ 0x8074D004
    FUN_805E7060(r4); // bl 0x805E7060
    r0 = *(8 + r3); // lhz @ 0x8074D00C
    if (==) goto 0x0x8074d158;
    r0 = *(0x120 + r30); // lwz @ 0x8074D018
    if (!=) goto 0x0x8074d158;
    r3 = *(8 + r30); // lwz @ 0x8074D024
    /* li r4, 3 */ // 0x8074D028
    /* lfs f1, 0(r31) */ // 0x8074D02C
    /* li r5, 1 */ // 0x8074D030
    r3 = *(0x28 + r3); // lwz @ 0x8074D034
    /* lfs f2, 0x60(r31) */ // 0x8074D038
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    /* b 0x8074d158 */ // 0x8074D040
    if (<) goto 0x0x8074d0b4;
    if (>=) goto 0x0x8074d0b4;
    r3 = *(8 + r3); // lwz @ 0x8074D050
    /* li r4, 4 */ // 0x8074D054
    /* lfs f1, 0(r31) */ // 0x8074D058
    /* li r5, 1 */ // 0x8074D05C
    r3 = *(0x28 + r3); // lwz @ 0x8074D060
    /* lfs f2, 0x60(r31) */ // 0x8074D064
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    r3 = *(8 + r30); // lwz @ 0x8074D06C
    /* li r4, 0 */ // 0x8074D070
    r3 = *(0x28 + r3); // lwz @ 0x8074D074
    FUN_805E7060(r4); // bl 0x805E7060
    r0 = *(8 + r3); // lhz @ 0x8074D07C
    if (==) goto 0x0x8074d158;
    r0 = *(0x120 + r30); // lwz @ 0x8074D088
    if (!=) goto 0x0x8074d158;
    r3 = *(8 + r30); // lwz @ 0x8074D094
    /* li r4, 4 */ // 0x8074D098
    /* lfs f1, 0(r31) */ // 0x8074D09C
    /* li r5, 1 */ // 0x8074D0A0
    r3 = *(0x28 + r3); // lwz @ 0x8074D0A4
    /* lfs f2, 0x60(r31) */ // 0x8074D0A8
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    /* b 0x8074d158 */ // 0x8074D0B0
    r0 = *(0x130 + r3); // lwz @ 0x8074D0B4
    if (<) goto 0x0x8074d110;
    /* li r5, -1 */ // 0x8074D0C0
    /* li r6, 0 */ // 0x8074D0C4
    *(0x12c + r3) = r0; // sth @ 0x8074D0C8
    r0 = r0 rlwinm 1; // rlwinm
    r4 = *(0x13c + r3); // lwz @ 0x8074D0D0
    *(0x130 + r3) = r5; // stw @ 0x8074D0D4
    r5 = *(0x140 + r3); // lwz @ 0x8074D0D8
    *(0x134 + r3) = r6; // stw @ 0x8074D0DC
    /* lhzx r0, r4, r0 */ // 0x8074D0E0
    /* mulli r0, r0, 0x1c */ // 0x8074D0E4
    r29 = r5 + r0; // 0x8074D0E8
    r3 = r29 + 4; // 0x8074D0EC
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x8074d138;
    r3 = *(0x144 + r30); // lwz @ 0x8074D0FC
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x8074d138 */ // 0x8074D10C
    r4 = *(0x134 + r3); // lwz @ 0x8074D110
    r0 = *(0x12c + r3); // lhz @ 0x8074D114
    r4 = r4 + 1; // 0x8074D118
    *(0x134 + r3) = r4; // stw @ 0x8074D11C
    r4 = *(0x13c + r3); // lwz @ 0x8074D120
    /* slwi r0, r0, 1 */ // 0x8074D124
    r3 = *(0x140 + r3); // lwz @ 0x8074D128
    /* lhzx r0, r4, r0 */ // 0x8074D12C
    /* mulli r0, r0, 0x1c */ // 0x8074D130
    r29 = r3 + r0; // 0x8074D134
    r3 = r29 + 0x10; // 0x8074D138
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x8074d158;
    r3 = *(0x144 + r30); // lwz @ 0x8074D148
    FUN_805E3430(); // bl 0x805E3430
    r3 = r30;
    FUN_8074C2F0(r3); // bl 0x8074C2F0
    r12 = *(0 + r30); // lwz @ 0x8074D160
    r3 = r30;
    r12 = *(0xf0 + r12); // lwz @ 0x8074D168
    /* mtctr r12 */ // 0x8074D16C
    /* bctrl  */ // 0x8074D170
    /* lfs f3, 0xb4(r30) */ // 0x8074D174
    /* lfs f2, 0xb8(r30) */ // 0x8074D17C
    r4 = r30 + 0xb4; // 0x8074D180
    /* lfs f0, 0xbc(r30) */ // 0x8074D184
    r5 = r30 + 0x104; // 0x8074D188
    /* lfs f1, 0x11c(r30) */ // 0x8074D18C
    /* stfs f3, 0xc0(r30) */ // 0x8074D190
    /* stfs f2, 0xc4(r30) */ // 0x8074D194
    /* stfs f0, 0xc8(r30) */ // 0x8074D198
    FUN_8074CB64(r5); // bl 0x8074CB64
    /* lfs f0, 0x14(r1) */ // 0x8074D1A0
    /* stfs f0, 0xb4(r30) */ // 0x8074D1A4
    /* fmuls f2, f0, f0 */ // 0x8074D1A8
    /* lfs f0, 0x64(r31) */ // 0x8074D1AC
    /* lfs f1, 0x18(r1) */ // 0x8074D1B0
    /* stfs f1, 0xb8(r30) */ // 0x8074D1B4
    /* fmuls f1, f1, f1 */ // 0x8074D1B8
    /* lfs f3, 0x1c(r1) */ // 0x8074D1BC
    /* stfs f3, 0xbc(r30) */ // 0x8074D1C0
    /* fmuls f3, f3, f3 */ // 0x8074D1C4
    /* fadds f1, f2, f1 */ // 0x8074D1C8
    /* fadds f1, f3, f1 */ // 0x8074D1CC
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8074D1D0
    /* cror cr0eq, cr0lt, cr0eq */ // 0x8074D1D4
    /* mfcr r0 */ // 0x8074D1D8
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x8074D1DC
    if (==) goto 0x0x8074d1fc;
    /* lfs f1, 0(r31) */ // 0x8074D1E4
    /* lfs f0, 0x60(r31) */ // 0x8074D1E8
    /* stfs f1, 0xb4(r30) */ // 0x8074D1EC
    /* stfs f1, 0xb8(r30) */ // 0x8074D1F0
    /* stfs f0, 0xbc(r30) */ // 0x8074D1F4
    /* b 0x8074d204 */ // 0x8074D1F8
    r3 = r30 + 0xb4; // 0x8074D1FC
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r4, 0 */ // 0x8074D204
    /* lfs f1, 0(r4) */ // 0x8074D20C
    r4 = r30 + 0xcc; // 0x8074D210
    r5 = r30 + 0xec; // 0x8074D214
    FUN_8074CB64(r4, r3, r4, r5); // bl 0x8074CB64
    /* lfs f0, 8(r1) */ // 0x8074D21C
    /* stfs f0, 0xcc(r30) */ // 0x8074D220
    /* fmuls f2, f0, f0 */ // 0x8074D224
    /* lfs f0, 0x64(r31) */ // 0x8074D228
    /* lfs f1, 0xc(r1) */ // 0x8074D22C
    /* stfs f1, 0xd0(r30) */ // 0x8074D230
    /* fmuls f1, f1, f1 */ // 0x8074D234
    /* lfs f3, 0x10(r1) */ // 0x8074D238
    /* stfs f3, 0xd4(r30) */ // 0x8074D23C
    /* fmuls f3, f3, f3 */ // 0x8074D240
    /* fadds f1, f2, f1 */ // 0x8074D244
    /* fadds f1, f3, f1 */ // 0x8074D248
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8074D24C
    /* cror cr0eq, cr0lt, cr0eq */ // 0x8074D250
    /* mfcr r0 */ // 0x8074D254
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x8074D258
    if (==) goto 0x0x8074d278;
    /* lfs f1, 0(r31) */ // 0x8074D260
    /* lfs f0, 0x60(r31) */ // 0x8074D264
    /* stfs f1, 0xcc(r30) */ // 0x8074D268
    /* stfs f0, 0xd0(r30) */ // 0x8074D26C
    /* stfs f1, 0xd4(r30) */ // 0x8074D270
    /* b 0x8074d280 */ // 0x8074D274
    r3 = r30 + 0xcc; // 0x8074D278
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r4 = r30 + 0xcc; // 0x8074D284
    r5 = r30 + 0xb4; // 0x8074D288
    FUN_808A1E9C(r3, r3, r4, r5); // bl 0x808A1E9C
    r3 = *(0x120 + r30); // lwz @ 0x8074D290
}