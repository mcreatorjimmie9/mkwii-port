/* Function at 0x8088AC58, size=388 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r23 */
/* Calls: 5 function(s) */

int FUN_8088AC58(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -64(r1) */
    /* saved r23 */
    /* stfd f31, 0x38(r1) */ // 0x8088AC64
    /* fmr f31, f1 */ // 0x8088AC68
    /* stmw r23, 0x14(r1) */ // 0x8088AC6C
    r29 = r9;
    r24 = r4;
    r23 = r3;
    r25 = r5;
    r26 = r6;
    r27 = r7;
    r28 = r8;
    r4 = r29;
    r12 = *(0 + r3); // lwz @ 0x8088AC90
    r12 = *(0x120 + r12); // lwz @ 0x8088AC94
    /* mtctr r12 */ // 0x8088AC98
    /* bctrl  */ // 0x8088AC9C
    /* lis r4, 0 */ // 0x8088ACA0
    r3 = r23;
    r4 = *(0 + r4); // lwz @ 0x8088ACA8
    r0 = *(0x20 + r4); // lwz @ 0x8088ACAC
    /* subf r4, r29, r0 */ // 0x8088ACB0
    FUN_8089A2C0(r4, r3); // bl 0x8089A2C0
    r12 = *(0 + r23); // lwz @ 0x8088ACB8
    r31 = r3;
    r3 = r23;
    r12 = *(0x158 + r12); // lwz @ 0x8088ACC4
    r4 = r31;
    /* mtctr r12 */ // 0x8088ACCC
    /* bctrl  */ // 0x8088ACD0
    if (!=) goto 0x0x8088ad00;
    /* fmr f1, f31 */ // 0x8088ACDC
    r3 = *(0xac + r23); // lwz @ 0x8088ACE0
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    FUN_8084BB00(r4, r5, r6, r7, r8); // bl 0x8084BB00
    /* b 0x8088adc4 */ // 0x8088ACFC
    /* fmr f1, f31 */ // 0x8088AD00
    r3 = *(0xac + r23); // lwz @ 0x8088AD04
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    /* li r31, 1 */ // 0x8088AD1C
    /* li r30, 1 */ // 0x8088AD20
    FUN_8084BB00(r6, r7, r8); // bl 0x8084BB00
    if (!=) goto 0x0x8088ad74;
    r3 = *(0x16c + r23); // lwz @ 0x8088AD30
    /* li r29, 0 */ // 0x8088AD34
    if (==) goto 0x0x8088ad68;
    /* fmr f1, f31 */ // 0x8088AD40
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    FUN_8084BB00(r4, r5, r6, r7, r8); // bl 0x8084BB00
    if (==) goto 0x0x8088ad68;
    /* li r29, 1 */ // 0x8088AD64
    if (!=) goto 0x0x8088ad74;
    /* li r30, 0 */ // 0x8088AD70
    if (!=) goto 0x0x8088adc0;
    r3 = *(0x170 + r23); // lwz @ 0x8088AD7C
    /* li r29, 0 */ // 0x8088AD80
    if (==) goto 0x0x8088adb4;
    /* fmr f1, f31 */ // 0x8088AD8C
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    FUN_8084BB00(r4, r5, r6, r7, r8); // bl 0x8084BB00
    if (==) goto 0x0x8088adb4;
    /* li r29, 1 */ // 0x8088ADB0
    if (!=) goto 0x0x8088adc0;
    /* li r31, 0 */ // 0x8088ADBC
    r3 = r31;
    /* lfd f31, 0x38(r1) */ // 0x8088ADC4
    r0 = *(0x44 + r1); // lwz @ 0x8088ADCC
    return;
}