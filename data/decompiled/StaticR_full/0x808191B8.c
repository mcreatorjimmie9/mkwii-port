/* Function at 0x808191B8, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808191B8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x808191C0
    *(0x14 + r1) = r0; // stw @ 0x808191C4
    *(0xc + r1) = r31; // stw @ 0x808191C8
    r31 = *(0 + r3); // lwz @ 0x808191CC
    if (==) goto 0x0x80819224;
    FUN_80847EC4(); // bl 0x80847EC4
    r3 = *(0 + r31); // lwz @ 0x808191DC
    if (==) goto 0x0x808191fc;
    r12 = *(0 + r3); // lwz @ 0x808191E8
    /* li r4, 1 */ // 0x808191EC
    r12 = *(8 + r12); // lwz @ 0x808191F0
    /* mtctr r12 */ // 0x808191F4
    /* bctrl  */ // 0x808191F8
    r3 = *(4 + r31); // lwz @ 0x808191FC
    if (==) goto 0x0x8081921c;
    r12 = *(0 + r3); // lwz @ 0x80819208
    /* li r4, 1 */ // 0x8081920C
    r12 = *(8 + r12); // lwz @ 0x80819210
    /* mtctr r12 */ // 0x80819214
    /* bctrl  */ // 0x80819218
    r3 = r31;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    /* lis r3, 0 */ // 0x80819224
    /* li r0, 0 */ // 0x80819228
    *(0 + r3) = r0; // stw @ 0x8081922C
    r31 = *(0xc + r1); // lwz @ 0x80819230
    r0 = *(0x14 + r1); // lwz @ 0x80819234
    return;
}