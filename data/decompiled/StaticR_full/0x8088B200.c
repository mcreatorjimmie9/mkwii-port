/* Function at 0x8088B200, size=328 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r23 */
/* Calls: 5 function(s) */

int FUN_8088B200(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r23 */
    /* lis r9, 0 */ // 0x8088B208
    *(0x34 + r1) = r0; // stw @ 0x8088B20C
    /* stmw r23, 0xc(r1) */ // 0x8088B210
    r24 = r4;
    r23 = r3;
    r25 = r5;
    r26 = r6;
    r27 = r7;
    r28 = r8;
    r4 = *(0 + r9); // lwz @ 0x8088B22C
    r4 = *(0x20 + r4); // lwz @ 0x8088B230
    FUN_8089A2C0(); // bl 0x8089A2C0
    r12 = *(0 + r23); // lwz @ 0x8088B238
    r31 = r3;
    r3 = r23;
    r12 = *(0x158 + r12); // lwz @ 0x8088B244
    r4 = r31;
    /* mtctr r12 */ // 0x8088B24C
    /* bctrl  */ // 0x8088B250
    if (!=) goto 0x0x8088b27c;
    r3 = *(0xac + r23); // lwz @ 0x8088B25C
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    FUN_8084B5EC(r4, r5, r6, r7, r8); // bl 0x8084B5EC
    /* b 0x8088b334 */ // 0x8088B278
    r3 = *(0xac + r23); // lwz @ 0x8088B27C
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    /* li r31, 1 */ // 0x8088B294
    /* li r30, 1 */ // 0x8088B298
    FUN_8084B5EC(r6, r7, r8); // bl 0x8084B5EC
    if (!=) goto 0x0x8088b2e8;
    r3 = *(0x16c + r23); // lwz @ 0x8088B2A8
    /* li r29, 0 */ // 0x8088B2AC
    if (==) goto 0x0x8088b2dc;
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    FUN_8084B5EC(r4, r5, r6, r7, r8); // bl 0x8084B5EC
    if (==) goto 0x0x8088b2dc;
    /* li r29, 1 */ // 0x8088B2D8
    if (!=) goto 0x0x8088b2e8;
    /* li r30, 0 */ // 0x8088B2E4
    if (!=) goto 0x0x8088b330;
    r3 = *(0x170 + r23); // lwz @ 0x8088B2F0
    /* li r29, 0 */ // 0x8088B2F4
    if (==) goto 0x0x8088b324;
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    FUN_8084B5EC(r4, r5, r6, r7, r8); // bl 0x8084B5EC
    if (==) goto 0x0x8088b324;
    /* li r29, 1 */ // 0x8088B320
    if (!=) goto 0x0x8088b330;
    /* li r31, 0 */ // 0x8088B32C
    r3 = r31;
    r0 = *(0x34 + r1); // lwz @ 0x8088B338
    return;
}