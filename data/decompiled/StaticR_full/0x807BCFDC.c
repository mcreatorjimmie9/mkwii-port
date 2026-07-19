/* Function at 0x807BCFDC, size=28 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807BCFDC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807BCFE8
    r31 = r3;
    r3 = r3 + 8; // 0x807BCFF0
    FUN_805E3430(r3); // bl 0x805E3430
}