/* Function at 0x80702BC4, size=20 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

void FUN_80702BC4(void)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80702BD0
    FUN_805E3430(); // bl 0x805E3430
}