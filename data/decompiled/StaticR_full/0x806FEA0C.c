/* Function at 0x806FEA0C, size=48 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_806FEA0C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -144(r1) */
    /* saved r27 */
    /* stmw r27, 0x7c(r1) */ // 0x806FEA18
    r27 = r3;
    /* addis r3, r4, 3 */ // 0x806FEA20
    r29 = r4;
    r30 = r5;
    r28 = r6;
    /* li r4, 0x80 */ // 0x806FEA30
    r3 = r3 + -0x3da0; // 0x806FEA34
    FUN_805E3430(r4, r3); // bl 0x805E3430
}