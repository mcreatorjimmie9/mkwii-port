/* Function at 0x80780AF8, size=208 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80780AF8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x80780B00
    r5 = r5 + 0; // 0x80780B08
    *(0x1c + r1) = r31; // stw @ 0x80780B0C
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x80780B14
    r30 = r3;
    FUN_80776794(r5); // bl 0x80776794
    /* lis r3, 0 */ // 0x80780B20
    /* lis r0, 0x4330 */ // 0x80780B24
    r3 = r3 + 0; // 0x80780B28
    *(0 + r30) = r3; // stw @ 0x80780B2C
    /* lis r4, 0 */ // 0x80780B30
    /* li r6, 1 */ // 0x80780B34
    r5 = *(0 + r31); // lwz @ 0x80780B38
    /* lis r3, 0 */ // 0x80780B3C
    *(8 + r1) = r0; // stw @ 0x80780B40
    r0 = *(0x2a + r5); // lha @ 0x80780B44
    /* lfd f1, 0(r4) */ // 0x80780B48
    r0 = r0 * r0; // 0x80780B4C
    /* xoris r0, r0, 0x8000 */ // 0x80780B50
    *(0xc + r1) = r0; // stw @ 0x80780B54
    /* lfd f0, 8(r1) */ // 0x80780B58
    /* fsubs f0, f0, f1 */ // 0x80780B5C
    /* stfs f0, 0xbc(r30) */ // 0x80780B60
    r4 = *(0 + r31); // lwz @ 0x80780B64
    r4 = *(0x2c + r4); // lha @ 0x80780B68
    r0 = r4 + -1; // 0x80780B6C
    /* cntlzw r0, r0 */ // 0x80780B70
    /* srwi r0, r0, 5 */ // 0x80780B74
    *(0xc0 + r30) = r0; // stb @ 0x80780B78
    r3 = *(0 + r3); // lwz @ 0x80780B7C
    r0 = *(0x54 + r3); // lbz @ 0x80780B80
    if (!=) goto 0x0x80780b9c;
    r0 = *(0x55 + r3); // lbz @ 0x80780B8C
    if (!=) goto 0x0x80780b9c;
    /* li r6, 0 */ // 0x80780B98
    *(0xc1 + r30) = r6; // stb @ 0x80780B9C
    r0 = *(0xc0 + r30); // lbz @ 0x80780BA0
    r3 = *(0 + r31); // lwz @ 0x80780BA4
    r0 = *(0x2e + r3); // lha @ 0x80780BAC
    *(0xc4 + r30) = r0; // stw @ 0x80780BB0
    if (==) goto 0x0x80780be4;
    /* li r3, 0x7c */ // 0x80780BB8
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x80780bdc;
}