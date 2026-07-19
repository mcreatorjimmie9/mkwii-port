/* Function at 0x805C6C98, size=44 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805C6C98(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x38 + r1) = r30; // stw @ 0x805C6CAC
    r30 = r4;
    *(0x34 + r1) = r29; // stw @ 0x805C6CB4
    r29 = r3;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
}