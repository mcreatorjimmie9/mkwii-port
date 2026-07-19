/* Function at 0x8089D294, size=344 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r22 */
/* Calls: 2 function(s) */

int FUN_8089D294(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -64(r1) */
    /* saved r22 */
    /* stfd f31, 0x38(r1) */ // 0x8089D2A0
    /* fmr f31, f1 */ // 0x8089D2A4
    /* stmw r22, 0x10(r1) */ // 0x8089D2A8
    r22 = r4;
    r23 = r5;
    r24 = r6;
    r25 = r7;
    r26 = r8;
    r27 = r9;
    r0 = *(4 + r3); // lhz @ 0x8089D2C4
    if (!=) goto 0x0x8089d2d8;
    /* li r3, 0 */ // 0x8089D2D0
    /* b 0x8089d3d4 */ // 0x8089D2D4
    /* li r29, 0 */ // 0x8089D2DC
    /* li r28, 0 */ // 0x8089D2E0
    if (==) goto 0x0x8089d354;
    r3 = *(0x58 + r7); // lwz @ 0x8089D2E8
    if (==) goto 0x0x8089d354;
    r0 = *(0 + r3); // lwz @ 0x8089D2F4
    /* rlwinm. r0, r0, 0, 0x17, 0x17 */ // 0x8089D2F8
    if (==) goto 0x0x8089d308;
    r28 = *(4 + r3); // lwz @ 0x8089D300
    /* b 0x8089d30c */ // 0x8089D304
    /* li r28, 0 */ // 0x8089D308
    if (==) goto 0x0x8089d354;
    r12 = *(0 + r28); // lwz @ 0x8089D314
    /* fmr f1, f31 */ // 0x8089D318
    r3 = r28;
    r4 = r22;
    r12 = *(0xdc + r12); // lwz @ 0x8089D324
    r5 = r23;
    r6 = r24;
    r7 = r25;
    r8 = r26;
    r9 = r27;
    /* li r29, 1 */ // 0x8089D33C
    /* mtctr r12 */ // 0x8089D340
    /* bctrl  */ // 0x8089D344
    if (!=) goto 0x0x8089d354;
    /* li r29, 0 */ // 0x8089D350
    /* lis r30, 0 */ // 0x8089D354
    /* fmr f1, f31 */ // 0x8089D358
    r3 = *(0 + r30); // lwz @ 0x8089D35C
    r4 = r22;
    /* li r5, 0x10 */ // 0x8089D364
    FUN_80816784(r4, r5); // bl 0x80816784
    /* b 0x8089d3c0 */ // 0x8089D36C
    if (==) goto 0x0x8089d3c0;
    r12 = *(0 + r3); // lwz @ 0x8089D378
    /* fmr f1, f31 */ // 0x8089D37C
    r4 = r22;
    r5 = r23;
    r12 = *(0xdc + r12); // lwz @ 0x8089D388
    r6 = r24;
    r7 = r25;
    r8 = r26;
    r9 = r27;
    /* li r31, 0 */ // 0x8089D39C
    /* mtctr r12 */ // 0x8089D3A0
    /* bctrl  */ // 0x8089D3A4
    if (!=) goto 0x0x8089d3b8;
    if (==) goto 0x0x8089d3bc;
    /* li r31, 1 */ // 0x8089D3B8
    r29 = r31;
    r3 = *(0 + r30); // lwz @ 0x8089D3C0
    FUN_80815B34(); // bl 0x80815B34
    if (!=) goto 0x0x8089d370;
    r3 = r29;
    /* lfd f31, 0x38(r1) */ // 0x8089D3D4
    r0 = *(0x44 + r1); // lwz @ 0x8089D3DC
    return;
}