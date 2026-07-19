/* Function at 0x806E969C, size=52 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r22 */
/* Calls: 1 function(s) */

int FUN_806E969C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r22 */
    /* li r0, 0 */ // 0x806E96A8
    /* stmw r22, 8(r1) */ // 0x806E96AC
    r27 = r4;
    r25 = r5;
    r28 = r3;
    r4 = r6;
    r3 = r25;
    r22 = *(4 + r5); // lwz @ 0x806E96C4
    *(4 + r5) = r0; // stw @ 0x806E96C8
    FUN_805E3430(r4, r3); // bl 0x805E3430
}