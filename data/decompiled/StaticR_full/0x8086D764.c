/* Function at 0x8086D764, size=28 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

void FUN_8086D764(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8086D770
    /* lis r31, 0 */ // 0x8086D774
    r3 = *(0 + r31); // lwz @ 0x8086D778
    FUN_805E3430(); // bl 0x805E3430
}