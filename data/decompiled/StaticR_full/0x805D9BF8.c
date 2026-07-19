/* Function at 0x805D9BF8, size=32 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805D9BF8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x805D9C08
    r30 = r3;
    /* li r3, 0x28 */ // 0x805D9C10
    FUN_805E3430(r3); // bl 0x805E3430
}