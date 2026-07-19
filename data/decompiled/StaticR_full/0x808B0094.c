/* Function at 0x808B0094, size=1020 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_808B0094(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -144(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r6;
    r30 = r5;
    *(0x84 + r1) = r29; // stw @ 0x808B00B0
    r29 = r4;
    *(0x80 + r1) = r28; // stw @ 0x808B00B8
    r28 = r3;
    r12 = *(0 + r3); // lwz @ 0x808B00C0
    r12 = *(0x18 + r12); // lwz @ 0x808B00C4
    /* mtctr r12 */ // 0x808B00C8
    /* bctrl  */ // 0x808B00CC
    /* lfs f8, 4(r30) */ // 0x808B00D0
    /* lis r3, 0 */ // 0x808B00D4
    /* lfs f2, 0x48(r28) */ // 0x808B00D8
    /* li r0, 1 */ // 0x808B00DC
    /* lfs f9, 0(r30) */ // 0x808B00E0
    /* lfs f0, 0x44(r28) */ // 0x808B00E4
    /* fmuls f2, f2, f8 */ // 0x808B00E8
    /* lfs f7, 8(r30) */ // 0x808B00EC
    /* fmuls f3, f0, f9 */ // 0x808B00F0
    /* lfs f5, 0x4c(r28) */ // 0x808B00F4
    /* fsubs f4, f2, f1 */ // 0x808B00F8
    /* lfs f0, 0(r3) */ // 0x808B00FC
    /* fmuls f6, f5, f7 */ // 0x808B0100
    /* lfs f2, 0x50(r28) */ // 0x808B0104
    /* fsubs f3, f3, f1 */ // 0x808B0108
    /* stfs f9, 0x5c(r28) */ // 0x808B010C
    /* fmuls f5, f0, f4 */ // 0x808B0110
    /* lfs f4, 0x54(r28) */ // 0x808B0114
    /* stfs f8, 0x60(r28) */ // 0x808B0118
    /* fsubs f6, f6, f1 */ // 0x808B011C
    /* fadds f10, f2, f3 */ // 0x808B0120
    /* lfs f3, 0x58(r28) */ // 0x808B0124
    /* fadds f2, f4, f5 */ // 0x808B0128
    /* stfs f7, 0x64(r28) */ // 0x808B012C
    r3 = *(0x24 + r28); // lwz @ 0x808B0130
    /* fadds f3, f3, f6 */ // 0x808B0134
    /* stfs f10, 0(r3) */ // 0x808B0138
    /* stfs f2, 4(r3) */ // 0x808B013C
    /* stfs f3, 8(r3) */ // 0x808B0140
    /* lfs f7, 0x48(r28) */ // 0x808B0144
    /* lfs f6, 0x60(r28) */ // 0x808B0148
    /* lfs f5, 0x44(r28) */ // 0x808B014C
    /* lfs f4, 0x5c(r28) */ // 0x808B0150
    /* fmuls f6, f7, f6 */ // 0x808B0154
    /* lfs f9, 0x4c(r28) */ // 0x808B0158
    /* fmuls f5, f5, f4 */ // 0x808B015C
    /* lfs f8, 0x64(r28) */ // 0x808B0160
    /* fsubs f7, f6, f1 */ // 0x808B0164
    /* lfs f4, 0x50(r28) */ // 0x808B0168
    /* fmuls f6, f9, f8 */ // 0x808B016C
    *(0x20 + r28) = r0; // stb @ 0x808B0170
    /* fsubs f5, f5, f1 */ // 0x808B0174
    /* lfs f8, 0x58(r28) */ // 0x808B0178
    /* fsubs f9, f6, f1 */ // 0x808B017C
    /* lfs f6, 0x54(r28) */ // 0x808B0180
    /* fmuls f7, f0, f7 */ // 0x808B0184
    /* stfs f10, 0x68(r1) */ // 0x808B0188
    /* fadds f11, f4, f5 */ // 0x808B018C
    r3 = *(0x24 + r28); // lwz @ 0x808B0190
    /* fadds f10, f6, f7 */ // 0x808B0194
    /* stfs f2, 0x6c(r1) */ // 0x808B0198
    /* fsubs f12, f8, f9 */ // 0x808B019C
    /* stfs f11, 0xc(r3) */ // 0x808B01A0
    /* stfs f10, 0x10(r3) */ // 0x808B01A4
    /* stfs f12, 0x14(r3) */ // 0x808B01A8
    /* lfs f5, 0x48(r28) */ // 0x808B01AC
    /* lfs f4, 0x60(r28) */ // 0x808B01B0
    /* lfs f8, 0x4c(r28) */ // 0x808B01B4
    /* fmuls f6, f5, f4 */ // 0x808B01B8
    /* lfs f7, 0x64(r28) */ // 0x808B01BC
    /* lfs f5, 0x44(r28) */ // 0x808B01C0
    /* fmuls f9, f8, f7 */ // 0x808B01C4
    /* lfs f4, 0x5c(r28) */ // 0x808B01C8
    /* fsubs f7, f6, f1 */ // 0x808B01CC
    /* fmuls f4, f5, f4 */ // 0x808B01D0
    /* lfs f8, 0x58(r28) */ // 0x808B01D4
    /* fsubs f9, f9, f1 */ // 0x808B01D8
    /* fmuls f7, f0, f7 */ // 0x808B01DC
    /* lfs f6, 0x54(r28) */ // 0x808B01E0
    /* fsubs f5, f4, f1 */ // 0x808B01E4
    /* lfs f4, 0x50(r28) */ // 0x808B01E8
    /* fadds f8, f8, f9 */ // 0x808B01EC
    /* fsubs f6, f6, f7 */ // 0x808B01F0
    /* fadds f2, f4, f5 */ // 0x808B01F4
    /* stfs f3, 0x70(r1) */ // 0x808B01F8
    r3 = *(0x24 + r28); // lwz @ 0x808B01FC
    /* stfs f11, 0x5c(r1) */ // 0x808B0200
    /* stfs f10, 0x60(r1) */ // 0x808B0204
    /* stfs f12, 0x64(r1) */ // 0x808B0208
    *(0x20 + r28) = r0; // stb @ 0x808B020C
    /* stfs f2, 0x50(r1) */ // 0x808B0210
    /* stfs f6, 0x54(r1) */ // 0x808B0214
    /* stfs f8, 0x58(r1) */ // 0x808B0218
    /* stfs f2, 0x18(r3) */ // 0x808B021C
    /* stfs f6, 0x1c(r3) */ // 0x808B0220
    /* stfs f8, 0x20(r3) */ // 0x808B0224
    /* lfs f5, 0x48(r28) */ // 0x808B0228
    /* lfs f4, 0x60(r28) */ // 0x808B022C
    /* lfs f3, 0x44(r28) */ // 0x808B0230
    /* lfs f2, 0x5c(r28) */ // 0x808B0234
    /* fmuls f4, f5, f4 */ // 0x808B0238
    /* lfs f7, 0x4c(r28) */ // 0x808B023C
    /* fmuls f3, f3, f2 */ // 0x808B0240
    /* lfs f6, 0x64(r28) */ // 0x808B0244
    /* fsubs f5, f4, f1 */ // 0x808B0248
    /* lfs f2, 0x50(r28) */ // 0x808B024C
    /* fmuls f4, f7, f6 */ // 0x808B0250
    *(0x20 + r28) = r0; // stb @ 0x808B0254
    /* fsubs f3, f3, f1 */ // 0x808B0258
    /* lfs f6, 0x58(r28) */ // 0x808B025C
    /* fsubs f7, f4, f1 */ // 0x808B0260
    /* lfs f4, 0x54(r28) */ // 0x808B0264
    /* fmuls f5, f0, f5 */ // 0x808B0268
    r3 = *(0x24 + r28); // lwz @ 0x808B026C
    /* fsubs f10, f2, f3 */ // 0x808B0270
    /* fadds f2, f4, f5 */ // 0x808B0274
    /* stfs f10, 0x24(r3) */ // 0x808B0278
    /* fadds f3, f6, f7 */ // 0x808B027C
    /* stfs f2, 0x28(r3) */ // 0x808B0280
    /* stfs f3, 0x2c(r3) */ // 0x808B0284
    /* lfs f7, 0x48(r28) */ // 0x808B0288
    /* lfs f6, 0x60(r28) */ // 0x808B028C
    /* lfs f5, 0x44(r28) */ // 0x808B0290
    /* lfs f4, 0x5c(r28) */ // 0x808B0294
    /* fmuls f6, f7, f6 */ // 0x808B0298
    /* lfs f9, 0x4c(r28) */ // 0x808B029C
    /* fmuls f5, f5, f4 */ // 0x808B02A0
    /* lfs f8, 0x64(r28) */ // 0x808B02A4
    /* fsubs f7, f6, f1 */ // 0x808B02A8
    /* lfs f4, 0x50(r28) */ // 0x808B02AC
    /* fmuls f6, f9, f8 */ // 0x808B02B0
    *(0x20 + r28) = r0; // stb @ 0x808B02B4
    /* fsubs f5, f5, f1 */ // 0x808B02B8
    /* lfs f8, 0x58(r28) */ // 0x808B02BC
    /* fsubs f9, f6, f1 */ // 0x808B02C0
    /* lfs f6, 0x54(r28) */ // 0x808B02C4
    /* fmuls f7, f0, f7 */ // 0x808B02C8
    /* stfs f10, 0x44(r1) */ // 0x808B02CC
    /* fadds f11, f4, f5 */ // 0x808B02D0
    r3 = *(0x24 + r28); // lwz @ 0x808B02D4
    /* fsubs f10, f6, f7 */ // 0x808B02D8
    /* stfs f2, 0x48(r1) */ // 0x808B02DC
    /* fsubs f12, f8, f9 */ // 0x808B02E0
    /* stfs f11, 0x30(r3) */ // 0x808B02E4
    /* stfs f10, 0x34(r3) */ // 0x808B02E8
    /* stfs f12, 0x38(r3) */ // 0x808B02EC
    /* lfs f5, 0x48(r28) */ // 0x808B02F0
    /* lfs f4, 0x60(r28) */ // 0x808B02F4
    /* lfs f8, 0x4c(r28) */ // 0x808B02F8
    /* fmuls f6, f5, f4 */ // 0x808B02FC
    /* lfs f7, 0x64(r28) */ // 0x808B0300
    /* lfs f5, 0x44(r28) */ // 0x808B0304
    /* fmuls f9, f8, f7 */ // 0x808B0308
    /* lfs f4, 0x5c(r28) */ // 0x808B030C
    /* fsubs f7, f6, f1 */ // 0x808B0310
    /* fmuls f4, f5, f4 */ // 0x808B0314
    /* lfs f8, 0x58(r28) */ // 0x808B0318
    /* fsubs f9, f9, f1 */ // 0x808B031C
    /* fmuls f7, f0, f7 */ // 0x808B0320
    /* lfs f6, 0x54(r28) */ // 0x808B0324
    /* fsubs f5, f4, f1 */ // 0x808B0328
    /* lfs f4, 0x50(r28) */ // 0x808B032C
    /* fsubs f8, f8, f9 */ // 0x808B0330
    /* fadds f6, f6, f7 */ // 0x808B0334
    /* fsubs f2, f4, f5 */ // 0x808B0338
    /* stfs f3, 0x4c(r1) */ // 0x808B033C
    r5 = *(0x24 + r28); // lwz @ 0x808B0340
    /* stfs f11, 0x38(r1) */ // 0x808B0344
    /* stfs f10, 0x3c(r1) */ // 0x808B0348
    /* stfs f12, 0x40(r1) */ // 0x808B034C
    *(0x20 + r28) = r0; // stb @ 0x808B0350
    /* stfs f2, 0x2c(r1) */ // 0x808B0354
    /* stfs f6, 0x30(r1) */ // 0x808B0358
    /* stfs f8, 0x34(r1) */ // 0x808B035C
    /* stfs f2, 0x3c(r5) */ // 0x808B0360
    /* lis r3, 0 */ // 0x808B0364
    /* lfs f2, 0(r3) */ // 0x808B0368
    r3 = r28;
    /* stfs f6, 0x40(r5) */ // 0x808B0370
    r4 = r29;
    r6 = r31;
    /* stfs f8, 0x44(r5) */ // 0x808B037C
    /* lfs f6, 0x48(r28) */ // 0x808B0384
    /* lfs f5, 0x60(r28) */ // 0x808B0388
    /* lfs f4, 0x44(r28) */ // 0x808B038C
    /* lfs f3, 0x5c(r28) */ // 0x808B0390
    /* fmuls f5, f6, f5 */ // 0x808B0394
    /* lfs f8, 0x4c(r28) */ // 0x808B0398
    /* fmuls f4, f4, f3 */ // 0x808B039C
    /* lfs f7, 0x64(r28) */ // 0x808B03A0
    /* fsubs f6, f5, f1 */ // 0x808B03A4
    /* lfs f3, 0x50(r28) */ // 0x808B03A8
    /* fmuls f5, f8, f7 */ // 0x808B03AC
    *(0x20 + r28) = r0; // stb @ 0x808B03B0
    /* fsubs f4, f4, f1 */ // 0x808B03B4
    /* lfs f7, 0x58(r28) */ // 0x808B03B8
    /* fsubs f8, f5, f1 */ // 0x808B03BC
    /* lfs f5, 0x54(r28) */ // 0x808B03C0
    /* fmuls f6, f0, f6 */ // 0x808B03C4
    r7 = *(0x24 + r28); // lwz @ 0x808B03C8
    /* fsubs f9, f3, f4 */ // 0x808B03CC
    /* fsubs f10, f5, f6 */ // 0x808B03D0
    /* stfs f9, 0x48(r7) */ // 0x808B03D4
    /* fadds f8, f7, f8 */ // 0x808B03D8
    /* stfs f10, 0x4c(r7) */ // 0x808B03DC
    /* stfs f8, 0x50(r7) */ // 0x808B03E0
    /* lfs f6, 0x48(r28) */ // 0x808B03E4
    /* lfs f5, 0x60(r28) */ // 0x808B03E8
    /* lfs f4, 0x44(r28) */ // 0x808B03EC
    /* fmuls f5, f6, f5 */ // 0x808B03F0
    /* lfs f3, 0x5c(r28) */ // 0x808B03F4
    /* lfs f7, 0x4c(r28) */ // 0x808B03F8
    /* fmuls f4, f4, f3 */ // 0x808B03FC
    /* lfs f6, 0x64(r28) */ // 0x808B0400
    /* fsubs f5, f5, f1 */ // 0x808B0404
    /* fmuls f7, f7, f6 */ // 0x808B0408
    /* lfs f3, 0x50(r28) */ // 0x808B040C
    /* fsubs f4, f4, f1 */ // 0x808B0410
    /* fmuls f0, f0, f5 */ // 0x808B0414
    *(0x20 + r28) = r0; // stb @ 0x808B0418
    /* fsubs f7, f7, f1 */ // 0x808B041C
    /* lfs f1, 0x54(r28) */ // 0x808B0420
    /* fsubs f3, f3, f4 */ // 0x808B0424
    /* lfs f6, 0x58(r28) */ // 0x808B0428
    /* fsubs f0, f1, f0 */ // 0x808B042C
    r7 = *(0x24 + r28); // lwz @ 0x808B0430
    /* fsubs f1, f6, f7 */ // 0x808B0434
    /* stfs f9, 0x20(r1) */ // 0x808B0438
    /* stfs f3, 0x54(r7) */ // 0x808B043C
    /* stfs f0, 0x58(r7) */ // 0x808B0440
    /* stfs f1, 0x5c(r7) */ // 0x808B0444
    *(0x20 + r28) = r0; // stb @ 0x808B0448
    /* stfs f10, 0x24(r1) */ // 0x808B044C
    /* stfs f8, 0x28(r1) */ // 0x808B0450
    /* stfs f3, 0x14(r1) */ // 0x808B0454
    /* stfs f0, 0x18(r1) */ // 0x808B0458
    /* stfs f1, 0x1c(r1) */ // 0x808B045C
    /* stfs f2, 8(r1) */ // 0x808B0460
    /* stfs f2, 0xc(r1) */ // 0x808B0464
    /* stfs f2, 0x10(r1) */ // 0x808B0468
    FUN_808B296C(); // bl 0x808B296C
    r0 = *(0x94 + r1); // lwz @ 0x808B0470
    r31 = *(0x8c + r1); // lwz @ 0x808B0474
    r30 = *(0x88 + r1); // lwz @ 0x808B0478
    r29 = *(0x84 + r1); // lwz @ 0x808B047C
    r28 = *(0x80 + r1); // lwz @ 0x808B0480
    return;
}