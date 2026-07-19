/* Function at 0x8088B614, size=388 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r23 */
/* Calls: 5 function(s) */

int FUN_8088B614(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -64(r1) */
    /* saved r23 */
    /* stfd f31, 0x38(r1) */ // 0x8088B620
    /* fmr f31, f1 */ // 0x8088B624
    /* stmw r23, 0x14(r1) */ // 0x8088B628
    r29 = r9;
    r24 = r4;
    r23 = r3;
    r25 = r5;
    r26 = r6;
    r27 = r7;
    r28 = r8;
    r4 = r29;
    r12 = *(0 + r3); // lwz @ 0x8088B64C
    r12 = *(0x120 + r12); // lwz @ 0x8088B650
    /* mtctr r12 */ // 0x8088B654
    /* bctrl  */ // 0x8088B658
    /* lis r4, 0 */ // 0x8088B65C
    r3 = r23;
    r4 = *(0 + r4); // lwz @ 0x8088B664
    r0 = *(0x20 + r4); // lwz @ 0x8088B668
    /* subf r4, r29, r0 */ // 0x8088B66C
    FUN_8089A2C0(r4, r3); // bl 0x8089A2C0
    r12 = *(0 + r23); // lwz @ 0x8088B674
    r31 = r3;
    r3 = r23;
    r12 = *(0x158 + r12); // lwz @ 0x8088B680
    r4 = r31;
    /* mtctr r12 */ // 0x8088B688
    /* bctrl  */ // 0x8088B68C
    if (!=) goto 0x0x8088b6bc;
    /* fmr f1, f31 */ // 0x8088B698
    r3 = *(0xac + r23); // lwz @ 0x8088B69C
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    FUN_8084AD38(r4, r5, r6, r7, r8); // bl 0x8084AD38
    /* b 0x8088b780 */ // 0x8088B6B8
    /* fmr f1, f31 */ // 0x8088B6BC
    r3 = *(0xac + r23); // lwz @ 0x8088B6C0
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    /* li r31, 1 */ // 0x8088B6D8
    /* li r30, 1 */ // 0x8088B6DC
    FUN_8084AD38(r6, r7, r8); // bl 0x8084AD38
    if (!=) goto 0x0x8088b730;
    r3 = *(0x16c + r23); // lwz @ 0x8088B6EC
    /* li r29, 0 */ // 0x8088B6F0
    if (==) goto 0x0x8088b724;
    /* fmr f1, f31 */ // 0x8088B6FC
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    FUN_8084AD38(r4, r5, r6, r7, r8); // bl 0x8084AD38
    if (==) goto 0x0x8088b724;
    /* li r29, 1 */ // 0x8088B720
    if (!=) goto 0x0x8088b730;
    /* li r30, 0 */ // 0x8088B72C
    if (!=) goto 0x0x8088b77c;
    r3 = *(0x170 + r23); // lwz @ 0x8088B738
    /* li r29, 0 */ // 0x8088B73C
    if (==) goto 0x0x8088b770;
    /* fmr f1, f31 */ // 0x8088B748
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    FUN_8084AD38(r4, r5, r6, r7, r8); // bl 0x8084AD38
    if (==) goto 0x0x8088b770;
    /* li r29, 1 */ // 0x8088B76C
    if (!=) goto 0x0x8088b77c;
    /* li r31, 0 */ // 0x8088B778
    r3 = r31;
    /* lfd f31, 0x38(r1) */ // 0x8088B780
    r0 = *(0x44 + r1); // lwz @ 0x8088B788
    return;
}