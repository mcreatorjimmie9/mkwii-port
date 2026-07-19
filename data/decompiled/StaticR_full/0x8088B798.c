/* Function at 0x8088B798, size=388 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r23 */
/* Calls: 5 function(s) */

int FUN_8088B798(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -64(r1) */
    /* saved r23 */
    /* stfd f31, 0x38(r1) */ // 0x8088B7A4
    /* fmr f31, f1 */ // 0x8088B7A8
    /* stmw r23, 0x14(r1) */ // 0x8088B7AC
    r29 = r9;
    r24 = r4;
    r23 = r3;
    r25 = r5;
    r26 = r6;
    r27 = r7;
    r28 = r8;
    r4 = r29;
    r12 = *(0 + r3); // lwz @ 0x8088B7D0
    r12 = *(0x120 + r12); // lwz @ 0x8088B7D4
    /* mtctr r12 */ // 0x8088B7D8
    /* bctrl  */ // 0x8088B7DC
    /* lis r4, 0 */ // 0x8088B7E0
    r3 = r23;
    r4 = *(0 + r4); // lwz @ 0x8088B7E8
    r0 = *(0x20 + r4); // lwz @ 0x8088B7EC
    /* subf r4, r29, r0 */ // 0x8088B7F0
    FUN_8089A2C0(r4, r3); // bl 0x8089A2C0
    r12 = *(0 + r23); // lwz @ 0x8088B7F8
    r31 = r3;
    r3 = r23;
    r12 = *(0x158 + r12); // lwz @ 0x8088B804
    r4 = r31;
    /* mtctr r12 */ // 0x8088B80C
    /* bctrl  */ // 0x8088B810
    if (!=) goto 0x0x8088b840;
    /* fmr f1, f31 */ // 0x8088B81C
    r3 = *(0xac + r23); // lwz @ 0x8088B820
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    FUN_8084AF14(r4, r5, r6, r7, r8); // bl 0x8084AF14
    /* b 0x8088b904 */ // 0x8088B83C
    /* fmr f1, f31 */ // 0x8088B840
    r3 = *(0xac + r23); // lwz @ 0x8088B844
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    /* li r31, 1 */ // 0x8088B85C
    /* li r30, 1 */ // 0x8088B860
    FUN_8084AF14(r6, r7, r8); // bl 0x8084AF14
    if (!=) goto 0x0x8088b8b4;
    r3 = *(0x16c + r23); // lwz @ 0x8088B870
    /* li r29, 0 */ // 0x8088B874
    if (==) goto 0x0x8088b8a8;
    /* fmr f1, f31 */ // 0x8088B880
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    FUN_8084AF14(r4, r5, r6, r7, r8); // bl 0x8084AF14
    if (==) goto 0x0x8088b8a8;
    /* li r29, 1 */ // 0x8088B8A4
    if (!=) goto 0x0x8088b8b4;
    /* li r30, 0 */ // 0x8088B8B0
    if (!=) goto 0x0x8088b900;
    r3 = *(0x170 + r23); // lwz @ 0x8088B8BC
    /* li r29, 0 */ // 0x8088B8C0
    if (==) goto 0x0x8088b8f4;
    /* fmr f1, f31 */ // 0x8088B8CC
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    FUN_8084AF14(r4, r5, r6, r7, r8); // bl 0x8084AF14
    if (==) goto 0x0x8088b8f4;
    /* li r29, 1 */ // 0x8088B8F0
    if (!=) goto 0x0x8088b900;
    /* li r31, 0 */ // 0x8088B8FC
    r3 = r31;
    /* lfd f31, 0x38(r1) */ // 0x8088B904
    r0 = *(0x44 + r1); // lwz @ 0x8088B90C
    return;
}