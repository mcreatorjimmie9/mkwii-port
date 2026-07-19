/* Function at 0x80710C04, size=252 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_80710C04(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stfd f31, 0x28(r1) */ // 0x80710C10
    /* fmr f31, f1 */ // 0x80710C14
    /* stmw r25, 0xc(r1) */ // 0x80710C18
    r28 = r6;
    r26 = r4;
    r30 = r8;
    r27 = r5;
    r25 = r3;
    r29 = r7;
    r31 = r9;
    r4 = r28;
    r5 = r30;
    r12 = *(0 + r3); // lwz @ 0x80710C40
    r12 = *(0x138 + r12); // lwz @ 0x80710C44
    /* mtctr r12 */ // 0x80710C48
    /* bctrl  */ // 0x80710C4C
    if (!=) goto 0x0x80710c60;
    /* li r31, 0 */ // 0x80710C58
    /* b 0x80710ce4 */ // 0x80710C5C
    r12 = *(0 + r25); // lwz @ 0x80710C60
    r3 = r25;
    r4 = r31;
    r12 = *(0x124 + r12); // lwz @ 0x80710C6C
    /* mtctr r12 */ // 0x80710C70
    /* bctrl  */ // 0x80710C74
    r12 = *(0 + r25); // lwz @ 0x80710C78
    r3 = r25;
    r4 = r31;
    r12 = *(0x120 + r12); // lwz @ 0x80710C84
    /* mtctr r12 */ // 0x80710C88
    /* bctrl  */ // 0x80710C8C
    /* fmr f1, f31 */ // 0x80710C90
    r3 = *(0xac + r25); // lwz @ 0x80710C94
    r4 = r26;
    r5 = r27;
    r6 = r28;
    r7 = r29;
    r8 = r30;
    /* li r31, 0 */ // 0x80710CAC
    FUN_8084AF14(r5, r6, r7, r8); // bl 0x8084AF14
    if (==) goto 0x0x80710ce4;
    r12 = *(0 + r25); // lwz @ 0x80710CBC
    r3 = r25;
    r4 = r28;
    r5 = r30;
    r12 = *(0x13c + r12); // lwz @ 0x80710CCC
    /* mtctr r12 */ // 0x80710CD0
    /* bctrl  */ // 0x80710CD4
    if (==) goto 0x0x80710ce4;
    /* li r31, 1 */ // 0x80710CE0
    r3 = r31;
    /* lfd f31, 0x28(r1) */ // 0x80710CE8
    r0 = *(0x34 + r1); // lwz @ 0x80710CF0
    return;
}