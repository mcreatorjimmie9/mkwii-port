/* Function at 0x806E9FA4, size=44 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806E9FA4(int r3, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x806E9FB8
    r30 = r3;
    r6 = *(0 + r3); // lwz @ 0x806E9FC0
    r0 = *(8 + r3); // lwz @ 0x806E9FC4
    r3 = r6 + r0; // 0x806E9FC8
    FUN_805E3430(); // bl 0x805E3430
}