/* Function at 0x80856AF4, size=44 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80856AF4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80856B04
    r30 = r3;
    FUN_8061DF18(); // bl 0x8061DF18
    r31 = r3;
    r3 = r3 + 0x1c8; // 0x80856B14
    r4 = r30 + 0x600; // 0x80856B18
    FUN_805E3430(r3, r4); // bl 0x805E3430
}