/* Function at 0x805E16AC, size=36 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r21 */
/* Calls: 1 function(s) */

int FUN_805E16AC(int r3, int r4)
{
    /* Stack frame: -64(r1) */
    /* saved r21 */
    /* stmw r21, 0x14(r1) */ // 0x805E16B8
    r24 = r3;
    r3 = r4;
    /* li r27, 1 */ // 0x805E16C4
    /* li r26, 8 */ // 0x805E16C8
    FUN_805E3430(r3); // bl 0x805E3430
}