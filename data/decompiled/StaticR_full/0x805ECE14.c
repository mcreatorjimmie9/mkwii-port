/* Function at 0x805ECE14, size=44 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_805ECE14(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r27 */
    /* stmw r27, 0x1c(r1) */ // 0x805ECE20
    r29 = r5;
    r27 = r3;
    r28 = r4;
    /* li r30, 0 */ // 0x805ECE30
    r3 = r29;
    /* li r31, 0 */ // 0x805ECE38
    FUN_805E3430(r3); // bl 0x805E3430
}