/* Function at 0x807EFDB8, size=232 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_807EFDB8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x807EFDC8
    r30 = r3;
    r3 = *(0x20 + r3); // lwz @ 0x807EFDD0
    r12 = *(0 + r3); // lwz @ 0x807EFDD4
    r12 = *(0x14 + r12); // lwz @ 0x807EFDD8
    /* mtctr r12 */ // 0x807EFDDC
    /* bctrl  */ // 0x807EFDE0
    if (==) goto 0x0x807efdf8;
    if (==) goto 0x0x807efe50;
    /* b 0x807efe88 */ // 0x807EFDF4
    r3 = *(0x20 + r30); // lwz @ 0x807EFDF8
    r0 = *(0x46 + r3); // lha @ 0x807EFDFC
    r3 = *(8 + r3); // lwz @ 0x807EFE00
    /* slwi r0, r0, 4 */ // 0x807EFE04
    r3 = r3 + r0; // 0x807EFE08
    r0 = *(0xe + r3); // lhz @ 0x807EFE0C
    if (!=) goto 0x0x807efe88;
    /* li r0, 2 */ // 0x807EFE18
    *(0xb0 + r30) = r0; // stw @ 0x807EFE1C
    r3 = r30;
    /* li r4, 0 */ // 0x807EFE24
    r12 = *(0 + r30); // lwz @ 0x807EFE28
    r12 = *(0x68 + r12); // lwz @ 0x807EFE2C
    /* mtctr r12 */ // 0x807EFE30
    /* bctrl  */ // 0x807EFE34
    r12 = *(0 + r30); // lwz @ 0x807EFE38
    r3 = r30;
    r12 = *(0x90 + r12); // lwz @ 0x807EFE40
    /* mtctr r12 */ // 0x807EFE44
    /* bctrl  */ // 0x807EFE48
    /* b 0x807efe88 */ // 0x807EFE4C
    /* li r31, 0 */ // 0x807EFE50
    *(0xb0 + r30) = r31; // stw @ 0x807EFE54
    r3 = r30;
    /* li r4, 0 */ // 0x807EFE5C
    r12 = *(0 + r30); // lwz @ 0x807EFE60
    r12 = *(0x68 + r12); // lwz @ 0x807EFE64
    /* mtctr r12 */ // 0x807EFE68
    /* bctrl  */ // 0x807EFE6C
    r12 = *(0 + r30); // lwz @ 0x807EFE70
    r3 = r30;
    r12 = *(0x90 + r12); // lwz @ 0x807EFE78
    /* mtctr r12 */ // 0x807EFE7C
    /* bctrl  */ // 0x807EFE80
    *(0xb5 + r30) = r31; // stb @ 0x807EFE84
    r0 = *(0x14 + r1); // lwz @ 0x807EFE88
    r31 = *(0xc + r1); // lwz @ 0x807EFE8C
    r30 = *(8 + r1); // lwz @ 0x807EFE90
    return;
}