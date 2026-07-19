/* Function at 0x807D26C0, size=28 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807D26C0(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807D26CC
    r31 = r3;
    r3 = r3 + 8; // 0x807D26D4
    FUN_805E3430(r3); // bl 0x805E3430
}