/* Function at 0x8079EB3C, size=148 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_8079EB3C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x8079EB4C
    r30 = r3;
    r0 = *(0x71 + r3); // lbz @ 0x8079EB54
    if (==) goto 0x0x8079ebb8;
    r0 = *(0x40 + r3); // lwz @ 0x8079EB60
    if (<) goto 0x0x8079ebb8;
    if (>) goto 0x0x8079ebb8;
    /* lis r3, 0 */ // 0x8079EB74
    r3 = *(0 + r3); // lwz @ 0x8079EB78
    r3 = *(0x1c + r3); // lwz @ 0x8079EB7C
    if (==) goto 0x0x8079ebb8;
    r3 = *(0 + r3); // lwz @ 0x8079EB88
    /* li r31, 0 */ // 0x8079EB8C
    if (==) goto 0x0x8079ebb4;
    r12 = *(0 + r3); // lwz @ 0x8079EB98
    r12 = *(0x14 + r12); // lwz @ 0x8079EB9C
    /* mtctr r12 */ // 0x8079EBA0
    /* bctrl  */ // 0x8079EBA4
    if (==) goto 0x0x8079ebb4;
    /* li r31, 1 */ // 0x8079EBB0
    *(0x71 + r30) = r31; // stb @ 0x8079EBB4
    r0 = *(0x14 + r1); // lwz @ 0x8079EBB8
    r31 = *(0xc + r1); // lwz @ 0x8079EBBC
    r30 = *(8 + r1); // lwz @ 0x8079EBC0
    return;
}