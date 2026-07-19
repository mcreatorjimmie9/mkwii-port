/* Function at 0x8088B348, size=328 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r23 */
/* Calls: 5 function(s) */

int FUN_8088B348(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r23 */
    /* lis r9, 0 */ // 0x8088B350
    *(0x34 + r1) = r0; // stw @ 0x8088B354
    /* stmw r23, 0xc(r1) */ // 0x8088B358
    r24 = r4;
    r23 = r3;
    r25 = r5;
    r26 = r6;
    r27 = r7;
    r28 = r8;
    r4 = *(0 + r9); // lwz @ 0x8088B374
    r4 = *(0x20 + r4); // lwz @ 0x8088B378
    FUN_8089A2C0(); // bl 0x8089A2C0
    r12 = *(0 + r23); // lwz @ 0x8088B380
    r31 = r3;
    r3 = r23;
    r12 = *(0x158 + r12); // lwz @ 0x8088B38C
    r4 = r31;
    /* mtctr r12 */ // 0x8088B394
    /* bctrl  */ // 0x8088B398
    if (!=) goto 0x0x8088b3c4;
    r3 = *(0xac + r23); // lwz @ 0x8088B3A4
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    FUN_8084B77C(r4, r5, r6, r7, r8); // bl 0x8084B77C
    /* b 0x8088b47c */ // 0x8088B3C0
    r3 = *(0xac + r23); // lwz @ 0x8088B3C4
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    /* li r31, 1 */ // 0x8088B3DC
    /* li r30, 1 */ // 0x8088B3E0
    FUN_8084B77C(r6, r7, r8); // bl 0x8084B77C
    if (!=) goto 0x0x8088b430;
    r3 = *(0x16c + r23); // lwz @ 0x8088B3F0
    /* li r29, 0 */ // 0x8088B3F4
    if (==) goto 0x0x8088b424;
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    FUN_8084B77C(r4, r5, r6, r7, r8); // bl 0x8084B77C
    if (==) goto 0x0x8088b424;
    /* li r29, 1 */ // 0x8088B420
    if (!=) goto 0x0x8088b430;
    /* li r30, 0 */ // 0x8088B42C
    if (!=) goto 0x0x8088b478;
    r3 = *(0x170 + r23); // lwz @ 0x8088B438
    /* li r29, 0 */ // 0x8088B43C
    if (==) goto 0x0x8088b46c;
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    FUN_8084B77C(r4, r5, r6, r7, r8); // bl 0x8084B77C
    if (==) goto 0x0x8088b46c;
    /* li r29, 1 */ // 0x8088B468
    if (!=) goto 0x0x8088b478;
    /* li r31, 0 */ // 0x8088B474
    r3 = r31;
    r0 = *(0x34 + r1); // lwz @ 0x8088B480
    return;
}