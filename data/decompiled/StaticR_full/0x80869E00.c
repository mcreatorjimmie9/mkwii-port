/* Function at 0x80869E00, size=28 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

void FUN_80869E00(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80869E0C
    /* lis r31, 0 */ // 0x80869E10
    r3 = *(0 + r31); // lwz @ 0x80869E14
    FUN_805E3430(); // bl 0x805E3430
}