/* Function at 0x8089CF8C, size=216 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r23 */
/* Calls: 2 function(s) */

int FUN_8089CF8C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -64(r1) */
    /* saved r23 */
    /* stfd f31, 0x38(r1) */ // 0x8089CF98
    /* fmr f31, f1 */ // 0x8089CF9C
    /* stmw r23, 0x14(r1) */ // 0x8089CFA0
    r23 = r4;
    r24 = r5;
    r25 = r6;
    r26 = r7;
    r27 = r8;
    r28 = r9;
    r0 = *(4 + r3); // lhz @ 0x8089CFBC
    if (!=) goto 0x0x8089cfd0;
    /* li r3, 0 */ // 0x8089CFC8
    /* b 0x8089d04c */ // 0x8089CFCC
    /* lis r30, 0 */ // 0x8089CFD0
    /* li r29, 0 */ // 0x8089CFD4
    r3 = *(0 + r30); // lwz @ 0x8089CFD8
    /* li r5, 0x10 */ // 0x8089CFDC
    FUN_80816784(r5); // bl 0x80816784
    /* b 0x8089d038 */ // 0x8089CFE4
    if (==) goto 0x0x8089d038;
    r12 = *(0 + r3); // lwz @ 0x8089CFF0
    /* fmr f1, f31 */ // 0x8089CFF4
    r4 = r23;
    r5 = r24;
    r12 = *(0xd0 + r12); // lwz @ 0x8089D000
    r6 = r25;
    r7 = r26;
    r8 = r27;
    r9 = r28;
    /* li r31, 0 */ // 0x8089D014
    /* mtctr r12 */ // 0x8089D018
    /* bctrl  */ // 0x8089D01C
    if (!=) goto 0x0x8089d030;
    if (==) goto 0x0x8089d034;
    /* li r31, 1 */ // 0x8089D030
    r29 = r31;
    r3 = *(0 + r30); // lwz @ 0x8089D038
    FUN_80815B34(); // bl 0x80815B34
    if (!=) goto 0x0x8089cfe8;
    r3 = r29;
    /* lfd f31, 0x38(r1) */ // 0x8089D04C
    r0 = *(0x44 + r1); // lwz @ 0x8089D054
    return;
}