/* Function at 0x805CD310, size=1040 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r25 */

int FUN_805CD310(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r25 */
    /* lis r5, 0 */ // 0x805CD318
    /* lis r4, 0 */ // 0x805CD31C
    *(0x44 + r1) = r0; // stw @ 0x805CD320
    /* li r8, 0 */ // 0x805CD324
    /* li r9, 0 */ // 0x805CD328
    /* li r10, 0 */ // 0x805CD32C
    /* stmw r25, 0x24(r1) */ // 0x805CD330
    /* lis r28, 0 */ // 0x805CD334
    r31 = r3;
    /* li r11, 0 */ // 0x805CD33C
    r28 = r28 + 0; // 0x805CD340
    /* li r25, 1 */ // 0x805CD344
    r7 = *(0 + r5); // lwz @ 0x805CD348
    r4 = *(0 + r4); // lwz @ 0x805CD34C
    r0 = *(0x24 + r7); // lbz @ 0x805CD350
    r5 = r7 + 0x28; // 0x805CD354
    /* b 0x805cd460 */ // 0x805CD358
    /* clrlwi r26, r11, 0x18 */ // 0x805CD35C
    /* mulli r6, r26, 0xf0 */ // 0x805CD360
    r6 = r5 + r6; // 0x805CD364
    r6 = *(0x10 + r6); // lwz @ 0x805CD368
    if (!=) goto 0x0x805cd400;
    /* li r12, 1 */ // 0x805CD374
    /* li r29, 0 */ // 0x805CD378
    r6 = r12 << r26; // slw
    /* b 0x805cd3d4 */ // 0x805CD380
    r26 = *(0x108 + r3); // lbz @ 0x805CD384
    /* clrlwi r30, r29, 0x18 */ // 0x805CD388
    if (==) goto 0x0x805cd3d0;
    r26 = *(0x109 + r3); // lbz @ 0x805CD394
    if (==) goto 0x0x805cd3d0;
    r27 = *(0xc + r4); // lwz @ 0x805CD3A0
    r26 = r29 rlwinm 2; // rlwinm
    /* lwzx r26, r27, r26 */ // 0x805CD3A8
    r26 = *(0x38 + r26); // lwz @ 0x805CD3AC
    /* rlwinm. r26, r26, 0, 0x1b, 0x1b */ // 0x805CD3B0
    if (!=) goto 0x0x805cd3d0;
    /* mulli r26, r30, 0x14 */ // 0x805CD3B8
    r26 = r3 + r26; // 0x805CD3BC
    r26 = *(0x14 + r26); // lhz @ 0x805CD3C0
    /* and. r26, r6, r26 */ // 0x805CD3C4
    if (!=) goto 0x0x805cd3d0;
    /* li r12, 0 */ // 0x805CD3CC
    r29 = r29 + 1; // 0x805CD3D0
    if (==) goto 0x0x805cd3ec;
    r26 = *(0x24 + r7); // lbz @ 0x805CD3DC
    /* clrlwi r27, r29, 0x18 */ // 0x805CD3E0
    if (<) goto 0x0x805cd384;
    if (==) goto 0x0x805cd45c;
    r6 = r9 | r6; // 0x805CD3F4
    /* clrlwi r9, r6, 0x10 */ // 0x805CD3F8
    /* b 0x805cd45c */ // 0x805CD3FC
    /* mulli r6, r26, 0x14 */ // 0x805CD400
    r27 = r3 + r6; // 0x805CD404
    r6 = *(0x12 + r27); // lbz @ 0x805CD408
    if (==) goto 0x0x805cd420;
    r6 = r25 << r26; // slw
    r6 = r8 | r6; // 0x805CD418
    /* clrlwi r8, r6, 0x10 */ // 0x805CD41C
    /* clrlwi r12, r11, 0x18 */ // 0x805CD420
    r6 = *(0x14 + r27); // lhz @ 0x805CD424
    r26 = r25 << r12; // slw
    /* and. r6, r26, r6 */ // 0x805CD42C
    if (==) goto 0x0x805cd43c;
    r6 = r9 | r26; // 0x805CD434
    /* clrlwi r9, r6, 0x10 */ // 0x805CD438
    r12 = *(0xc + r4); // lwz @ 0x805CD43C
    r6 = r11 rlwinm 2; // rlwinm
    /* lwzx r6, r12, r6 */ // 0x805CD444
    r6 = *(0x38 + r6); // lwz @ 0x805CD448
    /* rlwinm. r6, r6, 0, 0x1b, 0x1b */ // 0x805CD44C
    if (==) goto 0x0x805cd45c;
    r6 = r10 | r26; // 0x805CD454
    /* clrlwi r10, r6, 0x10 */ // 0x805CD458
    /* clrlwi r6, r11, 0x18 */ // 0x805CD460
    if (<) goto 0x0x805cd35c;
    *(0x150 + r3) = r8; // sth @ 0x805CD46C
    /* li r27, 0 */ // 0x805CD470
    *(0x158 + r3) = r9; // sth @ 0x805CD474
    *(0x160 + r3) = r10; // sth @ 0x805CD478
    r0 = *(0x108 + r3); // lbz @ 0x805CD47C
    if (==) goto 0x0x805cd48c;
    /* li r27, 1 */ // 0x805CD488
    r0 = *(0x109 + r3); // lbz @ 0x805CD48C
    if (==) goto 0x0x805cd4a0;
    r0 = r27 + 1; // 0x805CD498
    /* clrlwi r27, r0, 0x18 */ // 0x805CD49C
    *(0x168 + r3) = r27; // stb @ 0x805CD4A0
    r4 = r3 + 0xf8; // 0x805CD4A4
    /* li r5, 0 */ // 0x805CD4A8
    r12 = *(0x14c + r3); // lwzu @ 0x805CD4AC
    r12 = *(0xc + r12); // lwz @ 0x805CD4B0
    /* mtctr r12 */ // 0x805CD4B4
    /* bctrl  */ // 0x805CD4B8
    r12 = *(0x154 + r31); // lwz @ 0x805CD4BC
    r5 = r3;
    r3 = r31 + 0x154; // 0x805CD4C4
    r4 = r31 + 0xf8; // 0x805CD4C8
    r12 = *(0xc + r12); // lwz @ 0x805CD4CC
    /* mtctr r12 */ // 0x805CD4D0
    /* bctrl  */ // 0x805CD4D4
    r12 = *(0x15c + r31); // lwz @ 0x805CD4D8
    r5 = r3;
    r3 = r31 + 0x15c; // 0x805CD4E0
    r4 = r31 + 0xf8; // 0x805CD4E4
    r12 = *(0xc + r12); // lwz @ 0x805CD4E8
    /* mtctr r12 */ // 0x805CD4EC
    /* bctrl  */ // 0x805CD4F0
    r12 = *(0x164 + r31); // lwz @ 0x805CD4F4
    r5 = r3;
    r3 = r31 + 0x164; // 0x805CD4FC
    r4 = r31 + 0xf8; // 0x805CD500
    r12 = *(0xc + r12); // lwz @ 0x805CD504
    /* mtctr r12 */ // 0x805CD508
    /* bctrl  */ // 0x805CD50C
    /* lis r29, 0 */ // 0x805CD510
    r5 = r3;
    r29 = r29 + 0; // 0x805CD518
    /* li r26, 0 */ // 0x805CD51C
    /* li r30, 0 */ // 0x805CD520
    /* lis r25, 0 */ // 0x805CD524
    /* b 0x805cd6f4 */ // 0x805CD528
    /* clrlwi r0, r26, 0x18 */ // 0x805CD52C
    r10 = *(4 + r31); // lwz @ 0x805CD530
    r4 = r31 + r0; // 0x805CD534
    *(0x12 + r1) = r30; // stb @ 0x805CD538
    r0 = *(0x108 + r4); // lbz @ 0x805CD53C
    r6 = *(0xc + r10); // lwz @ 0x805CD540
    /* slwi r3, r0, 2 */ // 0x805CD544
    r0 = *(0x108 + r4); // lbz @ 0x805CD548
    /* lwzx r3, r6, r3 */ // 0x805CD54C
    *(0xc + r1) = r30; // sth @ 0x805CD550
    r3 = *(0x40 + r3); // lwz @ 0x805CD554
    *(0xe + r1) = r30; // stb @ 0x805CD558
    r9 = *(4 + r3); // lhz @ 0x805CD55C
    r8 = *(6 + r3); // lbz @ 0x805CD560
    r6 = *(0xa + r3); // lbz @ 0x805CD564
    r7 = *(8 + r3); // lhz @ 0x805CD568
    *(0x10 + r1) = r30; // sth @ 0x805CD56C
    *(0x130 + r31) = r0; // stb @ 0x805CD570
    r0 = *(0 + r28); // lbz @ 0x805CD574
    *(0x138 + r31) = r0; // stb @ 0x805CD578
    r0 = *(1 + r28); // lbz @ 0x805CD57C
    *(0x140 + r31) = r0; // stb @ 0x805CD580
    r0 = *(2 + r28); // lhz @ 0x805CD584
    *(0x148 + r31) = r0; // sth @ 0x805CD588
    r0 = *(0x108 + r4); // lbz @ 0x805CD58C
    r3 = *(0xc + r10); // lwz @ 0x805CD590
    /* slwi r0, r0, 2 */ // 0x805CD594
    *(8 + r1) = r29; // stw @ 0x805CD598
    /* lwzx r3, r3, r0 */ // 0x805CD59C
    *(0xc + r1) = r9; // sth @ 0x805CD5A0
    r0 = *(0x38 + r3); // lwz @ 0x805CD5A4
    *(0xe + r1) = r8; // stb @ 0x805CD5A8
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x805CD5AC
    *(0x10 + r1) = r7; // sth @ 0x805CD5B0
    *(0x12 + r1) = r6; // stb @ 0x805CD5B4
    if (==) goto 0x0x805cd648;
    if (==) goto 0x0x805cd648;
    /* li r0, 0x63 */ // 0x805CD5C8
    if (>) goto 0x0x805cd5d4;
    r0 = r9;
    /* clrlwi r0, r0, 0x18 */ // 0x805CD5D4
    if (<=) goto 0x0x805cd5fc;
    r0 = *(4 + r28); // lbz @ 0x805CD5E0
    *(0x138 + r31) = r0; // stb @ 0x805CD5E4
    r0 = *(5 + r28); // lbz @ 0x805CD5E8
    *(0x140 + r31) = r0; // stb @ 0x805CD5EC
    r0 = *(0x108 + r4); // lbz @ 0x805CD5F0
    *(0x148 + r31) = r0; // sth @ 0x805CD5F4
    /* b 0x805cd648 */ // 0x805CD5F8
    /* li r3, 0x63 */ // 0x805CD600
    if (>) goto 0x0x805cd60c;
    r3 = r9;
    r0 = *(0xc + r1); // lhz @ 0x805CD60C
    *(0x138 + r31) = r3; // stb @ 0x805CD610
    if (<=) goto 0x0x805cd624;
    /* li r3, 0x3b */ // 0x805CD61C
    /* b 0x805cd628 */ // 0x805CD620
    r3 = *(0xe + r1); // lbz @ 0x805CD624
    r0 = *(0xc + r1); // lhz @ 0x805CD628
    *(0x140 + r31) = r3; // stb @ 0x805CD62C
    if (<=) goto 0x0x805cd640;
    /* li r0, 0x3e7 */ // 0x805CD638
    /* b 0x805cd644 */ // 0x805CD63C
    r0 = *(0x10 + r1); // lhz @ 0x805CD640
    *(0x148 + r31) = r0; // sth @ 0x805CD644
    r6 = *(0 + r25); // lwz @ 0x805CD648
    r3 = r31 + 0x12c; // 0x805CD64C
    r0 = *(0x108 + r4); // lbz @ 0x805CD650
    r4 = r31 + 0xf8; // 0x805CD654
    r6 = *(0xc + r6); // lwz @ 0x805CD658
    /* slwi r0, r0, 2 */ // 0x805CD65C
    /* lwzx r6, r6, r0 */ // 0x805CD660
    r0 = *(0x50 + r6); // lhz @ 0x805CD664
    *(0x170 + r31) = r0; // sth @ 0x805CD668
    r12 = *(0x12c + r31); // lwz @ 0x805CD66C
    r12 = *(0xc + r12); // lwz @ 0x805CD670
    /* mtctr r12 */ // 0x805CD674
    /* bctrl  */ // 0x805CD678
    r12 = *(0x134 + r31); // lwz @ 0x805CD67C
    r5 = r3;
    r3 = r31 + 0x134; // 0x805CD684
    r4 = r31 + 0xf8; // 0x805CD688
    r12 = *(0xc + r12); // lwz @ 0x805CD68C
    /* mtctr r12 */ // 0x805CD690
    /* bctrl  */ // 0x805CD694
    r12 = *(0x13c + r31); // lwz @ 0x805CD698
    r5 = r3;
    r3 = r31 + 0x13c; // 0x805CD6A0
    r4 = r31 + 0xf8; // 0x805CD6A4
    r12 = *(0xc + r12); // lwz @ 0x805CD6A8
    /* mtctr r12 */ // 0x805CD6AC
    /* bctrl  */ // 0x805CD6B0
    r12 = *(0x144 + r31); // lwz @ 0x805CD6B4
    r5 = r3;
    r3 = r31 + 0x144; // 0x805CD6BC
    r4 = r31 + 0xf8; // 0x805CD6C0
    r12 = *(0xc + r12); // lwz @ 0x805CD6C4
    /* mtctr r12 */ // 0x805CD6C8
    /* bctrl  */ // 0x805CD6CC
    r12 = *(0x16c + r31); // lwz @ 0x805CD6D0
    r5 = r3;
    r3 = r31 + 0x16c; // 0x805CD6D8
    r4 = r31 + 0xf8; // 0x805CD6DC
    r12 = *(0xc + r12); // lwz @ 0x805CD6E0
    /* mtctr r12 */ // 0x805CD6E4
    /* bctrl  */ // 0x805CD6E8
    r5 = r3;
    r26 = r26 + 1; // 0x805CD6F0
    /* clrlwi r0, r26, 0x18 */ // 0x805CD6F4
    if (<) goto 0x0x805cd52c;
    r0 = r5 + 0x1f; // 0x805CD704
    r0 = r0 >> 5; // srawi
    /* slwi r3, r0, 2 */ // 0x805CD70C
    r0 = *(0x44 + r1); // lwz @ 0x805CD710
    return;
}