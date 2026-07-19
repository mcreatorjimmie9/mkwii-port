/* Function at 0x805D05D4, size=40 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805D05D4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, -0x20 */ // 0x805D05DC
    *(0xc + r1) = r31; // stw @ 0x805D05E4
    /* lis r31, 0x32 */ // 0x805D05E8
    *(8 + r1) = r30; // stw @ 0x805D05EC
    r30 = r3;
    r3 = r31 + -0x7000; // 0x805D05F4
    FUN_805E3430(r3); // bl 0x805E3430
}