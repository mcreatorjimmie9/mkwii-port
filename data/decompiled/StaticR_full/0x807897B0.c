/* Function at 0x807897B0, size=32 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807897B0(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x807897BC
    r31 = r3;
    r4 = *(0x1c + r31); // lwz @ 0x807897C8
    FUN_805E3430(r3); // bl 0x805E3430
}