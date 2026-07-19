/* Function at 0x8073B4B8, size=596 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 6 function(s) */

int FUN_8073B4B8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x2c + r1) = r31; // stw @ 0x8073B4C4
    r31 = r3;
    r0 = *(0x78 + r3); // lbz @ 0x8073B4CC
    if (!=) goto 0x0x8073b6f8;
    r0 = *(0x12b + r3); // lbz @ 0x8073B4D8
    if (==) goto 0x0x8073b4e8;
    /* b 0x8073b6f8 */ // 0x8073B4E4
    r0 = *(4 + r3); // lbz @ 0x8073B4E8
    if (!=) goto 0x0x8073b6f8;
    r0 = *(0x14c + r3); // lbz @ 0x8073B4F4
    /* cmpwi cr1, r0, 0 */
    if (==) goto 0x0x8073b50c;
    /* li r0, 1 */ // 0x8073B500
    *(0x79 + r3) = r0; // stb @ 0x8073B504
    /* b 0x8073b530 */ // 0x8073B508
    r0 = *(0x14d + r3); // lbz @ 0x8073B50C
    if (==) goto 0x0x8073b524;
    /* li r0, 1 */ // 0x8073B518
    *(0x7a + r3) = r0; // stb @ 0x8073B51C
    /* b 0x8073b530 */ // 0x8073B520
    if (==) goto 0x0x8073b530;
    /* li r0, 1 */ // 0x8073B528
    *(0x79 + r3) = r0; // stb @ 0x8073B52C
    /* lis r4, 0 */ // 0x8073B530
    r4 = *(0 + r4); // lwz @ 0x8073B534
    r0 = *(0xb68 + r4); // lwz @ 0x8073B538
    if (!=) goto 0x0x8073b618;
    /* lis r5, 0 */ // 0x8073B544
    r4 = *(0 + r5); // lwz @ 0x8073B548
    r0 = *(4 + r4); // lhz @ 0x8073B54C
    r4 = r0 rlwinm 0x18; // rlwinm
    r0 = r4 + -5; // 0x8073B554
    /* cntlzw r0, r0 */ // 0x8073B558
    /* rlwinm. r0, r0, 0x1b, 5, 0x1f */ // 0x8073B55C
    *(0x7c + r3) = r0; // stb @ 0x8073B560
    if (!=) goto 0x0x8073b5a0;
    r0 = *(0x14c + r3); // lbz @ 0x8073B568
    r4 = *(0 + r5); // lwz @ 0x8073B56C
    r3 = *(4 + r4); // lhz @ 0x8073B574
    r0 = r3 rlwinm 0x18; // rlwinm
    if (==) goto 0x0x8073b6f0;
    /* lis r3, 0 */ // 0x8073B580
    /* slwi r0, r0, 2 */ // 0x8073B584
    r4 = *(0 + r3); // lwz @ 0x8073B588
    r3 = r31;
    r4 = r4 + r0; // 0x8073B590
    /* lfs f1, 0x1c(r4) */ // 0x8073B594
    FUN_8073B774(r3); // bl 0x8073B774
    /* b 0x8073b6f0 */ // 0x8073B59C
    r6 = *(0 + r5); // lwz @ 0x8073B5A0
    /* lis r4, 0 */ // 0x8073B5A4
    r5 = *(0x6d0 + r3); // lwz @ 0x8073B5A8
    r6 = *(4 + r6); // lhz @ 0x8073B5AC
    r0 = *(0x6d4 + r3); // lwz @ 0x8073B5B0
    *(0x18 + r1) = r0; // stw @ 0x8073B5B4
    r0 = r6 rlwinm 0x1a; // rlwinm
    r4 = *(0 + r4); // lwz @ 0x8073B5BC
    *(0x14 + r1) = r5; // stw @ 0x8073B5C0
    r4 = r4 + r0; // 0x8073B5C4
    r0 = *(0x6d8 + r3); // lwz @ 0x8073B5C8
    *(0x1c + r1) = r0; // stw @ 0x8073B5CC
    /* lfs f0, 0x1c(r4) */ // 0x8073B5D0
    /* stfs f0, 0x18(r1) */ // 0x8073B5D4
    r0 = *(0xb0 + r3); // lbz @ 0x8073B5D8
    if (==) goto 0x0x8073b600;
    /* lis r3, 0 */ // 0x8073B5E4
    r3 = r3 + 0; // 0x8073B5EC
    r5 = r31 + 0x72c; // 0x8073B5F0
    r3 = r3 + 0x17e2; // 0x8073B5F4
    FUN_807457A0(r3, r4, r3, r5, r3); // bl 0x807457A0
    /* b 0x8073b6f0 */ // 0x8073B5FC
    /* lis r3, 0 */ // 0x8073B600
    r3 = r3 + 0; // 0x8073B608
    r3 = r3 + 0x17ef; // 0x8073B60C
    FUN_807456E0(r3, r4, r3, r3); // bl 0x807456E0
    /* b 0x8073b6f0 */ // 0x8073B614
    if (!=) goto 0x0x8073b6b8;
    /* lis r5, 0 */ // 0x8073B620
    r4 = *(0 + r5); // lwz @ 0x8073B624
    r0 = *(4 + r4); // lhz @ 0x8073B628
    r0 = r0 rlwinm 0x18; // rlwinm
    /* cntlzw r0, r0 */ // 0x8073B630
    /* rlwinm. r0, r0, 0x1b, 5, 0x1f */ // 0x8073B634
    *(0x7c + r3) = r0; // stb @ 0x8073B638
    if (==) goto 0x0x8073b6f0;
    r6 = *(0 + r5); // lwz @ 0x8073B640
    /* lis r4, 0 */ // 0x8073B644
    r5 = *(0x6d0 + r3); // lwz @ 0x8073B648
    r6 = *(4 + r6); // lhz @ 0x8073B64C
    r0 = *(0x6d4 + r3); // lwz @ 0x8073B650
    *(0xc + r1) = r0; // stw @ 0x8073B654
    r0 = r6 rlwinm 0x1a; // rlwinm
    r4 = *(0 + r4); // lwz @ 0x8073B65C
    *(8 + r1) = r5; // stw @ 0x8073B660
    r4 = r4 + r0; // 0x8073B664
    r0 = *(0x6d8 + r3); // lwz @ 0x8073B668
    *(0x10 + r1) = r0; // stw @ 0x8073B66C
    /* lfs f0, 0x1c(r4) */ // 0x8073B670
    /* stfs f0, 0xc(r1) */ // 0x8073B674
    r0 = *(0xb0 + r3); // lbz @ 0x8073B678
    if (==) goto 0x0x8073b6a0;
    /* lis r3, 0 */ // 0x8073B684
    r3 = r3 + 0; // 0x8073B68C
    r5 = r31 + 0x72c; // 0x8073B690
    r3 = r3 + 0x17fc; // 0x8073B694
    FUN_807457A0(r3, r4, r3, r5, r3); // bl 0x807457A0
    /* b 0x8073b6f0 */ // 0x8073B69C
    /* lis r3, 0 */ // 0x8073B6A0
    r3 = r3 + 0; // 0x8073B6A8
    r3 = r3 + 0x180a; // 0x8073B6AC
    FUN_807456E0(r3, r4, r3, r3); // bl 0x807456E0
    /* b 0x8073b6f0 */ // 0x8073B6B4
    /* lis r4, 0 */ // 0x8073B6B8
    r0 = *(0x14c + r3); // lbz @ 0x8073B6BC
    r3 = *(0 + r4); // lwz @ 0x8073B6C0
    r0 = *(4 + r3); // lhz @ 0x8073B6C8
    r0 = r0 rlwinm 0x18; // rlwinm
    if (==) goto 0x0x8073b6f0;
    /* lis r3, 0 */ // 0x8073B6D4
    /* slwi r0, r0, 2 */ // 0x8073B6D8
    r4 = *(0 + r3); // lwz @ 0x8073B6DC
    r3 = r31;
    r4 = r4 + r0; // 0x8073B6E4
    /* lfs f1, 0x1c(r4) */ // 0x8073B6E8
    FUN_8073B774(r3); // bl 0x8073B774
    /* li r0, 1 */ // 0x8073B6F0
    *(0x78 + r31) = r0; // stb @ 0x8073B6F4
    r0 = *(0x34 + r1); // lwz @ 0x8073B6F8
    r31 = *(0x2c + r1); // lwz @ 0x8073B6FC
    return;
}