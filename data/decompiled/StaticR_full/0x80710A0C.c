/* Function at 0x80710A0C, size=252 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_80710A0C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stfd f31, 0x28(r1) */ // 0x80710A18
    /* fmr f31, f1 */ // 0x80710A1C
    /* stmw r25, 0xc(r1) */ // 0x80710A20
    r28 = r6;
    r26 = r4;
    r30 = r8;
    r27 = r5;
    r25 = r3;
    r29 = r7;
    r31 = r9;
    r4 = r28;
    r5 = r30;
    r12 = *(0 + r3); // lwz @ 0x80710A48
    r12 = *(0x138 + r12); // lwz @ 0x80710A4C
    /* mtctr r12 */ // 0x80710A50
    /* bctrl  */ // 0x80710A54
    if (!=) goto 0x0x80710a68;
    /* li r31, 0 */ // 0x80710A60
    /* b 0x80710aec */ // 0x80710A64
    r12 = *(0 + r25); // lwz @ 0x80710A68
    r3 = r25;
    r4 = r31;
    r12 = *(0x124 + r12); // lwz @ 0x80710A74
    /* mtctr r12 */ // 0x80710A78
    /* bctrl  */ // 0x80710A7C
    r12 = *(0 + r25); // lwz @ 0x80710A80
    r3 = r25;
    r4 = r31;
    r12 = *(0x120 + r12); // lwz @ 0x80710A8C
    /* mtctr r12 */ // 0x80710A90
    /* bctrl  */ // 0x80710A94
    /* fmr f1, f31 */ // 0x80710A98
    r3 = *(0xac + r25); // lwz @ 0x80710A9C
    r4 = r26;
    r5 = r27;
    r6 = r28;
    r7 = r29;
    r8 = r30;
    /* li r31, 0 */ // 0x80710AB4
    FUN_8084AB5C(r5, r6, r7, r8); // bl 0x8084AB5C
    if (==) goto 0x0x80710aec;
    r12 = *(0 + r25); // lwz @ 0x80710AC4
    r3 = r25;
    r4 = r28;
    r5 = r30;
    r12 = *(0x13c + r12); // lwz @ 0x80710AD4
    /* mtctr r12 */ // 0x80710AD8
    /* bctrl  */ // 0x80710ADC
    if (==) goto 0x0x80710aec;
    /* li r31, 1 */ // 0x80710AE8
    r3 = r31;
    /* lfd f31, 0x28(r1) */ // 0x80710AF0
    r0 = *(0x34 + r1); // lwz @ 0x80710AF8
    return;
}