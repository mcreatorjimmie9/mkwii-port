/* Function at 0x806F15F4, size=408 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 10 function(s) */

int FUN_806F15F4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x806F1600
    /* lis r28, 0 */ // 0x806F1604
    r30 = r3;
    r27 = r5;
    r26 = r4;
    r4 = r27;
    r3 = *(0 + r28); // lwz @ 0x806F1618
    FUN_806E4438(r4); // bl 0x806E4438
    if (!=) goto 0x0x806f1630;
    /* li r3, 0 */ // 0x806F1628
    /* b 0x806f1778 */ // 0x806F162C
    r3 = *(0 + r28); // lwz @ 0x806F1630
    r4 = r27;
    FUN_806E44C0(r3, r4); // bl 0x806E44C0
    if (==) goto 0x0x806f1654;
    /* slwi r0, r26, 2 */ // 0x806F1644
    r3 = r30 + r0; // 0x806F1648
    r3 = *(0x70 + r3); // lwz @ 0x806F164C
    /* b 0x806f1778 */ // 0x806F1650
    r3 = *(0 + r28); // lwz @ 0x806F1654
    r4 = r26;
    FUN_806E4530(r4); // bl 0x806E4530
    /* lis r29, 0 */ // 0x806F1660
    r31 = r3;
    r3 = *(0 + r29); // lwz @ 0x806F1668
    /* li r4, 0 */ // 0x806F166C
    FUN_806E9970(r4); // bl 0x806E9970
    if (==) goto 0x0x806f1690;
    r3 = *(0 + r29); // lwz @ 0x806F167C
    /* li r4, 1 */ // 0x806F1680
    FUN_806E9970(r4); // bl 0x806E9970
    if (!=) goto 0x0x806f16ac;
    /* lis r3, 0 */ // 0x806F1690
    r4 = r26;
    r3 = *(0 + r3); // lwz @ 0x806F1698
    FUN_806E4530(r3, r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F16A0
    /* lbzx r4, r30, r0 */ // 0x806F16A4
    /* b 0x806f16d4 */ // 0x806F16A8
    r3 = *(0 + r28); // lwz @ 0x806F16AC
    r4 = r26;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f16d0;
    /* slwi r0, r26, 3 */ // 0x806F16C0
    r3 = r30 + r0; // 0x806F16C4
    r4 = *(0x10 + r3); // lbz @ 0x806F16C8
    /* b 0x806f16d4 */ // 0x806F16CC
    /* li r4, 0 */ // 0x806F16D0
    /* slwi r28, r27, 3 */ // 0x806F16D4
    r0 = r30 + r28; // 0x806F16D8
    r3 = r0 + r31; // 0x806F16DC
    r0 = *(0x16 + r3); // lbz @ 0x806F16E0
    if (!=) goto 0x0x806f1774;
    /* lis r29, 0 */ // 0x806F16EC
    r4 = r26;
    r3 = *(0 + r29); // lwz @ 0x806F16F4
    FUN_806E44C0(r4); // bl 0x806E44C0
    if (==) goto 0x0x806f1720;
    r3 = *(0 + r29); // lwz @ 0x806F1704
    r4 = r26;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F1710
    r3 = r30 + r0; // 0x806F1714
    r0 = *(3 + r3); // lbz @ 0x806F1718
    /* b 0x806f1748 */ // 0x806F171C
    r3 = *(0 + r29); // lwz @ 0x806F1720
    r4 = r26;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f1744;
    /* slwi r0, r26, 3 */ // 0x806F1734
    r3 = r30 + r0; // 0x806F1738
    r0 = *(0x13 + r3); // lbz @ 0x806F173C
    /* b 0x806f1748 */ // 0x806F1740
    /* li r0, 0 */ // 0x806F1744
    if (!=) goto 0x0x806f1774;
    r3 = r30 + r28; // 0x806F1750
    /* li r5, 1 */ // 0x806F1754
    r0 = *(0x15 + r3); // lbz @ 0x806F1758
    r4 = r5 << r31; // slw
    /* li r3, 2 */ // 0x806F1760
    /* and. r0, r4, r0 */ // 0x806F1764
    if (==) goto 0x0x806f1778;
    r3 = r5;
    /* b 0x806f1778 */ // 0x806F1770
    /* li r3, 0 */ // 0x806F1774
    r0 = *(0x24 + r1); // lwz @ 0x806F177C
    return;
}