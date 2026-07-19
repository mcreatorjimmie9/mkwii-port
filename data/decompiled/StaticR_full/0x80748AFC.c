/* Function at 0x80748AFC, size=96 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80748AFC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x80748B08
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x80748B10
    r12 = *(0x38 + r12); // lwz @ 0x80748B14
    /* mtctr r12 */ // 0x80748B18
    /* bctrl  */ // 0x80748B1C
    /* lis r4, 0 */ // 0x80748B20
    *(0xc + r1) = r3; // stw @ 0x80748B24
    r0 = *(0 + r4); // lwz @ 0x80748B28
    r3 = r31;
    *(8 + r1) = r0; // stw @ 0x80748B30
    /* li r6, 1 */ // 0x80748B3C
    /* li r7, 0 */ // 0x80748B40
    FUN_808A1444(r4, r5, r6, r7); // bl 0x808A1444
    r0 = *(0x24 + r1); // lwz @ 0x80748B48
    r31 = *(0x1c + r1); // lwz @ 0x80748B4C
    return;
}