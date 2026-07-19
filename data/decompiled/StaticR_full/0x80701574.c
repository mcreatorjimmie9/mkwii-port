/* Function at 0x80701574, size=28 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80701574(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80701580
    r31 = r3;
    /* li r3, 0 */ // 0x80701588
    FUN_805E3430(r3); // bl 0x805E3430
}