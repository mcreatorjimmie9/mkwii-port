/* Function at 0x8082A080, size=2156 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 19 function(s) */

int FUN_8082A080(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x8082A088
    /* li r6, 0 */ // 0x8082A08C
    *(0x34 + r1) = r0; // stw @ 0x8082A090
    *(0x2c + r1) = r31; // stw @ 0x8082A094
    /* lis r31, 0 */ // 0x8082A098
    r31 = r31 + 0; // 0x8082A09C
    *(0x28 + r1) = r30; // stw @ 0x8082A0A0
    r30 = r4;
    /* li r4, 0 */ // 0x8082A0A8
    *(0x24 + r1) = r29; // stw @ 0x8082A0AC
    r29 = r3;
    r7 = *(0x7c + r3); // lwz @ 0x8082A0B4
    *(0x74 + r3) = r5; // stw @ 0x8082A0B8
    /* rlwinm. r0, r7, 0, 0x1a, 0x1a */ // 0x8082A0BC
    if (==) goto 0x0x8082a0e8;
    /* clrlwi. r0, r7, 0x1f */ // 0x8082A0C4
    if (==) goto 0x0x8082a0d8;
    r0 = *(0x78 + r3); // lwz @ 0x8082A0CC
    /* rlwinm. r0, r0, 0, 2, 4 */ // 0x8082A0D0
    if (==) goto 0x0x8082a0dc;
    /* li r5, 1 */ // 0x8082A0D8
    if (==) goto 0x0x8082a0e8;
    /* li r6, 1 */ // 0x8082A0E4
    if (==) goto 0x0x8082a0fc;
    /* andi. r0, r7, 0x12 */ // 0x8082A0F0
    if (!=) goto 0x0x8082a0fc;
    /* li r4, 1 */ // 0x8082A0F8
    if (==) goto 0x0x8082a144;
    r0 = *(0x78 + r3); // lwz @ 0x8082A104
    r3 = r0 rlwinm 0x1b; // rlwinm
    FUN_8085841C(r4); // bl 0x8085841C
    r0 = *(0x160 + r29); // lwz @ 0x8082A110
    /* subf r3, r3, r0 */ // 0x8082A114
    r0 = r3 + 2; // 0x8082A118
    if (==) goto 0x0x8082a13c;
    r0 = *(0x78 + r29); // lwz @ 0x8082A124
    /* rlwinm. r0, r0, 0, 8, 0xa */ // 0x8082A128
    if (==) goto 0x0x8082a144;
    r0 = *(0x160 + r29); // lwz @ 0x8082A130
    if (!=) goto 0x0x8082a144;
    r3 = r29;
    FUN_8082E254(r3); // bl 0x8082E254
    r0 = *(0x7c + r29); // lwz @ 0x8082A144
    /* rlwinm. r0, r0, 0, 0x17, 0x17 */ // 0x8082A148
    if (==) goto 0x0x8082a158;
    r3 = r29;
    FUN_8082A9C8(r3); // bl 0x8082A9C8
    r3 = *(0x15c + r29); // lha @ 0x8082A158
    if (>) goto 0x0x8082a16c;
    r0 = r3 + 1; // 0x8082A164
    *(0x15c + r29) = r0; // sth @ 0x8082A168
    r0 = *(0x78 + r29); // lwz @ 0x8082A16C
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x8082A170
    if (!=) goto 0x0x8082a180;
    r3 = r29 + 0xd4; // 0x8082A178
    FUN_808430BC(r3); // bl 0x808430BC
    r0 = *(0x78 + r29); // lwz @ 0x8082A180
    /* rlwinm. r0, r0, 0, 0x15, 0x15 */ // 0x8082A184
    if (!=) goto 0x0x8082a52c;
    /* lfs f1, 0(r31) */ // 0x8082A18C
    /* lfs f0, 0x140(r29) */ // 0x8082A190
    /* fcmpu cr0, f1, f0 */ // 0x8082A194
    if (==) goto 0x0x8082a254;
    r0 = *(4 + r29); // lwz @ 0x8082A19C
    /* lis r3, 0 */ // 0x8082A1A0
    r3 = r3 + 0; // 0x8082A1A4
    /* lfs f1, 0x68(r29) */ // 0x8082A1A8
    /* mulli r0, r0, 0x74 */ // 0x8082A1AC
    r3 = r3 + r0; // 0x8082A1B0
    /* lfs f2, 0x44(r3) */ // 0x8082A1B4
    /* .byte 0xfc, 0x01, 0x10, 0x40 */ // 0x8082A1B8
    if (>=) goto 0x0x8082a1e0;
    /* lfs f0, 0x28(r31) */ // 0x8082A1C0
    /* fadds f0, f1, f0 */ // 0x8082A1C4
    /* stfs f0, 0x68(r29) */ // 0x8082A1C8
    /* .byte 0xfc, 0x00, 0x10, 0x40 */ // 0x8082A1CC
    if (<=) goto 0x0x8082a1d8;
    /* stfs f2, 0x68(r29) */ // 0x8082A1D4
    /* li r0, 1 */ // 0x8082A1D8
    /* b 0x8082a1e4 */ // 0x8082A1DC
    /* li r0, 0 */ // 0x8082A1E0
    if (==) goto 0x0x8082a254;
    r0 = *(4 + r29); // lwz @ 0x8082A1EC
    /* lis r4, 0 */ // 0x8082A1F0
    /* lfs f1, 0x68(r29) */ // 0x8082A1F4
    r4 = r4 + 0; // 0x8082A1F8
    /* mulli r5, r0, 0x74 */ // 0x8082A1FC
    r3 = *(0x74 + r29); // lwz @ 0x8082A200
    r0 = *(4 + r29); // lwz @ 0x8082A204
    r3 = r3 | 0x40; // 0x8082A208
    *(0x74 + r29) = r3; // stw @ 0x8082A20C
    r5 = r4 + r5; // 0x8082A210
    /* stfs f1, 0x64(r29) */ // 0x8082A214
    /* mulli r0, r0, 0x74 */ // 0x8082A218
    r3 = *(0xa4 + r29); // lwz @ 0x8082A21C
    /* stfs f1, 0x60(r29) */ // 0x8082A220
    r4 = r4 + r0; // 0x8082A224
    /* stfs f1, 0x5c(r29) */ // 0x8082A228
    /* lfs f0, 0x40(r5) */ // 0x8082A22C
    /* lfs f2, 0x38(r5) */ // 0x8082A230
    /* fmuls f0, f1, f0 */ // 0x8082A234
    /* fmuls f1, f1, f2 */ // 0x8082A238
    /* stfs f0, 0xb8(r29) */ // 0x8082A23C
    /* stfs f1, 0xb4(r29) */ // 0x8082A240
    /* lfs f1, 0x34(r4) */ // 0x8082A244
    /* fmuls f0, f0, f1 */ // 0x8082A248
    /* stfs f0, 4(r3) */ // 0x8082A24C
    /* b 0x8082a52c */ // 0x8082A250
    r3 = *(0x78 + r29); // lwz @ 0x8082A254
    /* rlwinm. r0, r3, 0, 0x1c, 0x1d */ // 0x8082A258
    if (==) goto 0x0x8082a448;
    r0 = *(4 + r29); // lwz @ 0x8082A260
    /* lis r3, 0 */ // 0x8082A264
    r3 = r3 + 0; // 0x8082A268
    /* lfs f1, 0x68(r29) */ // 0x8082A26C
    /* mulli r0, r0, 0x74 */ // 0x8082A270
    r3 = r3 + r0; // 0x8082A274
    /* lfs f2, 0x48(r3) */ // 0x8082A278
    /* .byte 0xfc, 0x01, 0x10, 0x40 */ // 0x8082A27C
    if (>=) goto 0x0x8082a2a4;
    /* lfs f0, 0x2c(r31) */ // 0x8082A284
    /* fadds f0, f1, f0 */ // 0x8082A288
    /* stfs f0, 0x68(r29) */ // 0x8082A28C
    /* .byte 0xfc, 0x00, 0x10, 0x40 */ // 0x8082A290
    if (<=) goto 0x0x8082a29c;
    /* stfs f2, 0x68(r29) */ // 0x8082A298
    /* li r6, 1 */ // 0x8082A29C
    /* b 0x8082a2a8 */ // 0x8082A2A0
    /* li r6, 0 */ // 0x8082A2A4
    /* lfs f1, 0x140(r29) */ // 0x8082A2A8
    /* li r0, 0 */ // 0x8082A2AC
    /* lfs f0, 0x30(r31) */ // 0x8082A2B0
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x8082A2B4
    if (>=) goto 0x0x8082a2cc;
    /* lfs f0, 0x34(r31) */ // 0x8082A2BC
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8082A2C0
    if (>=) goto 0x0x8082a2cc;
    /* li r0, 1 */ // 0x8082A2C8
    if (==) goto 0x0x8082a308;
    /* lfs f2, 0x5c(r29) */ // 0x8082A2D4
    /* li r0, 0 */ // 0x8082A2D8
    /* lfs f1, 0x60(r29) */ // 0x8082A2DC
    /* lfs f0, 0x30(r31) */ // 0x8082A2E0
    /* fsubs f1, f2, f1 */ // 0x8082A2E4
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x8082A2E8
    if (>=) goto 0x0x8082a300;
    /* lfs f0, 0x34(r31) */ // 0x8082A2F0
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8082A2F4
    if (>=) goto 0x0x8082a300;
    /* li r0, 1 */ // 0x8082A2FC
    if (!=) goto 0x0x8082a3c4;
    /* lfs f1, 0x60(r29) */ // 0x8082A308
    /* lfs f0, 0x140(r29) */ // 0x8082A30C
    r0 = *(0x74 + r29); // lwz @ 0x8082A310
    /* fadds f0, f1, f0 */ // 0x8082A314
    /* lfs f5, 0x34(r31) */ // 0x8082A318
    r0 = r0 | 0x40; // 0x8082A31C
    *(0x74 + r29) = r0; // stw @ 0x8082A320
    /* .byte 0xfc, 0x00, 0x28, 0x40 */ // 0x8082A324
    if (>=) goto 0x0x8082a330;
    /* b 0x8082a334 */ // 0x8082A32C
    /* fmr f5, f0 */ // 0x8082A330
    /* frsp f4, f5 */ // 0x8082A334
    /* lfs f3, 0x68(r29) */ // 0x8082A338
    /* lfs f0, 0x40(r31) */ // 0x8082A33C
    /* lis r3, 0 */ // 0x8082A340
    r0 = *(4 + r29); // lwz @ 0x8082A344
    r3 = r3 + 0; // 0x8082A348
    /* fsubs f2, f3, f4 */ // 0x8082A34C
    /* lfs f1, 0x38(r31) */ // 0x8082A350
    /* fmuls f0, f0, f3 */ // 0x8082A354
    /* mulli r4, r0, 0x74 */ // 0x8082A358
    r0 = *(4 + r29); // lwz @ 0x8082A35C
    /* li r7, 1 */ // 0x8082A360
    /* fmuls f3, f1, f2 */ // 0x8082A364
    /* lfs f2, 0x140(r29) */ // 0x8082A368
    /* fsubs f0, f0, f4 */ // 0x8082A36C
    /* lfs f1, 0x3c(r31) */ // 0x8082A370
    /* stfs f5, 0x60(r29) */ // 0x8082A374
    r5 = r3 + r4; // 0x8082A378
    /* fadds f2, f2, f3 */ // 0x8082A37C
    /* mulli r0, r0, 0x74 */ // 0x8082A380
    /* stfs f0, 0x5c(r29) */ // 0x8082A384
    /* fmuls f1, f1, f2 */ // 0x8082A388
    /* stfs f0, 0x64(r29) */ // 0x8082A38C
    r4 = r3 + r0; // 0x8082A390
    r3 = *(0xa4 + r29); // lwz @ 0x8082A394
    /* stfs f1, 0x140(r29) */ // 0x8082A398
    /* lfs f1, 0x40(r5) */ // 0x8082A39C
    /* lfs f2, 0x38(r5) */ // 0x8082A3A0
    /* fmuls f0, f0, f1 */ // 0x8082A3A4
    /* fmuls f1, f4, f2 */ // 0x8082A3A8
    /* stfs f0, 0xb8(r29) */ // 0x8082A3AC
    /* stfs f1, 0xb4(r29) */ // 0x8082A3B0
    /* lfs f1, 0x34(r4) */ // 0x8082A3B4
    /* fmuls f0, f0, f1 */ // 0x8082A3B8
    /* stfs f0, 4(r3) */ // 0x8082A3BC
    /* b 0x8082a3d0 */ // 0x8082A3C0
    /* lfs f0, 0(r31) */ // 0x8082A3C4
    /* li r7, 0 */ // 0x8082A3C8
    /* stfs f0, 0x140(r29) */ // 0x8082A3CC
    if (!=) goto 0x0x8082a52c;
    if (==) goto 0x0x8082a52c;
    r0 = *(4 + r29); // lwz @ 0x8082A3E0
    /* lis r4, 0 */ // 0x8082A3E4
    /* lfs f1, 0x68(r29) */ // 0x8082A3E8
    r4 = r4 + 0; // 0x8082A3EC
    /* mulli r5, r0, 0x74 */ // 0x8082A3F0
    r3 = *(0x74 + r29); // lwz @ 0x8082A3F4
    r0 = *(4 + r29); // lwz @ 0x8082A3F8
    r3 = r3 | 0x40; // 0x8082A3FC
    *(0x74 + r29) = r3; // stw @ 0x8082A400
    r5 = r4 + r5; // 0x8082A404
    /* stfs f1, 0x64(r29) */ // 0x8082A408
    /* mulli r0, r0, 0x74 */ // 0x8082A40C
    r3 = *(0xa4 + r29); // lwz @ 0x8082A410
    /* stfs f1, 0x60(r29) */ // 0x8082A414
    r4 = r4 + r0; // 0x8082A418
    /* stfs f1, 0x5c(r29) */ // 0x8082A41C
    /* lfs f0, 0x40(r5) */ // 0x8082A420
    /* lfs f2, 0x38(r5) */ // 0x8082A424
    /* fmuls f0, f1, f0 */ // 0x8082A428
    /* fmuls f1, f1, f2 */ // 0x8082A42C
    /* stfs f0, 0xb8(r29) */ // 0x8082A430
    /* stfs f1, 0xb4(r29) */ // 0x8082A434
    /* lfs f1, 0x34(r4) */ // 0x8082A438
    /* fmuls f0, f0, f1 */ // 0x8082A43C
    /* stfs f0, 4(r3) */ // 0x8082A440
    /* b 0x8082a52c */ // 0x8082A444
    /* rlwinm. r0, r3, 0, 6, 6 */ // 0x8082A448
    if (==) goto 0x0x8082a46c;
    r0 = *(4 + r29); // lwz @ 0x8082A450
    /* lis r3, 0 */ // 0x8082A454
    r3 = r3 + 0; // 0x8082A458
    /* mulli r0, r0, 0x74 */ // 0x8082A45C
    r3 = r3 + r0; // 0x8082A460
    /* lfs f1, 0x4c(r3) */ // 0x8082A464
    /* b 0x8082a484 */ // 0x8082A468
    r0 = *(4 + r29); // lwz @ 0x8082A46C
    /* lis r3, 0 */ // 0x8082A470
    r3 = r3 + 0; // 0x8082A474
    /* mulli r0, r0, 0x74 */ // 0x8082A478
    r3 = r3 + r0; // 0x8082A47C
    /* lfs f1, 0x50(r3) */ // 0x8082A480
    /* lis r3, 0 */ // 0x8082A484
    /* lfs f0, 0x68(r29) */ // 0x8082A488
    r3 = r3 + 0; // 0x8082A48C
    r3 = r3 + r0; // 0x8082A490
    /* lfs f2, 0x48(r3) */ // 0x8082A494
    /* .byte 0xfc, 0x00, 0x10, 0x40 */ // 0x8082A498
    if (>=) goto 0x0x8082a4bc;
    /* fadds f0, f0, f1 */ // 0x8082A4A0
    /* stfs f0, 0x68(r29) */ // 0x8082A4A4
    /* .byte 0xfc, 0x00, 0x10, 0x40 */ // 0x8082A4A8
    if (<=) goto 0x0x8082a4b4;
    /* stfs f2, 0x68(r29) */ // 0x8082A4B0
    /* li r0, 1 */ // 0x8082A4B4
    /* b 0x8082a4c0 */ // 0x8082A4B8
    /* li r0, 0 */ // 0x8082A4BC
    if (==) goto 0x0x8082a52c;
    r0 = *(4 + r29); // lwz @ 0x8082A4C8
    /* lis r4, 0 */ // 0x8082A4CC
    /* lfs f1, 0x68(r29) */ // 0x8082A4D0
    r4 = r4 + 0; // 0x8082A4D4
    /* mulli r5, r0, 0x74 */ // 0x8082A4D8
    r3 = *(0x74 + r29); // lwz @ 0x8082A4DC
    r0 = *(4 + r29); // lwz @ 0x8082A4E0
    r3 = r3 | 0x40; // 0x8082A4E4
    *(0x74 + r29) = r3; // stw @ 0x8082A4E8
    r5 = r4 + r5; // 0x8082A4EC
    /* stfs f1, 0x64(r29) */ // 0x8082A4F0
    /* mulli r0, r0, 0x74 */ // 0x8082A4F4
    r3 = *(0xa4 + r29); // lwz @ 0x8082A4F8
    /* stfs f1, 0x60(r29) */ // 0x8082A4FC
    r4 = r4 + r0; // 0x8082A500
    /* stfs f1, 0x5c(r29) */ // 0x8082A504
    /* lfs f0, 0x40(r5) */ // 0x8082A508
    /* lfs f2, 0x38(r5) */ // 0x8082A50C
    /* fmuls f0, f1, f0 */ // 0x8082A510
    /* fmuls f1, f1, f2 */ // 0x8082A514
    /* stfs f0, 0xb8(r29) */ // 0x8082A518
    /* stfs f1, 0xb4(r29) */ // 0x8082A51C
    /* lfs f1, 0x34(r4) */ // 0x8082A520
    /* fmuls f0, f0, f1 */ // 0x8082A524
    /* stfs f0, 4(r3) */ // 0x8082A528
    r3 = *(0x7c + r29); // lwz @ 0x8082A52C
    /* clrlwi. r0, r3, 0x1f */ // 0x8082A530
    if (!=) goto 0x0x8082a54c;
    /* rlwinm. r0, r3, 0, 0x1c, 0x1c */ // 0x8082A538
    if (==) goto 0x0x8082a54c;
    r3 = r29;
    FUN_8082D644(r3); // bl 0x8082D644
    /* b 0x8082a56c */ // 0x8082A548
    r3 = r29 + 0x168; // 0x8082A54C
    FUN_805E3430(r3, r3); // bl 0x805E3430
    if (==) goto 0x0x8082a56c;
    r3 = r29;
    FUN_805E3430(r3); // bl 0x805E3430
    r0 = *(0x74 + r29); // lwz @ 0x8082A56C
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x8082A570
    if (==) goto 0x0x8082a580;
    /* li r3, 1 */ // 0x8082A578
    /* b 0x8082a92c */ // 0x8082A57C
    r0 = *(0xb0 + r29); // lwz @ 0x8082A580
    if (==) goto 0x0x8082a5f8;
    r0 = *(0x78 + r29); // lwz @ 0x8082A58C
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x8082A590
    if (!=) goto 0x0x8082a5c8;
    if (!=) goto 0x0x8082a5b4;
    /* lis r3, 0 */ // 0x8082A5A0
    r4 = *(0xb0 + r29); // lwz @ 0x8082A5A4
    r3 = *(0 + r3); // lwz @ 0x8082A5A8
    /* li r5, 0xe */ // 0x8082A5AC
    FUN_808163E4(r3, r5); // bl 0x808163E4
    r3 = r29;
    FUN_8082CD28(r5, r3); // bl 0x8082CD28
    r3 = r29;
    FUN_8082CF6C(r5, r3, r3); // bl 0x8082CF6C
    /* b 0x8082a5f8 */ // 0x8082A5C4
    r0 = *(4 + r29); // lwz @ 0x8082A5C8
    if (!=) goto 0x0x8082a5f8;
    if (!=) goto 0x0x8082a5f0;
    /* lis r3, 0 */ // 0x8082A5DC
    r4 = *(0xb0 + r29); // lwz @ 0x8082A5E0
    r3 = *(0 + r3); // lwz @ 0x8082A5E4
    /* li r5, 0xc */ // 0x8082A5E8
    FUN_808163E4(r3, r5); // bl 0x808163E4
    r3 = r29;
    FUN_8082CF6C(r5, r3); // bl 0x8082CF6C
    r0 = *(0x78 + r29); // lwz @ 0x8082A5F8
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x8082A5FC
    if (!=) goto 0x0x8082a618;
    /* lis r3, 0x20e8 */ // 0x8082A604
    r4 = *(0xd4 + r29); // lwz @ 0x8082A608
    r0 = r3 + 0xfff; // 0x8082A60C
    /* and. r0, r4, r0 */ // 0x8082A610
    if (==) goto 0x0x8082a6c8;
    r0 = *(0x138 + r29); // lwz @ 0x8082A618
    /* li r3, 0 */ // 0x8082A61C
    *(0x15c + r29) = r3; // sth @ 0x8082A620
    /* rlwinm. r0, r0, 0, 0x15, 0x15 */ // 0x8082A624
    if (!=) goto 0x0x8082a644;
    r0 = *(0xd4 + r29); // lwz @ 0x8082A62C
    /* rlwinm. r0, r0, 0, 0x15, 0x15 */ // 0x8082A630
    if (==) goto 0x0x8082a67c;
    r0 = *(0x74 + r29); // lwz @ 0x8082A638
    /* rlwinm. r0, r0, 0, 0x1a, 0x1a */ // 0x8082A63C
    if (!=) goto 0x0x8082a67c;
    r0 = *(0x15e + r29); // lha @ 0x8082A644
    if (!=) goto 0x0x8082a67c;
    r0 = *(4 + r29); // lwz @ 0x8082A650
    if (==) goto 0x0x8082a67c;
    r0 = *(0x78 + r29); // lwz @ 0x8082A65C
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x8082A660
    if (==) goto 0x0x8082a674;
    /* li r0, 0xb4 */ // 0x8082A668
    *(0x15e + r29) = r0; // sth @ 0x8082A66C
    /* b 0x8082a67c */ // 0x8082A670
    /* li r0, 0x3c */ // 0x8082A674
    *(0x15e + r29) = r0; // sth @ 0x8082A678
    /* lis r3, 0x20e8 */ // 0x8082A67C
    r0 = *(0x138 + r29); // lwz @ 0x8082A680
    r3 = r3 + 0xdff; // 0x8082A684
    /* and. r0, r0, r3 */ // 0x8082A688
    if (!=) goto 0x0x8082a6c8;
    r0 = *(0xd4 + r29); // lwz @ 0x8082A690
    /* and. r0, r0, r3 */ // 0x8082A694
    if (!=) goto 0x0x8082a6c8;
    r0 = *(0x15e + r29); // lha @ 0x8082A69C
    if (!=) goto 0x0x8082a6c8;
    r0 = *(4 + r29); // lwz @ 0x8082A6A8
    if (==) goto 0x0x8082a6c8;
    r0 = *(0x78 + r29); // lwz @ 0x8082A6B4
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x8082A6B8
    if (==) goto 0x0x8082a6c8;
    /* li r0, 0xb4 */ // 0x8082A6C0
    *(0x15e + r29) = r0; // sth @ 0x8082A6C4
    r0 = *(0x15e + r29); // lha @ 0x8082A6C8
    if (==) goto 0x0x8082a71c;
    r3 = *(0x78 + r29); // lwz @ 0x8082A6D4
    /* rlwinm. r0, r3, 0, 0x18, 0x19 */ // 0x8082A6D8
    if (!=) goto 0x0x8082a71c;
    /* rlwinm. r0, r3, 0, 0x1c, 0x1c */ // 0x8082A6E0
    if (!=) goto 0x0x8082a6fc;
    /* lis r3, 0x20e8 */ // 0x8082A6E8
    r4 = *(0xd4 + r29); // lwz @ 0x8082A6EC
    r0 = r3 + 0xbff; // 0x8082A6F0
    /* and. r0, r4, r0 */ // 0x8082A6F4
    if (!=) goto 0x0x8082a71c;
    r3 = *(0x15e + r29); // lha @ 0x8082A6FC
    r0 = r3 + -1; // 0x8082A700
    *(0x15e + r29) = r0; // sth @ 0x8082A704
    /* extsh. r0, r0 */ // 0x8082A708
    if (!=) goto 0x0x8082a71c;
    r3 = r29;
    /* li r4, 1 */ // 0x8082A714
    FUN_80831CA8(r3, r4); // bl 0x80831CA8
    /* lis r4, 0 */ // 0x8082A71C
    r3 = r29 + 0xd4; // 0x8082A720
    r0 = *(0 + r4); // lwz @ 0x8082A724
    if (!=) goto 0x0x8082a778;
    r0 = *(0xd4 + r29); // lwz @ 0x8082A730
    /* rlwinm. r0, r0, 0, 0xf, 0xf */ // 0x8082A734
    if (==) goto 0x0x8082a748;
    /* lis r4, 1 */ // 0x8082A73C
    FUN_80842FAC(r4); // bl 0x80842FAC
    /* b 0x8082a74c */ // 0x8082A744
    /* li r3, 0 */ // 0x8082A748
    if (==) goto 0x0x8082a778;
    /* lis r3, 0 */ // 0x8082A754
    r3 = *(0 + r3); // lwz @ 0x8082A758
    r0 = *(4 + r3); // lhz @ 0x8082A75C
    /* clrlwi r0, r0, 0x1b */ // 0x8082A760
    if (!=) goto 0x0x8082a778;
    r3 = r29;
    /* li r4, 1 */ // 0x8082A770
    FUN_80831CA8(r3, r4); // bl 0x80831CA8
    /* lis r4, 0 */ // 0x8082A778
    r3 = r29 + 0xd4; // 0x8082A77C
    r0 = *(0 + r4); // lwz @ 0x8082A780
    if (!=) goto 0x0x8082a7d4;
    r0 = *(0xd4 + r29); // lwz @ 0x8082A78C
    /* rlwinm. r0, r0, 0, 1, 1 */ // 0x8082A790
    if (==) goto 0x0x8082a7a4;
    /* lis r4, 0x4000 */ // 0x8082A798
    FUN_80842FAC(r4); // bl 0x80842FAC
    /* b 0x8082a7a8 */ // 0x8082A7A0
    /* li r3, 0 */ // 0x8082A7A4
    if (==) goto 0x0x8082a7d4;
    /* lis r3, 0 */ // 0x8082A7B0
    r3 = *(0 + r3); // lwz @ 0x8082A7B4
    r0 = *(4 + r3); // lhz @ 0x8082A7B8
    /* clrlwi r0, r0, 0x1b */ // 0x8082A7BC
    if (!=) goto 0x0x8082a7d4;
    r3 = r29;
    /* li r4, 1 */ // 0x8082A7CC
    FUN_80831CA8(r3, r4); // bl 0x80831CA8
    /* lfs f1, 0x48(r29) */ // 0x8082A7D4
    /* lfs f0, 0(r31) */ // 0x8082A7D8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8082A7DC
    if (>=) goto 0x0x8082a804;
    r0 = *(4 + r29); // lwz @ 0x8082A7E4
    if (==) goto 0x0x8082a804;
    if (==) goto 0x0x8082a804;
    r3 = r29;
    /* li r4, 0 */ // 0x8082A7FC
    FUN_80831CA8(r3, r4); // bl 0x80831CA8
    r0 = *(0x15c + r29); // lha @ 0x8082A804
    if (>=) goto 0x0x8082a820;
    r0 = *(0x78 + r29); // lwz @ 0x8082A810
    r0 = r0 rlwinm 0; // rlwinm
    *(0x78 + r29) = r0; // stw @ 0x8082A818
    /* b 0x8082a89c */ // 0x8082A81C
    /* lfs f1, 0xcc(r29) */ // 0x8082A820
    /* lfs f0, 0x44(r31) */ // 0x8082A824
    r0 = *(0x78 + r29); // lwz @ 0x8082A828
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8082A82C
    r0 = r0 | 0x20; // 0x8082A830
    *(0x78 + r29) = r0; // stw @ 0x8082A834
    if (>=) goto 0x0x8082a89c;
    r0 = *(0x74 + r29); // lwz @ 0x8082A83C
    /* rlwinm. r0, r0, 0, 0x18, 0x18 */ // 0x8082A840
    if (!=) goto 0x0x8082a89c;
    /* lfs f1, 0x48(r31) */ // 0x8082A848
    r3 = r29 + 0xc8; // 0x8082A84C
    /* lfs f0, 4(r31) */ // 0x8082A850
    /* .byte 0xe0, 0x43, 0x00, 0x00 */ // 0x8082A858
    /* fsubs f0, f0, f1 */ // 0x8082A85C
    /* .byte 0x10, 0x62, 0x00, 0x18 */ // 0x8082A860
    /* .byte 0xe0, 0x43, 0x80, 0x08 */ // 0x8082A864
    /* xsaddsp f3, f3, f0 */ // 0x8082A868
    /* .byte 0x10, 0x62, 0x00, 0x18 */ // 0x8082A86C
    /* lfs f0, 0xcc(r29) */ // 0x8082A870
    /* xsmaddasp f3, f3, f16 */ // 0x8082A874
    /* fadds f0, f0, f1 */ // 0x8082A878
    r5 = *(0xc8 + r29); // lwz @ 0x8082A87C
    /* stfs f0, 0xcc(r29) */ // 0x8082A880
    r0 = *(0xcc + r29); // lwz @ 0x8082A884
    *(0xc + r1) = r0; // stw @ 0x8082A888
    *(8 + r1) = r5; // stw @ 0x8082A88C
    r0 = *(0xd0 + r29); // lwz @ 0x8082A890
    *(0x10 + r1) = r0; // stw @ 0x8082A894
    FUN_80816F30(); // bl 0x80816F30
    r4 = *(0x78 + r29); // lwz @ 0x8082A89C
    r3 = *(0x160 + r29); // lwz @ 0x8082A8A0
    /* lfs f2, 0x44(r29) */ // 0x8082A8A4
    /* rlwinm. r0, r4, 0, 0xe, 0xe */ // 0x8082A8A8
    /* lfs f1, 0x48(r29) */ // 0x8082A8AC
    r3 = r3 + 1; // 0x8082A8B0
    /* lfs f0, 0x4c(r29) */ // 0x8082A8B4
    /* stfs f2, 0xbc(r29) */ // 0x8082A8B8
    /* stfs f1, 0xc0(r29) */ // 0x8082A8BC
    /* stfs f0, 0xc4(r29) */ // 0x8082A8C0
    *(0x160 + r29) = r3; // stw @ 0x8082A8C4
    if (==) goto 0x0x8082a928;
    /* rlwinm. r0, r4, 0, 0xc, 0xc */ // 0x8082A8CC
    if (==) goto 0x0x8082a8ec;
    if (<=) goto 0x0x8082a928;
    r0 = *(0x78 + r29); // lwz @ 0x8082A8DC
    r0 = r0 rlwinm 0; // rlwinm
    *(0x78 + r29) = r0; // stw @ 0x8082A8E4
    /* b 0x8082a928 */ // 0x8082A8E8
}