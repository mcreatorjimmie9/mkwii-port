/* Function at 0x80705908, size=32 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80705908(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80705914
    r31 = r3;
    r3 = r4;
    r4 = r5;
    FUN_805E3430(r3, r4); // bl 0x805E3430
}