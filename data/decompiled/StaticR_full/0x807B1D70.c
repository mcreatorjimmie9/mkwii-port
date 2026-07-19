/* Function at 0x807B1D70, size=36 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807B1D70(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x807B1D84
    r29 = r3;
    r3 = r3 + 0x2c; // 0x807B1D8C
    FUN_805E3430(r3); // bl 0x805E3430
}