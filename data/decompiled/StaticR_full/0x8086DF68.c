/* Function at 0x8086DF68, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */

int FUN_8086DF68(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x8086DF74
    r26 = r3;
    /* li r30, 0 */ // 0x8086DF7C
    /* li r31, 0xc */ // 0x8086DF80
    r28 = r26;
    /* li r27, 0 */ // 0x8086DF88
    *(0 + r3) = r30; // stw @ 0x8086DF8C
    *(8 + r3) = r31; // stb @ 0x8086DF90
    /* b 0x8086dfc4 */ // 0x8086DF94
    r29 = *(0x18 + r28); // lwz @ 0x8086DF98
    /* li r4, 0 */ // 0x8086DF9C
    r3 = *(0 + r29); // lwz @ 0x8086DFA0
    r12 = *(0 + r3); // lwz @ 0x8086DFA4
    r12 = *(0xc + r12); // lwz @ 0x8086DFA8
    /* mtctr r12 */ // 0x8086DFAC
    /* bctrl  */ // 0x8086DFB0
    *(8 + r29) = r31; // stw @ 0x8086DFB4
    r28 = r28 + 4; // 0x8086DFB8
    r27 = r27 + 1; // 0x8086DFBC
    *(0xc + r29) = r30; // stb @ 0x8086DFC0
    r0 = *(4 + r26); // lwz @ 0x8086DFC4
    if (<) goto 0x0x8086df98;
    r0 = *(0x24 + r1); // lwz @ 0x8086DFD4
    return;
}