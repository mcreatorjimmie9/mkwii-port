/* Function at 0x8089D064, size=216 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r23 */
/* Calls: 2 function(s) */

int FUN_8089D064(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -64(r1) */
    /* saved r23 */
    /* stfd f31, 0x38(r1) */ // 0x8089D070
    /* fmr f31, f1 */ // 0x8089D074
    /* stmw r23, 0x14(r1) */ // 0x8089D078
    r23 = r4;
    r24 = r5;
    r25 = r6;
    r26 = r7;
    r27 = r8;
    r28 = r9;
    r0 = *(4 + r3); // lhz @ 0x8089D094
    if (!=) goto 0x0x8089d0a8;
    /* li r3, 0 */ // 0x8089D0A0
    /* b 0x8089d124 */ // 0x8089D0A4
    /* lis r30, 0 */ // 0x8089D0A8
    /* li r29, 0 */ // 0x8089D0AC
    r3 = *(0 + r30); // lwz @ 0x8089D0B0
    /* li r5, 0x10 */ // 0x8089D0B4
    FUN_80816784(r5); // bl 0x80816784
    /* b 0x8089d110 */ // 0x8089D0BC
    if (==) goto 0x0x8089d110;
    r12 = *(0 + r3); // lwz @ 0x8089D0C8
    /* fmr f1, f31 */ // 0x8089D0CC
    r4 = r23;
    r5 = r24;
    r12 = *(0xd4 + r12); // lwz @ 0x8089D0D8
    r6 = r25;
    r7 = r26;
    r8 = r27;
    r9 = r28;
    /* li r31, 0 */ // 0x8089D0EC
    /* mtctr r12 */ // 0x8089D0F0
    /* bctrl  */ // 0x8089D0F4
    if (!=) goto 0x0x8089d108;
    if (==) goto 0x0x8089d10c;
    /* li r31, 1 */ // 0x8089D108
    r29 = r31;
    r3 = *(0 + r30); // lwz @ 0x8089D110
    FUN_80815B34(); // bl 0x80815B34
    if (!=) goto 0x0x8089d0c0;
    r3 = r29;
    /* lfd f31, 0x38(r1) */ // 0x8089D124
    r0 = *(0x44 + r1); // lwz @ 0x8089D12C
    return;
}