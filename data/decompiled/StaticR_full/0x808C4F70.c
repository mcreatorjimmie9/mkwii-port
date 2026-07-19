/* Function at 0x808C4F70, size=28 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808C4F70(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808C4F7C
    r31 = r3;
    /* li r3, 0x254 */ // 0x808C4F84
    FUN_805E3430(r3); // bl 0x805E3430
}