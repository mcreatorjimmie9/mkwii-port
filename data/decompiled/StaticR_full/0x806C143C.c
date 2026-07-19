/* Function at 0x806C143C, size=584 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r24 */
/* Calls: 11 function(s) */

int FUN_806C143C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -128(r1) */
    /* saved r24 */
    /* lis r5, 0 */ // 0x806C1444
    *(0x84 + r1) = r0; // stw @ 0x806C1448
    /* stmw r24, 0x60(r1) */ // 0x806C144C
    r26 = r3;
    r27 = r4;
    r0 = *(0x240 + r4); // lwz @ 0x806C1458
    r7 = *(0 + r5); // lwz @ 0x806C145C
    /* li r5, 1 */ // 0x806C1460
    /* slwi r29, r0, 5 */ // 0x806C1464
    r0 = *(0x291c + r7); // lwz @ 0x806C1468
    r6 = r3 + r29; // 0x806C146C
    r28 = *(0x2548 + r6); // lbz @ 0x806C1470
    /* mulli r0, r0, 0x58 */ // 0x806C1474
    r4 = r5 << r28; // slw
    r3 = r7 + r0; // 0x806C147C
    r0 = *(0x48 + r3); // lwz @ 0x806C1480
    /* and. r0, r4, r0 */ // 0x806C1484
    if (==) goto 0x0x806c165c;
    /* lis r3, 0 */ // 0x806C148C
    r3 = *(0 + r3); // lwz @ 0x806C1490
    r0 = *(0x9e0 + r3); // lwz @ 0x806C1494
    /* and. r0, r4, r0 */ // 0x806C1498
    if (==) goto 0x0x806c165c;
    /* mulli r0, r28, 0xc0 */ // 0x806C14A0
    r4 = *(0x2530 + r6); // lwz @ 0x806C14A4
    r5 = *(0x2534 + r6); // lwz @ 0x806C14A8
    r3 = r3 + r0; // 0x806C14AC
    r0 = *(0x170 + r3); // lwz @ 0x806C14B0
    r3 = *(0x174 + r3); // lwz @ 0x806C14B4
    r0 = r4 ^ r0; // 0x806C14B8
    r3 = r5 ^ r3; // 0x806C14BC
    /* or. r0, r3, r0 */ // 0x806C14C0
    if (!=) goto 0x0x806c165c;
    /* lis r3, 0 */ // 0x806C14C8
    r3 = *(0 + r3); // lwz @ 0x806C14CC
    r3 = *(0 + r3); // lwz @ 0x806C14D0
    r30 = *(0x278 + r3); // lwz @ 0x806C14D4
    if (!=) goto 0x0x806c14e8;
    /* li r30, 0 */ // 0x806C14E0
    /* b 0x806c153c */ // 0x806C14E4
    /* lis r31, 0 */ // 0x806C14E8
    r31 = r31 + 0; // 0x806C14EC
    if (==) goto 0x0x806c1538;
    r12 = *(0 + r30); // lwz @ 0x806C14F4
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806C14FC
    /* mtctr r12 */ // 0x806C1500
    /* bctrl  */ // 0x806C1504
    /* b 0x806c1520 */ // 0x806C1508
    if (!=) goto 0x0x806c151c;
    /* li r0, 1 */ // 0x806C1514
    /* b 0x806c152c */ // 0x806C1518
    r3 = *(0 + r3); // lwz @ 0x806C151C
    if (!=) goto 0x0x806c150c;
    /* li r0, 0 */ // 0x806C1528
    if (==) goto 0x0x806c1538;
    /* b 0x806c153c */ // 0x806C1534
    /* li r30, 0 */ // 0x806C1538
    r3 = *(0x2af8 + r30); // lbz @ 0x806C153C
    /* li r0, 2 */ // 0x806C1540
    r4 = *(0x10 + r1); // lwz @ 0x806C1544
    r4 = r0 rlwimi 0x18; // rlwimi
    r0 = r3 + 1; // 0x806C154C
    *(0x2af8 + r30) = r0; // stb @ 0x806C1550
    /* lis r3, 0 */ // 0x806C1554
    r31 = r4 rlwinm 0; // rlwinm
    r31 = r0 rlwimi 0; // rlwimi
    r3 = *(0 + r3); // lwz @ 0x806C1560
    r4 = r28;
    r5 = r31;
    FUN_806EAB8C(r4, r5); // bl 0x806EAB8C
    /* lis r3, 0 */ // 0x806C1570
    r3 = *(0 + r3); // lwz @ 0x806C1574
    r3 = *(0 + r3); // lwz @ 0x806C1578
    r25 = *(0x404 + r3); // lwz @ 0x806C157C
    r3 = r25;
    FUN_806598D0(r3, r3); // bl 0x806598D0
    if (==) goto 0x0x806c1598;
    r3 = r25;
    FUN_80659914(r3, r3); // bl 0x80659914
    r4 = r26 + r29; // 0x806C1598
    r3 = r25;
    r4 = r4 + 0x2530; // 0x806C15A0
    FUN_806594E0(r3, r3, r4); // bl 0x806594E0
    /* lis r4, 0 */ // 0x806C15A8
    /* lis r6, 0 */ // 0x806C15AC
    r5 = *(0 + r4); // lwz @ 0x806C15B0
    r24 = r3;
    r3 = *(0 + r6); // lwz @ 0x806C15B8
    r6 = r28;
    r5 = r5 + 0x9c8; // 0x806C15C4
    /* li r7, 0 */ // 0x806C15C8
    FUN_805B93C4(r6, r4, r5, r7); // bl 0x805B93C4
    r3 = r25;
    r4 = r24;
    FUN_80659814(r5, r7, r3, r4); // bl 0x80659814
    r8 = r26 + r29; // 0x806C15DC
    r0 = *(0x2549 + r8); // lbz @ 0x806C15E4
    *(8 + r1) = r0; // stw @ 0x806C15E8
    r5 = *(0x2538 + r8); // lwz @ 0x806C15EC
    r6 = *(0x253c + r8); // lhz @ 0x806C15F0
    r7 = *(0x253e + r8); // lhz @ 0x806C15F4
    r9 = *(0x2540 + r8); // lwz @ 0x806C15F8
    r10 = *(0x2544 + r8); // lwz @ 0x806C15FC
    FUN_805A95AC(); // bl 0x805A95AC
    r3 = r25;
    FUN_80659138(r3); // bl 0x80659138
    r3 = r25;
    FUN_806598EC(r3, r3); // bl 0x806598EC
    /* lis r3, 0 */ // 0x806C1614
    /* li r5, 1 */ // 0x806C1618
    r6 = *(0 + r3); // lwz @ 0x806C161C
    r0 = *(0x36 + r6); // lha @ 0x806C1620
    if (<) goto 0x0x806c1648;
    /* lis r3, 1 */ // 0x806C162C
    /* clrlwi r4, r0, 0x18 */ // 0x806C1630
    r0 = r3 + -0x6c10; // 0x806C1634
    r0 = r0 * r4; // 0x806C1638
    r3 = r6 + r0; // 0x806C163C
    r3 = r3 + 0x38; // 0x806C1640
    /* b 0x806c164c */ // 0x806C1644
    /* li r3, 0 */ // 0x806C1648
    /* addis r3, r3, 1 */ // 0x806C164C
    *(-0x6c67 + r3) = r5; // stb @ 0x806C1650
    *(0x2c60 + r30) = r31; // stw @ 0x806C1654
    *(0x2c64 + r30) = r28; // stb @ 0x806C1658
    r3 = r27;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r26;
    /* li r4, 0 */ // 0x806C1668
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    r0 = *(0x84 + r1); // lwz @ 0x806C1674
    return;
}