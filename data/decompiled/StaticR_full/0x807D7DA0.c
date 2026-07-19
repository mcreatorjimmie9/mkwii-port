/* Function at 0x807D7DA0, size=28 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807D7DA0(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x807D7DAC
    r31 = r3;
    r3 = *(0x1f8 + r3); // lwz @ 0x807D7DB4
    FUN_8061DA88(); // bl 0x8061DA88
}