/* Function at 0x806B4B4C, size=208 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806B4B4C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x806B4B54
    *(0x24 + r1) = r0; // stw @ 0x806B4B58
    *(0x1c + r1) = r31; // stw @ 0x806B4B5C
    r3 = *(0 + r3); // lwz @ 0x806B4B60
    r31 = *(0x98 + r3); // lwz @ 0x806B4B64
    if (!=) goto 0x0x806b4b78;
    /* li r0, 0 */ // 0x806B4B70
    /* b 0x806b4c04 */ // 0x806B4B74
    /* lis r7, 0 */ // 0x806B4B78
    /* li r0, 0x66 */ // 0x806B4B7C
    r7 = r7 + 0; // 0x806B4B80
    r3 = r31;
    r5 = *(1 + r7); // lbz @ 0x806B4B88
    *(9 + r1) = r5; // stb @ 0x806B4B90
    r6 = *(0 + r7); // lbz @ 0x806B4B94
    r5 = *(2 + r7); // lbz @ 0x806B4B98
    *(8 + r1) = r6; // stb @ 0x806B4B9C
    *(0xa + r1) = r5; // stb @ 0x806B4BA0
    *(9 + r1) = r0; // stb @ 0x806B4BA4
    FUN_805E3430(); // bl 0x805E3430
    if (!=) goto 0x0x806b4bbc;
    /* li r0, 0 */ // 0x806B4BB4
    /* b 0x806b4c04 */ // 0x806B4BB8
    if (==) goto 0x0x806b4bd0;
    r0 = *(-1 + r3); // lbz @ 0x806B4BC4
    if (!=) goto 0x0x806b4c00;
    /* lis r4, 0 */ // 0x806B4BD0
    r4 = r4 + 0; // 0x806B4BD8
    r4 = r4 + 0x2a; // 0x806B4BDC
    /* crclr cr1eq */ // 0x806B4BE0
    r3 = r3 + 2; // 0x806B4BE4
    FUN_805E3430(r5, r4, r4, r3); // bl 0x805E3430
    /* subfic r4, r3, -1 */ // 0x806B4BEC
    r0 = r3 + 1; // 0x806B4BF0
    r0 = r4 | r0; // 0x806B4BF4
    /* srwi r0, r0, 0x1f */ // 0x806B4BF8
    /* b 0x806b4c04 */ // 0x806B4BFC
    /* li r0, 0 */ // 0x806B4C00
    if (!=) goto 0x0x806b4c14;
    /* li r3, -1 */ // 0x806B4C0C
    /* b 0x806b4c60 */ // 0x806B4C10
    r6 = *(0xc + r1); // lwz @ 0x806B4C14
}