/* Function at 0x80780888, size=68 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 2 function(s) */

int FUN_80780888(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x80780894
    /* lis r29, 0 */ // 0x80780898
    r27 = r3;
    r5 = r29 + 0; // 0x807808A0
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x807808A8
    /* lis r3, 0 */ // 0x807808AC
    r4 = r4 + 0; // 0x807808B0
    *(0 + r27) = r4; // stw @ 0x807808B4
    r3 = *(0 + r3); // lwz @ 0x807808B8
    r0 = *(0x24 + r3); // lbz @ 0x807808BC
    *(0xb4 + r27) = r0; // stb @ 0x807808C0
    /* slwi r3, r0, 2 */ // 0x807808C4
    FUN_805E3430(); // bl 0x805E3430
}