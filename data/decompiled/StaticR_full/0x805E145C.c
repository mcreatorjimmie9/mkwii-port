/* Function at 0x805E145C, size=216 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r18 */
/* Calls: 2 function(s) */

int FUN_805E145C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -80(r1) */
    /* saved r18 */
    /* lis r8, 0 */ // 0x805E1464
    /* lis r9, 0 */ // 0x805E1468
    *(0x54 + r1) = r0; // stw @ 0x805E146C
    /* stmw r18, 0x18(r1) */ // 0x805E1470
    /* li r20, 0 */ // 0x805E1474
    r23 = *(0 + r8); // lhz @ 0x805E1478
    /* lis r8, 0x1062 */ // 0x805E147C
    r24 = *(0 + r9); // lhz @ 0x805E1480
    r28 = r3;
    r18 = r23 * r20; // 0x805E1488
    r29 = r4;
    r30 = r5;
    r31 = r6;
    r19 = r7;
    r26 = r8 + 0x4dd3; // 0x805E149C
    /* li r21, 1 */ // 0x805E14A0
    /* li r22, 8 */ // 0x805E14A4
    /* li r27, 0 */ // 0x805E14A8
    /* lis r25, -0x8000 */ // 0x805E14AC
    /* b 0x805e1580 */ // 0x805E14B0
    r3 = r29;
    r4 = r19;
    /* li r5, 0 */ // 0x805E14BC
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    if (==) goto 0x0x805e14d8;
    if (==) goto 0x0x805e14e0;
    /* b 0x805e1548 */ // 0x805E14D4
    /* li r22, 0 */ // 0x805E14D8
    /* b 0x805e154c */ // 0x805E14DC
    r3 = r28;
    FUN_805E3430(r3); // bl 0x805E3430
    r0 = r3 + 3; // 0x805E14E8
    if (<=) goto 0x0x805e1518;
    if (==) goto 0x0x805e1530;
    if (==) goto 0x0x805e1538;
    if (==) goto 0x0x805e1538;
    if (==) goto 0x0x805e1538;
    /* b 0x805e1540 */ // 0x805E1514
    if (<) goto 0x0x805e1528;
    /* li r22, 2 */ // 0x805E1520
    /* b 0x805e154c */ // 0x805E1524
    /* li r21, 0 */ // 0x805E1528
    /* b 0x805e154c */ // 0x805E152C
    /* li r22, 6 */ // 0x805E1530
}