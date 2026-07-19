/* Function at 0x805BBAF8, size=40 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805BBAF8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x805BBB00
    r4 = r4 + 0; // 0x805BBB08
    *(0xc + r1) = r31; // stw @ 0x805BBB0C
    *(8 + r1) = r30; // stw @ 0x805BBB10
    r30 = r3;
    *(0x10 + r3) = r4; // stw @ 0x805BBB18
    FUN_805E3430(r4); // bl 0x805E3430
}