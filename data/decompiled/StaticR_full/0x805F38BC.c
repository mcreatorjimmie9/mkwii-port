/* Function at 0x805F38BC, size=36 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805F38BC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x805F38D0
    /* li r30, 0 */ // 0x805F38D4
    r3 = *(0x28 + r31); // lwz @ 0x805F38D8
    FUN_805E3430(); // bl 0x805E3430
}