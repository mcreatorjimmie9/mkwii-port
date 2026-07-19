/* Function at 0x807107E4, size=184 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_807107E4(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x807107F0
    r29 = r6;
    r27 = r4;
    r30 = r8;
    r28 = r5;
    r26 = r3;
    r31 = r7;
    r4 = r29;
    r5 = r30;
    r12 = *(0 + r3); // lwz @ 0x80710814
    r12 = *(0x140 + r12); // lwz @ 0x80710818
    /* mtctr r12 */ // 0x8071081C
    /* bctrl  */ // 0x80710820
    if (==) goto 0x0x80710880;
    r3 = *(0xac + r26); // lwz @ 0x8071082C
    r7 = r31;
    r4 = r27;
    r5 = r28;
    r6 = r29;
    r8 = r30;
    /* li r31, 0 */ // 0x80710844
    FUN_8084B414(r4, r5, r6, r8); // bl 0x8084B414
    if (==) goto 0x0x80710884;
    r12 = *(0 + r26); // lwz @ 0x80710854
    r3 = r26;
    r4 = r29;
    r5 = r30;
    r12 = *(0x144 + r12); // lwz @ 0x80710864
    /* mtctr r12 */ // 0x80710868
    /* bctrl  */ // 0x8071086C
    if (==) goto 0x0x80710884;
    /* li r31, 1 */ // 0x80710878
    /* b 0x80710884 */ // 0x8071087C
    /* li r31, 0 */ // 0x80710880
    r3 = r31;
    r0 = *(0x24 + r1); // lwz @ 0x8071088C
    return;
}