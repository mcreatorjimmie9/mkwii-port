/* Function at 0x8089D894, size=276 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r23 */
/* Calls: 4 function(s) */

int FUN_8089D894(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -64(r1) */
    /* saved r23 */
    /* stfd f31, 0x38(r1) */ // 0x8089D8A0
    /* fmr f31, f1 */ // 0x8089D8A4
    /* stmw r23, 0x14(r1) */ // 0x8089D8A8
    r31 = r3;
    r23 = r4;
    r24 = r5;
    r25 = r6;
    r26 = r7;
    r27 = r8;
    r28 = r9;
    r0 = *(4 + r3); // lhz @ 0x8089D8C8
    if (!=) goto 0x0x8089d8dc;
    /* li r3, 0 */ // 0x8089D8D4
    /* b 0x8089d990 */ // 0x8089D8D8
    /* lis r30, 0 */ // 0x8089D8DC
    /* li r29, 0 */ // 0x8089D8E0
    r3 = *(0 + r30); // lwz @ 0x8089D8E4
    /* li r5, 0x10 */ // 0x8089D8E8
    FUN_80816AD0(r5); // bl 0x80816AD0
    if (!=) goto 0x0x8089d920;
    /* fmr f1, f31 */ // 0x8089D8F8
    r3 = r31;
    r4 = r23;
    r5 = r24;
    r6 = r25;
    r7 = r26;
    r8 = r27;
    r9 = r28;
    FUN_8089CF8C(r5, r6, r7, r8, r9); // bl 0x8089CF8C
    /* b 0x8089d990 */ // 0x8089D91C
    r3 = *(0 + r30); // lwz @ 0x8089D920
    FUN_80815B9C(r8, r9); // bl 0x80815B9C
    /* b 0x8089d97c */ // 0x8089D928
    if (==) goto 0x0x8089d97c;
    r12 = *(0 + r3); // lwz @ 0x8089D934
    /* fmr f1, f31 */ // 0x8089D938
    r4 = r23;
    r5 = r24;
    r12 = *(0xf4 + r12); // lwz @ 0x8089D944
    r6 = r25;
    r7 = r26;
    r8 = r27;
    r9 = r28;
    /* li r31, 0 */ // 0x8089D958
    /* mtctr r12 */ // 0x8089D95C
    /* bctrl  */ // 0x8089D960
    if (!=) goto 0x0x8089d974;
    if (==) goto 0x0x8089d978;
    /* li r31, 1 */ // 0x8089D974
    r29 = r31;
    r3 = *(0 + r30); // lwz @ 0x8089D97C
    FUN_80815B34(); // bl 0x80815B34
    if (!=) goto 0x0x8089d92c;
    r3 = r29;
    /* lfd f31, 0x38(r1) */ // 0x8089D990
    r0 = *(0x44 + r1); // lwz @ 0x8089D998
    return;
}