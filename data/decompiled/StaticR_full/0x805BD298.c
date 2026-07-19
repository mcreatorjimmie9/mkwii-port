/* Function at 0x805BD298, size=780 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r22 */
/* Calls: 1 function(s) */

int FUN_805BD298(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r22 */
    /* li r10, 0 */ // 0x805BD2A0
    /* li r5, 0x11 */ // 0x805BD2A4
    *(0x34 + r1) = r0; // stw @ 0x805BD2A8
    /* li r0, 3 */ // 0x805BD2AC
    /* li r9, 2 */ // 0x805BD2B0
    /* li r8, 1 */ // 0x805BD2B4
    /* stmw r22, 8(r1) */ // 0x805BD2B8
    r31 = r3;
    /* li r11, 0 */ // 0x805BD2C0
    r4 = *(0x1780 + r3); // lwz @ 0x805BD2C4
    *(0x1758 + r3) = r5; // stw @ 0x805BD2C8
    r4 = r4 rlwinm 0; // rlwinm
    *(0x1760 + r3) = r10; // stw @ 0x805BD2D0
    *(0x1764 + r3) = r10; // stw @ 0x805BD2D4
    *(0x1778 + r3) = r10; // stw @ 0x805BD2D8
    *(0x175c + r3) = r9; // stw @ 0x805BD2DC
    *(0x176c + r3) = r8; // stw @ 0x805BD2E0
    *(0x1780 + r3) = r4; // stw @ 0x805BD2E4
    /* mtctr r0 */ // 0x805BD2E8
    /* clrlwi r4, r11, 0x18 */ // 0x805BD2EC
    /* mulli r7, r4, 0xf0 */ // 0x805BD2F4
    /* neg r5, r4 */ // 0x805BD2F8
    /* clrlwi r0, r11, 0x18 */ // 0x805BD2FC
    r6 = r3 + r7; // 0x805BD300
    r5 = r5 | r4; // 0x805BD304
    *(0xc24 + r6) = r10; // stw @ 0x805BD308
    /* srwi r4, r5, 0x1f */ // 0x805BD30C
    /* neg r5, r0 */ // 0x805BD310
    *(0xc20 + r6) = r8; // stw @ 0x805BD318
    /* mulli r7, r0, 0xf0 */ // 0x805BD31C
    r5 = r5 | r0; // 0x805BD320
    *(0xc28 + r6) = r4; // stw @ 0x805BD324
    /* clrlwi r0, r11, 0x18 */ // 0x805BD328
    /* srwi r4, r5, 0x1f */ // 0x805BD32C
    *(0xce4 + r6) = r9; // stw @ 0x805BD334
    r6 = r3 + r7; // 0x805BD338
    /* neg r5, r0 */ // 0x805BD33C
    *(0xc24 + r6) = r10; // stw @ 0x805BD340
    /* mulli r7, r0, 0xf0 */ // 0x805BD344
    r5 = r5 | r0; // 0x805BD348
    *(0xc20 + r6) = r8; // stw @ 0x805BD34C
    /* clrlwi r0, r11, 0x18 */ // 0x805BD350
    *(0xc28 + r6) = r4; // stw @ 0x805BD358
    /* srwi r4, r5, 0x1f */ // 0x805BD35C
    /* neg r5, r0 */ // 0x805BD360
    *(0xce4 + r6) = r9; // stw @ 0x805BD364
    r6 = r3 + r7; // 0x805BD368
    /* mulli r7, r0, 0xf0 */ // 0x805BD36C
    r5 = r5 | r0; // 0x805BD370
    *(0xc24 + r6) = r10; // stw @ 0x805BD374
    *(0xc20 + r6) = r8; // stw @ 0x805BD378
    *(0xc28 + r6) = r4; // stw @ 0x805BD37C
    /* srwi r4, r5, 0x1f */ // 0x805BD380
    *(0xce4 + r6) = r9; // stw @ 0x805BD384
    r6 = r3 + r7; // 0x805BD388
    *(0xc24 + r6) = r10; // stw @ 0x805BD38C
    *(0xc20 + r6) = r8; // stw @ 0x805BD390
    *(0xc28 + r6) = r4; // stw @ 0x805BD394
    *(0xce4 + r6) = r9; // stw @ 0x805BD398
    if (counter-- != 0) goto 0x0x805bd2ec;
    r4 = *(0x1780 + r3); // lwz @ 0x805BD3A0
    /* li r6, 1 */ // 0x805BD3A4
    /* li r0, 2 */ // 0x805BD3A8
    /* li r11, 0 */ // 0x805BD3AC
    r4 = r4 rlwinm 0; // rlwinm
    /* li r5, 3 */ // 0x805BD3B4
    *(0x1770 + r3) = r11; // stw @ 0x805BD3B8
    /* li r12, 0 */ // 0x805BD3BC
    *(0x176c + r3) = r6; // stw @ 0x805BD3C0
    *(0x177d + r3) = r5; // stb @ 0x805BD3C4
    *(0x175c + r3) = r6; // stw @ 0x805BD3C8
    *(0x1780 + r3) = r4; // stw @ 0x805BD3CC
    /* mtctr r0 */ // 0x805BD3D0
    /* clrlwi r10, r12, 0x18 */ // 0x805BD3D4
    /* mulli r5, r10, 0xf0 */ // 0x805BD3DC
    /* clrlwi r7, r0, 0x18 */ // 0x805BD3E4
    r9 = r3 + r5; // 0x805BD3EC
    /* clrlwi r8, r4, 0x18 */ // 0x805BD3F0
    *(0xcf0 + r9) = r11; // sth @ 0x805BD3F4
    /* clrlwi r6, r0, 0x18 */ // 0x805BD3F8
    *(0xcf6 + r9) = r11; // sth @ 0x805BD404
    /* clrlwi r5, r4, 0x18 */ // 0x805BD408
    /* clrlwi r4, r0, 0x18 */ // 0x805BD410
    *(0xcf9 + r9) = r10; // stb @ 0x805BD414
    r0 = r8 + 1; // 0x805BD418
    r7 = r7 + 1; // 0x805BD41C
    r6 = r6 + 1; // 0x805BD420
    *(0xcf8 + r9) = r10; // stb @ 0x805BD424
    r5 = r5 + 1; // 0x805BD428
    r4 = r4 + 1; // 0x805BD42C
    *(0xde0 + r9) = r11; // sth @ 0x805BD434
    *(0xde6 + r9) = r11; // sth @ 0x805BD438
    *(0xde9 + r9) = r0; // stb @ 0x805BD43C
    *(0xde8 + r9) = r0; // stb @ 0x805BD440
    *(0xed0 + r9) = r11; // sth @ 0x805BD444
    *(0xed6 + r9) = r11; // sth @ 0x805BD448
    *(0xed9 + r9) = r7; // stb @ 0x805BD44C
    *(0xed8 + r9) = r7; // stb @ 0x805BD450
    *(0xfc0 + r9) = r11; // sth @ 0x805BD454
    *(0xfc6 + r9) = r11; // sth @ 0x805BD458
    *(0xfc9 + r9) = r6; // stb @ 0x805BD45C
    *(0xfc8 + r9) = r6; // stb @ 0x805BD460
    *(0x10b0 + r9) = r11; // sth @ 0x805BD464
    *(0x10b6 + r9) = r11; // sth @ 0x805BD468
    *(0x10b9 + r9) = r5; // stb @ 0x805BD46C
    *(0x10b8 + r9) = r5; // stb @ 0x805BD470
    *(0x11a0 + r9) = r11; // sth @ 0x805BD474
    *(0x11a6 + r9) = r11; // sth @ 0x805BD478
    *(0x11a9 + r9) = r4; // stb @ 0x805BD47C
    *(0x11a8 + r9) = r4; // stb @ 0x805BD480
    if (counter-- != 0) goto 0x0x805bd3d4;
    r4 = *(0x2370 + r3); // lwz @ 0x805BD488
    /* li r11, 0 */ // 0x805BD48C
    /* li r0, 2 */ // 0x805BD490
    /* li r6, 3 */ // 0x805BD494
    /* li r5, 1 */ // 0x805BD498
    r4 = r4 rlwinm 0; // rlwinm
    *(0x177c + r3) = r11; // stb @ 0x805BD4A0
    /* li r12, 0 */ // 0x805BD4A4
    *(0x177d + r3) = r6; // stb @ 0x805BD4A8
    *(0x2360 + r3) = r11; // stw @ 0x805BD4AC
    *(0x235c + r3) = r5; // stw @ 0x805BD4B0
    *(0x236d + r3) = r6; // stb @ 0x805BD4B4
    *(0x234c + r3) = r5; // stw @ 0x805BD4B8
    *(0x2370 + r3) = r4; // stw @ 0x805BD4BC
    /* mtctr r0 */ // 0x805BD4C0
    /* clrlwi r10, r12, 0x18 */ // 0x805BD4C4
    /* mulli r5, r10, 0xf0 */ // 0x805BD4CC
    /* clrlwi r7, r0, 0x18 */ // 0x805BD4D4
    r9 = r3 + r5; // 0x805BD4DC
    /* clrlwi r8, r4, 0x18 */ // 0x805BD4E0
    *(0x18e0 + r9) = r11; // sth @ 0x805BD4E4
    /* clrlwi r6, r0, 0x18 */ // 0x805BD4E8
    *(0x18e6 + r9) = r11; // sth @ 0x805BD4F4
    /* clrlwi r5, r4, 0x18 */ // 0x805BD4F8
    /* clrlwi r4, r0, 0x18 */ // 0x805BD500
    *(0x18e9 + r9) = r10; // stb @ 0x805BD504
    r0 = r8 + 1; // 0x805BD508
    r7 = r7 + 1; // 0x805BD50C
    r6 = r6 + 1; // 0x805BD510
    *(0x18e8 + r9) = r10; // stb @ 0x805BD514
    r5 = r5 + 1; // 0x805BD518
    r4 = r4 + 1; // 0x805BD51C
    *(0x19d0 + r9) = r11; // sth @ 0x805BD524
    *(0x19d6 + r9) = r11; // sth @ 0x805BD528
    *(0x19d9 + r9) = r0; // stb @ 0x805BD52C
    *(0x19d8 + r9) = r0; // stb @ 0x805BD530
    *(0x1ac0 + r9) = r11; // sth @ 0x805BD534
    *(0x1ac6 + r9) = r11; // sth @ 0x805BD538
    *(0x1ac9 + r9) = r7; // stb @ 0x805BD53C
    *(0x1ac8 + r9) = r7; // stb @ 0x805BD540
    *(0x1bb0 + r9) = r11; // sth @ 0x805BD544
    *(0x1bb6 + r9) = r11; // sth @ 0x805BD548
    *(0x1bb9 + r9) = r6; // stb @ 0x805BD54C
    *(0x1bb8 + r9) = r6; // stb @ 0x805BD550
    *(0x1ca0 + r9) = r11; // sth @ 0x805BD554
    *(0x1ca6 + r9) = r11; // sth @ 0x805BD558
    *(0x1ca9 + r9) = r5; // stb @ 0x805BD55C
    *(0x1ca8 + r9) = r5; // stb @ 0x805BD560
    *(0x1d90 + r9) = r11; // sth @ 0x805BD564
    *(0x1d96 + r9) = r11; // sth @ 0x805BD568
    *(0x1d99 + r9) = r4; // stb @ 0x805BD56C
    *(0x1d98 + r9) = r4; // stb @ 0x805BD570
    if (counter-- != 0) goto 0x0x805bd4c4;
    /* li r4, 0 */ // 0x805BD578
    /* li r0, 3 */ // 0x805BD57C
    *(0x236c + r3) = r4; // stb @ 0x805BD580
    /* lis r22, 0 */ // 0x805BD584
    r4 = r31 + 0x1758; // 0x805BD588
    /* li r5, 4 */ // 0x805BD58C
    *(0x236d + r3) = r0; // stb @ 0x805BD590
    r3 = r31;
    r6 = *(0 + r22); // lwz @ 0x805BD598
    r6 = *(0x34 + r6); // lwz @ 0x805BD59C
    FUN_805E3430(r5, r3); // bl 0x805E3430
}