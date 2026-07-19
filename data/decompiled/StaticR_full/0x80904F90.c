/* Function at 0x80904F90, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80904F90(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x80904FA4
    r30 = r4;
    r0 = *(4 + r3); // lbz @ 0x80904FAC
    *(8 + r1) = r0; // stb @ 0x80904FB0
    r12 = *(0 + r3); // lwz @ 0x80904FB4
    r12 = *(0x14 + r12); // lwz @ 0x80904FB8
    /* mtctr r12 */ // 0x80904FBC
    /* bctrl  */ // 0x80904FC0
    r4 = r3;
    r5 = r30;
    r6 = r31;
    /* li r7, 1 */ // 0x80904FD4
    FUN_805BC798(r4, r5, r6, r3, r7); // bl 0x805BC798
    r0 = *(0x24 + r1); // lwz @ 0x80904FDC
    r31 = *(0x1c + r1); // lwz @ 0x80904FE0
    r30 = *(0x18 + r1); // lwz @ 0x80904FE4
    return;
}