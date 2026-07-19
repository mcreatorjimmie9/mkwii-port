/* Function at 0x805CA174, size=1164 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_805CA174(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* lis r6, 0 */ // 0x805CA17C
    *(0x34 + r1) = r0; // stw @ 0x805CA180
    /* stmw r25, 0x14(r1) */ // 0x805CA184
    r29 = r3;
    r30 = r5;
    r25 = r4;
    /* li r5, 0 */ // 0x805CA198
    /* li r27, 0 */ // 0x805CA19C
    /* lbzu r3, 0(r6) */ // 0x805CA1A0
    *(8 + r1) = r3; // stb @ 0x805CA1A4
    r0 = *(1 + r6); // lbz @ 0x805CA1A8
    *(9 + r1) = r0; // stb @ 0x805CA1AC
    r12 = *(0x118 + r29); // lwz @ 0x805CA1B0
    r3 = r29 + 0x118; // 0x805CA1B4
    r4 = r30;
    r12 = *(0x10 + r12); // lwz @ 0x805CA1BC
    /* mtctr r12 */ // 0x805CA1C0
    /* bctrl  */ // 0x805CA1C4
    r27 = r27 + 1; // 0x805CA1C8
    r0 = *(0x11c + r29); // lbz @ 0x805CA1CC
    *(0 + r28) = r0; // stb @ 0x805CA1D4
    r5 = r3;
    r28 = r28 + 1; // 0x805CA1DC
    if (<) goto 0x0x805ca1b0;
    r0 = *(8 + r1); // lbz @ 0x805CA1E4
    if (!=) goto 0x0x805ca5ec;
    /* li r7, 0 */ // 0x805CA1F4
    /* li r0, 0x10 */ // 0x805CA1F8
    r3 = *(0 + r6); // lbz @ 0x805CA1FC
    if (==) goto 0x0x805ca330;
    r3 = r3 rlwinm 2; // rlwinm
    r3 = r29 + r3; // 0x805CA20C
    r4 = *(0x44 + r3); // lwz @ 0x805CA210
    r3 = *(0x74 + r3); // lwz @ 0x805CA214
    /* mtctr r0 */ // 0x805CA220
    r9 = *(4 + r10); // lwz @ 0x805CA224
    r8 = *(8 + r10); // lwzu @ 0x805CA228
    *(4 + r11) = r9; // stw @ 0x805CA22C
    if (counter-- != 0) goto 0x0x805ca224;
    r8 = *(0x80 + r4); // lbz @ 0x805CA238
    *(0x80 + r3) = r8; // stb @ 0x805CA23C
    r8 = *(0x81 + r4); // lbz @ 0x805CA240
    *(0x81 + r3) = r8; // stb @ 0x805CA244
    r8 = *(0x82 + r4); // lbz @ 0x805CA248
    *(0x82 + r3) = r8; // stb @ 0x805CA24C
    r8 = *(0x83 + r4); // lbz @ 0x805CA250
    *(0x83 + r3) = r8; // stb @ 0x805CA254
    r8 = *(0x84 + r4); // lbz @ 0x805CA258
    *(0x84 + r3) = r8; // stb @ 0x805CA25C
    r8 = *(0x85 + r4); // lbz @ 0x805CA260
    *(0x85 + r3) = r8; // stb @ 0x805CA264
    r8 = *(0x86 + r4); // lhz @ 0x805CA268
    *(0x86 + r3) = r8; // sth @ 0x805CA26C
    r8 = *(0x89 + r4); // lbz @ 0x805CA270
    r9 = *(0x88 + r4); // lbz @ 0x805CA274
    *(0x88 + r3) = r9; // stb @ 0x805CA278
    *(0x89 + r3) = r8; // stb @ 0x805CA27C
    r8 = *(0x8b + r4); // lbz @ 0x805CA280
    r9 = *(0x8a + r4); // lbz @ 0x805CA284
    *(0x8a + r3) = r9; // stb @ 0x805CA288
    *(0x8b + r3) = r8; // stb @ 0x805CA28C
    r8 = *(0x8d + r4); // lbz @ 0x805CA290
    r9 = *(0x8c + r4); // lbz @ 0x805CA294
    *(0x8c + r3) = r9; // stb @ 0x805CA298
    *(0x8d + r3) = r8; // stb @ 0x805CA29C
    r8 = *(0x8f + r4); // lbz @ 0x805CA2A0
    r9 = *(0x8e + r4); // lbz @ 0x805CA2A4
    *(0x8e + r3) = r9; // stb @ 0x805CA2A8
    *(0x8f + r3) = r8; // stb @ 0x805CA2AC
    r8 = *(0x90 + r4); // lbz @ 0x805CA2B0
    *(0x90 + r3) = r8; // stb @ 0x805CA2B4
    r8 = *(0x91 + r4); // lbz @ 0x805CA2B8
    *(0x91 + r3) = r8; // stb @ 0x805CA2BC
    r8 = *(0x92 + r4); // lbz @ 0x805CA2C0
    *(0x92 + r3) = r8; // stb @ 0x805CA2C4
    r8 = *(0x93 + r4); // lbz @ 0x805CA2C8
    *(0x93 + r3) = r8; // stb @ 0x805CA2CC
    r8 = *(0x95 + r4); // lbz @ 0x805CA2D0
    r9 = *(0x94 + r4); // lbz @ 0x805CA2D4
    *(0x94 + r3) = r9; // stb @ 0x805CA2D8
    *(0x95 + r3) = r8; // stb @ 0x805CA2DC
    r8 = *(0x97 + r4); // lbz @ 0x805CA2E0
    r9 = *(0x96 + r4); // lbz @ 0x805CA2E4
    *(0x96 + r3) = r9; // stb @ 0x805CA2E8
    *(0x97 + r3) = r8; // stb @ 0x805CA2EC
    r8 = *(0x99 + r4); // lbz @ 0x805CA2F0
    r9 = *(0x98 + r4); // lbz @ 0x805CA2F4
    *(0x98 + r3) = r9; // stb @ 0x805CA2F8
    *(0x99 + r3) = r8; // stb @ 0x805CA2FC
    r8 = *(0x9b + r4); // lbz @ 0x805CA300
    r9 = *(0x9a + r4); // lbz @ 0x805CA304
    *(0x9a + r3) = r9; // stb @ 0x805CA308
    *(0x9b + r3) = r8; // stb @ 0x805CA30C
    r8 = *(0x9c + r4); // lbz @ 0x805CA310
    *(0x9c + r3) = r8; // stb @ 0x805CA314
    r8 = *(0x9d + r4); // lbz @ 0x805CA318
    *(0x9d + r3) = r8; // stb @ 0x805CA31C
    r8 = *(0x9e + r4); // lbz @ 0x805CA320
    *(0x9e + r3) = r8; // stb @ 0x805CA324
    r4 = *(0x9f + r4); // lbz @ 0x805CA328
    *(0x9f + r3) = r4; // stb @ 0x805CA32C
    r7 = r7 + 1; // 0x805CA330
    r6 = r6 + 1; // 0x805CA334
    if (<) goto 0x0x805ca1fc;
    /* li r27, 0 */ // 0x805CA344
    r0 = *(0 + r28); // lbz @ 0x805CA348
    if (==) goto 0x0x805ca394;
    r12 = *(0x120 + r29); // lwz @ 0x805CA354
    r3 = r29 + 0x120; // 0x805CA358
    r4 = r30;
    r12 = *(0x10 + r12); // lwz @ 0x805CA360
    /* mtctr r12 */ // 0x805CA364
    /* bctrl  */ // 0x805CA368
    r4 = *(0x124 + r29); // lbz @ 0x805CA36C
    r5 = r3;
    if (<=) goto 0x0x805ca380;
    /* li r4, 0x63 */ // 0x805CA37C
    r0 = *(0 + r28); // lbz @ 0x805CA380
    /* slwi r0, r0, 2 */ // 0x805CA384
    r3 = r29 + r0; // 0x805CA388
    r3 = *(0x44 + r3); // lwz @ 0x805CA38C
    *(0x85 + r3) = r4; // stb @ 0x805CA390
    r27 = r27 + 1; // 0x805CA394
    r28 = r28 + 1; // 0x805CA398
    if (<) goto 0x0x805ca348;
    /* li r31, 0 */ // 0x805CA3A4
    /* lis r28, 0 */ // 0x805CA3A8
    /* b 0x805ca430 */ // 0x805CA3AC
    r12 = *(0x160 + r29); // lwz @ 0x805CA3B0
    r3 = r29 + 0x160; // 0x805CA3B4
    r4 = r30;
    r12 = *(0x10 + r12); // lwz @ 0x805CA3BC
    /* mtctr r12 */ // 0x805CA3C0
    /* bctrl  */ // 0x805CA3C4
    r12 = *(0x168 + r29); // lwz @ 0x805CA3C8
    r5 = r3;
    r3 = r29 + 0x168; // 0x805CA3D0
    r4 = r30;
    r12 = *(0x10 + r12); // lwz @ 0x805CA3D8
    /* mtctr r12 */ // 0x805CA3DC
    /* bctrl  */ // 0x805CA3E0
    r0 = *(8 + r1); // lbz @ 0x805CA3E4
    r5 = r3;
    r6 = *(0x164 + r29); // lbz @ 0x805CA3EC
    /* slwi r0, r0, 2 */ // 0x805CA3F0
    r3 = r29 + r0; // 0x805CA3F4
    /* neg r4, r6 */ // 0x805CA3F8
    r0 = *(0x44 + r3); // lwz @ 0x805CA3FC
    r3 = r4 | r6; // 0x805CA400
    /* srwi r4, r3, 0x1f */ // 0x805CA404
    r3 = r0 + r31; // 0x805CA408
    *(0x94 + r3) = r4; // stb @ 0x805CA40C
    r0 = *(8 + r1); // lbz @ 0x805CA410
    r4 = *(0x16c + r29); // lbz @ 0x805CA414
    /* slwi r0, r0, 2 */ // 0x805CA418
    r3 = r29 + r0; // 0x805CA41C
    r0 = *(0x44 + r3); // lwz @ 0x805CA420
    r3 = r0 + r31; // 0x805CA424
    r31 = r31 + 1; // 0x805CA428
    *(0x88 + r3) = r4; // stb @ 0x805CA42C
    r3 = *(0 + r28); // lwz @ 0x805CA430
    r0 = *(0x24 + r3); // lbz @ 0x805CA434
    if (<) goto 0x0x805ca3b0;
    r12 = *(0x158 + r29); // lwz @ 0x805CA440
    r3 = r29 + 0x158; // 0x805CA444
    r4 = r30;
    r12 = *(0x10 + r12); // lwz @ 0x805CA44C
    /* mtctr r12 */ // 0x805CA450
    /* bctrl  */ // 0x805CA454
    r0 = *(8 + r1); // lbz @ 0x805CA458
    r5 = r3;
    if (==) goto 0x0x805ca47c;
    r0 = r0 rlwinm 2; // rlwinm
    r4 = *(0x15c + r29); // lbz @ 0x805CA46C
    r3 = r29 + r0; // 0x805CA470
    r3 = *(0x44 + r3); // lwz @ 0x805CA474
    *(0x86 + r3) = r4; // sth @ 0x805CA478
    r0 = *(9 + r1); // lbz @ 0x805CA47C
    if (==) goto 0x0x805ca49c;
    r0 = r0 rlwinm 2; // rlwinm
    r4 = *(0x15c + r29); // lbz @ 0x805CA48C
    r3 = r29 + r0; // 0x805CA490
    r3 = *(0x44 + r3); // lwz @ 0x805CA494
    *(0x86 + r3) = r4; // sth @ 0x805CA498
    /* li r27, 0 */ // 0x805CA4A0
    r0 = *(0 + r28); // lbz @ 0x805CA4A4
    if (==) goto 0x0x805ca4f8;
    /* li r31, 0 */ // 0x805CA4B0
    r12 = *(0x128 + r29); // lwz @ 0x805CA4B4
    r3 = r29 + 0x128; // 0x805CA4B8
    r4 = r30;
    r12 = *(0x10 + r12); // lwz @ 0x805CA4C0
    /* mtctr r12 */ // 0x805CA4C4
    /* bctrl  */ // 0x805CA4C8
    r0 = *(0 + r28); // lbz @ 0x805CA4CC
    r5 = r3;
    r4 = *(0x12c + r29); // lbz @ 0x805CA4D4
    /* slwi r0, r0, 2 */ // 0x805CA4D8
    r3 = r29 + r0; // 0x805CA4DC
    r0 = *(0x44 + r3); // lwz @ 0x805CA4E0
    r3 = r0 + r31; // 0x805CA4E4
    r31 = r31 + 1; // 0x805CA4E8
    *(0x80 + r3) = r4; // stb @ 0x805CA4F0
    if (<) goto 0x0x805ca4b4;
    r27 = r27 + 1; // 0x805CA4F8
    r28 = r28 + 1; // 0x805CA4FC
    if (<) goto 0x0x805ca4a4;
    r12 = *(0x130 + r29); // lwz @ 0x805CA508
    r3 = r29 + 0x130; // 0x805CA50C
    r4 = r30;
    r12 = *(0x10 + r12); // lwz @ 0x805CA514
    /* mtctr r12 */ // 0x805CA518
    /* bctrl  */ // 0x805CA51C
    r0 = *(8 + r1); // lbz @ 0x805CA520
    r27 = r3;
    r26 = *(0x134 + r29); // lhz @ 0x805CA528
    /* li r25, 0 */ // 0x805CA52C
    /* slwi r0, r0, 2 */ // 0x805CA530
    /* li r31, 1 */ // 0x805CA534
    r28 = r29 + r0; // 0x805CA538
    r0 = r31 << r25; // slw
    /* and. r0, r26, r0 */ // 0x805CA540
    if (==) goto 0x0x805ca5e0;
    r12 = *(0x138 + r29); // lwz @ 0x805CA548
    r3 = r29 + 0x138; // 0x805CA54C
    r4 = r30;
    r5 = r27;
    r12 = *(0x10 + r12); // lwz @ 0x805CA558
    /* mtctr r12 */ // 0x805CA55C
    /* bctrl  */ // 0x805CA560
    r12 = *(0x140 + r29); // lwz @ 0x805CA564
    r5 = r3;
    r3 = r29 + 0x140; // 0x805CA56C
    r4 = r30;
    r12 = *(0x10 + r12); // lwz @ 0x805CA574
    /* mtctr r12 */ // 0x805CA578
    /* bctrl  */ // 0x805CA57C
    r12 = *(0x148 + r29); // lwz @ 0x805CA580
    r5 = r3;
    r3 = r29 + 0x148; // 0x805CA588
    r4 = r30;
    r12 = *(0x10 + r12); // lwz @ 0x805CA590
    /* mtctr r12 */ // 0x805CA594
    /* bctrl  */ // 0x805CA598
    r12 = *(0x150 + r29); // lwz @ 0x805CA59C
    r5 = r3;
    r3 = r29 + 0x150; // 0x805CA5A4
    r4 = r30;
    r12 = *(0x10 + r12); // lwz @ 0x805CA5AC
    /* mtctr r12 */ // 0x805CA5B0
    /* bctrl  */ // 0x805CA5B4
    r9 = *(8 + r1); // lbz @ 0x805CA5B8
    r27 = r3;
    r4 = *(0x44 + r28); // lwz @ 0x805CA5C0
    r3 = r29;
    r5 = *(0x13c + r29); // lwz @ 0x805CA5C8
    /* extsh r9, r9 */ // 0x805CA5CC
    r6 = *(0x144 + r29); // lhz @ 0x805CA5D0
    r7 = *(0x14c + r29); // lbz @ 0x805CA5D4
    r8 = *(0x154 + r29); // lbz @ 0x805CA5D8
    FUN_805C9F78(); // bl 0x805C9F78
    r25 = r25 + 1; // 0x805CA5E0
    if (<) goto 0x0x805ca53c;
    r0 = *(0x34 + r1); // lwz @ 0x805CA5F0
    return;
}