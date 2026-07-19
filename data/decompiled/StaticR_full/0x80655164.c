/* Function at 0x80655164, size=40 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80655164(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x80655178
    r30 = r4;
    *(0 + r3) = r4; // stw @ 0x80655180
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
}