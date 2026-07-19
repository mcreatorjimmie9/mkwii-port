/* Function at 0x807DFCA4, size=196 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_807DFCA4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807DFCB0
    r31 = r3;
    r0 = *(0x1a0 + r3); // lwz @ 0x807DFCB8
    if (<=) goto 0x0x807dfcf8;
    /* addic. r0, r0, -1 */ // 0x807DFCC4
    *(0x1a0 + r3) = r0; // stw @ 0x807DFCC8
    if (!=) goto 0x0x807dfcf8;
    r0 = *(0x19c + r3); // lbz @ 0x807DFCD0
    if (==) goto 0x0x807dfcf8;
    r12 = *(0 + r3); // lwz @ 0x807DFCDC
    r4 = r3 + 0xcc; // 0x807DFCE0
    r12 = *(0x10 + r12); // lwz @ 0x807DFCE4
    /* mtctr r12 */ // 0x807DFCE8
    /* bctrl  */ // 0x807DFCEC
    /* li r0, 0 */ // 0x807DFCF0
    *(0x19c + r31) = r0; // stb @ 0x807DFCF4
    r3 = *(0xc + r31); // lwz @ 0x807DFCF8
    FUN_808601D0(); // bl 0x808601D0
    r0 = *(0x1a4 + r31); // lwz @ 0x807DFD00
    if (<=) goto 0x0x807dfd54;
    /* addic. r0, r0, -1 */ // 0x807DFD0C
    *(0x1a4 + r31) = r0; // stw @ 0x807DFD10
    if (!=) goto 0x0x807dfd54;
    r0 = *(0x10 + r31); // lwz @ 0x807DFD18
    /* lis r3, 0 */ // 0x807DFD1C
    /* lis r4, 0 */ // 0x807DFD20
    /* lfs f2, 0(r3) */ // 0x807DFD24
    /* slwi r0, r0, 2 */ // 0x807DFD28
    /* lfs f1, 0(r4) */ // 0x807DFD2C
    r3 = r31 + r0; // 0x807DFD30
    /* li r4, 0 */ // 0x807DFD34
    r3 = *(4 + r3); // lwz @ 0x807DFD38
    /* li r5, 1 */ // 0x807DFD3C
    r3 = *(0x28 + r3); // lwz @ 0x807DFD40
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    r3 = *(0xc + r31); // lwz @ 0x807DFD48
    /* li r4, 3 */ // 0x807DFD4C
    FUN_8085FEF0(r5, r4); // bl 0x8085FEF0
    r0 = *(0x14 + r1); // lwz @ 0x807DFD54
    r31 = *(0xc + r1); // lwz @ 0x807DFD58
    return;
}