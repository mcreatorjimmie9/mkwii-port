/* Function at 0x806F9C98, size=44 bytes */
/* Stack frame: 496 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_806F9C98(int r3, int r4, int r5)
{
    /* Stack frame: -496(r1) */
    /* saved r26 */
    /* stmw r26, 0x1d8(r1) */ // 0x806F9CA4
    r26 = r4;
    /* lis r29, 1 */ // 0x806F9CAC
    r30 = r3;
    /* li r4, 0 */ // 0x806F9CB4
    r3 = r26;
    r5 = r29 + -0x4400; // 0x806F9CBC
    FUN_805E3430(r4, r3, r5); // bl 0x805E3430
}