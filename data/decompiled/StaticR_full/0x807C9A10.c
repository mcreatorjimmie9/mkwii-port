/* Function at 0x807C9A10, size=28 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807C9A10(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807C9A1C
    r31 = r3;
    r3 = r3 + 0x20; // 0x807C9A24
    FUN_805E3430(r3); // bl 0x805E3430
}