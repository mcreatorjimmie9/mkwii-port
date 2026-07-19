/* Function at 0x8078FECC, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8078FECC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8078FED8
    r31 = r3;
    r0 = *(0xa + r3); // lbz @ 0x8078FEE0
    if (!=) goto 0x0x8078ff10;
    /* lis r3, 0 */ // 0x8078FEEC
    r4 = r31;
    r3 = *(0 + r3); // lwz @ 0x8078FEF4
    r3 = r3 + 0x78; // 0x8078FEF8
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    /* li r3, 0 */ // 0x8078FF00
    /* li r0, 1 */ // 0x8078FF04
    *(4 + r31) = r3; // stw @ 0x8078FF08
    *(0xa + r31) = r0; // stb @ 0x8078FF0C
    r0 = *(0x14 + r1); // lwz @ 0x8078FF10
}