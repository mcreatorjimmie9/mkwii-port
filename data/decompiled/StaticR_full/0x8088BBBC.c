/* Function at 0x8088BBBC, size=328 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r23 */
/* Calls: 5 function(s) */

int FUN_8088BBBC(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r23 */
    /* lis r9, 0 */ // 0x8088BBC4
    *(0x34 + r1) = r0; // stw @ 0x8088BBC8
    /* stmw r23, 0xc(r1) */ // 0x8088BBCC
    r24 = r4;
    r23 = r3;
    r25 = r5;
    r26 = r6;
    r27 = r7;
    r28 = r8;
    r4 = *(0 + r9); // lwz @ 0x8088BBE8
    r4 = *(0x20 + r4); // lwz @ 0x8088BBEC
    FUN_8089A2C0(); // bl 0x8089A2C0
    r12 = *(0 + r23); // lwz @ 0x8088BBF4
    r31 = r3;
    r3 = r23;
    r12 = *(0x158 + r12); // lwz @ 0x8088BC00
    r4 = r31;
    /* mtctr r12 */ // 0x8088BC08
    /* bctrl  */ // 0x8088BC0C
    if (!=) goto 0x0x8088bc38;
    r3 = *(0xac + r23); // lwz @ 0x8088BC18
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    FUN_8084A86C(r4, r5, r6, r7, r8); // bl 0x8084A86C
    /* b 0x8088bcf0 */ // 0x8088BC34
    r3 = *(0xac + r23); // lwz @ 0x8088BC38
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    /* li r31, 1 */ // 0x8088BC50
    /* li r30, 1 */ // 0x8088BC54
    FUN_8084A86C(r6, r7, r8); // bl 0x8084A86C
    if (!=) goto 0x0x8088bca4;
    r3 = *(0x16c + r23); // lwz @ 0x8088BC64
    /* li r29, 0 */ // 0x8088BC68
    if (==) goto 0x0x8088bc98;
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    FUN_8084A86C(r4, r5, r6, r7, r8); // bl 0x8084A86C
    if (==) goto 0x0x8088bc98;
    /* li r29, 1 */ // 0x8088BC94
    if (!=) goto 0x0x8088bca4;
    /* li r30, 0 */ // 0x8088BCA0
    if (!=) goto 0x0x8088bcec;
    r3 = *(0x170 + r23); // lwz @ 0x8088BCAC
    /* li r29, 0 */ // 0x8088BCB0
    if (==) goto 0x0x8088bce0;
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    FUN_8084A86C(r4, r5, r6, r7, r8); // bl 0x8084A86C
    if (==) goto 0x0x8088bce0;
    /* li r29, 1 */ // 0x8088BCDC
    if (!=) goto 0x0x8088bcec;
    /* li r31, 0 */ // 0x8088BCE8
    r3 = r31;
    r0 = *(0x34 + r1); // lwz @ 0x8088BCF4
    return;
}