/* Function at 0x807359C8, size=32 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807359C8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807359D4
    r31 = r3;
    r4 = *(0x2a4 + r3); // lwz @ 0x807359DC
    r3 = r4 + 0x74; // 0x807359E0
    FUN_805E3430(r3); // bl 0x805E3430
}