/* Function at 0x806CCE50, size=196 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_806CCE50(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806CCE58
    *(0x18 + r1) = r30; // stw @ 0x806CCE64
    *(0x14 + r1) = r29; // stw @ 0x806CCE68
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x806CCE70
    r3 = *(0 + r3); // lwz @ 0x806CCE74
    r30 = *(0x204 + r3); // lwz @ 0x806CCE78
    if (!=) goto 0x0x806cce8c;
    /* li r30, 0 */ // 0x806CCE84
    /* b 0x806ccee0 */ // 0x806CCE88
    /* lis r31, 0 */ // 0x806CCE8C
    r31 = r31 + 0; // 0x806CCE90
    if (==) goto 0x0x806ccedc;
    r12 = *(0 + r30); // lwz @ 0x806CCE98
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806CCEA0
    /* mtctr r12 */ // 0x806CCEA4
    /* bctrl  */ // 0x806CCEA8
    /* b 0x806ccec4 */ // 0x806CCEAC
    if (!=) goto 0x0x806ccec0;
    /* li r0, 1 */ // 0x806CCEB8
    /* b 0x806cced0 */ // 0x806CCEBC
    r3 = *(0 + r3); // lwz @ 0x806CCEC0
    if (!=) goto 0x0x806cceb0;
    /* li r0, 0 */ // 0x806CCECC
    if (==) goto 0x0x806ccedc;
    /* b 0x806ccee0 */ // 0x806CCED8
    /* li r30, 0 */ // 0x806CCEDC
    /* mulli r3, r29, 0xc */ // 0x806CCEE0
    /* li r4, 1 */ // 0x806CCEE4
    /* li r0, 0 */ // 0x806CCEE8
    r3 = r30 + r3; // 0x806CCEEC
    *(0x5c + r3) = r4; // stb @ 0x806CCEF0
    *(0x5d + r3) = r0; // stb @ 0x806CCEF4
    r31 = *(0x1c + r1); // lwz @ 0x806CCEF8
    r30 = *(0x18 + r1); // lwz @ 0x806CCEFC
    r29 = *(0x14 + r1); // lwz @ 0x806CCF00
    r0 = *(0x24 + r1); // lwz @ 0x806CCF04
    return;
}