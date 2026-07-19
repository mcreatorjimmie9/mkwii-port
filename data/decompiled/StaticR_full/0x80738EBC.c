/* Function at 0x80738EBC, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_80738EBC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80738ECC
    r30 = r3;
    r31 = *(0x210 + r3); // lwz @ 0x80738ED4
    if (==) goto 0x0x80738f20;
    r12 = *(0 + r31); // lwz @ 0x80738EE0
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x80738EE8
    /* mtctr r12 */ // 0x80738EEC
    /* bctrl  */ // 0x80738EF0
    r12 = *(0 + r31); // lwz @ 0x80738EF4
    r3 = r31;
    r4 = r30 + 0x6d0; // 0x80738EFC
    r12 = *(0x74 + r12); // lwz @ 0x80738F00
    /* mtctr r12 */ // 0x80738F04
    /* bctrl  */ // 0x80738F08
    r12 = *(0 + r31); // lwz @ 0x80738F0C
    r3 = r31;
    r12 = *(0x80 + r12); // lwz @ 0x80738F14
    /* mtctr r12 */ // 0x80738F18
    /* bctrl  */ // 0x80738F1C
    /* li r0, 1 */ // 0x80738F20
    *(9 + r30) = r0; // stb @ 0x80738F24
    r31 = *(0xc + r1); // lwz @ 0x80738F28
    r30 = *(8 + r1); // lwz @ 0x80738F2C
    r0 = *(0x14 + r1); // lwz @ 0x80738F30
    return;
}