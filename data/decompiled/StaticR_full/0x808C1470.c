/* Function at 0x808C1470, size=336 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 8 function(s) */

int FUN_808C1470(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    r7 = r3 + 0x24b0; // 0x808C1478
    /* li r8, 0 */ // 0x808C147C
    *(0x24 + r1) = r0; // stw @ 0x808C1480
    /* li r0, 4 */ // 0x808C1484
    /* stmw r26, 8(r1) */ // 0x808C1488
    r28 = r3;
    r26 = r4;
    /* li r30, -1 */ // 0x808C1494
    /* li r29, -1 */ // 0x808C1498
    /* mtctr r0 */ // 0x808C149C
    r6 = *(0x64 + r4); // lwz @ 0x808C14A0
    r0 = *(8 + r6); // lwz @ 0x808C14A4
    if (!=) goto 0x0x808c14cc;
    /* slwi r4, r5, 4 */ // 0x808C14B0
    /* slwi r0, r8, 2 */ // 0x808C14B4
    r3 = r3 + r4; // 0x808C14B8
    r29 = r8;
    r3 = r3 + r0; // 0x808C14C0
    r30 = *(0x6d8 + r3); // lwz @ 0x808C14C4
    /* b 0x808c14d8 */ // 0x808C14C8
    r7 = r7 + 0x474; // 0x808C14CC
    r8 = r8 + 1; // 0x808C14D0
    if (counter-- != 0) goto 0x0x808c14a0;
    r3 = r30;
    /* slwi r31, r29, 2 */ // 0x808C14DC
    FUN_8089DE64(r7, r8, r3); // bl 0x8089DE64
    r4 = r28 + r31; // 0x808C14E4
    r27 = r3;
    r3 = *(0x6c8 + r4); // lwz @ 0x808C14EC
    FUN_8089E030(); // bl 0x8089E030
    if (!=) goto 0x0x808c15ac;
    r3 = r30;
    FUN_808AF680(r3); // bl 0x808AF680
    r4 = r3;
    r3 = r26;
    /* li r5, 0 */ // 0x808C150C
    FUN_806A0A34(r3, r4, r3, r5); // bl 0x806A0A34
    /* mulli r27, r29, 0x184 */ // 0x808C1514
    r0 = *(0x3f74 + r28); // lwz @ 0x808C1518
    r4 = r30;
    r3 = r0 + r27; // 0x808C1520
    FUN_806CAD80(r4); // bl 0x806CAD80
    /* lis r3, 0 */ // 0x808C1528
    r3 = *(0 + r3); // lwz @ 0x808C152C
    if (==) goto 0x0x808c1578;
    r3 = *(0x14 + r3); // lwz @ 0x808C1538
    if (==) goto 0x0x808c1578;
    /* clrlwi r0, r29, 0x18 */ // 0x808C1544
    /* mulli r0, r0, 0xc */ // 0x808C1548
    r3 = r3 + r0; // 0x808C154C
    r4 = *(0x18 + r3); // lwz @ 0x808C1550
    if (==) goto 0x0x808c1578;
    if (==) goto 0x0x808c1568;
    *(0x14 + r4) = r30; // stw @ 0x808C1564
    r3 = *(0x18 + r3); // lwz @ 0x808C1568
    /* clrlwi r4, r29, 0x18 */ // 0x808C156C
    /* li r5, 2 */ // 0x808C1570
    FUN_808E08F0(r5); // bl 0x808E08F0
    FUN_808CFA50(r5); // bl 0x808CFA50
    /* clrlwi r0, r3, 0x18 */ // 0x808C157C
    if (!=) goto 0x0x808c15ac;
    /* lis r3, 0 */ // 0x808C1588
    r6 = r28 + r27; // 0x808C158C
    r4 = *(0 + r3); // lwz @ 0x808C1590
    r5 = r30;
    r3 = r6 + 0x3f78; // 0x808C1598
    r0 = *(0x98 + r4); // lwz @ 0x808C159C
    r4 = r0 + r31; // 0x808C15A0
    r4 = *(0x12c + r4); // lwz @ 0x808C15A4
    FUN_808D3DE8(r5, r3); // bl 0x808D3DE8
    r0 = *(0x24 + r1); // lwz @ 0x808C15B0
    return;
}