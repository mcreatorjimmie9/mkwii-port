/* Function at 0x80704EC8, size=28 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80704EC8(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x80704ED4
    r31 = r3;
    FUN_805E3430(r3); // bl 0x805E3430
}