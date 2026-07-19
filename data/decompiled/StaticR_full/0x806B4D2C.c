/* Function at 0x806B4D2C, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806B4D2C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x806B4D34
    *(0x24 + r1) = r0; // stw @ 0x806B4D38
    *(0x1c + r1) = r31; // stw @ 0x806B4D3C
    r3 = *(0 + r3); // lwz @ 0x806B4D40
    r31 = *(0x98 + r3); // lwz @ 0x806B4D44
    if (!=) goto 0x0x806b4d58;
    /* li r0, 0 */ // 0x806B4D50
    /* b 0x806b4df0 */ // 0x806B4D54
    /* lis r7, 0 */ // 0x806B4D58
    /* li r0, 0x77 */ // 0x806B4D5C
    r7 = r7 + 0; // 0x806B4D60
    r3 = r31;
    r5 = *(1 + r7); // lbz @ 0x806B4D68
    *(9 + r1) = r5; // stb @ 0x806B4D70
    r6 = *(0 + r7); // lbz @ 0x806B4D74
    r5 = *(2 + r7); // lbz @ 0x806B4D78
    *(8 + r1) = r6; // stb @ 0x806B4D7C
    *(0xa + r1) = r5; // stb @ 0x806B4D80
    *(9 + r1) = r0; // stb @ 0x806B4D84
    FUN_805E3430(); // bl 0x805E3430
    if (!=) goto 0x0x806b4d9c;
    /* li r0, 0 */ // 0x806B4D94
    /* b 0x806b4df0 */ // 0x806B4D98
    if (==) goto 0x0x806b4db0;
    r0 = *(-1 + r3); // lbz @ 0x806B4DA4
    if (!=) goto 0x0x806b4dec;
    /* lis r4, 0 */ // 0x806B4DB0
    r4 = r4 + 0; // 0x806B4DB8
}