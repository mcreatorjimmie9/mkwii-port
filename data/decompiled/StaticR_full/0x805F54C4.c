/* Function at 0x805F54C4, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805F54C4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805F54D4
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x805F54DC
    r30 = r3;
    *(4 + r3) = r4; // stw @ 0x805F54E4
    if (!=) goto 0x0x805f54f4;
    /* lis r4, 0 */ // 0x805F54EC
    r31 = *(0 + r4); // lwz @ 0x805F54F0
    r0 = *(4 + r3); // lwz @ 0x805F54F4
    r4 = r31;
    /* li r5, 4 */ // 0x805F54FC
    /* slwi r3, r0, 2 */ // 0x805F5500
    FUN_805E3430(r4, r5); // bl 0x805E3430
}