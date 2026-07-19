/* Function at 0x808EC078, size=1260 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_808EC078(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x808EC08C
    r29 = r3;
    FUN_808B3318(); // bl 0x808B3318
    /* lis r5, 0 */ // 0x808EC098
    r3 = r29;
    r0 = *(0 + r5); // lwz @ 0x808EC0A0
    *(8 + r1) = r0; // stw @ 0x808EC0A8
    /* li r5, 1 */ // 0x808EC0AC
    FUN_808B4A2C(r3, r4, r5); // bl 0x808B4A2C
    /* lis r3, 0 */ // 0x808EC0B4
    r5 = *(0 + r3); // lwz @ 0x808EC0B8
    r0 = *(0x36 + r5); // lha @ 0x808EC0BC
    if (<) goto 0x0x808ec0e4;
    /* lis r3, 1 */ // 0x808EC0C8
    /* clrlwi r4, r0, 0x18 */ // 0x808EC0CC
    r0 = r3 + -0x6c10; // 0x808EC0D0
    r0 = r0 * r4; // 0x808EC0D4
    r3 = r5 + r0; // 0x808EC0D8
    r31 = r3 + 0x38; // 0x808EC0DC
    /* b 0x808ec0e8 */ // 0x808EC0E0
    /* li r31, 0 */ // 0x808EC0E4
    /* li r29, 0 */ // 0x808EC0E8
    FUN_808CFA50(); // bl 0x808CFA50
    /* clrlwi r0, r3, 0x18 */ // 0x808EC0F0
    if (<) goto 0x0x808ec100;
    /* li r29, 2 */ // 0x808EC0FC
    /* slwi r30, r29, 2 */ // 0x808EC100
    /* addis r0, r31, 1 */ // 0x808EC104
    r3 = r0 + r30; // 0x808EC108
    r0 = *(-0x6eb8 + r3); // lwz @ 0x808EC10C
    if (==) goto 0x0x808ec12c;
    if (==) goto 0x0x808ec144;
    if (==) goto 0x0x808ec15c;
    /* b 0x808ec170 */ // 0x808EC128
    /* lis r3, 0 */ // 0x808EC12C
    /* li r0, 2 */ // 0x808EC130
    r3 = *(0 + r3); // lwz @ 0x808EC134
    r3 = *(0x98 + r3); // lwz @ 0x808EC138
    *(0x74 + r3) = r0; // stw @ 0x808EC13C
    /* b 0x808ec170 */ // 0x808EC140
    /* lis r3, 0 */ // 0x808EC144
    /* li r0, 0 */ // 0x808EC148
    r3 = *(0 + r3); // lwz @ 0x808EC14C
    r3 = *(0x98 + r3); // lwz @ 0x808EC150
    *(0x74 + r3) = r0; // stw @ 0x808EC154
    /* b 0x808ec170 */ // 0x808EC158
    /* lis r3, 0 */ // 0x808EC15C
    /* li r0, 1 */ // 0x808EC160
    r3 = *(0 + r3); // lwz @ 0x808EC164
    r3 = *(0x98 + r3); // lwz @ 0x808EC168
    *(0x74 + r3) = r0; // stw @ 0x808EC16C
    /* addis r0, r31, 1 */ // 0x808EC170
    r3 = r0 + r30; // 0x808EC174
    r0 = *(-0x6ed8 + r3); // lwz @ 0x808EC178
    if (==) goto 0x0x808ec1a0;
    if (==) goto 0x0x808ec1c4;
    if (==) goto 0x0x808ec1e8;
    if (==) goto 0x0x808ec20c;
    /* b 0x808ec22c */ // 0x808EC19C
    /* lis r4, 0 */ // 0x808EC1A0
    /* li r0, 0 */ // 0x808EC1A4
    r3 = *(0 + r4); // lwz @ 0x808EC1A8
    *(0x175c + r3) = r0; // stw @ 0x808EC1AC
    r3 = *(0 + r4); // lwz @ 0x808EC1B0
    r0 = *(0x1780 + r3); // lwz @ 0x808EC1B4
    r0 = r0 rlwinm 0; // rlwinm
    *(0x1780 + r3) = r0; // stw @ 0x808EC1BC
    /* b 0x808ec22c */ // 0x808EC1C0
    /* lis r4, 0 */ // 0x808EC1C4
    /* li r0, 1 */ // 0x808EC1C8
    r3 = *(0 + r4); // lwz @ 0x808EC1CC
    *(0x175c + r3) = r0; // stw @ 0x808EC1D0
    r3 = *(0 + r4); // lwz @ 0x808EC1D4
    r0 = *(0x1780 + r3); // lwz @ 0x808EC1D8
    r0 = r0 rlwinm 0; // rlwinm
    *(0x1780 + r3) = r0; // stw @ 0x808EC1E0
    /* b 0x808ec22c */ // 0x808EC1E4
    /* lis r4, 0 */ // 0x808EC1E8
    /* li r0, 2 */ // 0x808EC1EC
    r3 = *(0 + r4); // lwz @ 0x808EC1F0
    *(0x175c + r3) = r0; // stw @ 0x808EC1F4
    r3 = *(0 + r4); // lwz @ 0x808EC1F8
    r0 = *(0x1780 + r3); // lwz @ 0x808EC1FC
    r0 = r0 rlwinm 0; // rlwinm
    *(0x1780 + r3) = r0; // stw @ 0x808EC204
    /* b 0x808ec22c */ // 0x808EC208
    /* lis r4, 0 */ // 0x808EC20C
    /* li r0, 2 */ // 0x808EC210
    r3 = *(0 + r4); // lwz @ 0x808EC214
    *(0x175c + r3) = r0; // stw @ 0x808EC218
    r3 = *(0 + r4); // lwz @ 0x808EC21C
    r0 = *(0x1780 + r3); // lwz @ 0x808EC220
    r0 = r0 | 1; // 0x808EC224
    *(0x1780 + r3) = r0; // stw @ 0x808EC228
    FUN_808CFA50(); // bl 0x808CFA50
    /* clrlwi r0, r3, 0x18 */ // 0x808EC230
    /* li r8, 1 */ // 0x808EC234
    /* lis r7, 0 */ // 0x808EC23C
    /* subfic r4, r0, 0xc */ // 0x808EC240
    if (>=) goto 0x0x808ec340;
    /* rlwinm. r0, r4, 0x1d, 3, 0x1f */ // 0x808EC248
    /* mtctr r0 */ // 0x808EC24C
    if (==) goto 0x0x808ec320;
    /* clrlwi r0, r3, 0x18 */ // 0x808EC254
    r6 = *(0 + r7); // lwz @ 0x808EC258
    /* mulli r5, r0, 0xf0 */ // 0x808EC25C
    r3 = r3 + 1; // 0x808EC260
    /* clrlwi r0, r3, 0x18 */ // 0x808EC264
    r5 = r6 + r5; // 0x808EC268
    r3 = r3 + 1; // 0x808EC26C
    *(0xc28 + r5) = r8; // stw @ 0x808EC270
    /* mulli r5, r0, 0xf0 */ // 0x808EC274
    /* clrlwi r0, r3, 0x18 */ // 0x808EC278
    r6 = *(0 + r7); // lwz @ 0x808EC27C
    r3 = r3 + 1; // 0x808EC280
    r5 = r6 + r5; // 0x808EC284
    *(0xc28 + r5) = r8; // stw @ 0x808EC288
    /* mulli r5, r0, 0xf0 */ // 0x808EC28C
    /* clrlwi r0, r3, 0x18 */ // 0x808EC290
    r6 = *(0 + r7); // lwz @ 0x808EC294
    r3 = r3 + 1; // 0x808EC298
    r5 = r6 + r5; // 0x808EC29C
    *(0xc28 + r5) = r8; // stw @ 0x808EC2A0
    /* mulli r5, r0, 0xf0 */ // 0x808EC2A4
    /* clrlwi r0, r3, 0x18 */ // 0x808EC2A8
    r6 = *(0 + r7); // lwz @ 0x808EC2AC
    r3 = r3 + 1; // 0x808EC2B0
    r5 = r6 + r5; // 0x808EC2B4
    *(0xc28 + r5) = r8; // stw @ 0x808EC2B8
    /* mulli r5, r0, 0xf0 */ // 0x808EC2BC
    /* clrlwi r0, r3, 0x18 */ // 0x808EC2C0
    r6 = *(0 + r7); // lwz @ 0x808EC2C4
    r3 = r3 + 1; // 0x808EC2C8
    r5 = r6 + r5; // 0x808EC2CC
    *(0xc28 + r5) = r8; // stw @ 0x808EC2D0
    /* mulli r5, r0, 0xf0 */ // 0x808EC2D4
    /* clrlwi r0, r3, 0x18 */ // 0x808EC2D8
    r6 = *(0 + r7); // lwz @ 0x808EC2DC
    r3 = r3 + 1; // 0x808EC2E0
    r5 = r6 + r5; // 0x808EC2E4
    *(0xc28 + r5) = r8; // stw @ 0x808EC2E8
    /* mulli r5, r0, 0xf0 */ // 0x808EC2EC
    /* clrlwi r0, r3, 0x18 */ // 0x808EC2F0
    r6 = *(0 + r7); // lwz @ 0x808EC2F4
    r3 = r3 + 1; // 0x808EC2F8
    r5 = r6 + r5; // 0x808EC2FC
    *(0xc28 + r5) = r8; // stw @ 0x808EC300
    /* mulli r5, r0, 0xf0 */ // 0x808EC304
    r6 = *(0 + r7); // lwz @ 0x808EC308
    r5 = r6 + r5; // 0x808EC30C
    *(0xc28 + r5) = r8; // stw @ 0x808EC310
    if (counter-- != 0) goto 0x0x808ec254;
    /* andi. r4, r4, 7 */ // 0x808EC318
    if (==) goto 0x0x808ec340;
    /* mtctr r4 */ // 0x808EC320
    /* clrlwi r0, r3, 0x18 */ // 0x808EC324
    r6 = *(0 + r7); // lwz @ 0x808EC328
    /* mulli r5, r0, 0xf0 */ // 0x808EC32C
    r3 = r3 + 1; // 0x808EC330
    r5 = r6 + r5; // 0x808EC334
    *(0xc28 + r5) = r8; // stw @ 0x808EC338
    if (counter-- != 0) goto 0x0x808ec324;
    /* addis r0, r31, 1 */ // 0x808EC340
    /* li r29, 0 */ // 0x808EC344
    r3 = r0 + r30; // 0x808EC348
    r0 = *(-0x6ec8 + r3); // lwz @ 0x808EC34C
    if (==) goto 0x0x808ec36c;
    if (==) goto 0x0x808ec374;
    if (==) goto 0x0x808ec37c;
    /* b 0x808ec384 */ // 0x808EC368
    /* li r29, 0 */ // 0x808EC36C
    /* b 0x808ec498 */ // 0x808EC370
    /* li r29, 1 */ // 0x808EC374
    /* b 0x808ec498 */ // 0x808EC378
    /* li r29, 2 */ // 0x808EC37C
    /* b 0x808ec498 */ // 0x808EC380
    FUN_808CFA50(); // bl 0x808CFA50
    /* clrlwi r0, r3, 0x18 */ // 0x808EC388
    /* li r8, 5 */ // 0x808EC38C
    /* lis r7, 0 */ // 0x808EC394
    /* subfic r4, r0, 0xc */ // 0x808EC398
    if (>=) goto 0x0x808ec498;
    /* rlwinm. r0, r4, 0x1d, 3, 0x1f */ // 0x808EC3A0
    /* mtctr r0 */ // 0x808EC3A4
    if (==) goto 0x0x808ec478;
    /* clrlwi r0, r3, 0x18 */ // 0x808EC3AC
    r6 = *(0 + r7); // lwz @ 0x808EC3B0
    /* mulli r5, r0, 0xf0 */ // 0x808EC3B4
    r3 = r3 + 1; // 0x808EC3B8
    /* clrlwi r0, r3, 0x18 */ // 0x808EC3BC
    r5 = r6 + r5; // 0x808EC3C0
    r3 = r3 + 1; // 0x808EC3C4
    *(0xc28 + r5) = r8; // stw @ 0x808EC3C8
    /* mulli r5, r0, 0xf0 */ // 0x808EC3CC
    /* clrlwi r0, r3, 0x18 */ // 0x808EC3D0
    r6 = *(0 + r7); // lwz @ 0x808EC3D4
    r3 = r3 + 1; // 0x808EC3D8
    r5 = r6 + r5; // 0x808EC3DC
    *(0xc28 + r5) = r8; // stw @ 0x808EC3E0
    /* mulli r5, r0, 0xf0 */ // 0x808EC3E4
    /* clrlwi r0, r3, 0x18 */ // 0x808EC3E8
    r6 = *(0 + r7); // lwz @ 0x808EC3EC
    r3 = r3 + 1; // 0x808EC3F0
    r5 = r6 + r5; // 0x808EC3F4
    *(0xc28 + r5) = r8; // stw @ 0x808EC3F8
    /* mulli r5, r0, 0xf0 */ // 0x808EC3FC
    /* clrlwi r0, r3, 0x18 */ // 0x808EC400
    r6 = *(0 + r7); // lwz @ 0x808EC404
    r3 = r3 + 1; // 0x808EC408
    r5 = r6 + r5; // 0x808EC40C
    *(0xc28 + r5) = r8; // stw @ 0x808EC410
    /* mulli r5, r0, 0xf0 */ // 0x808EC414
    /* clrlwi r0, r3, 0x18 */ // 0x808EC418
    r6 = *(0 + r7); // lwz @ 0x808EC41C
    r3 = r3 + 1; // 0x808EC420
    r5 = r6 + r5; // 0x808EC424
    *(0xc28 + r5) = r8; // stw @ 0x808EC428
    /* mulli r5, r0, 0xf0 */ // 0x808EC42C
    /* clrlwi r0, r3, 0x18 */ // 0x808EC430
    r6 = *(0 + r7); // lwz @ 0x808EC434
    r3 = r3 + 1; // 0x808EC438
    r5 = r6 + r5; // 0x808EC43C
    *(0xc28 + r5) = r8; // stw @ 0x808EC440
    /* mulli r5, r0, 0xf0 */ // 0x808EC444
    /* clrlwi r0, r3, 0x18 */ // 0x808EC448
    r6 = *(0 + r7); // lwz @ 0x808EC44C
    r3 = r3 + 1; // 0x808EC450
    r5 = r6 + r5; // 0x808EC454
    *(0xc28 + r5) = r8; // stw @ 0x808EC458
    /* mulli r5, r0, 0xf0 */ // 0x808EC45C
    r6 = *(0 + r7); // lwz @ 0x808EC460
    r5 = r6 + r5; // 0x808EC464
    *(0xc28 + r5) = r8; // stw @ 0x808EC468
    if (counter-- != 0) goto 0x0x808ec3ac;
    /* andi. r4, r4, 7 */ // 0x808EC470
    if (==) goto 0x0x808ec498;
    /* mtctr r4 */ // 0x808EC478
    /* clrlwi r0, r3, 0x18 */ // 0x808EC47C
    r6 = *(0 + r7); // lwz @ 0x808EC480
    /* mulli r5, r0, 0xf0 */ // 0x808EC484
    r3 = r3 + 1; // 0x808EC488
    r5 = r6 + r5; // 0x808EC48C
    *(0xc28 + r5) = r8; // stw @ 0x808EC490
    if (counter-- != 0) goto 0x0x808ec47c;
    /* lis r5, 0 */ // 0x808EC498
    /* addis r0, r31, 1 */ // 0x808EC49C
    r4 = *(0 + r5); // lwz @ 0x808EC4A0
    r3 = r0 + r30; // 0x808EC4A4
    *(0x176c + r4) = r29; // stw @ 0x808EC4A8
    r0 = *(-0x6e98 + r3); // lwz @ 0x808EC4AC
    if (==) goto 0x0x808ec4cc;
    if (==) goto 0x0x808ec4dc;
    if (==) goto 0x0x808ec4ec;
    /* b 0x808ec4fc */ // 0x808EC4C8
    r3 = *(0 + r5); // lwz @ 0x808EC4CC
    /* li r0, 1 */ // 0x808EC4D0
    *(0x1770 + r3) = r0; // stw @ 0x808EC4D4
    /* b 0x808ec508 */ // 0x808EC4D8
    r3 = *(0 + r5); // lwz @ 0x808EC4DC
    /* li r0, 2 */ // 0x808EC4E0
    *(0x1770 + r3) = r0; // stw @ 0x808EC4E4
    /* b 0x808ec508 */ // 0x808EC4E8
    r3 = *(0 + r5); // lwz @ 0x808EC4EC
    /* li r0, 3 */ // 0x808EC4F0
    *(0x1770 + r3) = r0; // stw @ 0x808EC4F4
    /* b 0x808ec508 */ // 0x808EC4F8
    r3 = *(0 + r5); // lwz @ 0x808EC4FC
    /* li r0, 0 */ // 0x808EC500
    *(0x1770 + r3) = r0; // stw @ 0x808EC504
    /* addis r0, r31, 1 */ // 0x808EC508
    r3 = r0 + r30; // 0x808EC50C
    r0 = *(-0x6e88 + r3); // lwz @ 0x808EC510
    if (>) goto 0x0x808ec5f4;
    /* lis r3, 0 */ // 0x808EC51C
    /* slwi r0, r0, 2 */ // 0x808EC520
    r3 = r3 + 0; // 0x808EC524
    /* lwzx r3, r3, r0 */ // 0x808EC528
    /* mtctr r3 */ // 0x808EC52C
    /* bctr  */ // 0x808EC530
    /* lis r3, 0 */ // 0x808EC534
    /* li r0, 2 */ // 0x808EC538
    r3 = *(0 + r3); // lwz @ 0x808EC53C
    r3 = *(0x98 + r3); // lwz @ 0x808EC540
    *(0x64 + r3) = r0; // stw @ 0x808EC544
    /* b 0x808ec608 */ // 0x808EC548
    /* lis r3, 0 */ // 0x808EC54C
    /* li r0, 3 */ // 0x808EC550
    r3 = *(0 + r3); // lwz @ 0x808EC554
    r3 = *(0x98 + r3); // lwz @ 0x808EC558
    *(0x64 + r3) = r0; // stw @ 0x808EC55C
    /* b 0x808ec608 */ // 0x808EC560
}