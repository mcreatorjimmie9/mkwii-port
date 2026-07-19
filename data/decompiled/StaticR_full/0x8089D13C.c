/* Function at 0x8089D13C, size=344 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r22 */
/* Calls: 2 function(s) */

int FUN_8089D13C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -64(r1) */
    /* saved r22 */
    /* stfd f31, 0x38(r1) */ // 0x8089D148
    /* fmr f31, f1 */ // 0x8089D14C
    /* stmw r22, 0x10(r1) */ // 0x8089D150
    r22 = r4;
    r23 = r5;
    r24 = r6;
    r25 = r7;
    r26 = r8;
    r27 = r9;
    r0 = *(4 + r3); // lhz @ 0x8089D16C
    if (!=) goto 0x0x8089d180;
    /* li r3, 0 */ // 0x8089D178
    /* b 0x8089d27c */ // 0x8089D17C
    /* li r29, 0 */ // 0x8089D184
    /* li r28, 0 */ // 0x8089D188
    if (==) goto 0x0x8089d1fc;
    r3 = *(0x58 + r7); // lwz @ 0x8089D190
    if (==) goto 0x0x8089d1fc;
    r0 = *(0 + r3); // lwz @ 0x8089D19C
    /* rlwinm. r0, r0, 0, 0x17, 0x17 */ // 0x8089D1A0
    if (==) goto 0x0x8089d1b0;
    r28 = *(4 + r3); // lwz @ 0x8089D1A8
    /* b 0x8089d1b4 */ // 0x8089D1AC
    /* li r28, 0 */ // 0x8089D1B0
    if (==) goto 0x0x8089d1fc;
    r12 = *(0 + r28); // lwz @ 0x8089D1BC
    /* fmr f1, f31 */ // 0x8089D1C0
    r3 = r28;
    r4 = r22;
    r12 = *(0xd8 + r12); // lwz @ 0x8089D1CC
    r5 = r23;
    r6 = r24;
    r7 = r25;
    r8 = r26;
    r9 = r27;
    /* li r29, 1 */ // 0x8089D1E4
    /* mtctr r12 */ // 0x8089D1E8
    /* bctrl  */ // 0x8089D1EC
    if (!=) goto 0x0x8089d1fc;
    /* li r29, 0 */ // 0x8089D1F8
    /* lis r30, 0 */ // 0x8089D1FC
    /* fmr f1, f31 */ // 0x8089D200
    r3 = *(0 + r30); // lwz @ 0x8089D204
    r4 = r22;
    /* li r5, 0x10 */ // 0x8089D20C
    FUN_80816784(r4, r5); // bl 0x80816784
    /* b 0x8089d268 */ // 0x8089D214
    if (==) goto 0x0x8089d268;
    r12 = *(0 + r3); // lwz @ 0x8089D220
    /* fmr f1, f31 */ // 0x8089D224
    r4 = r22;
    r5 = r23;
    r12 = *(0xd8 + r12); // lwz @ 0x8089D230
    r6 = r24;
    r7 = r25;
    r8 = r26;
    r9 = r27;
    /* li r31, 0 */ // 0x8089D244
    /* mtctr r12 */ // 0x8089D248
    /* bctrl  */ // 0x8089D24C
    if (!=) goto 0x0x8089d260;
    if (==) goto 0x0x8089d264;
    /* li r31, 1 */ // 0x8089D260
    r29 = r31;
    r3 = *(0 + r30); // lwz @ 0x8089D268
    FUN_80815B34(); // bl 0x80815B34
    if (!=) goto 0x0x8089d218;
    r3 = r29;
    /* lfd f31, 0x38(r1) */ // 0x8089D27C
    r0 = *(0x44 + r1); // lwz @ 0x8089D284
    return;
}