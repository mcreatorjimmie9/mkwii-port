/* Function at 0x805AFDDC, size=1356 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805AFDDC(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r6, 0x4330 */ // 0x805AFDE4
    /* lis r31, 0 */ // 0x805AFDF0
    r31 = r31 + 0; // 0x805AFDF4
    *(0x28 + r1) = r30; // stw @ 0x805AFDF8
    r30 = r5;
    *(0x24 + r1) = r29; // stw @ 0x805AFE00
    r29 = r4;
    *(0x20 + r1) = r28; // stw @ 0x805AFE08
    r28 = r3;
    r0 = *(0x14 + r4); // lbz @ 0x805AFE10
    *(8 + r1) = r6; // stw @ 0x805AFE14
    r0 = r0 rlwinm 0; // rlwinm
    *(0x14 + r4) = r0; // stb @ 0x805AFE1C
    r0 = *(0x30 + r5); // lbz @ 0x805AFE20
    *(0x10 + r1) = r6; // stw @ 0x805AFE24
    r0 = r0 rlwinm 0; // rlwinm
    *(0x30 + r5) = r0; // stb @ 0x805AFE2C
    r0 = *(0x9c + r3); // lwz @ 0x805AFE30
    if (>) goto 0x0x805b0300;
    /* lis r3, 0 */ // 0x805AFE3C
    /* clrlwi r4, r0, 0x18 */ // 0x805AFE40
    r3 = *(0 + r3); // lwz @ 0x805AFE44
    r5 = r28 + 0x90; // 0x805AFE48
    FUN_805B4254(r3, r5); // bl 0x805B4254
    r4 = *(0x50 + r28); // lbz @ 0x805AFE50
    r0 = r4;
    if (!=) goto 0x0x805afe6c;
    if (!=) goto 0x0x805afe6c;
    /* li r0, 1 */ // 0x805AFE68
    if (==) goto 0x0x805b02fc;
    if (!=) goto 0x0x805b02f0;
    r4 = *(0x96 + r28); // lbz @ 0x805AFE7C
    if (<) goto 0x0x805afe94;
    r4 = *(0x90 + r28); // lhz @ 0x805AFE88
    r4 = r4 | 0x40; // 0x805AFE8C
    *(0x90 + r28) = r4; // sth @ 0x805AFE90
    r4 = *(0x97 + r28); // lbz @ 0x805AFE94
    if (<) goto 0x0x805afeac;
    r4 = *(0x90 + r28); // lhz @ 0x805AFEA0
    r4 = r4 | 0x20; // 0x805AFEA4
    *(0x90 + r28) = r4; // sth @ 0x805AFEA8
    r5 = *(0x90 + r28); // lhz @ 0x805AFEAC
    /* li r8, 0 */ // 0x805AFEB0
    r4 = *(0xa8 + r28); // lhz @ 0x805AFEB4
    /* rlwinm. r6, r5, 0, 0x17, 0x17 */ // 0x805AFEB8
    /* andc r4, r5, r4 */ // 0x805AFEBC
    /* clrlwi r9, r4, 0x10 */ // 0x805AFEC0
    if (==) goto 0x0x805afecc;
    r8 = r8 | 1; // 0x805AFEC8
    /* andi. r7, r5, 0x220 */ // 0x805AFECC
    if (==) goto 0x0x805afedc;
    r4 = r8 | 2; // 0x805AFED4
    /* clrlwi r8, r4, 0x10 */ // 0x805AFED8
    /* rlwinm. r4, r5, 0, 0x19, 0x19 */ // 0x805AFEDC
    if (==) goto 0x0x805afeec;
    r4 = r8 | 4; // 0x805AFEE4
    /* clrlwi r8, r4, 0x10 */ // 0x805AFEE8
    if (==) goto 0x0x805aff24;
    if (==) goto 0x0x805aff24;
    /* andi. r4, r9, 0x220 */ // 0x805AFEFC
    if (==) goto 0x0x805aff0c;
    /* li r4, 1 */ // 0x805AFF04
    *(0xaa + r28) = r4; // stb @ 0x805AFF08
    r4 = *(0xaa + r28); // lbz @ 0x805AFF0C
    if (==) goto 0x0x805aff2c;
    r4 = r8 | 8; // 0x805AFF18
    /* clrlwi r8, r4, 0x10 */ // 0x805AFF1C
    /* b 0x805aff2c */ // 0x805AFF20
    /* li r4, 0 */ // 0x805AFF24
    *(0xaa + r28) = r4; // stb @ 0x805AFF28
    r4 = *(0x90 + r28); // lhz @ 0x805AFF2C
    /* andi. r4, r4, 0x410 */ // 0x805AFF30
    if (==) goto 0x0x805aff40;
    r4 = r8 | 0x20; // 0x805AFF38
    /* clrlwi r8, r4, 0x10 */ // 0x805AFF3C
    *(4 + r29) = r8; // sth @ 0x805AFF40
    /* rlwinm. r4, r9, 0, 0x1c, 0x1c */ // 0x805AFF44
    r4 = *(0x90 + r28); // lhz @ 0x805AFF48
    *(6 + r29) = r4; // sth @ 0x805AFF4C
    if (==) goto 0x0x805aff98;
    /* li r5, 1 */ // 0x805AFF54
    *(0x13 + r29) = r5; // stb @ 0x805AFF58
    /* lis r4, 0 */ // 0x805AFF5C
    r4 = *(0 + r4); // lwz @ 0x805AFF60
    r4 = *(0x4155 + r4); // lbz @ 0x805AFF64
    if (==) goto 0x0x805aff90;
    if (==) goto 0x0x805aff84;
    if (==) goto 0x0x805aff8c;
    /* b 0x805aff90 */ // 0x805AFF80
    /* li r5, 4 */ // 0x805AFF84
    /* b 0x805aff90 */ // 0x805AFF88
    /* li r5, 3 */ // 0x805AFF8C
    *(0x12 + r29) = r5; // stb @ 0x805AFF90
    /* b 0x805b0078 */ // 0x805AFF94
    /* rlwinm. r4, r9, 0, 0x1d, 0x1d */ // 0x805AFF98
    if (==) goto 0x0x805affe4;
    /* li r5, 2 */ // 0x805AFFA0
    *(0x13 + r29) = r5; // stb @ 0x805AFFA4
    /* lis r4, 0 */ // 0x805AFFA8
    r4 = *(0 + r4); // lwz @ 0x805AFFAC
    r4 = *(0x4155 + r4); // lbz @ 0x805AFFB0
    if (==) goto 0x0x805affdc;
    if (==) goto 0x0x805affd0;
    if (==) goto 0x0x805affd8;
    /* b 0x805affdc */ // 0x805AFFCC
    /* li r5, 4 */ // 0x805AFFD0
    /* b 0x805affdc */ // 0x805AFFD4
    /* li r5, 3 */ // 0x805AFFD8
    *(0x12 + r29) = r5; // stb @ 0x805AFFDC
    /* b 0x805b0078 */ // 0x805AFFE0
    /* rlwinm. r4, r9, 0, 0x1e, 0x1e */ // 0x805AFFE4
    if (==) goto 0x0x805b0030;
    /* li r5, 4 */ // 0x805AFFEC
    *(0x13 + r29) = r5; // stb @ 0x805AFFF0
    /* lis r4, 0 */ // 0x805AFFF4
    r4 = *(0 + r4); // lwz @ 0x805AFFF8
    r4 = *(0x4155 + r4); // lbz @ 0x805AFFFC
    if (==) goto 0x0x805b0028;
    if (==) goto 0x0x805b001c;
    if (==) goto 0x0x805b0024;
    /* b 0x805b0028 */ // 0x805B0018
    /* li r5, 4 */ // 0x805B001C
    /* b 0x805b0028 */ // 0x805B0020
    /* li r5, 3 */ // 0x805B0024
    *(0x12 + r29) = r5; // stb @ 0x805B0028
    /* b 0x805b0078 */ // 0x805B002C
    /* clrlwi. r4, r9, 0x1f */ // 0x805B0030
    if (==) goto 0x0x805b0078;
    /* li r5, 3 */ // 0x805B0038
    *(0x13 + r29) = r5; // stb @ 0x805B003C
    /* lis r4, 0 */ // 0x805B0040
    r4 = *(0 + r4); // lwz @ 0x805B0044
    r4 = *(0x4155 + r4); // lbz @ 0x805B0048
    if (==) goto 0x0x805b0074;
    if (==) goto 0x0x805b0068;
    if (==) goto 0x0x805b0070;
    /* b 0x805b0074 */ // 0x805B0064
    /* li r5, 4 */ // 0x805B0068
    /* b 0x805b0074 */ // 0x805B006C
    /* li r5, 3 */ // 0x805B0070
    *(0x12 + r29) = r5; // stb @ 0x805B0074
    r6 = *(0x92 + r28); // lbz @ 0x805B0078
    /* lis r5, 0 */ // 0x805B007C
    /* lfd f3, 0x30(r31) */ // 0x805B0080
    /* lis r4, 0 */ // 0x805B0084
    /* extsb r6, r6 */ // 0x805B0088
    /* lfs f1, 0x38(r31) */ // 0x805B008C
    /* xoris r6, r6, 0x8000 */ // 0x805B0090
    *(0xc + r1) = r6; // stw @ 0x805B0094
    /* lfs f0, 0(r5) */ // 0x805B0098
    /* lfd f2, 8(r1) */ // 0x805B009C
    /* fsubs f2, f2, f3 */ // 0x805B00A0
    /* fadds f1, f1, f2 */ // 0x805B00A4
    /* fmuls f0, f0, f1 */ // 0x805B00A8
    /* fctiwz f0, f0 */ // 0x805B00AC
    /* stfd f0, 0x18(r1) */ // 0x805B00B0
    r5 = *(0x1c + r1); // lwz @ 0x805B00B4
    *(0x10 + r29) = r5; // stb @ 0x805B00B8
    r4 = *(0 + r4); // lwz @ 0x805B00BC
    r4 = *(0x4155 + r4); // lbz @ 0x805B00C0
    if (==) goto 0x0x805b00f4;
    /* clrlwi r4, r5, 0x18 */ // 0x805B00CC
    *(0x14 + r1) = r4; // stw @ 0x805B00D0
    /* lfd f2, 0x20(r31) */ // 0x805B00D4
    /* lfd f0, 0x10(r1) */ // 0x805B00D8
    /* lfs f1, 0x18(r31) */ // 0x805B00DC
    /* fsubs f0, f0, f2 */ // 0x805B00E0
    /* fsubs f0, f0, f1 */ // 0x805B00E4
    /* fdivs f0, f0, f1 */ // 0x805B00E8
    /* fneg f0, f0 */ // 0x805B00EC
    /* b 0x805b0114 */ // 0x805B00F0
    /* clrlwi r4, r5, 0x18 */ // 0x805B00F4
    *(0xc + r1) = r4; // stw @ 0x805B00F8
    /* lfd f2, 0x20(r31) */ // 0x805B00FC
    /* lfd f0, 8(r1) */ // 0x805B0100
    /* lfs f1, 0x18(r31) */ // 0x805B0104
    /* fsubs f0, f0, f2 */ // 0x805B0108
    /* fsubs f0, f0, f1 */ // 0x805B010C
    /* fdivs f0, f0, f1 */ // 0x805B0110
    /* stfs f0, 8(r29) */ // 0x805B0114
    /* lis r5, 0 */ // 0x805B0118
    /* lfs f0, 0(r5) */ // 0x805B011C
    /* li r4, 0 */ // 0x805B0120
    r6 = *(0x93 + r28); // lbz @ 0x805B0124
    /* lfd f6, 0x30(r31) */ // 0x805B0128
    /* extsb r6, r6 */ // 0x805B012C
    /* lfs f4, 0x38(r31) */ // 0x805B0130
    /* xoris r5, r6, 0x8000 */ // 0x805B0134
    *(0x14 + r1) = r5; // stw @ 0x805B0138
    /* lfd f3, 0x20(r31) */ // 0x805B013C
    /* lfd f2, 0x10(r1) */ // 0x805B0140
    /* lfs f1, 0x18(r31) */ // 0x805B0144
    /* fsubs f5, f2, f6 */ // 0x805B0148
    /* lfs f2, 0x3c(r31) */ // 0x805B014C
    /* fadds f4, f4, f5 */ // 0x805B0150
    /* fmuls f0, f0, f4 */ // 0x805B0154
    /* fctiwz f0, f0 */ // 0x805B0158
    /* stfd f0, 0x18(r1) */ // 0x805B015C
    r5 = *(0x1c + r1); // lwz @ 0x805B0160
    *(0x11 + r29) = r5; // stb @ 0x805B0164
    /* clrlwi r5, r5, 0x18 */ // 0x805B0168
    *(0xc + r1) = r5; // stw @ 0x805B016C
    /* lfd f0, 8(r1) */ // 0x805B0170
    /* fsubs f0, f0, f3 */ // 0x805B0174
    /* fsubs f0, f0, f1 */ // 0x805B0178
    /* fdivs f0, f0, f1 */ // 0x805B017C
    /* stfs f0, 0xc(r29) */ // 0x805B0180
    r6 = *(0x94 + r28); // lbz @ 0x805B0184
    r5 = *(0x95 + r28); // lbz @ 0x805B0188
    /* extsb r6, r6 */ // 0x805B018C
    /* extsb r5, r5 */ // 0x805B0190
    /* xoris r6, r6, 0x8000 */ // 0x805B0194
    *(0x14 + r1) = r6; // stw @ 0x805B0198
    /* xoris r5, r5, 0x8000 */ // 0x805B019C
    *(0xc + r1) = r5; // stw @ 0x805B01A0
    /* lfd f1, 0x10(r1) */ // 0x805B01A4
    /* lfd f0, 8(r1) */ // 0x805B01A8
    /* fsubs f1, f1, f6 */ // 0x805B01AC
    /* fsubs f0, f0, f6 */ // 0x805B01B0
    /* fdivs f1, f1, f2 */ // 0x805B01B4
    /* stfs f1, 0xa0(r28) */ // 0x805B01B8
    /* fdivs f0, f0, f2 */ // 0x805B01BC
    /* stfs f0, 0xa4(r28) */ // 0x805B01C0
    r5 = *(0x14 + r29); // lbz @ 0x805B01C4
    r5 = r5 | 0x80; // 0x805B01C8
    *(0x14 + r29) = r5; // stb @ 0x805B01CC
    r6 = *(0x90 + r28); // lhz @ 0x805B01D0
    /* rlwinm. r5, r6, 0, 0x17, 0x17 */ // 0x805B01D4
    if (==) goto 0x0x805b01e0;
    r4 = r4 | 1; // 0x805B01DC
    /* rlwinm. r5, r6, 0, 0x16, 0x16 */ // 0x805B01E0
    if (==) goto 0x0x805b01f0;
    r4 = r4 | 2; // 0x805B01E8
    /* clrlwi r4, r4, 0x10 */ // 0x805B01EC
    /* rlwinm. r5, r6, 0, 0x13, 0x13 */ // 0x805B01F0
    if (==) goto 0x0x805b0200;
    r4 = r4 | 4; // 0x805B01F8
    /* clrlwi r4, r4, 0x10 */ // 0x805B01FC
    /* rlwinm. r5, r6, 0, 0x1c, 0x1c */ // 0x805B0200
    if (==) goto 0x0x805b0210;
    r4 = r4 | 8; // 0x805B0208
    /* clrlwi r4, r4, 0x10 */ // 0x805B020C
    /* rlwinm. r5, r6, 0, 0x1d, 0x1d */ // 0x805B0210
    if (==) goto 0x0x805b0220;
    r4 = r4 | 0x10; // 0x805B0218
    /* clrlwi r4, r4, 0x10 */ // 0x805B021C
    /* clrlwi. r5, r6, 0x1f */ // 0x805B0220
    if (==) goto 0x0x805b0230;
    r4 = r4 | 0x20; // 0x805B0228
    /* clrlwi r4, r4, 0x10 */ // 0x805B022C
    /* rlwinm. r5, r6, 0, 0x1e, 0x1e */ // 0x805B0230
    if (==) goto 0x0x805b0240;
    r4 = r4 | 0x40; // 0x805B0238
    /* clrlwi r4, r4, 0x10 */ // 0x805B023C
    /* andi. r5, r6, 0x410 */ // 0x805B0240
    if (==) goto 0x0x805b0250;
    r4 = r4 | 0x100; // 0x805B0248
    /* clrlwi r4, r4, 0x10 */ // 0x805B024C
    *(4 + r30) = r4; // sth @ 0x805B0250
    /* lis r4, 0 */ // 0x805B0254
    r5 = *(6 + r29); // lhz @ 0x805B0258
    *(6 + r30) = r5; // sth @ 0x805B025C
    r5 = *(0x10 + r29); // lbz @ 0x805B0260
    *(0x18 + r30) = r5; // stb @ 0x805B0264
    r4 = *(0 + r4); // lwz @ 0x805B0268
    r4 = *(0x4155 + r4); // lbz @ 0x805B026C
    if (==) goto 0x0x805b029c;
    *(0x14 + r1) = r5; // stw @ 0x805B0278
    /* lfd f2, 0x20(r31) */ // 0x805B027C
    /* lfd f0, 0x10(r1) */ // 0x805B0280
    /* lfs f1, 0x18(r31) */ // 0x805B0284
    /* fsubs f0, f0, f2 */ // 0x805B0288
    /* fsubs f0, f0, f1 */ // 0x805B028C
    /* fdivs f0, f0, f1 */ // 0x805B0290
    /* fneg f0, f0 */ // 0x805B0294
    /* b 0x805b02b8 */ // 0x805B0298
    *(0xc + r1) = r5; // stw @ 0x805B029C
    /* lfd f2, 0x20(r31) */ // 0x805B02A0
    /* lfd f0, 8(r1) */ // 0x805B02A4
    /* lfs f1, 0x18(r31) */ // 0x805B02A8
    /* fsubs f0, f0, f2 */ // 0x805B02AC
    /* fsubs f0, f0, f1 */ // 0x805B02B0
    /* fdivs f0, f0, f1 */ // 0x805B02B4
    /* stfs f0, 8(r30) */ // 0x805B02B8
    r4 = *(0x30 + r30); // lbz @ 0x805B02BC
    r5 = *(0x11 + r29); // lbz @ 0x805B02C0
    *(0x14 + r1) = r5; // stw @ 0x805B02C4
    r4 = r4 | 0x80; // 0x805B02C8
    /* lfd f2, 0x20(r31) */ // 0x805B02CC
    /* lfd f0, 0x10(r1) */ // 0x805B02D0
    /* lfs f1, 0x18(r31) */ // 0x805B02D4
    /* fsubs f0, f0, f2 */ // 0x805B02D8
    *(0x19 + r30) = r5; // stb @ 0x805B02DC
    *(0x30 + r30) = r4; // stb @ 0x805B02E0
    /* fsubs f0, f0, f1 */ // 0x805B02E4
    /* fdivs f0, f0, f1 */ // 0x805B02E8
    /* stfs f0, 0xc(r30) */ // 0x805B02EC
    if (!=) goto 0x0x805b02fc;
    /* li r0, 0 */ // 0x805B02F8
    *(0x50 + r28) = r0; // stb @ 0x805B02FC
    r0 = *(6 + r29); // lhz @ 0x805B0300
    *(0xa8 + r28) = r0; // sth @ 0x805B0304
    r31 = *(0x2c + r1); // lwz @ 0x805B0308
    r30 = *(0x28 + r1); // lwz @ 0x805B030C
    r29 = *(0x24 + r1); // lwz @ 0x805B0310
    r28 = *(0x20 + r1); // lwz @ 0x805B0314
    r0 = *(0x34 + r1); // lwz @ 0x805B0318
    return;
}