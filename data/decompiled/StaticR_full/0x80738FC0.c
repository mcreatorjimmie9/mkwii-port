/* Function at 0x80738FC0, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_80738FC0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80738FD0
    r30 = r3;
    r31 = *(0x214 + r3); // lwz @ 0x80738FD8
    if (==) goto 0x0x80739024;
    r12 = *(0 + r31); // lwz @ 0x80738FE4
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x80738FEC
    /* mtctr r12 */ // 0x80738FF0
    /* bctrl  */ // 0x80738FF4
    r12 = *(0 + r31); // lwz @ 0x80738FF8
    r3 = r31;
    r4 = r30 + 0x6d0; // 0x80739000
    r12 = *(0x74 + r12); // lwz @ 0x80739004
    /* mtctr r12 */ // 0x80739008
    /* bctrl  */ // 0x8073900C
    r12 = *(0 + r31); // lwz @ 0x80739010
    r3 = r31;
    r12 = *(0x80 + r12); // lwz @ 0x80739018
    /* mtctr r12 */ // 0x8073901C
    /* bctrl  */ // 0x80739020
    /* li r0, 1 */ // 0x80739024
    *(9 + r30) = r0; // stb @ 0x80739028
    r31 = *(0xc + r1); // lwz @ 0x8073902C
    r30 = *(8 + r1); // lwz @ 0x80739030
    r0 = *(0x14 + r1); // lwz @ 0x80739034
    return;
}