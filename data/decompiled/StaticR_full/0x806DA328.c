/* Function at 0x806DA328, size=1052 bytes */
/* Stack frame: 256 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_806DA328(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -256(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806DA330
    r5 = r3;
    *(0xfc + r1) = r31; // stw @ 0x806DA33C
    *(0xf8 + r1) = r30; // stw @ 0x806DA340
    *(0xf4 + r1) = r29; // stw @ 0x806DA344
    r3 = *(0 + r4); // lwz @ 0x806DA348
    r3 = *(0x98 + r3); // lwz @ 0x806DA34C
    r0 = *(0x3c4 + r3); // lwz @ 0x806DA350
    if (==) goto 0x0x806da368;
    if (==) goto 0x0x806da370;
    /* b 0x806da374 */ // 0x806DA364
    /* li r29, 1 */ // 0x806DA368
    /* b 0x806da374 */ // 0x806DA36C
    /* li r29, 0 */ // 0x806DA370
    r4 = r5 + 0x68; // 0x806DA378
    FUN_805ABFC4(r3, r4); // bl 0x805ABFC4
    /* lis r3, 0 */ // 0x806DA380
    r31 = *(0xd0 + r1); // lwz @ 0x806DA384
    r4 = *(0 + r3); // lwz @ 0x806DA388
    r3 = r31;
    /* addis r30, r4, 2 */ // 0x806DA390
    FUN_805E0ED8(r3, r3); // bl 0x805E0ED8
    /* extsh. r0, r3 */ // 0x806DA398
    if (<) goto 0x0x806da490;
    r0 = *(0xc6 + r1); // lbz @ 0x806DA3A0
    r4 = *(0x4ffc + r30); // lwz @ 0x806DA3A4
    /* addis r4, r4, 2 */ // 0x806DA3AC
    r4 = r4 + 0x3308; // 0x806DA3B0
    if (!=) goto 0x0x806da3dc;
    /* clrlwi r0, r3, 0x10 */ // 0x806DA3B8
    /* mulli r3, r0, 0xa0 */ // 0x806DA3BC
    /* mulli r0, r29, 0x50 */ // 0x806DA3C0
    r3 = r4 + r3; // 0x806DA3C4
    r3 = r3 + r0; // 0x806DA3C8
    r0 = *(0x2330 + r3); // lwz @ 0x806DA3CC
    /* clrlwi r0, r0, 1 */ // 0x806DA3D0
    *(0x2330 + r3) = r0; // stw @ 0x806DA3D4
    /* b 0x806da490 */ // 0x806DA3D8
    /* clrlwi r0, r3, 0x10 */ // 0x806DA3DC
    /* li r3, 0x63 */ // 0x806DA3E0
    /* mulli r8, r0, 0xa0 */ // 0x806DA3E4
    /* mulli r7, r29, 0x50 */ // 0x806DA3E8
    r0 = r4 + r8; // 0x806DA3EC
    r6 = r0 + r7; // 0x806DA3F0
    r0 = *(0x2330 + r6); // lwz @ 0x806DA3F4
    r0 = r0 | 0x8000; // 0x806DA3F8
    *(0x2330 + r6) = r0; // stw @ 0x806DA3FC
    r0 = *(0xc0 + r1); // lhz @ 0x806DA400
    if (>) goto 0x0x806da410;
    r3 = r0;
    r0 = *(0x2330 + r6); // lwz @ 0x806DA410
    r0 = r3 rlwimi 0x18; // rlwimi
    *(0x2330 + r6) = r0; // stw @ 0x806DA418
    r0 = *(0xc0 + r1); // lhz @ 0x806DA41C
    if (<=) goto 0x0x806da430;
    /* li r3, 0x3b */ // 0x806DA428
    /* b 0x806da434 */ // 0x806DA42C
    r3 = *(0xc2 + r1); // lbz @ 0x806DA430
    r0 = *(0x2330 + r6); // lwz @ 0x806DA434
    r0 = r3 rlwimi 0x11; // rlwimi
    *(0x2330 + r6) = r0; // stw @ 0x806DA43C
    r0 = *(0xc0 + r1); // lhz @ 0x806DA440
    if (<=) goto 0x0x806da454;
    /* li r5, 0x3e7 */ // 0x806DA44C
    /* b 0x806da458 */ // 0x806DA450
    r5 = *(0xc4 + r1); // lhz @ 0x806DA454
    r0 = r4 + r8; // 0x806DA458
    r4 = *(0x2330 + r6); // lwz @ 0x806DA45C
    r3 = r0 + r7; // 0x806DA460
    r4 = r5 rlwimi 7; // rlwimi
    *(0x2330 + r6) = r4; // stw @ 0x806DA468
    /* li r0, 0x26 */ // 0x806DA46C
    r5 = r3 + 0x2333; // 0x806DA470
    /* mtctr r0 */ // 0x806DA478
    r3 = *(1 + r4); // lbz @ 0x806DA47C
    /* lbzu r0, 2(r4) */ // 0x806DA480
    *(1 + r5) = r3; // stb @ 0x806DA484
    /* stbu r0, 2(r5) */ // 0x806DA488
    if (counter-- != 0) goto 0x0x806da47c;
    /* lis r3, 0 */ // 0x806DA490
    r3 = *(0 + r3); // lwz @ 0x806DA494
    r3 = *(0x98 + r3); // lwz @ 0x806DA498
    r0 = *(0x3c4 + r3); // lwz @ 0x806DA49C
    if (!=) goto 0x0x806da71c;
    /* lis r3, 0 */ // 0x806DA4A8
    /* li r0, 0 */ // 0x806DA4AC
    r4 = *(0 + r3); // lwz @ 0x806DA4B0
    /* lis r3, 0 */ // 0x806DA4B4
    r3 = r3 + 0; // 0x806DA4B8
    *(8 + r1) = r3; // stw @ 0x806DA4BC
    r3 = r31;
    /* addis r30, r4, 2 */ // 0x806DA4C4
    *(0x12 + r1) = r0; // stb @ 0x806DA4C8
    *(0xc + r1) = r0; // sth @ 0x806DA4CC
    *(0xe + r1) = r0; // stb @ 0x806DA4D0
    *(0x10 + r1) = r0; // sth @ 0x806DA4D4
    FUN_805E0ED8(); // bl 0x805E0ED8
    /* extsh. r0, r3 */ // 0x806DA4DC
    if (>=) goto 0x0x806da4ec;
    /* li r6, 0 */ // 0x806DA4E4
    /* b 0x806da540 */ // 0x806DA4E8
    /* clrlwi r0, r3, 0x10 */ // 0x806DA4EC
    r3 = *(0x4ffc + r30); // lwz @ 0x806DA4F0
    /* mulli r0, r0, 0xa0 */ // 0x806DA4F4
    /* addis r3, r3, 2 */ // 0x806DA4F8
    r3 = r3 + 0x3308; // 0x806DA4FC
    r3 = r3 + r0; // 0x806DA500
    r3 = *(0x2380 + r3); // lwz @ 0x806DA504
    /* srwi r0, r3, 0x1f */ // 0x806DA508
    if (!=) goto 0x0x806da53c;
    r5 = r3 rlwinm 0x19; // rlwinm
    r4 = r3 rlwinm 0xf; // rlwinm
    r3 = r3 rlwinm 8; // rlwinm
    /* li r0, 1 */ // 0x806DA520
    *(0x12 + r1) = r0; // stb @ 0x806DA524
    /* li r6, 1 */ // 0x806DA528
    *(0xc + r1) = r3; // sth @ 0x806DA52C
    *(0xe + r1) = r4; // stb @ 0x806DA530
    *(0x10 + r1) = r5; // sth @ 0x806DA534
    /* b 0x806da540 */ // 0x806DA538
    /* li r6, 0 */ // 0x806DA53C
    /* lis r3, 0 */ // 0x806DA540
    /* neg r0, r6 */ // 0x806DA544
    r4 = *(0 + r3); // lwz @ 0x806DA548
    r0 = r0 | r6; // 0x806DA54C
    r3 = r31;
    /* srwi r30, r0, 0x1f */ // 0x806DA554
    /* addis r29, r4, 2 */ // 0x806DA558
    FUN_805E0ED8(r3); // bl 0x805E0ED8
    /* extsh. r0, r3 */ // 0x806DA560
    if (>=) goto 0x0x806da570;
    /* li r0, 0 */ // 0x806DA568
    /* b 0x806da58c */ // 0x806DA56C
    /* clrlwi r0, r3, 0x10 */ // 0x806DA570
    r3 = *(0x4ffc + r29); // lwz @ 0x806DA574
    /* mulli r0, r0, 0xa0 */ // 0x806DA578
    /* addis r3, r3, 2 */ // 0x806DA57C
    r3 = r3 + r0; // 0x806DA580
    r0 = *(0x5688 + r3); // lwz @ 0x806DA584
    /* srwi r0, r0, 0x1f */ // 0x806DA588
    r3 = r30 & r0; // 0x806DA58C
    /* neg r0, r3 */ // 0x806DA590
    r0 = r0 | r3; // 0x806DA594
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x806DA598
    if (==) goto 0x0x806da624;
    r0 = *(0xc6 + r1); // lbz @ 0x806DA5A0
    if (!=) goto 0x0x806da5b4;
    /* li r0, 0 */ // 0x806DA5AC
    /* b 0x806da61c */ // 0x806DA5B0
    r0 = *(0x12 + r1); // lbz @ 0x806DA5B4
    if (!=) goto 0x0x806da5c8;
    /* li r0, 1 */ // 0x806DA5C0
    /* b 0x806da61c */ // 0x806DA5C4
    r0 = *(0xc + r1); // lhz @ 0x806DA5C8
    r3 = *(0xc0 + r1); // lhz @ 0x806DA5CC
    if (>=) goto 0x0x806da5e0;
    /* li r0, 1 */ // 0x806DA5D8
    /* b 0x806da61c */ // 0x806DA5DC
    if (!=) goto 0x0x806da618;
    r0 = *(0xe + r1); // lbz @ 0x806DA5E4
    r3 = *(0xc2 + r1); // lbz @ 0x806DA5E8
    if (>=) goto 0x0x806da5fc;
    /* li r0, 1 */ // 0x806DA5F4
    /* b 0x806da61c */ // 0x806DA5F8
    if (!=) goto 0x0x806da618;
    r3 = *(0xc4 + r1); // lhz @ 0x806DA600
    r0 = *(0x10 + r1); // lhz @ 0x806DA604
    if (>=) goto 0x0x806da618;
    /* li r0, 1 */ // 0x806DA610
    /* b 0x806da61c */ // 0x806DA614
    /* li r0, 0 */ // 0x806DA618
    if (==) goto 0x0x806da71c;
    /* lis r4, 0 */ // 0x806DA624
    r3 = r31;
    r4 = *(0 + r4); // lwz @ 0x806DA62C
    /* addis r29, r4, 2 */ // 0x806DA630
    FUN_805E0ED8(r4, r3); // bl 0x805E0ED8
    /* extsh. r0, r3 */ // 0x806DA638
    if (<) goto 0x0x806da71c;
    r0 = *(0xc6 + r1); // lbz @ 0x806DA640
    r4 = *(0x4ffc + r29); // lwz @ 0x806DA644
    /* addis r4, r4, 2 */ // 0x806DA64C
    r4 = r4 + 0x3308; // 0x806DA650
    if (!=) goto 0x0x806da674;
    /* clrlwi r0, r3, 0x10 */ // 0x806DA658
    /* mulli r0, r0, 0xa0 */ // 0x806DA65C
    r3 = r4 + r0; // 0x806DA660
    r0 = *(0x2380 + r3); // lwz @ 0x806DA664
    /* clrlwi r0, r0, 1 */ // 0x806DA668
    *(0x2380 + r3) = r0; // stw @ 0x806DA66C
    /* b 0x806da71c */ // 0x806DA670
    /* clrlwi r0, r3, 0x10 */ // 0x806DA674
    /* li r3, 0x63 */ // 0x806DA678
    /* mulli r6, r0, 0xa0 */ // 0x806DA67C
    r5 = r4 + r6; // 0x806DA680
    r0 = *(0x2380 + r5); // lwz @ 0x806DA684
    r0 = r0 | 0x8000; // 0x806DA688
    *(0x2380 + r5) = r0; // stw @ 0x806DA68C
    r0 = *(0xc0 + r1); // lhz @ 0x806DA690
    if (>) goto 0x0x806da6a0;
    r3 = r0;
    r0 = *(0x2380 + r5); // lwz @ 0x806DA6A0
    r0 = r3 rlwimi 0x18; // rlwimi
    *(0x2380 + r5) = r0; // stw @ 0x806DA6A8
    r0 = *(0xc0 + r1); // lhz @ 0x806DA6AC
    if (<=) goto 0x0x806da6c0;
    /* li r3, 0x3b */ // 0x806DA6B8
    /* b 0x806da6c4 */ // 0x806DA6BC
    r3 = *(0xc2 + r1); // lbz @ 0x806DA6C0
    r0 = *(0x2380 + r5); // lwz @ 0x806DA6C4
    r0 = r3 rlwimi 0x11; // rlwimi
    *(0x2380 + r5) = r0; // stw @ 0x806DA6CC
    r0 = *(0xc0 + r1); // lhz @ 0x806DA6D0
    if (<=) goto 0x0x806da6e4;
    /* li r0, 0x3e7 */ // 0x806DA6DC
    /* b 0x806da6e8 */ // 0x806DA6E0
    r0 = *(0xc4 + r1); // lhz @ 0x806DA6E4
    r3 = r4 + r6; // 0x806DA6E8
    r4 = *(0x2380 + r5); // lwz @ 0x806DA6EC
    r4 = r0 rlwimi 7; // rlwimi
    *(0x2380 + r5) = r4; // stw @ 0x806DA6F4
    /* li r0, 0x26 */ // 0x806DA6F8
    r5 = r3 + 0x2383; // 0x806DA6FC
    /* mtctr r0 */ // 0x806DA704
    r3 = *(1 + r4); // lbz @ 0x806DA708
    /* lbzu r0, 2(r4) */ // 0x806DA70C
    *(1 + r5) = r3; // stb @ 0x806DA710
    /* stbu r0, 2(r5) */ // 0x806DA714
    if (counter-- != 0) goto 0x0x806da708;
    /* lis r3, 0 */ // 0x806DA71C
    r3 = *(0 + r3); // lwz @ 0x806DA720
    r3 = *(0x90 + r3); // lwz @ 0x806DA724
    FUN_806845FC(r3); // bl 0x806845FC
    /* lis r4, 0 */ // 0x806DA72C
    r4 = r4 + 0; // 0x806DA734
    /* li r5, 0xc */ // 0x806DA738
    /* li r6, 5 */ // 0x806DA73C
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
}