/* Function at 0x80648D8C, size=32 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80648D8C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80648D98
    r31 = r3;
    FUN_805EB278(); // bl 0x805EB278
    r3 = r31 + 0x4c; // 0x80648DA4
    FUN_805E3430(r3); // bl 0x805E3430
}