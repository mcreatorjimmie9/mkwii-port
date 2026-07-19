/* Function at 0x80710514, size=252 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_80710514(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stfd f31, 0x28(r1) */ // 0x80710520
    /* fmr f31, f1 */ // 0x80710524
    /* stmw r25, 0xc(r1) */ // 0x80710528
    r28 = r6;
    r26 = r4;
    r30 = r8;
    r27 = r5;
    r25 = r3;
    r29 = r7;
    r31 = r9;
    r4 = r28;
    r5 = r30;
    r12 = *(0 + r3); // lwz @ 0x80710550
    r12 = *(0x140 + r12); // lwz @ 0x80710554
    /* mtctr r12 */ // 0x80710558
    /* bctrl  */ // 0x8071055C
    if (!=) goto 0x0x80710570;
    /* li r31, 0 */ // 0x80710568
    /* b 0x807105f4 */ // 0x8071056C
    r12 = *(0 + r25); // lwz @ 0x80710570
    r3 = r25;
    r4 = r31;
    r12 = *(0x120 + r12); // lwz @ 0x8071057C
    /* mtctr r12 */ // 0x80710580
    /* bctrl  */ // 0x80710584
    r12 = *(0 + r25); // lwz @ 0x80710588
    r3 = r25;
    r4 = r31;
    r12 = *(0x124 + r12); // lwz @ 0x80710594
    /* mtctr r12 */ // 0x80710598
    /* bctrl  */ // 0x8071059C
    /* fmr f1, f31 */ // 0x807105A0
    r3 = *(0xac + r25); // lwz @ 0x807105A4
    r4 = r26;
    r5 = r27;
    r6 = r28;
    r7 = r29;
    r8 = r30;
    /* li r31, 0 */ // 0x807105BC
    FUN_8084BB00(r5, r6, r7, r8); // bl 0x8084BB00
    if (==) goto 0x0x807105f4;
    r12 = *(0 + r25); // lwz @ 0x807105CC
    r3 = r25;
    r4 = r28;
    r5 = r30;
    r12 = *(0x144 + r12); // lwz @ 0x807105DC
    /* mtctr r12 */ // 0x807105E0
    /* bctrl  */ // 0x807105E4
    if (==) goto 0x0x807105f4;
    /* li r31, 1 */ // 0x807105F0
    r3 = r31;
    /* lfd f31, 0x28(r1) */ // 0x807105F8
    r0 = *(0x34 + r1); // lwz @ 0x80710600
    return;
}