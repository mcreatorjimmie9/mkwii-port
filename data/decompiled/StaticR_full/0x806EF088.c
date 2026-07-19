/* Function at 0x806EF088, size=36 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806EF088(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3 + 0x9c; // 0x806EF098
    *(8 + r1) = r30; // stw @ 0x806EF09C
    /* li r30, 0 */ // 0x806EF0A0
    r3 = r31;
    FUN_805E3430(r3); // bl 0x805E3430
}