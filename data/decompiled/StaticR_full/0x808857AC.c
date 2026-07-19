/* Function at 0x808857AC, size=152 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_808857AC(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stfd f31, 0x28(r1) */ // 0x808857B8
    /* fmr f31, f1 */ // 0x808857BC
    /* stmw r25, 0xc(r1) */ // 0x808857C0
    r31 = r9;
    r26 = r4;
    r25 = r3;
    r27 = r5;
    r28 = r6;
    r29 = r7;
    r30 = r8;
    r4 = r31;
    r12 = *(0 + r3); // lwz @ 0x808857E4
    r12 = *(0x120 + r12); // lwz @ 0x808857E8
    /* mtctr r12 */ // 0x808857EC
    /* bctrl  */ // 0x808857F0
    r12 = *(0 + r25); // lwz @ 0x808857F4
    r3 = r25;
    r4 = r31;
    r12 = *(0x124 + r12); // lwz @ 0x80885800
    /* mtctr r12 */ // 0x80885804
    /* bctrl  */ // 0x80885808
    /* fmr f1, f31 */ // 0x8088580C
    r3 = *(0xac + r25); // lwz @ 0x80885810
    r4 = r26;
    r5 = r27;
    r6 = r28;
    r7 = r29;
    r8 = r30;
    FUN_8084BEA0(r4, r5, r6, r7, r8); // bl 0x8084BEA0
    /* lfd f31, 0x28(r1) */ // 0x8088582C
    r0 = *(0x34 + r1); // lwz @ 0x80885834
    return;
}