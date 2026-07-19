/* Function at 0x805F10B8, size=36 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805F10B8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x805F10C0
    *(0xc + r1) = r31; // stw @ 0x805F10C8
    *(8 + r1) = r30; // stw @ 0x805F10CC
    r30 = r3;
    r3 = r3 + 0xc; // 0x805F10D4
    FUN_805E3430(r3); // bl 0x805E3430
}