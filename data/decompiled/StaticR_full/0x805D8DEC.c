/* Function at 0x805D8DEC, size=48 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805D8DEC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x805D8DF4
    /* lis r3, 2 */ // 0x805D8DF8
    *(0x14 + r1) = r0; // stw @ 0x805D8DFC
    *(0xc + r1) = r31; // stw @ 0x805D8E00
    *(8 + r1) = r30; // stw @ 0x805D8E04
    r30 = *(0 + r4); // lwz @ 0x805D8E08
    r4 = r3 + 0x7ffc; // 0x805D8E0C
    r31 = *(0x14 + r30); // lwz @ 0x805D8E10
    r3 = r31;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}