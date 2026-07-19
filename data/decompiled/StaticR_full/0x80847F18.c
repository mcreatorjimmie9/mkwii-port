/* Function at 0x80847F18, size=36 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80847F18(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80847F2C
    r30 = r3;
    /* li r3, 0x2a4 */ // 0x80847F34
    FUN_805E3430(r3); // bl 0x805E3430
}