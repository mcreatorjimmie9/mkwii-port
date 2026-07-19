/* Function at 0x80710408, size=252 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_80710408(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stfd f31, 0x28(r1) */ // 0x80710414
    /* fmr f31, f1 */ // 0x80710418
    /* stmw r25, 0xc(r1) */ // 0x8071041C
    r28 = r6;
    r26 = r4;
    r30 = r8;
    r27 = r5;
    r25 = r3;
    r29 = r7;
    r31 = r9;
    r4 = r28;
    r5 = r30;
    r12 = *(0 + r3); // lwz @ 0x80710444
    r12 = *(0x138 + r12); // lwz @ 0x80710448
    /* mtctr r12 */ // 0x8071044C
    /* bctrl  */ // 0x80710450
    if (!=) goto 0x0x80710464;
    /* li r31, 0 */ // 0x8071045C
    /* b 0x807104e8 */ // 0x80710460
    r12 = *(0 + r25); // lwz @ 0x80710464
    r3 = r25;
    r4 = r31;
    r12 = *(0x120 + r12); // lwz @ 0x80710470
    /* mtctr r12 */ // 0x80710474
    /* bctrl  */ // 0x80710478
    r12 = *(0 + r25); // lwz @ 0x8071047C
    r3 = r25;
    r4 = r31;
    r12 = *(0x124 + r12); // lwz @ 0x80710488
    /* mtctr r12 */ // 0x8071048C
    /* bctrl  */ // 0x80710490
    /* fmr f1, f31 */ // 0x80710494
    r3 = *(0xac + r25); // lwz @ 0x80710498
    r4 = r26;
    r5 = r27;
    r6 = r28;
    r7 = r29;
    r8 = r30;
    /* li r31, 0 */ // 0x807104B0
    FUN_8084B90C(r5, r6, r7, r8); // bl 0x8084B90C
    if (==) goto 0x0x807104e8;
    r12 = *(0 + r25); // lwz @ 0x807104C0
    r3 = r25;
    r4 = r28;
    r5 = r30;
    r12 = *(0x13c + r12); // lwz @ 0x807104D0
    /* mtctr r12 */ // 0x807104D4
    /* bctrl  */ // 0x807104D8
    if (==) goto 0x0x807104e8;
    /* li r31, 1 */ // 0x807104E4
    r3 = r31;
    /* lfd f31, 0x28(r1) */ // 0x807104EC
    r0 = *(0x34 + r1); // lwz @ 0x807104F4
    return;
}