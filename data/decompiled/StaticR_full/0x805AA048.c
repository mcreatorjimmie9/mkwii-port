/* Function at 0x805AA048, size=68 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_805AA048(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x805AA050
    *(0x14 + r1) = r0; // stw @ 0x805AA054
    /* li r0, 1 */ // 0x805AA058
    r4 = *(0 + r3); // lwz @ 0x805AA05C
    /* lis r3, 0 */ // 0x805AA060
    *(0x4d + r4) = r0; // stb @ 0x805AA064
    r3 = *(0 + r3); // lwz @ 0x805AA068
    if (==) goto 0x0x805aa084;
    r12 = *(0 + r3); // lwz @ 0x805AA074
    r12 = *(0xc + r12); // lwz @ 0x805AA078
    /* mtctr r12 */ // 0x805AA07C
    /* bctrl  */ // 0x805AA080
    /* li r3, 0 */ // 0x805AA084
    FUN_805E3430(r3); // bl 0x805E3430
}