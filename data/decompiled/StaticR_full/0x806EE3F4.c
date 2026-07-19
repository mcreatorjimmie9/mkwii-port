/* Function at 0x806EE3F4, size=760 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_806EE3F4(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r27 */
    /* li r0, 0xff */ // 0x806EE400
    /* stmw r27, 0x1c(r1) */ // 0x806EE404
    r31 = r4;
    *(8 + r1) = r0; // stb @ 0x806EE410
    *(9 + r1) = r0; // stb @ 0x806EE414
    *(0xa + r1) = r0; // stb @ 0x806EE418
    *(0xb + r1) = r0; // stb @ 0x806EE41C
    *(0xc + r1) = r0; // stb @ 0x806EE420
    *(0xd + r1) = r0; // stb @ 0x806EE424
    *(0xe + r1) = r0; // stb @ 0x806EE428
    *(0xf + r1) = r0; // stb @ 0x806EE42C
    *(0x10 + r1) = r0; // stb @ 0x806EE430
    *(0x11 + r1) = r0; // stb @ 0x806EE434
    *(0x12 + r1) = r0; // stb @ 0x806EE438
    *(0x13 + r1) = r0; // stb @ 0x806EE43C
    r3 = *(0 + r3); // lwz @ 0x806EE440
    r0 = r3 + -1; // 0x806EE444
    /* cntlzw r0, r0 */ // 0x806EE448
    /* srwi r3, r0, 5 */ // 0x806EE44C
    FUN_806EBC90(); // bl 0x806EBC90
    /* li r7, 0xc */ // 0x806EE454
    /* li r4, 0 */ // 0x806EE45C
    /* li r5, 0 */ // 0x806EE460
    /* li r6, 0 */ // 0x806EE464
    /* li r0, 0 */ // 0x806EE468
    /* li r12, 1 */ // 0x806EE46C
    /* lis r11, 0 */ // 0x806EE470
    /* mtctr r7 */ // 0x806EE474
    r28 = *(0 + r11); // lwz @ 0x806EE478
    r7 = *(0 + r3); // lbz @ 0x806EE47C
    r8 = *(0x291c + r28); // lwz @ 0x806EE480
    r9 = r12 << r7; // slw
    /* mulli r10, r8, 0x58 */ // 0x806EE488
    r30 = r28 + r10; // 0x806EE48C
    r8 = *(0x48 + r30); // lwz @ 0x806EE490
    /* and. r8, r9, r8 */ // 0x806EE494
    if (==) goto 0x0x806ee6d0;
    r8 = *(0x40 + r30); // lwz @ 0x806EE49C
    r6 = r6 + 1; // 0x806EE4A0
    if (!=) goto 0x0x806ee560;
    r29 = r7 rlwinm 1; // rlwinm
    r30 = r7 rlwinm 2; // rlwinm
    /* li r27, 0 */ // 0x806EE4B4
    /* b 0x806ee524 */ // 0x806EE4B8
    if (<=) goto 0x0x806ee4e0;
    r9 = *(0 + r31); // lwz @ 0x806EE4C4
    r8 = r12 << r29; // slw
    /* li r0, 0 */ // 0x806EE4CC
    r5 = r5 + 1; // 0x806EE4D0
    r8 = r9 | r8; // 0x806EE4D4
    *(0 + r31) = r8; // stw @ 0x806EE4D8
    /* b 0x806ee51c */ // 0x806EE4DC
    if (>=) goto 0x0x806ee4f0;
    /* li r0, 1 */ // 0x806EE4E4
    r4 = r4 + 1; // 0x806EE4E8
    /* b 0x806ee51c */ // 0x806EE4EC
    if (==) goto 0x0x806ee504;
    /* li r0, 1 */ // 0x806EE4F8
    r4 = r4 + 1; // 0x806EE4FC
    /* b 0x806ee51c */ // 0x806EE500
    r9 = *(0 + r31); // lwz @ 0x806EE504
    r8 = r12 << r29; // slw
    /* li r0, 0 */ // 0x806EE50C
    r5 = r5 + 1; // 0x806EE510
    r8 = r9 | r8; // 0x806EE514
    *(0 + r31) = r8; // stw @ 0x806EE518
    r29 = r29 + 1; // 0x806EE51C
    r27 = r27 + 1; // 0x806EE520
    r28 = *(0 + r11); // lwz @ 0x806EE524
    r8 = *(0x291c + r28); // lwz @ 0x806EE528
    /* mulli r10, r8, 0x58 */ // 0x806EE52C
    r9 = r28 + r10; // 0x806EE530
    r8 = *(0x59 + r9); // lbz @ 0x806EE534
    if (==) goto 0x0x806ee550;
    r8 = r30 + r28; // 0x806EE540
    r8 = r10 + r8; // 0x806EE544
    r8 = *(0x5b + r8); // lbz @ 0x806EE548
    /* b 0x806ee554 */ // 0x806EE54C
    r8 = *(0x58 + r9); // lbz @ 0x806EE550
    if (<) goto 0x0x806ee4bc;
    /* b 0x806ee6d0 */ // 0x806EE55C
    if (<=) goto 0x0x806ee5d4;
    r29 = r7 rlwinm 1; // rlwinm
    r30 = r7 rlwinm 2; // rlwinm
    /* li r27, 0 */ // 0x806EE570
    /* b 0x806ee598 */ // 0x806EE574
    r8 = *(0 + r31); // lwz @ 0x806EE578
    r0 = r12 << r29; // slw
    r29 = r29 + 1; // 0x806EE580
    r27 = r27 + 1; // 0x806EE584
    r0 = r8 | r0; // 0x806EE588
    *(0 + r31) = r0; // stw @ 0x806EE58C
    /* li r0, 0 */ // 0x806EE590
    r5 = r5 + 1; // 0x806EE594
    r28 = *(0 + r11); // lwz @ 0x806EE598
    r8 = *(0x291c + r28); // lwz @ 0x806EE59C
    /* mulli r10, r8, 0x58 */ // 0x806EE5A0
    r9 = r28 + r10; // 0x806EE5A4
    r8 = *(0x59 + r9); // lbz @ 0x806EE5A8
    if (==) goto 0x0x806ee5c4;
    r8 = r30 + r28; // 0x806EE5B4
    r8 = r10 + r8; // 0x806EE5B8
    r8 = *(0x5b + r8); // lbz @ 0x806EE5BC
    /* b 0x806ee5c8 */ // 0x806EE5C0
    r8 = *(0x58 + r9); // lbz @ 0x806EE5C4
    if (<) goto 0x0x806ee578;
    /* b 0x806ee6d0 */ // 0x806EE5D0
    if (>=) goto 0x0x806ee61c;
    r8 = r7 rlwinm 2; // rlwinm
    r29 = *(0x59 + r30); // lbz @ 0x806EE5DC
    r8 = r8 + r28; // 0x806EE5E0
    /* li r27, 0 */ // 0x806EE5E4
    r8 = r10 + r8; // 0x806EE5E8
    /* b 0x806ee5fc */ // 0x806EE5EC
    /* li r0, 1 */ // 0x806EE5F0
    r27 = r27 + 1; // 0x806EE5F4
    r4 = r4 + 1; // 0x806EE5F8
    if (==) goto 0x0x806ee60c;
    r9 = *(0x5b + r8); // lbz @ 0x806EE604
    /* b 0x806ee610 */ // 0x806EE608
    r9 = *(0x58 + r30); // lbz @ 0x806EE60C
    if (<) goto 0x0x806ee5f0;
    /* b 0x806ee6d0 */ // 0x806EE618
    if (==) goto 0x0x806ee668;
    r8 = r7 rlwinm 2; // rlwinm
    r29 = *(0x59 + r30); // lbz @ 0x806EE628
    r8 = r8 + r28; // 0x806EE62C
    /* li r27, 0 */ // 0x806EE630
    r8 = r10 + r8; // 0x806EE634
    /* b 0x806ee648 */ // 0x806EE638
    /* li r0, 1 */ // 0x806EE63C
    r27 = r27 + 1; // 0x806EE640
    r4 = r4 + 1; // 0x806EE644
    if (==) goto 0x0x806ee658;
    r9 = *(0x5b + r8); // lbz @ 0x806EE650
    /* b 0x806ee65c */ // 0x806EE654
    r9 = *(0x58 + r30); // lbz @ 0x806EE658
    if (<) goto 0x0x806ee63c;
    /* b 0x806ee6d0 */ // 0x806EE664
    r30 = r7 rlwinm 1; // rlwinm
    r29 = r7 rlwinm 2; // rlwinm
    /* li r27, 0 */ // 0x806EE670
    /* b 0x806ee698 */ // 0x806EE674
    r8 = *(0 + r31); // lwz @ 0x806EE678
    r0 = r12 << r30; // slw
    r30 = r30 + 1; // 0x806EE680
    r27 = r27 + 1; // 0x806EE684
    r0 = r8 | r0; // 0x806EE688
    *(0 + r31) = r0; // stw @ 0x806EE68C
    /* li r0, 0 */ // 0x806EE690
    r5 = r5 + 1; // 0x806EE694
    r28 = *(0 + r11); // lwz @ 0x806EE698
    r8 = *(0x291c + r28); // lwz @ 0x806EE69C
    /* mulli r10, r8, 0x58 */ // 0x806EE6A0
    r9 = r28 + r10; // 0x806EE6A4
    r8 = *(0x59 + r9); // lbz @ 0x806EE6A8
    if (==) goto 0x0x806ee6c4;
    r8 = r29 + r28; // 0x806EE6B4
    r8 = r10 + r8; // 0x806EE6B8
    r8 = *(0x5b + r8); // lbz @ 0x806EE6BC
    /* b 0x806ee6c8 */ // 0x806EE6C0
    r8 = *(0x58 + r9); // lbz @ 0x806EE6C4
    if (<) goto 0x0x806ee678;
    r3 = r3 + 1; // 0x806EE6D0
    if (counter-- != 0) goto 0x0x806ee478;
    r0 = *(0x34 + r1); // lwz @ 0x806EE6DC
    return;
}