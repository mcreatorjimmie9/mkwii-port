/* Function at 0x80672614, size=36 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80672614(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* li r0, -1 */ // 0x80672620
    *(0x1c + r1) = r31; // stw @ 0x80672624
    r31 = r3;
    *(4 + r3) = r0; // stw @ 0x8067262C
    /* li r3, 0x10 */ // 0x80672630
    FUN_805E3430(r3); // bl 0x805E3430
}