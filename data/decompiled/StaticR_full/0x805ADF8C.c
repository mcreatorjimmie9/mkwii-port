/* Function at 0x805ADF8C, size=164 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_805ADF8C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x805ADF94
    /* li r0, 3 */ // 0x805ADF9C
    *(0xc + r1) = r31; // stw @ 0x805ADFA0
    /* li r31, 0 */ // 0x805ADFA4
    *(8 + r1) = r30; // stw @ 0x805ADFA8
    r30 = r3;
    *(0x54 + r3) = r31; // stb @ 0x805ADFB0
    *(0x58 + r3) = r0; // stw @ 0x805ADFB4
    r4 = *(0 + r4); // lwz @ 0x805ADFB8
    r0 = *(0xb4 + r4); // lbz @ 0x805ADFBC
    if (==) goto 0x0x805adfd4;
    r3 = r4;
    FUN_805E3430(r3); // bl 0x805E3430
    /* b 0x805ae02c */ // 0x805ADFD0
    r0 = *(0xb5 + r4); // lbz @ 0x805ADFD4
    if (==) goto 0x0x805adff4;
    FUN_805AAFA0(); // bl 0x805AAFA0
    /* lis r3, -0x1000 */ // 0x805ADFE4
    FUN_805E3430(r3); // bl 0x805E3430
    *(0x4c + r30) = r31; // stb @ 0x805ADFEC
    /* b 0x805ae02c */ // 0x805ADFF0
    r0 = *(0x2ac + r3); // lwz @ 0x805ADFF4
    if (!=) goto 0x0x805ae00c;
    r3 = r4;
    FUN_805E3430(r3); // bl 0x805E3430
    /* b 0x805ae02c */ // 0x805AE008
    if (!=) goto 0x0x805ae02c;
    FUN_805AAFA0(r3); // bl 0x805AAFA0
    /* lis r3, -0x1000 */ // 0x805AE018
    FUN_805E3430(r3); // bl 0x805E3430
    /* li r3, 0 */ // 0x805AE020
    FUN_805E3430(r3, r3); // bl 0x805E3430
    FUN_805E3430(r3, r3); // bl 0x805E3430
    /* li r0, -1 */ // 0x805AE02C
}