/* Function at 0x808C7F34, size=68 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r27 */
/* Calls: 3 function(s) */

int FUN_808C7F34(int r3, int r4)
{
    /* Stack frame: -112(r1) */
    /* saved r27 */
    /* lis r4, 0 */ // 0x808C7F3C
    *(0x74 + r1) = r0; // stw @ 0x808C7F40
    /* stmw r27, 0x5c(r1) */ // 0x808C7F44
    r27 = r3;
    r3 = *(0 + r4); // lwz @ 0x808C7F4C
    FUN_805C2BFC(r4); // bl 0x805C2BFC
    r0 = r3 + 1; // 0x808C7F54
    *(0x48 + r27) = r0; // stb @ 0x808C7F58
    /* clrlwi r4, r0, 0x18 */ // 0x808C7F5C
    r3 = r27;
    r4 = r4 + 2; // 0x808C7F64
    FUN_80671C1C(r3, r4); // bl 0x80671C1C
    r0 = *(0x48 + r27); // lbz @ 0x808C7F6C
    /* slwi r3, r0, 2 */ // 0x808C7F70
    FUN_805E3430(r3, r4); // bl 0x805E3430
}