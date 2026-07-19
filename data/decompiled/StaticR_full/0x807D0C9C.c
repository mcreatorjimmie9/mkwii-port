/* Function at 0x807D0C9C, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_807D0C9C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807D0CB0
    r30 = r3;
    r12 = *(0x34 + r3); // lwz @ 0x807D0CB8
    r12 = *(0xc + r12); // lwz @ 0x807D0CBC
    /* mtctr r12 */ // 0x807D0CC0
    /* bctrl  */ // 0x807D0CC4
    r0 = *(0x158 + r30); // lbz @ 0x807D0CC8
    *(0x28 + r31) = r0; // stb @ 0x807D0CCC
    /* lfs f0, 0x15c(r30) */ // 0x807D0CD0
    /* stfs f0, 0x20(r31) */ // 0x807D0CD4
    r31 = *(0xc + r1); // lwz @ 0x807D0CD8
    r30 = *(8 + r1); // lwz @ 0x807D0CDC
    r0 = *(0x14 + r1); // lwz @ 0x807D0CE0
    return;
}