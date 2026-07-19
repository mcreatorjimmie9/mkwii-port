/* Function at 0x8069F4C4, size=44 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8069F4C4(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x8069F4D4
    *(8 + r1) = r30; // stw @ 0x8069F4D8
    r30 = r3;
    *(0 + r3) = r31; // stw @ 0x8069F4E0
    *(4 + r3) = r31; // stw @ 0x8069F4E4
    r3 = r3 + 8; // 0x8069F4E8
    FUN_805E3430(r3); // bl 0x805E3430
}