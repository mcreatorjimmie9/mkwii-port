/* Function at 0x8061BE74, size=36 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8061BE74(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8061BE88
    r30 = r3;
    /* li r3, 0x240 */ // 0x8061BE90
    FUN_805E3430(r3); // bl 0x805E3430
}