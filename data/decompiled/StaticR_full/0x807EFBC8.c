/* Function at 0x807EFBC8, size=176 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_807EFBC8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x807EFBD0
    *(0x14 + r1) = r0; // stw @ 0x807EFBD4
    /* li r0, 1 */ // 0x807EFBD8
    *(0xc + r1) = r31; // stw @ 0x807EFBDC
    r31 = r3;
    *(0xb0 + r3) = r0; // stw @ 0x807EFBE4
    r4 = *(0 + r4); // lwz @ 0x807EFBE8
    r0 = *(0x55 + r4); // lbz @ 0x807EFBEC
    if (!=) goto 0x0x807efc34;
    /* lis r4, 0 */ // 0x807EFBF8
    r4 = *(0 + r4); // lwz @ 0x807EFBFC
    r0 = *(0xb80 + r4); // lwz @ 0x807EFC00
    if (==) goto 0x0x807efc34;
    r12 = *(0 + r3); // lwz @ 0x807EFC0C
    /* li r4, 1 */ // 0x807EFC10
    r12 = *(0x68 + r12); // lwz @ 0x807EFC14
    /* mtctr r12 */ // 0x807EFC18
    /* bctrl  */ // 0x807EFC1C
    r12 = *(0 + r31); // lwz @ 0x807EFC20
    r3 = r31;
    r12 = *(0x94 + r12); // lwz @ 0x807EFC28
    /* mtctr r12 */ // 0x807EFC2C
    /* bctrl  */ // 0x807EFC30
    r3 = *(0x20 + r31); // lwz @ 0x807EFC34
    /* lis r4, 0 */ // 0x807EFC38
    /* lfs f1, 0(r4) */ // 0x807EFC3C
    /* li r4, 0 */ // 0x807EFC40
    r12 = *(0 + r3); // lwz @ 0x807EFC44
    r12 = *(0x10 + r12); // lwz @ 0x807EFC48
    /* mtctr r12 */ // 0x807EFC4C
    /* bctrl  */ // 0x807EFC50
    r3 = *(0x20 + r31); // lwz @ 0x807EFC54
    /* li r0, 1 */ // 0x807EFC58
    *(0x17 + r3) = r0; // stb @ 0x807EFC5C
    *(0xbc + r31) = r0; // stb @ 0x807EFC60
    r31 = *(0xc + r1); // lwz @ 0x807EFC64
    r0 = *(0x14 + r1); // lwz @ 0x807EFC68
    return;
}