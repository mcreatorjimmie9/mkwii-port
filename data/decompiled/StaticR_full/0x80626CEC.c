/* Function at 0x80626CEC, size=28 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80626CEC(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x80626CF8
    r31 = r3;
    /* li r3, 0x9c */ // 0x80626D00
    FUN_805E3430(r3); // bl 0x805E3430
}