/* Function at 0x806E8D88, size=44 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_806E8D88(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r27 */
    /* li r4, 0 */ // 0x806E8D90
    /* li r5, 0x7f */ // 0x806E8D94
    *(0x44 + r1) = r0; // stw @ 0x806E8D98
    /* stmw r27, 0x2c(r1) */ // 0x806E8D9C
    /* lis r31, 0 */ // 0x806E8DA0
    r31 = r31 + 0; // 0x806E8DA4
    r30 = r3;
    r3 = r31 + 0; // 0x806E8DAC
    FUN_805E3430(r3); // bl 0x805E3430
}