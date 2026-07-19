/* Function at 0x805F9808, size=28 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805F9808(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805F9814
    r31 = r3;
    r3 = r3 + 0x30; // 0x805F981C
    FUN_805E3430(r3); // bl 0x805E3430
}