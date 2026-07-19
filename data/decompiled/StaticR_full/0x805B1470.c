/* Function at 0x805B1470, size=236 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_805B1470(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    *(0x24 + r1) = r0; // stw @ 0x805B147C
    /* stmw r26, 8(r1) */ // 0x805B1480
    r26 = r4;
    r29 = r3;
    r28 = r5;
    r27 = r6;
    r31 = *(4 + r3); // lwz @ 0x805B1494
    *(4 + r3) = r4; // stw @ 0x805B1498
    r3 = r26;
    if (==) goto 0x0x805b14ac;
    r4 = *(0x51 + r4); // lbz @ 0x805B14A4
    /* b 0x805b14b0 */ // 0x805B14A8
    /* li r4, 0 */ // 0x805B14AC
    r12 = *(0 + r3); // lwz @ 0x805B14B0
    r12 = *(0x38 + r12); // lwz @ 0x805B14B4
    /* mtctr r12 */ // 0x805B14B8
    /* bctrl  */ // 0x805B14BC
    if (==) goto 0x0x805b14d0;
    *(8 + r29) = r31; // stw @ 0x805B14C8
    /* b 0x805b14d4 */ // 0x805B14CC
    *(8 + r29) = r26; // stw @ 0x805B14D0
    if (==) goto 0x0x805b14ec;
    r3 = *(0xd8 + r29); // lwz @ 0x805B14DC
    r4 = r28;
    /* li r5, 0x2774 */ // 0x805B14E4
    FUN_805E3430(r4, r5); // bl 0x805E3430
    r31 = *(0xd8 + r29); // lwz @ 0x805B14EC
    /* li r29, 8 */ // 0x805B14F0
    *(0x90 + r26) = r31; // stw @ 0x805B14F4
    /* li r30, 0 */ // 0x805B14F8
    r28 = r31;
    *(0x51 + r26) = r27; // stb @ 0x805B1500
    r3 = *(0x94 + r26); // lwz @ 0x805B1504
    r12 = *(0 + r3); // lwz @ 0x805B1508
    r12 = *(0x10 + r12); // lwz @ 0x805B150C
    /* mtctr r12 */ // 0x805B1510
    /* bctrl  */ // 0x805B1514
    r4 = *(0 + r28); // lhz @ 0x805B1518
    r30 = r30 + 1; // 0x805B151C
    r5 = *(0x94 + r26); // lwz @ 0x805B1520
    r0 = r31 + r29; // 0x805B1524
    r3 = r4 * r3; // 0x805B1528
    *(4 + r5) = r0; // stw @ 0x805B1530
    r26 = r26 + 4; // 0x805B1534
    r28 = r28 + 2; // 0x805B1538
    *(0xc + r5) = r3; // stw @ 0x805B153C
    r29 = r29 + r3; // 0x805B1540
    if (<) goto 0x0x805b1504;
    r0 = *(0x24 + r1); // lwz @ 0x805B154C
    return;
}