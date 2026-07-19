/* Function at 0x807B52E0, size=884 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 21 function(s) */

int FUN_807B52E0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x807B52F0
    r4 = r31 + 0; // 0x807B52F4
    *(0x18 + r1) = r30; // stw @ 0x807B52F8
    /* lis r30, 0 */ // 0x807B52FC
    r30 = r30 + 0; // 0x807B5300
    *(0x14 + r1) = r29; // stw @ 0x807B5304
    /* lis r29, 0 */ // 0x807B5308
    r29 = r29 + 0; // 0x807B530C
    /* lfs f1, 0(r30) */ // 0x807B5310
    r3 = r29 + 0xc; // 0x807B5314
    /* lfs f0, 0x38(r30) */ // 0x807B5318
    /* stfs f1, 0xc(r29) */ // 0x807B531C
    r5 = r29 + 0; // 0x807B5320
    /* stfs f0, 4(r3) */ // 0x807B5324
    /* stfs f1, 8(r3) */ // 0x807B5328
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f1, 0(r30) */ // 0x807B5330
    r3 = r29 + 0x24; // 0x807B5334
    /* lfs f0, 0x3c(r30) */ // 0x807B5338
    r4 = r31 + 0; // 0x807B533C
    /* stfs f1, 0x24(r29) */ // 0x807B5340
    r5 = r29 + 0x18; // 0x807B5344
    /* stfs f0, 4(r3) */ // 0x807B5348
    /* stfs f1, 8(r3) */ // 0x807B534C
    FUN_8091EFA4(r4, r5); // bl 0x8091EFA4
    /* lfs f1, 0(r30) */ // 0x807B5354
    r3 = r29 + 0x3c; // 0x807B5358
    /* lfs f0, 0x40(r30) */ // 0x807B535C
    r4 = r31 + 0; // 0x807B5360
    /* stfs f1, 0x3c(r29) */ // 0x807B5364
    r5 = r29 + 0x30; // 0x807B5368
    /* stfs f0, 4(r3) */ // 0x807B536C
    /* stfs f1, 8(r3) */ // 0x807B5370
    FUN_8091EFA4(r4, r5); // bl 0x8091EFA4
    /* lfs f2, 0(r30) */ // 0x807B5378
    r3 = r29 + 0x54; // 0x807B537C
    /* lfs f1, 0x44(r30) */ // 0x807B5380
    r4 = r31 + 0; // 0x807B5384
    /* lfs f0, 0x48(r30) */ // 0x807B5388
    r5 = r29 + 0x48; // 0x807B538C
    /* stfs f2, 0x54(r29) */ // 0x807B5390
    /* stfs f1, 4(r3) */ // 0x807B5394
    /* stfs f0, 8(r3) */ // 0x807B5398
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f2, 0(r30) */ // 0x807B53A0
    r3 = r29 + 0x6c; // 0x807B53A4
    /* lfs f1, 0x4c(r30) */ // 0x807B53A8
    r4 = r31 + 0; // 0x807B53AC
    /* lfs f0, 0x50(r30) */ // 0x807B53B0
    r5 = r29 + 0x60; // 0x807B53B4
    /* stfs f2, 0x6c(r29) */ // 0x807B53B8
    /* stfs f1, 4(r3) */ // 0x807B53BC
    /* stfs f0, 8(r3) */ // 0x807B53C0
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f2, 0x54(r30) */ // 0x807B53C8
    r3 = r29 + 0x84; // 0x807B53CC
    /* lfs f1, 0x58(r30) */ // 0x807B53D0
    r4 = r31 + 0; // 0x807B53D4
    /* lfs f0, 0x50(r30) */ // 0x807B53D8
    r5 = r29 + 0x78; // 0x807B53DC
    /* stfs f2, 0x84(r29) */ // 0x807B53E0
    /* stfs f1, 4(r3) */ // 0x807B53E4
    /* stfs f0, 8(r3) */ // 0x807B53E8
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f2, 0x5c(r30) */ // 0x807B53F0
    r3 = r29 + 0x9c; // 0x807B53F4
    /* lfs f1, 0x58(r30) */ // 0x807B53F8
    r4 = r31 + 0; // 0x807B53FC
    /* lfs f0, 0x50(r30) */ // 0x807B5400
    r5 = r29 + 0x90; // 0x807B5404
    /* stfs f2, 0x9c(r29) */ // 0x807B5408
    /* stfs f1, 4(r3) */ // 0x807B540C
    /* stfs f0, 8(r3) */ // 0x807B5410
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f2, 0(r30) */ // 0x807B5418
    r3 = r29 + 0xb4; // 0x807B541C
    /* lfs f1, 0x44(r30) */ // 0x807B5420
    r4 = r31 + 0; // 0x807B5424
    /* lfs f0, 0x60(r30) */ // 0x807B5428
    r5 = r29 + 0xa8; // 0x807B542C
    /* stfs f2, 0xb4(r29) */ // 0x807B5430
    /* stfs f1, 4(r3) */ // 0x807B5434
    /* stfs f0, 8(r3) */ // 0x807B5438
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f2, 0x64(r30) */ // 0x807B5440
    r3 = r29 + 0xcc; // 0x807B5444
    /* lfs f1, 0x44(r30) */ // 0x807B5448
    r4 = r31 + 0; // 0x807B544C
    /* lfs f0, 0(r30) */ // 0x807B5450
    r5 = r29 + 0xc0; // 0x807B5454
    /* stfs f2, 0xcc(r29) */ // 0x807B5458
    /* stfs f1, 4(r3) */ // 0x807B545C
    /* stfs f0, 8(r3) */ // 0x807B5460
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f2, 0x64(r30) */ // 0x807B5468
    r3 = r29 + 0xe4; // 0x807B546C
    /* lfs f1, 0x68(r30) */ // 0x807B5470
    r4 = r31 + 0; // 0x807B5474
    /* lfs f0, 0x6c(r30) */ // 0x807B5478
    r5 = r29 + 0xd8; // 0x807B547C
    /* stfs f2, 0xe4(r29) */ // 0x807B5480
    /* stfs f1, 4(r3) */ // 0x807B5484
    /* stfs f0, 8(r3) */ // 0x807B5488
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f2, 0x70(r30) */ // 0x807B5490
    r3 = r29 + 0xfc; // 0x807B5494
    /* lfs f1, 0x54(r30) */ // 0x807B5498
    r4 = r31 + 0; // 0x807B549C
    /* lfs f0, 0x74(r30) */ // 0x807B54A0
    r5 = r29 + 0xf0; // 0x807B54A4
    /* stfs f2, 0xfc(r29) */ // 0x807B54A8
    /* stfs f1, 4(r3) */ // 0x807B54AC
    /* stfs f0, 8(r3) */ // 0x807B54B0
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f2, 0x78(r30) */ // 0x807B54B8
    r3 = r29 + 0x114; // 0x807B54BC
    /* lfs f1, 0x44(r30) */ // 0x807B54C0
    r4 = r31 + 0; // 0x807B54C4
    /* lfs f0, 0(r30) */ // 0x807B54C8
    r5 = r29 + 0x108; // 0x807B54CC
    /* stfs f2, 0x114(r29) */ // 0x807B54D0
    /* stfs f1, 4(r3) */ // 0x807B54D4
    /* stfs f0, 8(r3) */ // 0x807B54D8
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f1, 0(r30) */ // 0x807B54E0
    r3 = r29 + 0x12c; // 0x807B54E4
    /* lfs f0, 0x7c(r30) */ // 0x807B54E8
    r4 = r31 + 0; // 0x807B54EC
    /* stfs f1, 0x12c(r29) */ // 0x807B54F0
    r5 = r29 + 0x120; // 0x807B54F4
    /* stfs f0, 4(r3) */ // 0x807B54F8
    /* stfs f1, 8(r3) */ // 0x807B54FC
    FUN_8091EFA4(r4, r5); // bl 0x8091EFA4
    /* lfs f1, 0(r30) */ // 0x807B5504
    r3 = r29 + 0x144; // 0x807B5508
    /* lfs f0, 0x80(r30) */ // 0x807B550C
    r4 = r31 + 0; // 0x807B5510
    /* stfs f1, 0x144(r29) */ // 0x807B5514
    r5 = r29 + 0x138; // 0x807B5518
    /* stfs f0, 4(r3) */ // 0x807B551C
    /* stfs f1, 8(r3) */ // 0x807B5520
    FUN_8091EFA4(r4, r5); // bl 0x8091EFA4
    /* lfs f1, 0(r30) */ // 0x807B5528
    r3 = r29 + 0x15c; // 0x807B552C
    /* lfs f0, 0x44(r30) */ // 0x807B5530
    r4 = r31 + 0; // 0x807B5534
    /* stfs f1, 0x15c(r29) */ // 0x807B5538
    r5 = r29 + 0x150; // 0x807B553C
    /* stfs f0, 4(r3) */ // 0x807B5540
    /* stfs f1, 8(r3) */ // 0x807B5544
    FUN_8091EFA4(r4, r5); // bl 0x8091EFA4
    /* lfs f1, 0(r30) */ // 0x807B554C
    r3 = r29 + 0x174; // 0x807B5550
    /* lfs f0, 0x84(r30) */ // 0x807B5554
    r4 = r31 + 0; // 0x807B5558
    /* stfs f1, 0x174(r29) */ // 0x807B555C
    r5 = r29 + 0x168; // 0x807B5560
    /* stfs f0, 4(r3) */ // 0x807B5564
    /* stfs f1, 8(r3) */ // 0x807B5568
    FUN_8091EFA4(r4, r5); // bl 0x8091EFA4
    /* lfs f2, 0(r30) */ // 0x807B5570
    r3 = r29 + 0x18c; // 0x807B5574
    /* lfs f1, 0x4c(r30) */ // 0x807B5578
    r4 = r31 + 0; // 0x807B557C
    /* lfs f0, 0x88(r30) */ // 0x807B5580
    r5 = r29 + 0x180; // 0x807B5584
    /* stfs f2, 0x18c(r29) */ // 0x807B5588
    /* stfs f1, 4(r3) */ // 0x807B558C
    /* stfs f0, 8(r3) */ // 0x807B5590
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f2, 0(r30) */ // 0x807B5598
    r3 = r29 + 0x1a4; // 0x807B559C
    /* lfs f1, 0x44(r30) */ // 0x807B55A0
    r4 = r31 + 0; // 0x807B55A4
    /* lfs f0, 0x88(r30) */ // 0x807B55A8
    r5 = r29 + 0x198; // 0x807B55AC
    /* stfs f2, 0x1a4(r29) */ // 0x807B55B0
    /* stfs f1, 4(r3) */ // 0x807B55B4
    /* stfs f0, 8(r3) */ // 0x807B55B8
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f2, 0(r30) */ // 0x807B55C0
    r3 = r29 + 0x1bc; // 0x807B55C4
    /* lfs f1, 0x44(r30) */ // 0x807B55C8
    r4 = r31 + 0; // 0x807B55CC
    /* lfs f0, 0x8c(r30) */ // 0x807B55D0
    r5 = r29 + 0x1b0; // 0x807B55D4
    /* stfs f2, 0x1bc(r29) */ // 0x807B55D8
    /* stfs f1, 4(r3) */ // 0x807B55DC
    /* stfs f0, 8(r3) */ // 0x807B55E0
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f2, 0(r30) */ // 0x807B55E8
    r3 = r29 + 0x1d4; // 0x807B55EC
    /* lfs f1, 0x90(r30) */ // 0x807B55F0
    r4 = r31 + 0; // 0x807B55F4
    /* lfs f0, 0x8c(r30) */ // 0x807B55F8
    r5 = r29 + 0x1c8; // 0x807B55FC
    /* stfs f2, 0x1d4(r29) */ // 0x807B5600
    /* stfs f1, 4(r3) */ // 0x807B5604
    /* stfs f0, 8(r3) */ // 0x807B5608
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f2, 0(r30) */ // 0x807B5610
    r3 = r29 + 0x1ec; // 0x807B5614
    /* lfs f1, 0x44(r30) */ // 0x807B5618
    r4 = r31 + 0; // 0x807B561C
    /* lfs f0, 0x94(r30) */ // 0x807B5620
    r5 = r29 + 0x1e0; // 0x807B5624
    /* stfs f2, 0x1ec(r29) */ // 0x807B5628
    /* stfs f1, 4(r3) */ // 0x807B562C
    /* stfs f0, 8(r3) */ // 0x807B5630
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    r0 = *(0x24 + r1); // lwz @ 0x807B5638
    r31 = *(0x1c + r1); // lwz @ 0x807B563C
    r30 = *(0x18 + r1); // lwz @ 0x807B5640
    r29 = *(0x14 + r1); // lwz @ 0x807B5644
    return;
}