/* Function at 0x807DA014, size=80 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807DA014(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x807DA01C
    /* li r5, 0 */ // 0x807DA020
    *(0x24 + r1) = r0; // stw @ 0x807DA024
    *(0x1c + r1) = r31; // stw @ 0x807DA028
    r31 = r3;
    r0 = *(0xa + r3); // lbz @ 0x807DA030
    r3 = *(0 + r4); // lwz @ 0x807DA034
    *(8 + r1) = r0; // stb @ 0x807DA03C
    FUN_805A71BC(r4); // bl 0x805A71BC
    /* li r0, 0 */ // 0x807DA044
    *(9 + r31) = r3; // stb @ 0x807DA048
    *(0x10 + r31) = r0; // stw @ 0x807DA04C
    r31 = *(0x1c + r1); // lwz @ 0x807DA050
    r0 = *(0x24 + r1); // lwz @ 0x807DA054
    return;
}