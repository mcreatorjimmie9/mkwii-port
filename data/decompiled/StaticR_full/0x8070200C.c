/* Function at 0x8070200C, size=32 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8070200C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    r3 = r4;
    *(0x24 + r1) = r0; // stw @ 0x80702018
    *(0x1c + r1) = r31; // stw @ 0x80702020
    r31 = r5;
    FUN_805E3430(r3, r4); // bl 0x805E3430
}