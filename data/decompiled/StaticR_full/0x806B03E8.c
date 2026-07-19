/* Function at 0x806B03E8, size=728 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r26 */
/* Calls: 3 function(s) */

int FUN_806B03E8(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -48(r1) */
    /* saved r26 */
    /* lis r3, 0 */ // 0x806B03F0
    /* li r4, 0 */ // 0x806B03F4
    *(0x34 + r1) = r0; // stw @ 0x806B03F8
    /* stmw r26, 0x18(r1) */ // 0x806B03FC
    r3 = *(0 + r3); // lwz @ 0x806B0400
    FUN_806E9970(r3, r4); // bl 0x806E9970
    /* lis r4, 0 */ // 0x806B0408
    r28 = r3;
    r4 = *(0 + r4); // lwz @ 0x806B0410
    r4 = *(0 + r4); // lwz @ 0x806B0414
    r0 = *(0 + r4); // lwz @ 0x806B0418
    if (<) goto 0x0x806b042c;
    if (<=) goto 0x0x806b0440;
    if (<) goto 0x0x806b055c;
    if (<=) goto 0x0x806b04d0;
    /* b 0x806b055c */ // 0x806B043C
    /* clrlwi r0, r3, 0x18 */ // 0x806B0440
    /* lis r4, 0 */ // 0x806B0444
    /* mulli r0, r0, 0xf0 */ // 0x806B0448
    r5 = *(0 + r4); // lwz @ 0x806B044C
    /* lis r4, 0 */ // 0x806B0450
    r5 = r5 + r0; // 0x806B0454
    r4 = r4 + 0; // 0x806B0458
    r0 = *(0xd00 + r5); // lhz @ 0x806B045C
    *(0x10 + r1) = r4; // stw @ 0x806B0460
    *(0x14 + r1) = r0; // sth @ 0x806B0468
    if (<=) goto 0x0x806b0478;
    /* li r0, 0x270f */ // 0x806B0470
    *(0x14 + r1) = r0; // sth @ 0x806B0474
    r0 = *(0x14 + r1); // lhz @ 0x806B0478
    if (>=) goto 0x0x806b048c;
    /* li r0, 1 */ // 0x806B0484
    *(0x14 + r1) = r0; // sth @ 0x806B0488
    /* lis r4, 0 */ // 0x806B048C
    r6 = *(0x14 + r1); // lhz @ 0x806B0490
    r7 = *(0 + r4); // lwz @ 0x806B0494
    r0 = *(0x36 + r7); // lha @ 0x806B0498
    if (<) goto 0x0x806b04c0;
    /* lis r4, 1 */ // 0x806B04A4
    /* clrlwi r5, r0, 0x18 */ // 0x806B04A8
    r0 = r4 + -0x6c10; // 0x806B04AC
    r0 = r0 * r5; // 0x806B04B0
    r4 = r7 + r0; // 0x806B04B4
    r4 = r4 + 0x38; // 0x806B04B8
    /* b 0x806b04c4 */ // 0x806B04BC
    /* li r4, 0 */ // 0x806B04C0
    /* addis r4, r4, 1 */ // 0x806B04C4
    *(-0x6fe8 + r4) = r6; // sth @ 0x806B04C8
    /* b 0x806b055c */ // 0x806B04CC
    /* clrlwi r0, r3, 0x18 */ // 0x806B04D0
    /* lis r4, 0 */ // 0x806B04D4
    /* mulli r0, r0, 0xf0 */ // 0x806B04D8
    r5 = *(0 + r4); // lwz @ 0x806B04DC
    /* lis r4, 0 */ // 0x806B04E0
    r5 = r5 + r0; // 0x806B04E4
    r4 = r4 + 0; // 0x806B04E8
    r0 = *(0xd00 + r5); // lhz @ 0x806B04EC
    *(8 + r1) = r4; // stw @ 0x806B04F0
    *(0xc + r1) = r0; // sth @ 0x806B04F8
    if (<=) goto 0x0x806b0508;
    /* li r0, 0x270f */ // 0x806B0500
    *(0xc + r1) = r0; // sth @ 0x806B0504
    r0 = *(0xc + r1); // lhz @ 0x806B0508
    if (>=) goto 0x0x806b051c;
    /* li r0, 1 */ // 0x806B0514
    *(0xc + r1) = r0; // sth @ 0x806B0518
    /* lis r4, 0 */ // 0x806B051C
    r6 = *(0xc + r1); // lhz @ 0x806B0520
    r7 = *(0 + r4); // lwz @ 0x806B0524
    r0 = *(0x36 + r7); // lha @ 0x806B0528
    if (<) goto 0x0x806b0550;
    /* lis r4, 1 */ // 0x806B0534
    /* clrlwi r5, r0, 0x18 */ // 0x806B0538
    r0 = r4 + -0x6c10; // 0x806B053C
    r0 = r0 * r5; // 0x806B0540
    r4 = r7 + r0; // 0x806B0544
    r4 = r4 + 0x38; // 0x806B0548
    /* b 0x806b0554 */ // 0x806B054C
    /* li r4, 0 */ // 0x806B0550
    /* addis r4, r4, 1 */ // 0x806B0554
    *(-0x6fe0 + r4) = r6; // sth @ 0x806B0558
    /* clrlwi r0, r3, 0x18 */ // 0x806B055C
    /* li r6, 0 */ // 0x806B0560
    /* mulli r27, r0, 0xf0 */ // 0x806B0564
    /* li r26, 0 */ // 0x806B0568
    /* lis r29, 0 */ // 0x806B056C
    /* lis r31, 0 */ // 0x806B0570
    /* lis r30, 0 */ // 0x806B0574
    /* clrlwi r3, r26, 0x18 */ // 0x806B0578
    if (==) goto 0x0x806b0718;
    r5 = *(0 + r30); // lwz @ 0x806B0584
    r0 = *(0x98 + r5); // lwz @ 0x806B0588
    r3 = r0 + r3; // 0x806B058C
    r0 = *(0x2d8 + r3); // lbz @ 0x806B0590
    /* extsb. r4, r0 */ // 0x806B0594
    if (<) goto 0x0x806b0718;
    r3 = *(0 + r5); // lwz @ 0x806B059C
    r3 = *(0x404 + r3); // lwz @ 0x806B05A0
    FUN_80659814(); // bl 0x80659814
    r4 = *(0 + r30); // lwz @ 0x806B05A8
    r4 = *(0 + r4); // lwz @ 0x806B05AC
    r0 = *(0 + r4); // lwz @ 0x806B05B0
    if (<) goto 0x0x806b05c4;
    if (<=) goto 0x0x806b05d8;
    if (<) goto 0x0x806b0644;
    if (<=) goto 0x0x806b0610;
    /* b 0x806b0644 */ // 0x806B05D4
    /* clrlwi r0, r26, 0x18 */ // 0x806B05D8
    r4 = *(0 + r29); // lwz @ 0x806B05DC
    /* mulli r0, r0, 0xf0 */ // 0x806B05E0
    r4 = r4 + r0; // 0x806B05E4
    r4 = *(0xd00 + r4); // lhz @ 0x806B05E8
    if (<=) goto 0x0x806b05f8;
    /* li r4, 0x270f */ // 0x806B05F4
    /* clrlwi r0, r4, 0x10 */ // 0x806B05F8
    if (>=) goto 0x0x806b0608;
    /* li r4, 1 */ // 0x806B0604
    *(0x1e + r3) = r4; // sth @ 0x806B0608
    /* b 0x806b0644 */ // 0x806B060C
    /* clrlwi r0, r26, 0x18 */ // 0x806B0610
    r4 = *(0 + r29); // lwz @ 0x806B0614
    /* mulli r0, r0, 0xf0 */ // 0x806B0618
    r4 = r4 + r0; // 0x806B061C
    r4 = *(0xd00 + r4); // lhz @ 0x806B0620
    if (<=) goto 0x0x806b0630;
    /* li r4, 0x270f */ // 0x806B062C
    /* clrlwi r0, r4, 0x10 */ // 0x806B0630
    if (>=) goto 0x0x806b0640;
    /* li r4, 1 */ // 0x806B063C
    *(0x20 + r3) = r4; // sth @ 0x806B0640
    r6 = *(0 + r30); // lwz @ 0x806B0644
    r4 = *(0 + r6); // lwz @ 0x806B0648
    r4 = *(0 + r4); // lwz @ 0x806B064C
    r0 = r4 + -0x68; // 0x806B0650
    if (>) goto 0x0x806b0714;
    r4 = r31 + 0; // 0x806B065C
    /* slwi r0, r0, 2 */ // 0x806B0660
    /* lwzx r4, r4, r0 */ // 0x806B0664
    /* mtctr r4 */ // 0x806B0668
    /* bctr  */ // 0x806B066C
    /* clrlwi r0, r26, 0x18 */ // 0x806B0670
    r5 = *(0 + r29); // lwz @ 0x806B0674
    /* mulli r4, r0, 0xf0 */ // 0x806B0678
    r0 = r5 + 0x28; // 0x806B067C
    r8 = r5 + 0xc18; // 0x806B0680
    r5 = r0 + r4; // 0x806B0684
    r7 = r0 + r27; // 0x806B0688
    r6 = r8 + r27; // 0x806B068C
    r4 = r8 + r4; // 0x806B0690
    r7 = *(0xd8 + r7); // lhz @ 0x806B0694
    r6 = *(0xda + r6); // lhz @ 0x806B0698
    r0 = *(0xda + r4); // lhz @ 0x806B069C
    r5 = *(0xd8 + r5); // lhz @ 0x806B06A0
    /* subf r4, r7, r6 */ // 0x806B06A4
    /* subf r0, r5, r0 */ // 0x806B06A8
    if (<=) goto 0x0x806b06bc;
    FUN_805A9614(); // bl 0x805A9614
    /* b 0x806b0714 */ // 0x806B06B8
    if (>=) goto 0x0x806b0714;
}