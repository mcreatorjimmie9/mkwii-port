/* Function at 0x805ADBEC, size=36 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805ADBEC(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x805ADC00
    /* lis r30, 0 */ // 0x805ADC04
    r30 = r30 + 0; // 0x805ADC08
    FUN_805E3430(); // bl 0x805E3430
}