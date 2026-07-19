/* Function at 0x806585C4, size=32 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_806585C4(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stmw r25, 0x14(r1) */ // 0x806585D0
    r26 = r4;
    r25 = r3;
    r4 = r5;
    FUN_805E3430(r4); // bl 0x805E3430
}