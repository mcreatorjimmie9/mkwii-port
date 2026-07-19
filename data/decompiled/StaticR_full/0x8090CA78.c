/* Function at 0x8090CA78, size=152 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_8090CA78(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stfd f31, 0x28(r1) */ // 0x8090CA84
    /* fmr f31, f1 */ // 0x8090CA88
    /* stmw r25, 0xc(r1) */ // 0x8090CA8C
    r31 = r9;
    r26 = r4;
    r25 = r3;
    r27 = r5;
    r28 = r6;
    r29 = r7;
    r30 = r8;
    r4 = r31;
    r12 = *(0 + r3); // lwz @ 0x8090CAB0
    r12 = *(0x120 + r12); // lwz @ 0x8090CAB4
    /* mtctr r12 */ // 0x8090CAB8
    /* bctrl  */ // 0x8090CABC
    r12 = *(0 + r25); // lwz @ 0x8090CAC0
    r3 = r25;
    r4 = r31;
    r12 = *(0x124 + r12); // lwz @ 0x8090CACC
    /* mtctr r12 */ // 0x8090CAD0
    /* bctrl  */ // 0x8090CAD4
    /* fmr f1, f31 */ // 0x8090CAD8
    r3 = *(0xac + r25); // lwz @ 0x8090CADC
    r4 = r26;
    r5 = r27;
    r6 = r28;
    r7 = r29;
    r8 = r30;
    FUN_8084BEA0(r4, r5, r6, r7, r8); // bl 0x8084BEA0
    /* lfd f31, 0x28(r1) */ // 0x8090CAF8
    r0 = *(0x34 + r1); // lwz @ 0x8090CB00
    return;
}