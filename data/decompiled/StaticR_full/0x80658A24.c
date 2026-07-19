/* Function at 0x80658A24, size=32 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80658A24(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    /* li r3, 0x24 */ // 0x80658A38
    *(8 + r1) = r30; // stw @ 0x80658A3C
    FUN_805E3430(r3); // bl 0x805E3430
}