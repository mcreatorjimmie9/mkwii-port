/* Function at 0x805B351C, size=36 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805B351C(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x805B3530
    r29 = r3;
    r3 = r3 + 0x4120; // 0x805B3538
    FUN_805E3430(r3); // bl 0x805E3430
}