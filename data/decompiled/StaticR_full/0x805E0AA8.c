/* Function at 0x805E0AA8, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805E0AA8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805E0AB4
    /* lis r31, 0 */ // 0x805E0AB8
    r0 = *(0 + r31); // lwz @ 0x805E0ABC
    if (==) goto 0x0x805e0adc;
    /* lis r3, 0 */ // 0x805E0AC8
    r3 = r3 + 0; // 0x805E0ACC
    FUN_805E3430(r3, r3); // bl 0x805E3430
    /* li r0, 0 */ // 0x805E0AD4
    *(0 + r31) = r0; // stw @ 0x805E0AD8
    r0 = *(0x14 + r1); // lwz @ 0x805E0ADC
    r31 = *(0xc + r1); // lwz @ 0x805E0AE0
}