/* Function at 0x8064DF74, size=112 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_8064DF74(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x8064DF84
    *(0x18 + r1) = r30; // stw @ 0x8064DF88
    /* li r30, 0 */ // 0x8064DF8C
    *(0x14 + r1) = r29; // stw @ 0x8064DF90
    r29 = r3;
    /* b 0x8064dfbc */ // 0x8064DF98
    r3 = *(0 + r29); // lwz @ 0x8064DF9C
    /* lwzx r3, r3, r31 */ // 0x8064DFA0
    r12 = *(0 + r3); // lwz @ 0x8064DFA4
    r12 = *(0xc + r12); // lwz @ 0x8064DFA8
    /* mtctr r12 */ // 0x8064DFAC
    /* bctrl  */ // 0x8064DFB0
    r31 = r31 + 4; // 0x8064DFB4
    r30 = r30 + 1; // 0x8064DFB8
    r0 = *(0x10 + r29); // lwz @ 0x8064DFBC
    if (<) goto 0x0x8064df9c;
    r0 = *(0x24 + r1); // lwz @ 0x8064DFC8
    r31 = *(0x1c + r1); // lwz @ 0x8064DFCC
    r30 = *(0x18 + r1); // lwz @ 0x8064DFD0
    r29 = *(0x14 + r1); // lwz @ 0x8064DFD4
    return;
}