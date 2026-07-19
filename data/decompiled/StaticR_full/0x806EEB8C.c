/* Function at 0x806EEB8C, size=28 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r23 */
/* Calls: 1 function(s) */

int FUN_806EEB8C(int r3)
{
    /* Stack frame: -48(r1) */
    /* saved r23 */
    /* stmw r23, 0xc(r1) */ // 0x806EEB98
    r31 = r3;
    r3 = r3 + 4; // 0x806EEBA0
    FUN_805E3430(r3); // bl 0x805E3430
}