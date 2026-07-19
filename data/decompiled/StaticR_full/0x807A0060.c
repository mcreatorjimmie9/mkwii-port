/* Function at 0x807A0060, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_807A0060(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x807A0068
    *(0xc + r1) = r31; // stw @ 0x807A0070
    *(8 + r1) = r30; // stw @ 0x807A0074
    r31 = *(0 + r4); // lwz @ 0x807A0078
    if (==) goto 0x0x807a00fc;
    /* li r0, 0 */ // 0x807A0084
    *(0 + r4) = r0; // stw @ 0x807A0088
    if (==) goto 0x0x807a00fc;
    if (==) goto 0x0x807a00f4;
    /* lis r3, 0 */ // 0x807A0094
    r3 = r3 + 0; // 0x807A0098
    *(0 + r31) = r3; // stw @ 0x807A009C
    r30 = *(0 + r4); // lwz @ 0x807A00A0
    if (==) goto 0x0x807a00e8;
    *(0 + r4) = r0; // stw @ 0x807A00AC
    if (==) goto 0x0x807a00e8;
    if (==) goto 0x0x807a00e0;
    *(0 + r30) = r3; // stw @ 0x807A00B8
    r3 = *(0 + r4); // lwz @ 0x807A00BC
    if (==) goto 0x0x807a00d4;
    *(0 + r4) = r0; // stw @ 0x807A00C8
    /* li r4, 1 */ // 0x807A00CC
    FUN_807A0114(r4); // bl 0x807A0114
    r3 = r30;
    /* li r4, 0 */ // 0x807A00D8
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x807A00EC
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r0 = *(0x14 + r1); // lwz @ 0x807A00FC
    r31 = *(0xc + r1); // lwz @ 0x807A0100
    r30 = *(8 + r1); // lwz @ 0x807A0104
    return;
}