/* Function at 0x806FC384, size=40 bytes */
/* Stack frame: 304 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_806FC384(int r3, int r4)
{
    /* Stack frame: -304(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r29 = r4;
    *(0x120 + r1) = r28; // stw @ 0x806FC3A0
    r28 = r3;
    FUN_805E3430(); // bl 0x805E3430
}