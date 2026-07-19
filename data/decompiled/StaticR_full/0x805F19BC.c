/* Function at 0x805F19BC, size=40 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805F19BC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    /* li r4, 0 */ // 0x805F19D4
    *(0x14 + r1) = r29; // stw @ 0x805F19D8
    r29 = r3;
    FUN_805E3430(r4); // bl 0x805E3430
}