/* Function at 0x8088B490, size=388 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r23 */
/* Calls: 5 function(s) */

int FUN_8088B490(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -64(r1) */
    /* saved r23 */
    /* stfd f31, 0x38(r1) */ // 0x8088B49C
    /* fmr f31, f1 */ // 0x8088B4A0
    /* stmw r23, 0x14(r1) */ // 0x8088B4A4
    r29 = r9;
    r24 = r4;
    r23 = r3;
    r25 = r5;
    r26 = r6;
    r27 = r7;
    r28 = r8;
    r4 = r29;
    r12 = *(0 + r3); // lwz @ 0x8088B4C8
    r12 = *(0x120 + r12); // lwz @ 0x8088B4CC
    /* mtctr r12 */ // 0x8088B4D0
    /* bctrl  */ // 0x8088B4D4
    /* lis r4, 0 */ // 0x8088B4D8
    r3 = r23;
    r4 = *(0 + r4); // lwz @ 0x8088B4E0
    r0 = *(0x20 + r4); // lwz @ 0x8088B4E4
    /* subf r4, r29, r0 */ // 0x8088B4E8
    FUN_8089A2C0(r4, r3); // bl 0x8089A2C0
    r12 = *(0 + r23); // lwz @ 0x8088B4F0
    r31 = r3;
    r3 = r23;
    r12 = *(0x158 + r12); // lwz @ 0x8088B4FC
    r4 = r31;
    /* mtctr r12 */ // 0x8088B504
    /* bctrl  */ // 0x8088B508
    if (!=) goto 0x0x8088b538;
    /* fmr f1, f31 */ // 0x8088B514
    r3 = *(0xac + r23); // lwz @ 0x8088B518
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    FUN_8084AB5C(r4, r5, r6, r7, r8); // bl 0x8084AB5C
    /* b 0x8088b5fc */ // 0x8088B534
    /* fmr f1, f31 */ // 0x8088B538
    r3 = *(0xac + r23); // lwz @ 0x8088B53C
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    /* li r31, 1 */ // 0x8088B554
    /* li r30, 1 */ // 0x8088B558
    FUN_8084AB5C(r6, r7, r8); // bl 0x8084AB5C
    if (!=) goto 0x0x8088b5ac;
    r3 = *(0x16c + r23); // lwz @ 0x8088B568
    /* li r29, 0 */ // 0x8088B56C
    if (==) goto 0x0x8088b5a0;
    /* fmr f1, f31 */ // 0x8088B578
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    FUN_8084AB5C(r4, r5, r6, r7, r8); // bl 0x8084AB5C
    if (==) goto 0x0x8088b5a0;
    /* li r29, 1 */ // 0x8088B59C
    if (!=) goto 0x0x8088b5ac;
    /* li r30, 0 */ // 0x8088B5A8
    if (!=) goto 0x0x8088b5f8;
    r3 = *(0x170 + r23); // lwz @ 0x8088B5B4
    /* li r29, 0 */ // 0x8088B5B8
    if (==) goto 0x0x8088b5ec;
    /* fmr f1, f31 */ // 0x8088B5C4
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    FUN_8084AB5C(r4, r5, r6, r7, r8); // bl 0x8084AB5C
    if (==) goto 0x0x8088b5ec;
    /* li r29, 1 */ // 0x8088B5E8
    if (!=) goto 0x0x8088b5f8;
    /* li r31, 0 */ // 0x8088B5F4
    r3 = r31;
    /* lfd f31, 0x38(r1) */ // 0x8088B5FC
    r0 = *(0x44 + r1); // lwz @ 0x8088B604
    return;
}