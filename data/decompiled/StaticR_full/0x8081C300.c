/* Function at 0x8081C300, size=36 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8081C300(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x8081C314
    r29 = r3;
    r4 = r29;
    FUN_805E3430(r4); // bl 0x805E3430
}