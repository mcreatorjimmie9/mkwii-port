/* Function at 0x808AC3A0, size=760 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 17 function(s) */

int FUN_808AC3A0(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x808AC3B0
    r4 = r31 + 0; // 0x808AC3B4
    *(0x18 + r1) = r30; // stw @ 0x808AC3B8
    *(0x14 + r1) = r29; // stw @ 0x808AC3BC
    /* lis r29, 0 */ // 0x808AC3C0
    r29 = r29 + 0; // 0x808AC3C4
    *(0x10 + r1) = r28; // stw @ 0x808AC3C8
    /* lis r28, 0 */ // 0x808AC3CC
    r28 = r28 + 0; // 0x808AC3D0
    /* lfs f2, 0x60(r29) */ // 0x808AC3D4
    r30 = r28 + 0xc0; // 0x808AC3D8
    /* lfs f1, 0(r29) */ // 0x808AC3DC
    /* lfs f0, 0x64(r29) */ // 0x808AC3E0
    r3 = r30;
    /* stfs f2, 0xc0(r28) */ // 0x808AC3E8
    r5 = r28 + 0; // 0x808AC3EC
    /* stfs f1, 4(r30) */ // 0x808AC3F0
    /* stfs f0, 8(r30) */ // 0x808AC3F4
    FUN_8091EFA4(r3, r5); // bl 0x8091EFA4
    /* lfs f2, 0x60(r29) */ // 0x808AC3FC
    r3 = r30 + 0xc; // 0x808AC400
    /* lfs f1, 0(r29) */ // 0x808AC404
    r4 = r31 + 0; // 0x808AC408
    /* lfs f0, 0x64(r29) */ // 0x808AC40C
    r5 = r28 + 0xc; // 0x808AC410
    /* stfs f2, 0xc(r30) */ // 0x808AC414
    /* stfs f1, 0x10(r30) */ // 0x808AC418
    /* stfs f0, 0x14(r30) */ // 0x808AC41C
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f2, 0x60(r29) */ // 0x808AC424
    r3 = r30 + 0x18; // 0x808AC428
    /* lfs f1, 0(r29) */ // 0x808AC42C
    r4 = r31 + 0; // 0x808AC430
    /* lfs f0, 0x64(r29) */ // 0x808AC434
    r5 = r28 + 0x18; // 0x808AC438
    /* stfs f2, 0x18(r30) */ // 0x808AC43C
    /* stfs f1, 0x1c(r30) */ // 0x808AC440
    /* stfs f0, 0x20(r30) */ // 0x808AC444
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f2, 0x68(r29) */ // 0x808AC44C
    r3 = r30 + 0x24; // 0x808AC450
    /* lfs f1, 0x6c(r29) */ // 0x808AC454
    r4 = r31 + 0; // 0x808AC458
    /* lfs f0, 0x70(r29) */ // 0x808AC45C
    r5 = r28 + 0x24; // 0x808AC460
    /* stfs f2, 0x24(r30) */ // 0x808AC464
    /* stfs f1, 0x28(r30) */ // 0x808AC468
    /* stfs f0, 0x2c(r30) */ // 0x808AC46C
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f0, 0x78(r29) */ // 0x808AC474
    r3 = r30 + 0x30; // 0x808AC478
    /* lfs f1, 0x74(r29) */ // 0x808AC47C
    r4 = r31 + 0; // 0x808AC480
    /* stfs f1, 0x30(r30) */ // 0x808AC484
    r5 = r28 + 0x30; // 0x808AC488
    /* stfs f0, 0x34(r30) */ // 0x808AC48C
    /* stfs f0, 0x38(r30) */ // 0x808AC490
    FUN_8091EFA4(r4, r5); // bl 0x8091EFA4
    /* lfs f2, 0x74(r29) */ // 0x808AC498
    r3 = r30 + 0x3c; // 0x808AC49C
    /* lfs f1, 0x78(r29) */ // 0x808AC4A0
    r4 = r31 + 0; // 0x808AC4A4
    /* lfs f0, 0x7c(r29) */ // 0x808AC4A8
    r5 = r28 + 0x3c; // 0x808AC4AC
    /* stfs f2, 0x3c(r30) */ // 0x808AC4B0
    /* stfs f1, 0x40(r30) */ // 0x808AC4B4
    /* stfs f0, 0x44(r30) */ // 0x808AC4B8
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f2, 0x80(r29) */ // 0x808AC4C0
    r3 = r30 + 0x48; // 0x808AC4C4
    /* lfs f1, 0x84(r29) */ // 0x808AC4C8
    r4 = r31 + 0; // 0x808AC4CC
    /* lfs f0, 0x88(r29) */ // 0x808AC4D0
    r5 = r28 + 0x48; // 0x808AC4D4
    /* stfs f2, 0x48(r30) */ // 0x808AC4D8
    /* stfs f1, 0x4c(r30) */ // 0x808AC4DC
    /* stfs f0, 0x50(r30) */ // 0x808AC4E0
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f2, 0x80(r29) */ // 0x808AC4E8
    r3 = r30 + 0x54; // 0x808AC4EC
    /* lfs f1, 0x88(r29) */ // 0x808AC4F0
    r4 = r31 + 0; // 0x808AC4F4
    /* lfs f0, 0x8c(r29) */ // 0x808AC4F8
    r5 = r28 + 0x54; // 0x808AC4FC
    /* stfs f2, 0x54(r30) */ // 0x808AC500
    /* stfs f1, 0x58(r30) */ // 0x808AC504
    /* stfs f0, 0x5c(r30) */ // 0x808AC508
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f2, 0x90(r29) */ // 0x808AC510
    r3 = r30 + 0x60; // 0x808AC514
    /* lfs f1, 0x94(r29) */ // 0x808AC518
    r4 = r31 + 0; // 0x808AC51C
    /* lfs f0, 0x78(r29) */ // 0x808AC520
    r5 = r28 + 0x60; // 0x808AC524
    /* stfs f2, 0x60(r30) */ // 0x808AC528
    /* stfs f1, 0x64(r30) */ // 0x808AC52C
    /* stfs f0, 0x68(r30) */ // 0x808AC530
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f2, 0x68(r29) */ // 0x808AC538
    r3 = r30 + 0x6c; // 0x808AC53C
    /* lfs f1, 0x6c(r29) */ // 0x808AC540
    r4 = r31 + 0; // 0x808AC544
    /* lfs f0, 0x98(r29) */ // 0x808AC548
    r5 = r28 + 0x6c; // 0x808AC54C
    /* stfs f2, 0x6c(r30) */ // 0x808AC550
    /* stfs f1, 0x70(r30) */ // 0x808AC554
    /* stfs f0, 0x74(r30) */ // 0x808AC558
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f2, 0x80(r29) */ // 0x808AC560
    r3 = r30 + 0x78; // 0x808AC564
    /* lfs f1, 0x9c(r29) */ // 0x808AC568
    r4 = r31 + 0; // 0x808AC56C
    /* lfs f0, 0xa0(r29) */ // 0x808AC570
    r5 = r28 + 0x78; // 0x808AC574
    /* stfs f2, 0x78(r30) */ // 0x808AC578
    /* stfs f1, 0x7c(r30) */ // 0x808AC57C
    /* stfs f0, 0x80(r30) */ // 0x808AC580
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f2, 0x80(r29) */ // 0x808AC588
    r3 = r30 + 0x84; // 0x808AC58C
    /* lfs f1, 0x84(r29) */ // 0x808AC590
    r4 = r31 + 0; // 0x808AC594
    /* lfs f0, 0xa4(r29) */ // 0x808AC598
    r5 = r28 + 0x84; // 0x808AC59C
    /* stfs f2, 0x84(r30) */ // 0x808AC5A0
    /* stfs f1, 0x88(r30) */ // 0x808AC5A4
    /* stfs f0, 0x8c(r30) */ // 0x808AC5A8
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f2, 0x74(r29) */ // 0x808AC5B0
    r3 = r30 + 0x90; // 0x808AC5B4
    /* lfs f1, 0(r29) */ // 0x808AC5B8
    r4 = r31 + 0; // 0x808AC5BC
    /* lfs f0, 0xa8(r29) */ // 0x808AC5C0
    r5 = r28 + 0x90; // 0x808AC5C4
    /* stfs f2, 0x90(r30) */ // 0x808AC5C8
    /* stfs f1, 0x94(r30) */ // 0x808AC5CC
    /* stfs f0, 0x98(r30) */ // 0x808AC5D0
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f2, 0x68(r29) */ // 0x808AC5D8
    r3 = r30 + 0x9c; // 0x808AC5DC
    /* lfs f1, 0x6c(r29) */ // 0x808AC5E0
    r4 = r31 + 0; // 0x808AC5E4
    /* lfs f0, 0x7c(r29) */ // 0x808AC5E8
    r5 = r28 + 0x9c; // 0x808AC5EC
    /* stfs f2, 0x9c(r30) */ // 0x808AC5F0
    /* stfs f1, 0xa0(r30) */ // 0x808AC5F4
    /* stfs f0, 0xa4(r30) */ // 0x808AC5F8
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f2, 0x90(r29) */ // 0x808AC600
    r3 = r30 + 0xa8; // 0x808AC604
    /* lfs f1, 0xac(r29) */ // 0x808AC608
    r4 = r31 + 0; // 0x808AC60C
    /* lfs f0, 0xa0(r29) */ // 0x808AC610
    r5 = r28 + 0xa8; // 0x808AC614
    /* stfs f2, 0xa8(r30) */ // 0x808AC618
    /* stfs f1, 0xac(r30) */ // 0x808AC61C
    /* stfs f0, 0xb0(r30) */ // 0x808AC620
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f0, 0x84(r29) */ // 0x808AC628
    r3 = r30 + 0xb4; // 0x808AC62C
    /* lfs f1, 0x90(r29) */ // 0x808AC630
    r4 = r31 + 0; // 0x808AC634
    /* stfs f1, 0xb4(r30) */ // 0x808AC638
    r5 = r28 + 0xb4; // 0x808AC63C
    /* stfs f0, 0xb8(r30) */ // 0x808AC640
    /* stfs f0, 0xbc(r30) */ // 0x808AC644
    FUN_8091EFA4(r4, r5); // bl 0x8091EFA4
    /* lis r8, 0 */ // 0x808AC64C
    r7 = *(0 + r8); // lwzu @ 0x808AC650
    r3 = r28 + 0x18c; // 0x808AC654
    *(0x18c + r28) = r7; // stw @ 0x808AC658
    r6 = *(4 + r8); // lwz @ 0x808AC65C
    r4 = r31 + 0; // 0x808AC660
    r0 = *(8 + r8); // lwz @ 0x808AC664
    r5 = r28 + 0x180; // 0x808AC668
    *(4 + r3) = r6; // stw @ 0x808AC66C
    *(8 + r3) = r0; // stw @ 0x808AC670
    FUN_8091EFA4(r4, r5); // bl 0x8091EFA4
    r0 = *(0x24 + r1); // lwz @ 0x808AC678
    r31 = *(0x1c + r1); // lwz @ 0x808AC67C
    r30 = *(0x18 + r1); // lwz @ 0x808AC680
    r29 = *(0x14 + r1); // lwz @ 0x808AC684
    r28 = *(0x10 + r1); // lwz @ 0x808AC688
    return;
}