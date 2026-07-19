/* Function at 0x808C15C0, size=460 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 4 function(s) */

int FUN_808C15C0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* lis r5, 0 */ // 0x808C15C8
    *(0x34 + r1) = r0; // stw @ 0x808C15CC
    /* stmw r25, 0x14(r1) */ // 0x808C15D0
    /* slwi r26, r4, 2 */ // 0x808C15D4
    r6 = r3 + r26; // 0x808C15D8
    r29 = r3;
    r30 = r4;
    r5 = *(0 + r5); // lwz @ 0x808C15E4
    r0 = *(0x98 + r5); // lwz @ 0x808C15E8
    r3 = r0 + r26; // 0x808C15EC
    r3 = *(0x12c + r3); // lwz @ 0x808C15F0
    *(0x6c8 + r6) = r3; // stw @ 0x808C15F4
    FUN_8089E030(); // bl 0x8089E030
    r27 = r3;
    /* li r31, 0 */ // 0x808C1600
    /* li r28, 0 */ // 0x808C1604
    /* li r25, 0 */ // 0x808C1608
    r3 = r25;
    FUN_8089DE64(r3); // bl 0x8089DE64
    if (!=) goto 0x0x808c1664;
    r4 = *(0x798 + r29); // lwz @ 0x808C161C
    r3 = r25;
    FUN_8089E2A8(r3); // bl 0x8089E2A8
    if (==) goto 0x0x808c1664;
    FUN_808CFEE0(r3); // bl 0x808CFEE0
    if (==) goto 0x0x808c1650;
    r0 = r25 + -0x12; // 0x808C163C
    if (<=) goto 0x0x808c1650;
    if (>) goto 0x0x808c1664;
    r0 = r29 + r28; // 0x808C1650
    r31 = r31 + 1; // 0x808C1654
    r3 = r0 + r26; // 0x808C1658
    r28 = r28 + 0x10; // 0x808C165C
    *(0x6d8 + r3) = r25; // stw @ 0x808C1660
    r25 = r25 + 1; // 0x808C1664
    if (<) goto 0x0x808c160c;
    r6 = r31;
    if (>=) goto 0x0x808c1774;
    /* subfic r5, r31, 0xc */ // 0x808C167C
    if (<=) goto 0x0x808c1744;
    /* li r3, 0 */ // 0x808C168C
    /* li r4, 0 */ // 0x808C1690
    /* li r0, 0 */ // 0x808C1694
    if (>=) goto 0x0x808c16a0;
    /* li r0, 1 */ // 0x808C169C
    if (==) goto 0x0x808c16b8;
    /* addis r0, r31, -0x8000 */ // 0x808C16A8
    if (==) goto 0x0x808c16b8;
    /* li r4, 1 */ // 0x808C16B4
    if (==) goto 0x0x808c16e8;
    /* neg r0, r31 */ // 0x808C16C0
    /* li r4, 1 */ // 0x808C16C4
    /* rlwinm. r0, r0, 0, 0, 0 */ // 0x808C16C8
    if (!=) goto 0x0x808c16dc;
    /* rlwinm. r0, r5, 0, 0, 0 */ // 0x808C16D0
    if (==) goto 0x0x808c16dc;
    /* li r4, 0 */ // 0x808C16D8
    if (==) goto 0x0x808c16e8;
    /* li r3, 1 */ // 0x808C16E4
    if (==) goto 0x0x808c1744;
    /* slwi r4, r30, 2 */ // 0x808C16F0
    /* subfic r0, r31, 0xb */ // 0x808C16F4
    /* slwi r5, r31, 4 */ // 0x808C16F8
    /* li r3, -1 */ // 0x808C16FC
    r4 = r29 + r4; // 0x808C1700
    /* srwi r0, r0, 3 */ // 0x808C1704
    r4 = r5 + r4; // 0x808C1708
    /* mtctr r0 */ // 0x808C170C
    if (>=) goto 0x0x808c1744;
    *(0x6d8 + r4) = r3; // stw @ 0x808C1718
    r6 = r6 + 8; // 0x808C171C
    *(0x6e8 + r4) = r3; // stw @ 0x808C1720
    *(0x6f8 + r4) = r3; // stw @ 0x808C1724
    *(0x708 + r4) = r3; // stw @ 0x808C1728
    *(0x718 + r4) = r3; // stw @ 0x808C172C
    *(0x728 + r4) = r3; // stw @ 0x808C1730
    *(0x738 + r4) = r3; // stw @ 0x808C1734
    *(0x748 + r4) = r3; // stw @ 0x808C1738
    r4 = r4 + 0x80; // 0x808C173C
    if (counter-- != 0) goto 0x0x808c1718;
    /* slwi r0, r30, 2 */ // 0x808C1744
    /* slwi r4, r6, 4 */ // 0x808C1748
    r3 = r29 + r0; // 0x808C174C
    r4 = r4 + r3; // 0x808C1750
    /* subfic r0, r6, 0xc */ // 0x808C1754
    /* li r3, -1 */ // 0x808C1758
    /* mtctr r0 */ // 0x808C175C
    if (>=) goto 0x0x808c1774;
    *(0x6d8 + r4) = r3; // stw @ 0x808C1768
    r4 = r4 + 0x10; // 0x808C176C
    if (counter-- != 0) goto 0x0x808c1768;
    r3 = r31;
    r0 = *(0x34 + r1); // lwz @ 0x808C177C
    return;
}