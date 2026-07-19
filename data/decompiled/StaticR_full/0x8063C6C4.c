/* Function at 0x8063C6C4, size=28 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8063C6C4(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x8063C6D0
    r31 = r3;
    /* li r3, 0 */ // 0x8063C6D8
    FUN_805E3430(r3); // bl 0x805E3430
}