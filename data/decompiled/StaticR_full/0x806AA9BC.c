/* Function at 0x806AA9BC, size=176 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_806AA9BC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r3, 0 */ // 0x806AA9C4
    *(0xc + r1) = r31; // stw @ 0x806AA9CC
    *(8 + r1) = r30; // stw @ 0x806AA9D0
    r3 = *(0 + r3); // lwz @ 0x806AA9D4
    r3 = *(0 + r3); // lwz @ 0x806AA9D8
    r30 = *(0x228 + r3); // lwz @ 0x806AA9DC
    if (!=) goto 0x0x806aa9f0;
    /* li r30, 0 */ // 0x806AA9E8
    /* b 0x806aaa44 */ // 0x806AA9EC
    /* lis r31, 0 */ // 0x806AA9F0
    r31 = r31 + 0; // 0x806AA9F4
    if (==) goto 0x0x806aaa40;
    r12 = *(0 + r30); // lwz @ 0x806AA9FC
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806AAA04
    /* mtctr r12 */ // 0x806AAA08
    /* bctrl  */ // 0x806AAA0C
    /* b 0x806aaa28 */ // 0x806AAA10
    if (!=) goto 0x0x806aaa24;
    /* li r0, 1 */ // 0x806AAA1C
    /* b 0x806aaa34 */ // 0x806AAA20
    r3 = *(0 + r3); // lwz @ 0x806AAA24
    if (!=) goto 0x0x806aaa14;
    /* li r0, 0 */ // 0x806AAA30
    if (==) goto 0x0x806aaa40;
    /* b 0x806aaa44 */ // 0x806AAA3C
    /* li r30, 0 */ // 0x806AAA40
    if (==) goto 0x0x806aaa54;
    /* li r0, 0 */ // 0x806AAA4C
    *(0x54 + r30) = r0; // stb @ 0x806AAA50
    r0 = *(0x14 + r1); // lwz @ 0x806AAA54
    r31 = *(0xc + r1); // lwz @ 0x806AAA58
    r30 = *(8 + r1); // lwz @ 0x806AAA5C
    return;
}