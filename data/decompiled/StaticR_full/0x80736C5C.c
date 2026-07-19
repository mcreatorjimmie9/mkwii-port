/* Function at 0x80736C5C, size=172 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_80736C5C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80736C6C
    r30 = r3;
    r0 = *(7 + r3); // lbz @ 0x80736C74
    if (!=) goto 0x0x80736cf0;
    /* lis r4, 0 */ // 0x80736C80
    r4 = *(0 + r4); // lwz @ 0x80736C84
    r0 = *(0x10 + r4); // lbz @ 0x80736C88
    if (!=) goto 0x0x80736cf0;
    r0 = *(0x12b + r3); // lbz @ 0x80736C94
    if (==) goto 0x0x80736ca4;
    /* b 0x80736cf0 */ // 0x80736CA0
    r31 = *(0x26c + r3); // lwz @ 0x80736CA4
    if (==) goto 0x0x80736ce8;
    r12 = *(0 + r31); // lwz @ 0x80736CB0
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x80736CB8
    /* mtctr r12 */ // 0x80736CBC
    /* bctrl  */ // 0x80736CC0
    r0 = *(0xb0 + r30); // lbz @ 0x80736CC4
    if (==) goto 0x0x80736ce8;
    r12 = *(0 + r31); // lwz @ 0x80736CD0
    r3 = r31;
    r4 = r30 + 0x72c; // 0x80736CD8
    r12 = *(0x70 + r12); // lwz @ 0x80736CDC
    /* mtctr r12 */ // 0x80736CE0
    /* bctrl  */ // 0x80736CE4
    /* li r0, 1 */ // 0x80736CE8
    *(0x93 + r30) = r0; // stb @ 0x80736CEC
    r0 = *(0x14 + r1); // lwz @ 0x80736CF0
    r31 = *(0xc + r1); // lwz @ 0x80736CF4
    r30 = *(8 + r1); // lwz @ 0x80736CF8
    return;
}