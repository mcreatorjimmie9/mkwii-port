/* Function at 0x805F4A80, size=28 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805F4A80(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805F4A8C
    /* lis r31, 0 */ // 0x805F4A90
    r31 = r31 + 0; // 0x805F4A94
    FUN_805E3430(); // bl 0x805E3430
}