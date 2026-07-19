/* Function at 0x806ECDA0, size=40 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_806ECDA0(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r4;
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x806ECDBC
    *(0x10 + r1) = r28; // stw @ 0x806ECDC0
    FUN_805E3430(); // bl 0x805E3430
}