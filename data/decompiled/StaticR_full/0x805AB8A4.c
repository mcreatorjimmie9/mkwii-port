/* Function at 0x805AB8A4, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 7 function(s) */

int FUN_805AB8A4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805AB8B0
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x805AB8B8
    r12 = *(0x28 + r12); // lwz @ 0x805AB8BC
    /* mtctr r12 */ // 0x805AB8C0
    /* bctrl  */ // 0x805AB8C4
    if (==) goto 0x0x805ab8e4;
    FUN_805F4A80(); // bl 0x805F4A80
    /* lis r3, 0 */ // 0x805AB8D4
    r3 = *(0 + r3); // lwz @ 0x805AB8D8
    FUN_805AE414(r3); // bl 0x805AE414
    /* b 0x805ab94c */ // 0x805AB8E0
    r0 = *(0x2530 + r31); // lbz @ 0x805AB8E4
    if (==) goto 0x0x805ab8fc;
    r3 = r31;
    FUN_805AB600(r3); // bl 0x805AB600
    /* b 0x805ab900 */ // 0x805AB8F8
    FUN_805F4A80(r3); // bl 0x805F4A80
    r3 = *(0x252c + r31); // lwz @ 0x805AB900
    if (==) goto 0x0x805ab934;
    r0 = *(0x2531 + r31); // lbz @ 0x805AB90C
    if (==) goto 0x0x805ab934;
    /* li r4, 0 */ // 0x805AB918
    /* li r5, 0 */ // 0x805AB91C
    /* li r6, 1 */ // 0x805AB920
    /* li r7, -1 */ // 0x805AB924
    FUN_805E3430(r4, r5, r6, r7); // bl 0x805E3430
    /* li r0, 1 */ // 0x805AB92C
    *(0x2530 + r31) = r0; // stb @ 0x805AB930
    /* lis r3, 0 */ // 0x805AB934
    r3 = *(0 + r3); // lwz @ 0x805AB938
    FUN_805AE414(r3); // bl 0x805AE414
    /* lis r3, 0 */ // 0x805AB940
    r3 = *(0 + r3); // lwz @ 0x805AB944
    FUN_807A7A3C(r3, r3); // bl 0x807A7A3C
    r0 = *(0x14 + r1); // lwz @ 0x805AB94C
    r31 = *(0xc + r1); // lwz @ 0x805AB950
}