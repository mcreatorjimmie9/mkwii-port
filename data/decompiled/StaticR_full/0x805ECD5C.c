/* Function at 0x805ECD5C, size=52 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_805ECD5C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r31, 0 */ // 0x805ECD6C
    /* li r30, 0 */ // 0x805ECD74
    *(0x14 + r1) = r29; // stw @ 0x805ECD78
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x805ECD80
    r28 = r3;
    r3 = r29;
    FUN_805E3430(r3); // bl 0x805E3430
}