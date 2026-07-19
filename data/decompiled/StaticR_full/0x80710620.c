/* Function at 0x80710620, size=252 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_80710620(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stfd f31, 0x28(r1) */ // 0x8071062C
    /* fmr f31, f1 */ // 0x80710630
    /* stmw r25, 0xc(r1) */ // 0x80710634
    r28 = r6;
    r26 = r4;
    r30 = r8;
    r27 = r5;
    r25 = r3;
    r29 = r7;
    r31 = r9;
    r4 = r28;
    r5 = r30;
    r12 = *(0 + r3); // lwz @ 0x8071065C
    r12 = *(0x138 + r12); // lwz @ 0x80710660
    /* mtctr r12 */ // 0x80710664
    /* bctrl  */ // 0x80710668
    if (!=) goto 0x0x8071067c;
    /* li r31, 0 */ // 0x80710674
    /* b 0x80710700 */ // 0x80710678
    r12 = *(0 + r25); // lwz @ 0x8071067C
    r3 = r25;
    r4 = r31;
    r12 = *(0x120 + r12); // lwz @ 0x80710688
    /* mtctr r12 */ // 0x8071068C
    /* bctrl  */ // 0x80710690
    r12 = *(0 + r25); // lwz @ 0x80710694
    r3 = r25;
    r4 = r31;
    r12 = *(0x124 + r12); // lwz @ 0x807106A0
    /* mtctr r12 */ // 0x807106A4
    /* bctrl  */ // 0x807106A8
    /* fmr f1, f31 */ // 0x807106AC
    r3 = *(0xac + r25); // lwz @ 0x807106B0
    r4 = r26;
    r5 = r27;
    r6 = r28;
    r7 = r29;
    r8 = r30;
    /* li r31, 0 */ // 0x807106C8
    FUN_8084BCF4(r5, r6, r7, r8); // bl 0x8084BCF4
    if (==) goto 0x0x80710700;
    r12 = *(0 + r25); // lwz @ 0x807106D8
    r3 = r25;
    r4 = r28;
    r5 = r30;
    r12 = *(0x13c + r12); // lwz @ 0x807106E8
    /* mtctr r12 */ // 0x807106EC
    /* bctrl  */ // 0x807106F0
    if (==) goto 0x0x80710700;
    /* li r31, 1 */ // 0x807106FC
    r3 = r31;
    /* lfd f31, 0x28(r1) */ // 0x80710704
    r0 = *(0x34 + r1); // lwz @ 0x8071070C
    return;
}