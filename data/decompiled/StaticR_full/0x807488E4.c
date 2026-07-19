/* Function at 0x807488E4, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_807488E4(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807488F0
    r31 = r3;
    r3 = *(0x20 + r3); // lwz @ 0x807488F8
    /* lfs f1, 0x104(r31) */ // 0x807488FC
    r12 = *(0 + r3); // lwz @ 0x80748900
    r12 = *(0x18 + r12); // lwz @ 0x80748904
    /* mtctr r12 */ // 0x80748908
    /* bctrl  */ // 0x8074890C
    r3 = *(0x20 + r31); // lwz @ 0x80748910
    r12 = *(0 + r3); // lwz @ 0x80748914
    r12 = *(0x14 + r12); // lwz @ 0x80748918
    /* mtctr r12 */ // 0x8074891C
    /* bctrl  */ // 0x80748920
    if (!=) goto 0x0x80748938;
    /* li r0, 1 */ // 0x8074892C
    *(0x10c + r31) = r0; // stb @ 0x80748930
    /* b 0x80748940 */ // 0x80748934
    /* li r0, 0 */ // 0x80748938
    *(0x10c + r31) = r0; // stb @ 0x8074893C
    r0 = *(0x14 + r1); // lwz @ 0x80748940
    r31 = *(0xc + r1); // lwz @ 0x80748944
    return;
}