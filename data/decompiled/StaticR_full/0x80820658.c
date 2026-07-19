/* Function at 0x80820658, size=32 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80820658(int r3, int r4)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    *(0x4c + r1) = r31; // stw @ 0x80820664
    r31 = r3;
    FUN_8061DAE0(); // bl 0x8061DAE0
    FUN_805E3430(r4); // bl 0x805E3430
}