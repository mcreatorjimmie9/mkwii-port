/* Function at 0x808EF19C, size=1208 bytes */
/* Stack frame: 384 bytes */
/* Saved registers: r21 */
/* Calls: 33 function(s) */

int FUN_808EF19C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -384(r1) */
    /* saved r21 */
    /* stmw r21, 0x154(r1) */ // 0x808EF1A8
    r24 = r3;
    FUN_80654ECC(r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x808EF1B8
    r5 = *(0 + r3); // lwz @ 0x808EF1BC
    r0 = *(0x36 + r5); // lha @ 0x808EF1C0
    if (<) goto 0x0x808ef1e8;
    /* lis r3, 1 */ // 0x808EF1CC
    /* clrlwi r4, r0, 0x18 */ // 0x808EF1D0
    r0 = r3 + -0x6c10; // 0x808EF1D4
    r0 = r0 * r4; // 0x808EF1D8
    r3 = r5 + r0; // 0x808EF1DC
    r27 = r3 + 0x38; // 0x808EF1E0
    /* b 0x808ef1ec */ // 0x808EF1E4
    /* li r27, 0 */ // 0x808EF1E8
    /* lis r3, 0 */ // 0x808EF1EC
    /* li r29, 0 */ // 0x808EF1F0
    r3 = *(0 + r3); // lwz @ 0x808EF1F4
    /* lis r28, 0 */ // 0x808EF1F8
    /* lis r30, 0 */ // 0x808EF1FC
    *(0x1e + r1) = r29; // stb @ 0x808EF200
    r3 = *(0xc + r3); // lwz @ 0x808EF204
    r28 = r28 + 0; // 0x808EF208
    *(0x18 + r1) = r29; // sth @ 0x808EF20C
    r30 = r30 + 0; // 0x808EF210
    r3 = *(0 + r3); // lwz @ 0x808EF214
    /* li r26, 0 */ // 0x808EF218
    *(0x1a + r1) = r29; // stb @ 0x808EF21C
    /* lis r22, 0 */ // 0x808EF220
    r6 = *(0x40 + r3); // lwz @ 0x808EF224
    /* lis r31, 0 */ // 0x808EF228
    *(0x1c + r1) = r29; // sth @ 0x808EF22C
    /* lis r23, 0 */ // 0x808EF230
    r5 = *(4 + r6); // lhz @ 0x808EF234
    r4 = *(6 + r6); // lbz @ 0x808EF238
    r3 = *(8 + r6); // lhz @ 0x808EF23C
    r0 = *(0xa + r6); // lbz @ 0x808EF240
    *(0x14 + r1) = r28; // stw @ 0x808EF244
    *(0x18 + r1) = r5; // sth @ 0x808EF248
    *(0x1a + r1) = r4; // stb @ 0x808EF24C
    *(0x1c + r1) = r3; // sth @ 0x808EF250
    *(0x1e + r1) = r0; // stb @ 0x808EF254
    r4 = *(0x1a0 + r24); // lwz @ 0x808EF258
    r3 = r26 rlwinm 2; // rlwinm
    r0 = r26 + 1; // 0x808EF260
    /* lwzx r25, r4, r3 */ // 0x808EF264
    /* clrlwi r3, r0, 0x18 */ // 0x808EF268
    FUN_808AF904(); // bl 0x808AF904
    r5 = r3;
    r3 = r25;
    r4 = r30 + 0x63; // 0x808EF278
    /* li r6, 0 */ // 0x808EF27C
    FUN_806A093C(r5, r3, r4, r6); // bl 0x806A093C
    r3 = r25;
    r4 = r30 + 0x6c; // 0x808EF288
    FUN_806A0B6C(r4, r6, r3, r4); // bl 0x806A0B6C
    *(0x6c + r1) = r28; // stw @ 0x808EF290
    r3 = *(0 + r31); // lwz @ 0x808EF294
    *(0x70 + r1) = r29; // sth @ 0x808EF298
    *(0x72 + r1) = r29; // stb @ 0x808EF29C
    *(0x74 + r1) = r29; // sth @ 0x808EF2A0
    *(0x76 + r1) = r29; // stb @ 0x808EF2A4
    r3 = *(0 + r3); // lwz @ 0x808EF2A8
    r0 = *(0 + r3); // lwz @ 0x808EF2AC
    if (!=) goto 0x0x808ef2d0;
    r3 = *(0 + r22); // lwz @ 0x808EF2B8
    /* clrlwi r4, r26, 0x18 */ // 0x808EF2BC
    FUN_80702FF0(r5); // bl 0x80702FF0
    /* b 0x808ef2e8 */ // 0x808EF2CC
    r5 = *(0 + r23); // lwz @ 0x808EF2D0
    r3 = r27;
    /* clrlwi r4, r26, 0x18 */ // 0x808EF2D8
    r5 = *(0xb68 + r5); // lwz @ 0x808EF2DC
    FUN_805D7994(r3); // bl 0x805D7994
    r21 = r3;
    if (==) goto 0x0x808ef408;
    r0 = *(0x56 + r21); // lbz @ 0x808EF2F0
    if (==) goto 0x0x808ef3e8;
    r0 = *(0x50 + r21); // lhz @ 0x808EF2FC
    if (>=) goto 0x0x808ef310;
    if (<=) goto 0x0x808ef320;
    /* li r0, 0x63 */ // 0x808EF310
    /* li r5, 0x3b */ // 0x808EF314
    /* li r7, 0x3e7 */ // 0x808EF318
    /* b 0x808ef32c */ // 0x808EF31C
    r5 = *(0x52 + r21); // lbz @ 0x808EF320
    /* clrlwi r0, r0, 0x18 */ // 0x808EF324
    r7 = *(0x54 + r21); // lhz @ 0x808EF328
    *(0x88 + r1) = r5; // stw @ 0x808EF32C
    r3 = r25;
    r4 = r30 + 0x78; // 0x808EF334
    *(0x84 + r1) = r0; // stw @ 0x808EF33C
    /* li r5, 0x578 */ // 0x808EF340
    *(0x8c + r1) = r7; // stw @ 0x808EF344
    FUN_806A093C(r4, r6, r5); // bl 0x806A093C
    r3 = r25;
    /* li r4, 0 */ // 0x808EF350
    FUN_8087EA44(r5, r3, r4); // bl 0x8087EA44
    r4 = *(0x58 + r21); // lwz @ 0x808EF358
    r3 = r25;
    FUN_8087EEC4(r3, r4, r3); // bl 0x8087EEC4
    r3 = *(0 + r31); // lwz @ 0x808EF364
    /* clrlwi r4, r26, 0x18 */ // 0x808EF368
    r3 = *(0x98 + r3); // lwz @ 0x808EF36C
    r0 = *(0x4b4 + r3); // lwz @ 0x808EF370
    if (!=) goto 0x0x808ef38c;
    r3 = r25;
    /* li r4, 0 */ // 0x808EF380
    FUN_8087F79C(r3, r4); // bl 0x8087F79C
    /* b 0x808ef398 */ // 0x808EF388
    r3 = r25;
    /* li r4, 0 */ // 0x808EF390
    FUN_8087F8A4(r4, r3, r4); // bl 0x8087F8A4
    r3 = *(0x5c + r21); // lwz @ 0x808EF398
    FUN_808AF680(r3, r4); // bl 0x808AF680
    r5 = r3;
    r3 = r25;
    r4 = r30 + 0x7d; // 0x808EF3A8
    /* li r6, 0 */ // 0x808EF3AC
    FUN_806A093C(r5, r3, r4, r6); // bl 0x806A093C
    r0 = *(0x60 + r21); // lwz @ 0x808EF3B4
    if (!=) goto 0x0x808ef3d8;
    r3 = r25;
    r4 = r30 + 0x89; // 0x808EF3C4
    /* li r5, 0x25f2 */ // 0x808EF3C8
    /* li r6, 0 */ // 0x808EF3CC
    FUN_806A093C(r3, r4, r5, r6); // bl 0x806A093C
    /* b 0x808ef408 */ // 0x808EF3D4
    r3 = r25;
    r4 = r30 + 0x95; // 0x808EF3DC
    FUN_806A0B6C(r6, r3, r4); // bl 0x806A0B6C
    /* b 0x808ef408 */ // 0x808EF3E4
    r3 = r25;
    r4 = r30 + 0xa1; // 0x808EF3EC
    /* li r5, 0x579 */ // 0x808EF3F0
    /* li r6, 0 */ // 0x808EF3F4
    FUN_806A093C(r3, r4, r5, r6); // bl 0x806A093C
    r3 = r25;
    /* li r4, -1 */ // 0x808EF400
    FUN_8087EEC4(r5, r6, r3, r4); // bl 0x8087EEC4
    r3 = r25;
    r4 = r30 + 0xa6; // 0x808EF40C
    FUN_806A0B6C(r3, r4, r3, r4); // bl 0x806A0B6C
    r3 = r25;
    r4 = r30 + 0xb2; // 0x808EF418
    FUN_806A0B6C(r3, r4, r3, r4); // bl 0x806A0B6C
    r26 = r26 + 1; // 0x808EF420
    if (<) goto 0x0x808ef258;
    r3 = *(0x1a0 + r24); // lwz @ 0x808EF42C
    /* lis r26, 0 */ // 0x808EF430
    r26 = r26 + 0; // 0x808EF434
    /* li r5, 0x4bd */ // 0x808EF438
    r25 = *(0x14 + r3); // lwz @ 0x808EF43C
    r4 = r26 + 0xbc; // 0x808EF440
    /* li r6, 0 */ // 0x808EF444
    r3 = r25;
    FUN_806A093C(r5, r4, r6, r3); // bl 0x806A093C
    /* lis r4, 0 */ // 0x808EF450
    r3 = r27;
    r5 = *(0 + r4); // lwz @ 0x808EF458
    /* li r4, 5 */ // 0x808EF45C
    r5 = *(0xb68 + r5); // lwz @ 0x808EF460
    FUN_805D7994(r4, r3, r4); // bl 0x805D7994
    r31 = r3;
    if (==) goto 0x0x808ef5f0;
    r5 = *(0x56 + r3); // lbz @ 0x808EF474
    if (==) goto 0x0x808ef5d0;
    r0 = *(0x50 + r3); // lhz @ 0x808EF480
    /* lis r4, 0 */ // 0x808EF484
    r6 = *(0x52 + r3); // lbz @ 0x808EF488
    r4 = r4 + 0; // 0x808EF48C
    r7 = *(0x54 + r3); // lhz @ 0x808EF490
    *(8 + r1) = r4; // stw @ 0x808EF498
    *(0xc + r1) = r0; // sth @ 0x808EF49C
    *(0xe + r1) = r6; // stb @ 0x808EF4A0
    *(0x10 + r1) = r7; // sth @ 0x808EF4A4
    *(0x12 + r1) = r5; // stb @ 0x808EF4A8
    if (>=) goto 0x0x808ef4b8;
    if (<=) goto 0x0x808ef4c8;
    /* li r3, 0x63 */ // 0x808EF4B8
    /* li r6, 0x3b */ // 0x808EF4BC
    /* li r7, 0x3e7 */ // 0x808EF4C0
    /* b 0x808ef4cc */ // 0x808EF4C4
    /* clrlwi r3, r0, 0x18 */ // 0x808EF4C8
    /* lis r4, 0 */ // 0x808EF4CC
    /* clrlwi r5, r6, 0x18 */ // 0x808EF4D0
    /* clrlwi r0, r7, 0x10 */ // 0x808EF4D4
    *(0x84 + r1) = r3; // stw @ 0x808EF4D8
    r4 = r4 + 0; // 0x808EF4DC
    r3 = r25;
    *(0x88 + r1) = r5; // stw @ 0x808EF4E4
    r4 = r4 + 0xc5; // 0x808EF4E8
    /* li r5, 0x578 */ // 0x808EF4F0
    *(0x8c + r1) = r0; // stw @ 0x808EF4F4
    FUN_806A093C(r4, r6, r5); // bl 0x806A093C
    r0 = *(0x12 + r1); // lbz @ 0x808EF4FC
    if (==) goto 0x0x808ef514;
    r0 = *(0x1b2 + r24); // lbz @ 0x808EF508
    if (!=) goto 0x0x808ef51c;
    /* li r4, 0 */ // 0x808EF514
    /* b 0x808ef554 */ // 0x808EF518
    r3 = *(0x1b0 + r24); // lhz @ 0x808EF51C
    /* li r4, 0 */ // 0x808EF520
    r0 = *(0x10 + r1); // lhz @ 0x808EF524
    if (!=) goto 0x0x808ef554;
    r3 = *(0x1ae + r24); // lbz @ 0x808EF530
    r0 = *(0xe + r1); // lbz @ 0x808EF534
    if (!=) goto 0x0x808ef554;
    r3 = *(0x1ac + r24); // lhz @ 0x808EF540
    r0 = *(0xc + r1); // lhz @ 0x808EF544
    if (!=) goto 0x0x808ef554;
    /* li r4, 1 */ // 0x808EF550
    if (!=) goto 0x0x808ef56c;
    r3 = r25;
    /* li r4, 0 */ // 0x808EF560
    FUN_8087F79C(r4, r3, r4); // bl 0x8087F79C
    /* b 0x808ef578 */ // 0x808EF568
    r3 = r25;
    /* li r4, 0 */ // 0x808EF570
    FUN_8087F8A4(r4, r3, r4); // bl 0x8087F8A4
    r3 = *(0x5c + r31); // lwz @ 0x808EF578
    FUN_808AF680(r3, r4); // bl 0x808AF680
    /* lis r26, 0 */ // 0x808EF580
    r5 = r3;
    r26 = r26 + 0; // 0x808EF588
    r3 = r25;
    r4 = r26 + 0xca; // 0x808EF590
    /* li r6, 0 */ // 0x808EF594
    FUN_806A093C(r5, r3, r4, r6); // bl 0x806A093C
    r0 = *(0x60 + r31); // lwz @ 0x808EF59C
    if (!=) goto 0x0x808ef5c0;
    r3 = r25;
    r4 = r26 + 0xd6; // 0x808EF5AC
    /* li r5, 0x25f2 */ // 0x808EF5B0
    /* li r6, 0 */ // 0x808EF5B4
    FUN_806A093C(r3, r4, r5, r6); // bl 0x806A093C
    /* b 0x808ef5e4 */ // 0x808EF5BC
    r3 = r25;
    r4 = r26 + 0xe2; // 0x808EF5C4
    FUN_806A0B6C(r6, r3, r4); // bl 0x806A0B6C
    /* b 0x808ef5e4 */ // 0x808EF5CC
    r3 = r25;
    r4 = r26 + 0xee; // 0x808EF5D4
    /* li r5, 0x579 */ // 0x808EF5D8
    /* li r6, 0 */ // 0x808EF5DC
    FUN_806A093C(r3, r4, r5, r6); // bl 0x806A093C
    r4 = *(0x58 + r31); // lwz @ 0x808EF5E4
    r3 = r25;
    FUN_8087EEC4(r5, r6, r3); // bl 0x8087EEC4
    /* lis r26, 0 */ // 0x808EF5F0
    r3 = r25;
    r26 = r26 + 0; // 0x808EF5F8
    r4 = r26 + 0xf3; // 0x808EF5FC
    FUN_806A0B6C(r3, r4); // bl 0x806A0B6C
    r3 = r25;
    r4 = r26 + 0xff; // 0x808EF608
    FUN_806A0B6C(r4, r3, r4); // bl 0x806A0B6C
    /* lis r3, 0 */ // 0x808EF610
    r3 = *(0 + r3); // lwz @ 0x808EF614
    r3 = *(0xb68 + r3); // lwz @ 0x808EF618
    FUN_805E52A4(r4, r3); // bl 0x805E52A4
    r0 = *(0x1b4 + r24); // lwz @ 0x808EF620
    /* li r4, 0 */ // 0x808EF624
    if (==) goto 0x0x808ef638;
    if (==) goto 0x0x808ef63c;
    /* li r4, 1 */ // 0x808EF638
    *(0x238 + r24) = r4; // stb @ 0x808EF63C
    r0 = *(0x184 + r1); // lwz @ 0x808EF644
    return;
}