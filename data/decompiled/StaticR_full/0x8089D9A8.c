/* Function at 0x8089D9A8, size=276 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r23 */
/* Calls: 4 function(s) */

int FUN_8089D9A8(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -64(r1) */
    /* saved r23 */
    /* stfd f31, 0x38(r1) */ // 0x8089D9B4
    /* fmr f31, f1 */ // 0x8089D9B8
    /* stmw r23, 0x14(r1) */ // 0x8089D9BC
    r31 = r3;
    r23 = r4;
    r24 = r5;
    r25 = r6;
    r26 = r7;
    r27 = r8;
    r28 = r9;
    r0 = *(4 + r3); // lhz @ 0x8089D9DC
    if (!=) goto 0x0x8089d9f0;
    /* li r3, 0 */ // 0x8089D9E8
    /* b 0x8089daa4 */ // 0x8089D9EC
    /* lis r30, 0 */ // 0x8089D9F0
    /* li r29, 0 */ // 0x8089D9F4
    r3 = *(0 + r30); // lwz @ 0x8089D9F8
    /* li r5, 0x10 */ // 0x8089D9FC
    FUN_80816AD0(r5); // bl 0x80816AD0
    if (!=) goto 0x0x8089da34;
    /* fmr f1, f31 */ // 0x8089DA0C
    r3 = r31;
    r4 = r23;
    r5 = r24;
    r6 = r25;
    r7 = r26;
    r8 = r27;
    r9 = r28;
    FUN_8089D064(r5, r6, r7, r8, r9); // bl 0x8089D064
    /* b 0x8089daa4 */ // 0x8089DA30
    r3 = *(0 + r30); // lwz @ 0x8089DA34
    FUN_80815B9C(r8, r9); // bl 0x80815B9C
    /* b 0x8089da90 */ // 0x8089DA3C
    if (==) goto 0x0x8089da90;
    r12 = *(0 + r3); // lwz @ 0x8089DA48
    /* fmr f1, f31 */ // 0x8089DA4C
    r4 = r23;
    r5 = r24;
    r12 = *(0xf8 + r12); // lwz @ 0x8089DA58
    r6 = r25;
    r7 = r26;
    r8 = r27;
    r9 = r28;
    /* li r31, 0 */ // 0x8089DA6C
    /* mtctr r12 */ // 0x8089DA70
    /* bctrl  */ // 0x8089DA74
    if (!=) goto 0x0x8089da88;
    if (==) goto 0x0x8089da8c;
    /* li r31, 1 */ // 0x8089DA88
    r29 = r31;
    r3 = *(0 + r30); // lwz @ 0x8089DA90
    FUN_80815B34(); // bl 0x80815B34
    if (!=) goto 0x0x8089da40;
    r3 = r29;
    /* lfd f31, 0x38(r1) */ // 0x8089DAA4
    r0 = *(0x44 + r1); // lwz @ 0x8089DAAC
    return;
}