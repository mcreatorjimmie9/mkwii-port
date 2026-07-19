/* Function at 0x805E7A18, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_805E7A18(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x805E7A2C
    r30 = r3;
    FUN_805E5470(); // bl 0x805E5470
    /* lis r4, 0 */ // 0x805E7A38
    *(0x40 + r30) = r31; // stb @ 0x805E7A3C
    r4 = r4 + 0; // 0x805E7A40
    r3 = *(0x1c + r30); // lwz @ 0x805E7A44
    *(0 + r30) = r4; // stw @ 0x805E7A48
    FUN_805EEFE4(r4, r4); // bl 0x805EEFE4
    r0 = *(0x40 + r30); // lbz @ 0x805E7A50
    /* li r5, 4 */ // 0x805E7A54
    r4 = *(0x10 + r3); // lwz @ 0x805E7A58
    /* slwi r3, r0, 2 */ // 0x805E7A5C
    FUN_805E3430(r5); // bl 0x805E3430
}