/* Function at 0x808A7418, size=36 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r14 */
/* Calls: 2 function(s) */

int FUN_808A7418(int r3)
{
    /* Stack frame: -96(r1) */
    /* saved r14 */
    /* stmw r14, 0x18(r1) */ // 0x808A7424
    r15 = r3;
    *(8 + r1) = r4; // stb @ 0x808A742C
    FUN_805ABAFC(); // bl 0x805ABAFC
    r3 = *(0xc94 + r3); // lwz @ 0x808A7434
    FUN_805E3430(); // bl 0x805E3430
}