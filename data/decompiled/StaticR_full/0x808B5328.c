/* Function at 0x808B5328, size=1036 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_808B5328(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x808B533C
    r29 = r3;
    FUN_808B3318(); // bl 0x808B3318
    /* lis r5, 0 */ // 0x808B5348
    r3 = r29;
    r0 = *(0 + r5); // lwz @ 0x808B5350
    *(8 + r1) = r0; // stw @ 0x808B5358
    /* li r5, 1 */ // 0x808B535C
    FUN_808B4A2C(r3, r4, r5); // bl 0x808B4A2C
    /* lis r3, 0 */ // 0x808B5364
    r5 = *(0 + r3); // lwz @ 0x808B5368
    r0 = *(0x36 + r5); // lha @ 0x808B536C
    if (<) goto 0x0x808b5394;
    /* lis r3, 1 */ // 0x808B5378
    /* clrlwi r4, r0, 0x18 */ // 0x808B537C
    r0 = r3 + -0x6c10; // 0x808B5380
    r0 = r0 * r4; // 0x808B5384
    r3 = r5 + r0; // 0x808B5388
    r31 = r3 + 0x38; // 0x808B538C
    /* b 0x808b5398 */ // 0x808B5390
    /* li r31, 0 */ // 0x808B5394
    FUN_808CFE7C(); // bl 0x808CFE7C
    /* slwi r30, r3, 2 */ // 0x808B539C
    /* addis r0, r31, 1 */ // 0x808B53A0
    r3 = r0 + r30; // 0x808B53A4
    r0 = *(-0x6eb8 + r3); // lwz @ 0x808B53A8
    if (==) goto 0x0x808b53c8;
    if (==) goto 0x0x808b53e0;
    if (==) goto 0x0x808b53f8;
    /* b 0x808b540c */ // 0x808B53C4
    /* lis r3, 0 */ // 0x808B53C8
    /* li r0, 2 */ // 0x808B53CC
    r3 = *(0 + r3); // lwz @ 0x808B53D0
    r3 = *(0x98 + r3); // lwz @ 0x808B53D4
    *(0x74 + r3) = r0; // stw @ 0x808B53D8
    /* b 0x808b540c */ // 0x808B53DC
    /* lis r3, 0 */ // 0x808B53E0
    /* li r0, 0 */ // 0x808B53E4
    r3 = *(0 + r3); // lwz @ 0x808B53E8
    r3 = *(0x98 + r3); // lwz @ 0x808B53EC
    *(0x74 + r3) = r0; // stw @ 0x808B53F0
    /* b 0x808b540c */ // 0x808B53F4
    /* lis r3, 0 */ // 0x808B53F8
    /* li r0, 1 */ // 0x808B53FC
    r3 = *(0 + r3); // lwz @ 0x808B5400
    r3 = *(0x98 + r3); // lwz @ 0x808B5404
    *(0x74 + r3) = r0; // stw @ 0x808B5408
    FUN_808CFA50(r3); // bl 0x808CFA50
    /* clrlwi r0, r3, 0x18 */ // 0x808B5410
    /* li r8, 1 */ // 0x808B5414
    /* lis r7, 0 */ // 0x808B541C
    /* subfic r4, r0, 0xc */ // 0x808B5420
    if (>=) goto 0x0x808b5520;
    /* rlwinm. r0, r4, 0x1d, 3, 0x1f */ // 0x808B5428
    /* mtctr r0 */ // 0x808B542C
    if (==) goto 0x0x808b5500;
    /* clrlwi r0, r3, 0x18 */ // 0x808B5434
    r6 = *(0 + r7); // lwz @ 0x808B5438
    /* mulli r5, r0, 0xf0 */ // 0x808B543C
    r3 = r3 + 1; // 0x808B5440
    /* clrlwi r0, r3, 0x18 */ // 0x808B5444
    r5 = r6 + r5; // 0x808B5448
    r3 = r3 + 1; // 0x808B544C
    *(0xc28 + r5) = r8; // stw @ 0x808B5450
    /* mulli r5, r0, 0xf0 */ // 0x808B5454
    /* clrlwi r0, r3, 0x18 */ // 0x808B5458
    r6 = *(0 + r7); // lwz @ 0x808B545C
    r3 = r3 + 1; // 0x808B5460
    r5 = r6 + r5; // 0x808B5464
    *(0xc28 + r5) = r8; // stw @ 0x808B5468
    /* mulli r5, r0, 0xf0 */ // 0x808B546C
    /* clrlwi r0, r3, 0x18 */ // 0x808B5470
    r6 = *(0 + r7); // lwz @ 0x808B5474
    r3 = r3 + 1; // 0x808B5478
    r5 = r6 + r5; // 0x808B547C
    *(0xc28 + r5) = r8; // stw @ 0x808B5480
    /* mulli r5, r0, 0xf0 */ // 0x808B5484
    /* clrlwi r0, r3, 0x18 */ // 0x808B5488
    r6 = *(0 + r7); // lwz @ 0x808B548C
    r3 = r3 + 1; // 0x808B5490
    r5 = r6 + r5; // 0x808B5494
    *(0xc28 + r5) = r8; // stw @ 0x808B5498
    /* mulli r5, r0, 0xf0 */ // 0x808B549C
    /* clrlwi r0, r3, 0x18 */ // 0x808B54A0
    r6 = *(0 + r7); // lwz @ 0x808B54A4
    r3 = r3 + 1; // 0x808B54A8
    r5 = r6 + r5; // 0x808B54AC
    *(0xc28 + r5) = r8; // stw @ 0x808B54B0
    /* mulli r5, r0, 0xf0 */ // 0x808B54B4
    /* clrlwi r0, r3, 0x18 */ // 0x808B54B8
    r6 = *(0 + r7); // lwz @ 0x808B54BC
    r3 = r3 + 1; // 0x808B54C0
    r5 = r6 + r5; // 0x808B54C4
    *(0xc28 + r5) = r8; // stw @ 0x808B54C8
    /* mulli r5, r0, 0xf0 */ // 0x808B54CC
    /* clrlwi r0, r3, 0x18 */ // 0x808B54D0
    r6 = *(0 + r7); // lwz @ 0x808B54D4
    r3 = r3 + 1; // 0x808B54D8
    r5 = r6 + r5; // 0x808B54DC
    *(0xc28 + r5) = r8; // stw @ 0x808B54E0
    /* mulli r5, r0, 0xf0 */ // 0x808B54E4
    r6 = *(0 + r7); // lwz @ 0x808B54E8
    r5 = r6 + r5; // 0x808B54EC
    *(0xc28 + r5) = r8; // stw @ 0x808B54F0
    if (counter-- != 0) goto 0x0x808b5434;
    /* andi. r4, r4, 7 */ // 0x808B54F8
    if (==) goto 0x0x808b5520;
    /* mtctr r4 */ // 0x808B5500
    /* clrlwi r0, r3, 0x18 */ // 0x808B5504
    r6 = *(0 + r7); // lwz @ 0x808B5508
    /* mulli r5, r0, 0xf0 */ // 0x808B550C
    r3 = r3 + 1; // 0x808B5510
    r5 = r6 + r5; // 0x808B5514
    *(0xc28 + r5) = r8; // stw @ 0x808B5518
    if (counter-- != 0) goto 0x0x808b5504;
    /* addis r0, r31, 1 */ // 0x808B5520
    /* li r29, 0 */ // 0x808B5524
    r3 = r0 + r30; // 0x808B5528
    r0 = *(-0x6ec8 + r3); // lwz @ 0x808B552C
    if (==) goto 0x0x808b554c;
    if (==) goto 0x0x808b5554;
    if (==) goto 0x0x808b555c;
    /* b 0x808b5564 */ // 0x808B5548
    /* li r29, 0 */ // 0x808B554C
    /* b 0x808b5678 */ // 0x808B5550
    /* li r29, 1 */ // 0x808B5554
    /* b 0x808b5678 */ // 0x808B5558
    /* li r29, 2 */ // 0x808B555C
    /* b 0x808b5678 */ // 0x808B5560
    FUN_808CFA50(); // bl 0x808CFA50
    /* clrlwi r0, r3, 0x18 */ // 0x808B5568
    /* li r8, 5 */ // 0x808B556C
    /* lis r7, 0 */ // 0x808B5574
    /* subfic r4, r0, 0xc */ // 0x808B5578
    if (>=) goto 0x0x808b5678;
    /* rlwinm. r0, r4, 0x1d, 3, 0x1f */ // 0x808B5580
    /* mtctr r0 */ // 0x808B5584
    if (==) goto 0x0x808b5658;
    /* clrlwi r0, r3, 0x18 */ // 0x808B558C
    r6 = *(0 + r7); // lwz @ 0x808B5590
    /* mulli r5, r0, 0xf0 */ // 0x808B5594
    r3 = r3 + 1; // 0x808B5598
    /* clrlwi r0, r3, 0x18 */ // 0x808B559C
    r5 = r6 + r5; // 0x808B55A0
    r3 = r3 + 1; // 0x808B55A4
    *(0xc28 + r5) = r8; // stw @ 0x808B55A8
    /* mulli r5, r0, 0xf0 */ // 0x808B55AC
    /* clrlwi r0, r3, 0x18 */ // 0x808B55B0
    r6 = *(0 + r7); // lwz @ 0x808B55B4
    r3 = r3 + 1; // 0x808B55B8
    r5 = r6 + r5; // 0x808B55BC
    *(0xc28 + r5) = r8; // stw @ 0x808B55C0
    /* mulli r5, r0, 0xf0 */ // 0x808B55C4
    /* clrlwi r0, r3, 0x18 */ // 0x808B55C8
    r6 = *(0 + r7); // lwz @ 0x808B55CC
    r3 = r3 + 1; // 0x808B55D0
    r5 = r6 + r5; // 0x808B55D4
    *(0xc28 + r5) = r8; // stw @ 0x808B55D8
    /* mulli r5, r0, 0xf0 */ // 0x808B55DC
    /* clrlwi r0, r3, 0x18 */ // 0x808B55E0
    r6 = *(0 + r7); // lwz @ 0x808B55E4
    r3 = r3 + 1; // 0x808B55E8
    r5 = r6 + r5; // 0x808B55EC
    *(0xc28 + r5) = r8; // stw @ 0x808B55F0
    /* mulli r5, r0, 0xf0 */ // 0x808B55F4
    /* clrlwi r0, r3, 0x18 */ // 0x808B55F8
    r6 = *(0 + r7); // lwz @ 0x808B55FC
    r3 = r3 + 1; // 0x808B5600
    r5 = r6 + r5; // 0x808B5604
    *(0xc28 + r5) = r8; // stw @ 0x808B5608
    /* mulli r5, r0, 0xf0 */ // 0x808B560C
    /* clrlwi r0, r3, 0x18 */ // 0x808B5610
    r6 = *(0 + r7); // lwz @ 0x808B5614
    r3 = r3 + 1; // 0x808B5618
    r5 = r6 + r5; // 0x808B561C
    *(0xc28 + r5) = r8; // stw @ 0x808B5620
    /* mulli r5, r0, 0xf0 */ // 0x808B5624
    /* clrlwi r0, r3, 0x18 */ // 0x808B5628
    r6 = *(0 + r7); // lwz @ 0x808B562C
    r3 = r3 + 1; // 0x808B5630
    r5 = r6 + r5; // 0x808B5634
    *(0xc28 + r5) = r8; // stw @ 0x808B5638
    /* mulli r5, r0, 0xf0 */ // 0x808B563C
    r6 = *(0 + r7); // lwz @ 0x808B5640
    r5 = r6 + r5; // 0x808B5644
    *(0xc28 + r5) = r8; // stw @ 0x808B5648
    if (counter-- != 0) goto 0x0x808b558c;
    /* andi. r4, r4, 7 */ // 0x808B5650
    if (==) goto 0x0x808b5678;
    /* mtctr r4 */ // 0x808B5658
    /* clrlwi r0, r3, 0x18 */ // 0x808B565C
    r6 = *(0 + r7); // lwz @ 0x808B5660
    /* mulli r5, r0, 0xf0 */ // 0x808B5664
    r3 = r3 + 1; // 0x808B5668
    r5 = r6 + r5; // 0x808B566C
    *(0xc28 + r5) = r8; // stw @ 0x808B5670
    if (counter-- != 0) goto 0x0x808b565c;
    /* lis r5, 0 */ // 0x808B5678
    /* addis r0, r31, 1 */ // 0x808B567C
    r4 = *(0 + r5); // lwz @ 0x808B5680
    r3 = r0 + r30; // 0x808B5684
    *(0x176c + r4) = r29; // stw @ 0x808B5688
    r0 = *(-0x6e98 + r3); // lwz @ 0x808B568C
    if (==) goto 0x0x808b56ac;
    if (==) goto 0x0x808b56bc;
    if (==) goto 0x0x808b56cc;
    /* b 0x808b56d8 */ // 0x808B56A8
    r3 = *(0 + r5); // lwz @ 0x808B56AC
    /* li r0, 1 */ // 0x808B56B0
    *(0x1770 + r3) = r0; // stw @ 0x808B56B4
    /* b 0x808b56d8 */ // 0x808B56B8
    r3 = *(0 + r5); // lwz @ 0x808B56BC
    /* li r0, 2 */ // 0x808B56C0
    *(0x1770 + r3) = r0; // stw @ 0x808B56C4
    /* b 0x808b56d8 */ // 0x808B56C8
    r3 = *(0 + r5); // lwz @ 0x808B56CC
    /* li r0, 0 */ // 0x808B56D0
    *(0x1770 + r3) = r0; // stw @ 0x808B56D4
    /* addis r0, r31, 1 */ // 0x808B56D8
    r3 = r0 + r30; // 0x808B56DC
    r0 = *(-0x6e88 + r3); // lwz @ 0x808B56E0
    if (>) goto 0x0x808b57c4;
    /* lis r3, 0 */ // 0x808B56EC
    /* slwi r0, r0, 2 */ // 0x808B56F0
    r3 = r3 + 0; // 0x808B56F4
    /* lwzx r3, r3, r0 */ // 0x808B56F8
    /* mtctr r3 */ // 0x808B56FC
    /* bctr  */ // 0x808B5700
    /* lis r3, 0 */ // 0x808B5704
    /* li r0, 2 */ // 0x808B5708
    r3 = *(0 + r3); // lwz @ 0x808B570C
    r3 = *(0x98 + r3); // lwz @ 0x808B5710
    *(0x64 + r3) = r0; // stw @ 0x808B5714
    /* b 0x808b57d8 */ // 0x808B5718
    /* lis r3, 0 */ // 0x808B571C
    /* li r0, 3 */ // 0x808B5720
    r3 = *(0 + r3); // lwz @ 0x808B5724
    r3 = *(0x98 + r3); // lwz @ 0x808B5728
    *(0x64 + r3) = r0; // stw @ 0x808B572C
    /* b 0x808b57d8 */ // 0x808B5730
}