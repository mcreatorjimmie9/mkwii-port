/* Function at 0x805AE1A0, size=36 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_805AE1A0(int r3)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x30 + r1) = r28; // stw @ 0x805AE1B8
    r28 = r3;
    FUN_805E3430(); // bl 0x805E3430
}