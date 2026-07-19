/* Function at 0x8088BA74, size=328 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r23 */
/* Calls: 5 function(s) */

int FUN_8088BA74(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r23 */
    /* lis r9, 0 */ // 0x8088BA7C
    *(0x34 + r1) = r0; // stw @ 0x8088BA80
    /* stmw r23, 0xc(r1) */ // 0x8088BA84
    r24 = r4;
    r23 = r3;
    r25 = r5;
    r26 = r6;
    r27 = r7;
    r28 = r8;
    r4 = *(0 + r9); // lwz @ 0x8088BAA0
    r4 = *(0x20 + r4); // lwz @ 0x8088BAA4
    FUN_8089A2C0(); // bl 0x8089A2C0
    r12 = *(0 + r23); // lwz @ 0x8088BAAC
    r31 = r3;
    r3 = r23;
    r12 = *(0x158 + r12); // lwz @ 0x8088BAB8
    r4 = r31;
    /* mtctr r12 */ // 0x8088BAC0
    /* bctrl  */ // 0x8088BAC4
    if (!=) goto 0x0x8088baf0;
    r3 = *(0xac + r23); // lwz @ 0x8088BAD0
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    FUN_8084A6AC(r4, r5, r6, r7, r8); // bl 0x8084A6AC
    /* b 0x8088bba8 */ // 0x8088BAEC
    r3 = *(0xac + r23); // lwz @ 0x8088BAF0
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    /* li r31, 1 */ // 0x8088BB08
    /* li r30, 1 */ // 0x8088BB0C
    FUN_8084A6AC(r6, r7, r8); // bl 0x8084A6AC
    if (!=) goto 0x0x8088bb5c;
    r3 = *(0x16c + r23); // lwz @ 0x8088BB1C
    /* li r29, 0 */ // 0x8088BB20
    if (==) goto 0x0x8088bb50;
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    FUN_8084A6AC(r4, r5, r6, r7, r8); // bl 0x8084A6AC
    if (==) goto 0x0x8088bb50;
    /* li r29, 1 */ // 0x8088BB4C
    if (!=) goto 0x0x8088bb5c;
    /* li r30, 0 */ // 0x8088BB58
    if (!=) goto 0x0x8088bba4;
    r3 = *(0x170 + r23); // lwz @ 0x8088BB64
    /* li r29, 0 */ // 0x8088BB68
    if (==) goto 0x0x8088bb98;
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    FUN_8084A6AC(r4, r5, r6, r7, r8); // bl 0x8084A6AC
    if (==) goto 0x0x8088bb98;
    /* li r29, 1 */ // 0x8088BB94
    if (!=) goto 0x0x8088bba4;
    /* li r31, 0 */ // 0x8088BBA0
    r3 = r31;
    r0 = *(0x34 + r1); // lwz @ 0x8088BBAC
    return;
}