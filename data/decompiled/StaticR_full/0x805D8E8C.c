/* Function at 0x805D8E8C, size=44 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805D8E8C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 2 */ // 0x805D8E94
    r4 = r4 + 0x7ffc; // 0x805D8E9C
    *(0xc + r1) = r31; // stw @ 0x805D8EA0
    *(8 + r1) = r30; // stw @ 0x805D8EA4
    r30 = r3;
    r31 = *(0x14 + r3); // lwz @ 0x805D8EAC
    r3 = r31;
    FUN_805E3430(r3); // bl 0x805E3430
}