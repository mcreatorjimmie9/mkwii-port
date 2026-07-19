/* Function at 0x805CC368, size=592 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 5 function(s) */

int FUN_805CC368(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stmw r25, 0x14(r1) */ // 0x805CC374
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r0 = *(0x106 + r3); // lbz @ 0x805CC384
    if (!=) goto 0x0x805cc5a4;
    /* lis r3, 0 */ // 0x805CC390
    /* li r4, 4 */ // 0x805CC394
    r3 = *(0 + r3); // lwz @ 0x805CC398
    FUN_805C5788(r3, r4); // bl 0x805C5788
    if (!=) goto 0x0x805cc5a4;
    /* lis r3, 0 */ // 0x805CC3A8
    /* mulli r0, r28, 0x18 */ // 0x805CC3AC
    r3 = *(0 + r3); // lwz @ 0x805CC3B0
    r3 = r3 + r0; // 0x805CC3B4
    r0 = *(0x3c4 + r3); // lbz @ 0x805CC3B8
    if (==) goto 0x0x805cc5a4;
    /* lis r3, 0 */ // 0x805CC3C4
    r6 = *(0 + r3); // lwz @ 0x805CC3C8
    r0 = *(0x24 + r6); // lbz @ 0x805CC3CC
    if (>=) goto 0x0x805cc5a4;
    if (<) goto 0x0x805cc3e4;
    /* b 0x805cc5a4 */ // 0x805CC3E0
    /* mulli r5, r27, 0xf0 */ // 0x805CC3E4
    r3 = *(4 + r26); // lwz @ 0x805CC3E8
    r4 = r27 rlwinm 2; // rlwinm
    r7 = *(0xc + r3); // lwz @ 0x805CC3F0
    r0 = r28 rlwinm 2; // rlwinm
    r3 = r6 + r5; // 0x805CC3F8
    r5 = *(0xf4 + r3); // lwz @ 0x805CC3FC
    /* lwzx r30, r7, r4 */ // 0x805CC400
    /* lwzx r29, r7, r0 */ // 0x805CC408
    if (!=) goto 0x0x805cc418;
    /* li r31, 0 */ // 0x805CC410
    /* b 0x805cc440 */ // 0x805CC414
    /* mulli r0, r28, 0xf0 */ // 0x805CC418
    r3 = r6 + r0; // 0x805CC41C
    r0 = *(0xf4 + r3); // lwz @ 0x805CC420
    if (!=) goto 0x0x805cc434;
    /* li r31, 0 */ // 0x805CC42C
    /* b 0x805cc440 */ // 0x805CC430
    /* subf r0, r5, r0 */ // 0x805CC434
    /* cntlzw r0, r0 */ // 0x805CC438
    /* srwi r31, r0, 5 */ // 0x805CC43C
    if (!=) goto 0x0x805cc5a4;
    /* lis r25, 0 */ // 0x805CC448
    /* lis r4, 0 */ // 0x805CC44C
    /* lis r5, 0 */ // 0x805CC450
    r6 = *(0 + r4); // lwz @ 0x805CC454
    r8 = *(0 + r5); // lwz @ 0x805CC458
    r4 = r28;
    r3 = *(0 + r25); // lwz @ 0x805CC460
    r5 = r27;
    /* li r7, 1 */ // 0x805CC468
    FUN_808F9D4C(r4, r5, r7); // bl 0x808F9D4C
    /* mulli r28, r27, 0x18 */ // 0x805CC470
    r0 = *(0 + r25); // lwz @ 0x805CC474
    r3 = r0 + r28; // 0x805CC478
    r0 = *(0x3c4 + r3); // lbz @ 0x805CC47C
    if (!=) goto 0x0x805cc4a0;
    /* lis r3, 0 */ // 0x805CC488
    r4 = r27;
    r3 = *(0 + r3); // lwz @ 0x805CC490
    FUN_8061D97C(r3, r4); // bl 0x8061D97C
    FUN_8061DFF8(r3, r4); // bl 0x8061DFF8
    FUN_8060EFB4(r3, r4); // bl 0x8060EFB4
    if (==) goto 0x0x805cc4f4;
    r3 = *(4 + r26); // lwz @ 0x805CC4A8
    r0 = *(0x22 + r30); // lhz @ 0x805CC4AC
    r3 = *(0x3c + r3); // lwz @ 0x805CC4B0
    r3 = *(4 + r3); // lwz @ 0x805CC4B4
    r3 = *(0x1d2 + r3); // lha @ 0x805CC4B8
    /* add. r0, r3, r0 */ // 0x805CC4BC
    if (>=) goto 0x0x805cc4c8;
    /* li r0, 0 */ // 0x805CC4C4
    *(0x22 + r30) = r0; // sth @ 0x805CC4C8
    r3 = *(4 + r26); // lwz @ 0x805CC4CC
    r0 = *(0x22 + r29); // lhz @ 0x805CC4D0
    r3 = *(0x3c + r3); // lwz @ 0x805CC4D4
    r3 = *(4 + r3); // lwz @ 0x805CC4D8
    r3 = *(0x1d0 + r3); // lha @ 0x805CC4DC
    /* add. r0, r3, r0 */ // 0x805CC4E0
    if (>=) goto 0x0x805cc4ec;
    /* li r0, 0 */ // 0x805CC4E8
    *(0x22 + r29) = r0; // sth @ 0x805CC4EC
    /* b 0x805cc53c */ // 0x805CC4F0
    r3 = *(4 + r26); // lwz @ 0x805CC4F4
    r0 = *(0x22 + r30); // lhz @ 0x805CC4F8
    r3 = *(0x3c + r3); // lwz @ 0x805CC4FC
    r3 = *(4 + r3); // lwz @ 0x805CC500
    r3 = *(0x1ce + r3); // lha @ 0x805CC504
    /* add. r0, r3, r0 */ // 0x805CC508
    if (>=) goto 0x0x805cc514;
    /* li r0, 0 */ // 0x805CC510
    *(0x22 + r30) = r0; // sth @ 0x805CC514
    r3 = *(4 + r26); // lwz @ 0x805CC518
    r0 = *(0x22 + r29); // lhz @ 0x805CC51C
    r3 = *(0x3c + r3); // lwz @ 0x805CC520
    r3 = *(4 + r3); // lwz @ 0x805CC524
    r3 = *(0x1c8 + r3); // lha @ 0x805CC528
    /* add. r0, r3, r0 */ // 0x805CC52C
    if (>=) goto 0x0x805cc538;
    /* li r0, 0 */ // 0x805CC534
    *(0x22 + r29) = r0; // sth @ 0x805CC538
    /* lis r3, 0 */ // 0x805CC53C
    r0 = *(0 + r3); // lwz @ 0x805CC540
    r3 = r0 + r28; // 0x805CC544
    r0 = *(0x3c4 + r3); // lbz @ 0x805CC548
    if (!=) goto 0x0x805cc5a4;
    if (!=) goto 0x0x805cc5a4;
    r3 = *(4 + r26); // lwz @ 0x805CC55C
    r0 = *(0x22 + r30); // lhz @ 0x805CC560
    r3 = *(0x3c + r3); // lwz @ 0x805CC564
    r3 = *(4 + r3); // lwz @ 0x805CC568
    r3 = *(0x1cc + r3); // lha @ 0x805CC56C
    /* add. r0, r3, r0 */ // 0x805CC570
    if (>=) goto 0x0x805cc57c;
    /* li r0, 0 */ // 0x805CC578
    *(0x22 + r30) = r0; // sth @ 0x805CC57C
    r3 = *(4 + r26); // lwz @ 0x805CC580
    r0 = *(0x22 + r29); // lhz @ 0x805CC584
    r3 = *(0x3c + r3); // lwz @ 0x805CC588
    r3 = *(4 + r3); // lwz @ 0x805CC58C
    r3 = *(0x1ca + r3); // lha @ 0x805CC590
    /* add. r0, r3, r0 */ // 0x805CC594
    if (>=) goto 0x0x805cc5a0;
    /* li r0, 0 */ // 0x805CC59C
    *(0x22 + r29) = r0; // sth @ 0x805CC5A0
    r0 = *(0x34 + r1); // lwz @ 0x805CC5A8
    return;
}