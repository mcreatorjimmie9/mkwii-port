/* Function at 0x808C483C, size=32 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808C483C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x808C484C
    r30 = r3;
    /* li r3, 0x254 */ // 0x808C4854
    FUN_805E3430(r3); // bl 0x805E3430
}