/* Function at 0x807B0170, size=36 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807B0170(int r3)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x44 + r1) = r29; // stw @ 0x807B0184
    r29 = r3;
    FUN_805E3430(r3); // bl 0x805E3430
}