/* Function at 0x806B4E20, size=156 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806B4E20(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x806B4E28
    *(0x34 + r1) = r0; // stw @ 0x806B4E2C
    *(0x2c + r1) = r31; // stw @ 0x806B4E30
    r3 = *(0 + r3); // lwz @ 0x806B4E34
    r31 = *(0x98 + r3); // lwz @ 0x806B4E38
    if (!=) goto 0x0x806b4e4c;
    /* li r0, 0 */ // 0x806B4E44
    /* b 0x806b4ee4 */ // 0x806B4E48
    /* lis r7, 0 */ // 0x806B4E4C
    /* li r0, 0x64 */ // 0x806B4E50
    r7 = r7 + 0; // 0x806B4E54
    r3 = r31;
    r5 = *(1 + r7); // lbz @ 0x806B4E5C
    *(9 + r1) = r5; // stb @ 0x806B4E64
    r6 = *(0 + r7); // lbz @ 0x806B4E68
    r5 = *(2 + r7); // lbz @ 0x806B4E6C
    *(8 + r1) = r6; // stb @ 0x806B4E70
    *(0xa + r1) = r5; // stb @ 0x806B4E74
    *(9 + r1) = r0; // stb @ 0x806B4E78
    FUN_805E3430(); // bl 0x805E3430
    if (!=) goto 0x0x806b4e90;
    /* li r0, 0 */ // 0x806B4E88
    /* b 0x806b4ee4 */ // 0x806B4E8C
    if (==) goto 0x0x806b4ea4;
    r0 = *(-1 + r3); // lbz @ 0x806B4E98
    if (!=) goto 0x0x806b4ee0;
    /* lis r4, 0 */ // 0x806B4EA4
    r4 = r4 + 0; // 0x806B4EAC
    r4 = r4 + 0x35; // 0x806B4EB0
    /* crclr cr1eq */ // 0x806B4EB4
    r3 = r3 + 2; // 0x806B4EB8
}