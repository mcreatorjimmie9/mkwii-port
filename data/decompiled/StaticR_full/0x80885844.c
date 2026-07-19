/* Function at 0x80885844, size=36 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80885844(int r3, int r4)
{
    /* Stack frame: -128(r1) */
    /* saved r31 */
    *(0x7c + r1) = r31; // stw @ 0x80885850
    r31 = r3;
    FUN_808A1BCC(); // bl 0x808A1BCC
    r3 = r31 + 0x58; // 0x8088585C
    FUN_805E3430(r3, r4); // bl 0x805E3430
}