/* Function at 0x8088B0B8, size=328 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r23 */
/* Calls: 5 function(s) */

int FUN_8088B0B8(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r23 */
    /* lis r9, 0 */ // 0x8088B0C0
    *(0x34 + r1) = r0; // stw @ 0x8088B0C4
    /* stmw r23, 0xc(r1) */ // 0x8088B0C8
    r24 = r4;
    r23 = r3;
    r25 = r5;
    r26 = r6;
    r27 = r7;
    r28 = r8;
    r4 = *(0 + r9); // lwz @ 0x8088B0E4
    r4 = *(0x20 + r4); // lwz @ 0x8088B0E8
    FUN_8089A2C0(); // bl 0x8089A2C0
    r12 = *(0 + r23); // lwz @ 0x8088B0F0
    r31 = r3;
    r3 = r23;
    r12 = *(0x158 + r12); // lwz @ 0x8088B0FC
    r4 = r31;
    /* mtctr r12 */ // 0x8088B104
    /* bctrl  */ // 0x8088B108
    if (!=) goto 0x0x8088b134;
    r3 = *(0xac + r23); // lwz @ 0x8088B114
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    FUN_8084B414(r4, r5, r6, r7, r8); // bl 0x8084B414
    /* b 0x8088b1ec */ // 0x8088B130
    r3 = *(0xac + r23); // lwz @ 0x8088B134
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    /* li r31, 1 */ // 0x8088B14C
    /* li r30, 1 */ // 0x8088B150
    FUN_8084B414(r6, r7, r8); // bl 0x8084B414
    if (!=) goto 0x0x8088b1a0;
    r3 = *(0x16c + r23); // lwz @ 0x8088B160
    /* li r29, 0 */ // 0x8088B164
    if (==) goto 0x0x8088b194;
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    FUN_8084B414(r4, r5, r6, r7, r8); // bl 0x8084B414
    if (==) goto 0x0x8088b194;
    /* li r29, 1 */ // 0x8088B190
    if (!=) goto 0x0x8088b1a0;
    /* li r30, 0 */ // 0x8088B19C
    if (!=) goto 0x0x8088b1e8;
    r3 = *(0x170 + r23); // lwz @ 0x8088B1A8
    /* li r29, 0 */ // 0x8088B1AC
    if (==) goto 0x0x8088b1dc;
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    FUN_8084B414(r4, r5, r6, r7, r8); // bl 0x8084B414
    if (==) goto 0x0x8088b1dc;
    /* li r29, 1 */ // 0x8088B1D8
    if (!=) goto 0x0x8088b1e8;
    /* li r31, 0 */ // 0x8088B1E4
    r3 = r31;
    r0 = *(0x34 + r1); // lwz @ 0x8088B1F0
    return;
}