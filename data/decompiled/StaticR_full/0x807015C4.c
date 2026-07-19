/* Function at 0x807015C4, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_807015C4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x807015D8
    *(0x14 + r1) = r29; // stw @ 0x807015DC
    r29 = r3;
    r0 = *(0x20 + r3); // lbz @ 0x807015E4
    if (!=) goto 0x0x80701634;
    /* li r0, 0 */ // 0x807015F0
    *(0x1c + r3) = r0; // stw @ 0x807015F4
    r3 = *(0x758c + r3); // lwz @ 0x807015F8
    r12 = *(0x18 + r3); // lwz @ 0x807015FC
    r12 = *(0xc + r12); // lwz @ 0x80701600
    /* mtctr r12 */ // 0x80701604
    /* bctrl  */ // 0x80701608
    if (!=) goto 0x0x80701620;
    /* li r0, 1 */ // 0x80701614
    *(0x20 + r29) = r0; // stb @ 0x80701618
    /* b 0x80701634 */ // 0x8070161C
    r3 = *(0x758c + r29); // lwz @ 0x80701620
    r0 = *(4 + r3); // lwz @ 0x80701624
    *(0x1c + r29) = r0; // stw @ 0x80701628
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x80701638 */ // 0x80701630
    /* li r3, 0 */ // 0x80701634
    r30 = r3;
    if (!=) goto 0x0x807016ec;
    r3 = r31;
    FUN_805E3430(r3, r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x8070167c;
    FUN_805E3430(r3); // bl 0x805E3430
    *(0x1c + r29) = r3; // stw @ 0x80701660
    if (!=) goto 0x0x80701670;
}