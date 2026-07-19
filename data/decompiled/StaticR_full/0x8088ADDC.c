/* Function at 0x8088ADDC, size=388 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r23 */
/* Calls: 5 function(s) */

int FUN_8088ADDC(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -64(r1) */
    /* saved r23 */
    /* stfd f31, 0x38(r1) */ // 0x8088ADE8
    /* fmr f31, f1 */ // 0x8088ADEC
    /* stmw r23, 0x14(r1) */ // 0x8088ADF0
    r29 = r9;
    r24 = r4;
    r23 = r3;
    r25 = r5;
    r26 = r6;
    r27 = r7;
    r28 = r8;
    r4 = r29;
    r12 = *(0 + r3); // lwz @ 0x8088AE14
    r12 = *(0x120 + r12); // lwz @ 0x8088AE18
    /* mtctr r12 */ // 0x8088AE1C
    /* bctrl  */ // 0x8088AE20
    /* lis r4, 0 */ // 0x8088AE24
    r3 = r23;
    r4 = *(0 + r4); // lwz @ 0x8088AE2C
    r0 = *(0x20 + r4); // lwz @ 0x8088AE30
    /* subf r4, r29, r0 */ // 0x8088AE34
    FUN_8089A2C0(r4, r3); // bl 0x8089A2C0
    r12 = *(0 + r23); // lwz @ 0x8088AE3C
    r31 = r3;
    r3 = r23;
    r12 = *(0x158 + r12); // lwz @ 0x8088AE48
    r4 = r31;
    /* mtctr r12 */ // 0x8088AE50
    /* bctrl  */ // 0x8088AE54
    if (!=) goto 0x0x8088ae84;
    /* fmr f1, f31 */ // 0x8088AE60
    r3 = *(0xac + r23); // lwz @ 0x8088AE64
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    FUN_8084BCF4(r4, r5, r6, r7, r8); // bl 0x8084BCF4
    /* b 0x8088af48 */ // 0x8088AE80
    /* fmr f1, f31 */ // 0x8088AE84
    r3 = *(0xac + r23); // lwz @ 0x8088AE88
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    /* li r31, 1 */ // 0x8088AEA0
    /* li r30, 1 */ // 0x8088AEA4
    FUN_8084BCF4(r6, r7, r8); // bl 0x8084BCF4
    if (!=) goto 0x0x8088aef8;
    r3 = *(0x16c + r23); // lwz @ 0x8088AEB4
    /* li r29, 0 */ // 0x8088AEB8
    if (==) goto 0x0x8088aeec;
    /* fmr f1, f31 */ // 0x8088AEC4
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    FUN_8084BCF4(r4, r5, r6, r7, r8); // bl 0x8084BCF4
    if (==) goto 0x0x8088aeec;
    /* li r29, 1 */ // 0x8088AEE8
    if (!=) goto 0x0x8088aef8;
    /* li r30, 0 */ // 0x8088AEF4
    if (!=) goto 0x0x8088af44;
    r3 = *(0x170 + r23); // lwz @ 0x8088AF00
    /* li r29, 0 */ // 0x8088AF04
    if (==) goto 0x0x8088af38;
    /* fmr f1, f31 */ // 0x8088AF10
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    FUN_8084BCF4(r4, r5, r6, r7, r8); // bl 0x8084BCF4
    if (==) goto 0x0x8088af38;
    /* li r29, 1 */ // 0x8088AF34
    if (!=) goto 0x0x8088af44;
    /* li r31, 0 */ // 0x8088AF40
    r3 = r31;
    /* lfd f31, 0x38(r1) */ // 0x8088AF48
    r0 = *(0x44 + r1); // lwz @ 0x8088AF50
    return;
}