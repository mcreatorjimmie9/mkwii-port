/* Function at 0x807D544C, size=28 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807D544C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807D5458
    r31 = r3;
    r3 = r3 + 0x20; // 0x807D5460
    FUN_805E3430(r3); // bl 0x805E3430
}