/* Function at 0x807DEEA4, size=324 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_807DEEA4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r3;
    *(0x44 + r1) = r29; // stw @ 0x807DEEBC
    r0 = *(0x31 + r3); // lbz @ 0x807DEEC0
    if (!=) goto 0x0x807deeec;
    /* lis r3, 0 */ // 0x807DEECC
    r4 = r30 + 0x18; // 0x807DEED0
    r3 = *(0 + r3); // lwz @ 0x807DEED4
    FUN_805D12B8(r3, r4); // bl 0x805D12B8
    /* li r3, 0 */ // 0x807DEEDC
    /* li r0, 1 */ // 0x807DEEE0
    *(0x32 + r30) = r3; // stb @ 0x807DEEE4
    *(0x31 + r30) = r0; // stb @ 0x807DEEE8
    r0 = *(0x32 + r30); // lbz @ 0x807DEEEC
    if (!=) goto 0x0x807def40;
    /* lis r3, 0 */ // 0x807DEEF8
    r3 = *(0 + r3); // lwz @ 0x807DEEFC
    r0 = *(0x60c + r3); // lbz @ 0x807DEF00
    if (!=) goto 0x0x807def40;
    r29 = *(0x18 + r30); // lwz @ 0x807DEF0C
    /* clrlwi. r0, r29, 0x1b */ // 0x807DEF10
    if (==) goto 0x0x807def34;
    /* lis r3, 0 */ // 0x807DEF18
    /* lis r5, 0 */ // 0x807DEF1C
    r3 = r3 + 0; // 0x807DEF20
    /* li r4, 0x3c */ // 0x807DEF24
    r5 = r5 + 0; // 0x807DEF28
    /* crclr cr1eq */ // 0x807DEF2C
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    /* li r0, 1 */ // 0x807DEF34
    *(0x1c + r30) = r29; // stw @ 0x807DEF38
    *(0x32 + r30) = r0; // stb @ 0x807DEF3C
    r31 = *(0x14 + r30); // lwz @ 0x807DEF40
    r0 = *(0xf8 + r31); // lbz @ 0x807DEF44
    if (!=) goto 0x0x807deff4;
    /* lis r29, 0 */ // 0x807DEF50
    r3 = *(0 + r29); // lwz @ 0x807DEF54
    r0 = *(0x32 + r3); // lbz @ 0x807DEF58
    if (==) goto 0x0x807deff4;
    r0 = *(0x1c + r3); // lwz @ 0x807DEF64
    r3 = r31 + 0xf4; // 0x807DEF68
    *(8 + r1) = r0; // stw @ 0x807DEF6C
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* li r0, 1 */ // 0x807DEF78
    *(0xf8 + r31) = r0; // stb @ 0x807DEF7C
    r29 = *(0 + r29); // lwz @ 0x807DEF80
    r0 = *(0x1c + r29); // lwz @ 0x807DEF84
    if (!=) goto 0x0x807defbc;
    /* lis r3, 0 */ // 0x807DEF90
    /* lis r5, 0 */ // 0x807DEF94
    /* lis r6, 0 */ // 0x807DEF98
    /* lis r7, 0 */ // 0x807DEF9C
    r3 = r3 + 0; // 0x807DEFA0
    r5 = r5 + 0; // 0x807DEFA4
    r6 = r6 + 0; // 0x807DEFA8
    r7 = r7 + 0; // 0x807DEFAC
    /* li r4, 0x3c */ // 0x807DEFB0
    /* crclr cr1eq */ // 0x807DEFB4
    FUN_805E3430(r5, r6, r7, r4); // bl 0x805E3430
    /* lis r4, 0 */ // 0x807DEFBC
    r3 = *(0x1c + r29); // lwz @ 0x807DEFC0
    r5 = *(0 + r4); // lwz @ 0x807DEFC4
    r4 = *(8 + r3); // lwz @ 0x807DEFC8
    r3 = *(0x1c + r5); // lwz @ 0x807DEFCC
    FUN_805E3430(r4); // bl 0x805E3430
    r4 = *(0x28 + r31); // lwz @ 0x807DEFD4
    /* lis r3, 0 */ // 0x807DEFD8
    /* lis r5, 0 */ // 0x807DEFDC
    /* lfs f1, 0(r3) */ // 0x807DEFE0
    r3 = *(0x28 + r4); // lwz @ 0x807DEFE4
}