/* Function at 0x808A1444, size=328 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r22 */
/* Calls: 3 function(s) */

int FUN_808A1444(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -112(r1) */
    /* saved r22 */
    /* stmw r22, 0x48(r1) */ // 0x808A1450
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    r0 = *(8 + r3); // lwz @ 0x808A1468
    if (==) goto 0x0x808a15e8;
    /* lis r24, 0 */ // 0x808A1474
    /* li r31, 0 */ // 0x808A1478
    r24 = r24 + 0; // 0x808A147C
    /* li r25, 0 */ // 0x808A1480
    /* b 0x808a15dc */ // 0x808A1484
    if (==) goto 0x0x808a149c;
    /* clrlwi r0, r31, 0x10 */ // 0x808A1490
    /* lbzx r22, r30, r0 */ // 0x808A1494
    /* b 0x808a14a0 */ // 0x808A1498
    /* li r22, 0 */ // 0x808A149C
    r23 = r31 rlwinm 2; // rlwinm
    /* lwzx r0, r28, r23 */ // 0x808A14A4
    if (==) goto 0x0x808a14bc;
    if (==) goto 0x0x808a14c4;
    /* b 0x808a14c8 */ // 0x808A14B8
    /* li r22, 0 */ // 0x808A14BC
    /* b 0x808a14c8 */ // 0x808A14C0
    /* li r22, 0 */ // 0x808A14C4
    if (!=) goto 0x0x808a156c;
    r12 = *(0 + r26); // lwz @ 0x808A14D0
    r3 = r26;
    r12 = *(0x34 + r12); // lwz @ 0x808A14D8
    /* mtctr r12 */ // 0x808A14DC
    /* bctrl  */ // 0x808A14E0
    r6 = r3;
    r5 = r24 + 0x33; // 0x808A14EC
    /* li r4, 0x20 */ // 0x808A14F0
    /* crclr cr1eq */ // 0x808A14F4
    FUN_805E3430(r6, r3, r5, r4); // bl 0x805E3430
    r0 = *(0x14 + r26); // lwz @ 0x808A14FC
    r8 = r22;
    *(0x1c + r1) = r0; // stw @ 0x808A1504
    /* clrlwi r4, r31, 0x10 */ // 0x808A1508
    /* lwzx r6, r27, r23 */ // 0x808A150C
    *(8 + r1) = r25; // stw @ 0x808A1514
    /* lwzx r7, r28, r23 */ // 0x808A151C
    /* li r10, 1 */ // 0x808A1520
    r3 = *(8 + r26); // lwz @ 0x808A1524
    FUN_805EDB0C(r9, r10); // bl 0x805EDB0C
    r0 = *(0x90 + r26); // lbz @ 0x808A152C
    if (==) goto 0x0x808a15d8;
    r0 = *(0x14 + r26); // lwz @ 0x808A1538
    r8 = r22;
    *(0x18 + r1) = r0; // stw @ 0x808A1540
    /* clrlwi r4, r31, 0x10 */ // 0x808A1544
    /* lwzx r6, r27, r23 */ // 0x808A1548
    *(8 + r1) = r25; // stw @ 0x808A1550
    /* lwzx r7, r28, r23 */ // 0x808A1558
    /* li r10, 1 */ // 0x808A155C
    r3 = *(0xc + r26); // lwz @ 0x808A1560
    FUN_805EDB0C(r9, r10); // bl 0x805EDB0C
    /* b 0x808a15d8 */ // 0x808A1568
    r0 = *(0x14 + r26); // lwz @ 0x808A156C
    r8 = r22;
    *(0x14 + r1) = r0; // stw @ 0x808A1574
    /* clrlwi r4, r31, 0x10 */ // 0x808A1578
    /* lwzx r6, r27, r23 */ // 0x808A157C
    *(8 + r1) = r25; // stw @ 0x808A1584
    /* li r9, 0 */ // 0x808A1588
}