/* Function at 0x80705888, size=40 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80705888(int r3, int r4)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    /* li r4, 0x40 */ // 0x8070589C
    *(0x58 + r1) = r30; // stw @ 0x807058A0
    r30 = r3;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}