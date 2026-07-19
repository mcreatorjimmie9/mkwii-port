/* Function at 0x805A9134, size=44 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_805A9134(int r3, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r29 = r5;
    *(0x10 + r1) = r28; // stw @ 0x805A9150
    r28 = r3;
    r3 = *(0x14 + r3); // lwz @ 0x805A9158
    FUN_805E3430(); // bl 0x805E3430
}