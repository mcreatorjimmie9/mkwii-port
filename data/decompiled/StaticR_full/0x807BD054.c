/* Function at 0x807BD054, size=28 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807BD054(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807BD060
    r31 = r3;
    r3 = r3 + 0x20; // 0x807BD068
    FUN_805E3430(r3); // bl 0x805E3430
}