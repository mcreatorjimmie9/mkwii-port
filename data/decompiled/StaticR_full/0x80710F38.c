/* Function at 0x80710F38, size=184 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_80710F38(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x80710F44
    r29 = r6;
    r27 = r4;
    r30 = r8;
    r28 = r5;
    r26 = r3;
    r31 = r7;
    r4 = r29;
    r5 = r30;
    r12 = *(0 + r3); // lwz @ 0x80710F68
    r12 = *(0x140 + r12); // lwz @ 0x80710F6C
    /* mtctr r12 */ // 0x80710F70
    /* bctrl  */ // 0x80710F74
    if (==) goto 0x0x80710fd4;
    r3 = *(0xac + r26); // lwz @ 0x80710F80
    r7 = r31;
    r4 = r27;
    r5 = r28;
    r6 = r29;
    r8 = r30;
    /* li r31, 0 */ // 0x80710F98
    FUN_8084A9E4(r4, r5, r6, r8); // bl 0x8084A9E4
    if (==) goto 0x0x80710fd8;
    r12 = *(0 + r26); // lwz @ 0x80710FA8
    r3 = r26;
    r4 = r29;
    r5 = r30;
    r12 = *(0x144 + r12); // lwz @ 0x80710FB8
    /* mtctr r12 */ // 0x80710FBC
    /* bctrl  */ // 0x80710FC0
    if (==) goto 0x0x80710fd8;
    /* li r31, 1 */ // 0x80710FCC
    /* b 0x80710fd8 */ // 0x80710FD0
    /* li r31, 0 */ // 0x80710FD4
    r3 = r31;
    r0 = *(0x24 + r1); // lwz @ 0x80710FE0
    return;
}