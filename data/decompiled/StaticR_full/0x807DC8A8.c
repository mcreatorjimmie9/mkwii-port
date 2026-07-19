/* Function at 0x807DC8A8, size=188 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807DC8A8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x48 + r1) = r30; // stw @ 0x807DC8BC
    r0 = *(0xf8 + r3); // lbz @ 0x807DC8C0
    if (!=) goto 0x0x807dc970;
    /* lis r30, 0 */ // 0x807DC8CC
    r4 = *(0 + r30); // lwz @ 0x807DC8D0
    r0 = *(0x32 + r4); // lbz @ 0x807DC8D4
    if (==) goto 0x0x807dc970;
    r0 = *(0x1c + r4); // lwz @ 0x807DC8E0
    *(8 + r1) = r0; // stw @ 0x807DC8E8
    r3 = r3 + 0xf4; // 0x807DC8EC
    FUN_805E3430(r4, r3); // bl 0x805E3430
    /* li r0, 1 */ // 0x807DC8F4
    *(0xf8 + r31) = r0; // stb @ 0x807DC8F8
    r30 = *(0 + r30); // lwz @ 0x807DC8FC
    r0 = *(0x1c + r30); // lwz @ 0x807DC900
    if (!=) goto 0x0x807dc938;
    /* lis r3, 0 */ // 0x807DC90C
    /* lis r5, 0 */ // 0x807DC910
    /* lis r6, 0 */ // 0x807DC914
    /* lis r7, 0 */ // 0x807DC918
    r3 = r3 + 0; // 0x807DC91C
    r5 = r5 + 0; // 0x807DC920
    r6 = r6 + 0; // 0x807DC924
    r7 = r7 + 0; // 0x807DC928
    /* li r4, 0x3c */ // 0x807DC92C
    /* crclr cr1eq */ // 0x807DC930
    FUN_805E3430(r5, r6, r7, r4); // bl 0x805E3430
    /* lis r4, 0 */ // 0x807DC938
    r3 = *(0x1c + r30); // lwz @ 0x807DC93C
    r5 = *(0 + r4); // lwz @ 0x807DC940
    r4 = *(8 + r3); // lwz @ 0x807DC944
    r3 = *(0x1c + r5); // lwz @ 0x807DC948
    FUN_805E3430(r4); // bl 0x805E3430
    r4 = *(0x28 + r31); // lwz @ 0x807DC950
    /* lis r3, 0 */ // 0x807DC954
    /* lis r5, 0 */ // 0x807DC958
    /* lfs f1, 0(r3) */ // 0x807DC95C
    r3 = *(0x28 + r4); // lwz @ 0x807DC960
}