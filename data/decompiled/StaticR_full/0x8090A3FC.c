/* Function at 0x8090A3FC, size=412 bytes */
/* Stack frame: 0 bytes */

int FUN_8090A3FC(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* bltlr  */ // 0x8090A400
    r0 = *(0x437e + r3); // lbz @ 0x8090A404
    /* bnelr  */ // 0x8090A40C
    r10 = r3 + r5; // 0x8090A410
    r0 = *(0x1eed + r3); // lbz @ 0x8090A414
    r7 = *(0x1efa + r10); // lbz @ 0x8090A418
    /* bgelr  */ // 0x8090A420
    r7 = r3 + r4; // 0x8090A424
    /* li r9, 0 */ // 0x8090A428
    r0 = *(0x1f50 + r7); // lbz @ 0x8090A42C
    if (!=) goto 0x0x8090a478;
    /* lis r7, 0 */ // 0x8090A438
    r0 = r4 rlwinm 2; // rlwinm
    r7 = *(0 + r7); // lwz @ 0x8090A440
    r8 = *(0xc + r7); // lwz @ 0x8090A444
    /* lwzx r7, r8, r0 */ // 0x8090A448
    r0 = *(0x38 + r7); // lwz @ 0x8090A44C
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x8090A450
    if (!=) goto 0x0x8090a478;
    r0 = *(0x1f50 + r10); // lbz @ 0x8090A458
    if (!=) goto 0x0x8090a478;
    r0 = r5 rlwinm 2; // rlwinm
    /* lwzx r7, r8, r0 */ // 0x8090A468
    r0 = *(0x38 + r7); // lwz @ 0x8090A46C
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x8090A470
    if (==) goto 0x0x8090a47c;
    /* li r9, 1 */ // 0x8090A478
    /* bnelr  */ // 0x8090A480
    r7 = r3 + r5; // 0x8090A484
    r0 = *(0x1f12 + r7); // lbz @ 0x8090A488
    /* beqlr  */ // 0x8090A490
    r0 = *(0x4360 + r3); // lbz @ 0x8090A494
    r7 = r6 + -1; // 0x8090A498
    r7 = r7 / r0; // 0x8090A49C
    r0 = r7 + 2; // 0x8090A4A0
    /* bgelr  */ // 0x8090A4A8
    r7 = *(0x4318 + r3); // lwz @ 0x8090A4AC
    /* li r8, 0x40 */ // 0x8090A4B0
    r9 = r7 + 1; // 0x8090A4B4
    r7 = r7 + r0; // 0x8090A4B8
    /* subfc r0, r8, r9 */ // 0x8090A4BC
    /* subfe r0, r0, r0 */ // 0x8090A4C0
    /* clrlwi r10, r7, 0x1a */ // 0x8090A4C4
    r7 = r9 & r0; // 0x8090A4C8
    /* b 0x8090a4ec */ // 0x8090A4CC
    r0 = *(0x4314 + r3); // lwz @ 0x8090A4D0
    /* beqlr  */ // 0x8090A4D8
    r7 = r7 + 1; // 0x8090A4DC
    /* subfc r0, r8, r7 */ // 0x8090A4E0
    /* subfe r0, r0, r0 */ // 0x8090A4E4
    r7 = r7 & r0; // 0x8090A4E8
    if (!=) goto 0x0x8090a4d0;
    /* li r10, 0x40 */ // 0x8090A4F4
    /* li r0, 1 */ // 0x8090A4F8
    /* subfc r7, r10, r9 */ // 0x8090A4FC
    /* li r11, 0 */ // 0x8090A500
    /* subfe r7, r7, r7 */ // 0x8090A504
    /* li r8, 3 */ // 0x8090A508
    r7 = r9 & r7; // 0x8090A50C
    *(0x4318 + r3) = r7; // stw @ 0x8090A510
    /* mulli r9, r7, 0x88 */ // 0x8090A514
    /* li r7, 0 */ // 0x8090A518
    r9 = r3 + r9; // 0x8090A51C
    *(0x2114 + r9) = r0; // stw @ 0x8090A520
    r0 = *(0x20f4 + r3); // lwz @ 0x8090A524
    *(0x2120 + r9) = r0; // stw @ 0x8090A528
    *(0x211c + r9) = r6; // stb @ 0x8090A52C
    *(0x211d + r9) = r5; // stb @ 0x8090A530
    /* b 0x8090a58c */ // 0x8090A534
    r5 = *(0x4318 + r3); // lwz @ 0x8090A538
    /* clrlwi r0, r6, 0x18 */ // 0x8090A53C
    r9 = r5 + 1; // 0x8090A540
    /* subfc r5, r10, r9 */ // 0x8090A544
    /* subfe r5, r5, r5 */ // 0x8090A548
    r5 = r9 & r5; // 0x8090A54C
    *(0x4318 + r3) = r5; // stw @ 0x8090A550
    /* mulli r5, r5, 0x88 */ // 0x8090A554
    r9 = r3 + r5; // 0x8090A558
    *(0x2114 + r9) = r8; // stw @ 0x8090A55C
    r5 = *(0x20f4 + r3); // lwz @ 0x8090A560
    *(0x2120 + r9) = r5; // stw @ 0x8090A564
    *(0x2124 + r9) = r7; // stb @ 0x8090A568
    *(0x2189 + r9) = r11; // stb @ 0x8090A56C
    *(0x211c + r9) = r4; // stb @ 0x8090A570
    r5 = *(0x4360 + r3); // lbz @ 0x8090A574
    if (>=) goto 0x0x8090a584;
    r5 = r6;
    /* subf r6, r5, r6 */ // 0x8090A584
    /* clrlwi. r0, r6, 0x18 */ // 0x8090A58C
    if (!=) goto 0x0x8090a538;
    return;
}