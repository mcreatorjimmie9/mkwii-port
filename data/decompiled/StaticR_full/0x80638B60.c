/* Function at 0x80638B60, size=32 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80638B60(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r3, 4 */ // 0x80638B68
    *(0xc + r1) = r31; // stw @ 0x80638B70
    *(8 + r1) = r30; // stw @ 0x80638B74
    r30 = r4;
    FUN_805E3430(r3); // bl 0x805E3430
}