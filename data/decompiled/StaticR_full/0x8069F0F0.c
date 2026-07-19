/* Function at 0x8069F0F0, size=44 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8069F0F0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* mulli r5, r4, 0x44 */ // 0x8069F0F8
    *(0xc + r1) = r31; // stw @ 0x8069F100
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8069F108
    r30 = r3;
    *(4 + r3) = r4; // stw @ 0x8069F110
    r3 = r5 + 0x10; // 0x8069F114
    FUN_805E3430(r3); // bl 0x805E3430
}