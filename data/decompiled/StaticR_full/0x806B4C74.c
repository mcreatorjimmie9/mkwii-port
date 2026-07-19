/* Function at 0x806B4C74, size=128 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806B4C74(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x806B4C7C
    *(0x24 + r1) = r0; // stw @ 0x806B4C80
    *(0x1c + r1) = r31; // stw @ 0x806B4C84
    r3 = *(0 + r3); // lwz @ 0x806B4C88
    r31 = *(0x98 + r3); // lwz @ 0x806B4C8C
    if (==) goto 0x0x806b4d04;
    /* lis r7, 0 */ // 0x806B4C98
    /* li r0, 0x72 */ // 0x806B4C9C
    r7 = r7 + 0; // 0x806B4CA0
    r3 = r31;
    r5 = *(1 + r7); // lbz @ 0x806B4CA8
    *(9 + r1) = r5; // stb @ 0x806B4CB0
    r6 = *(0 + r7); // lbz @ 0x806B4CB4
    r5 = *(2 + r7); // lbz @ 0x806B4CB8
    *(8 + r1) = r6; // stb @ 0x806B4CBC
    *(0xa + r1) = r5; // stb @ 0x806B4CC0
    *(9 + r1) = r0; // stb @ 0x806B4CC4
    FUN_805E3430(); // bl 0x805E3430
    if (==) goto 0x0x806b4d04;
    if (==) goto 0x0x806b4ce8;
    r0 = *(-1 + r3); // lbz @ 0x806B4CDC
    if (!=) goto 0x0x806b4d04;
    /* lis r4, 0 */ // 0x806B4CE8
    r4 = r4 + 0; // 0x806B4CF0
}