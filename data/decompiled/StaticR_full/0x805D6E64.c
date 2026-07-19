/* Function at 0x805D6E64, size=36 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805D6E64(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* lis r4, 1 */ // 0x805D6E6C
    *(0x34 + r1) = r0; // stw @ 0x805D6E70
    r5 = r4 + -0x7340; // 0x805D6E74
    /* li r4, 0 */ // 0x805D6E78
    *(0x2c + r1) = r31; // stw @ 0x805D6E7C
    r31 = r3;
    FUN_805E3430(r5, r4); // bl 0x805E3430
}