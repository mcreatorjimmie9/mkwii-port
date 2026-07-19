/* Function at 0x8082BD68, size=48 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_8082BD68(int r3, int r4)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r29 = r4;
    *(0x40 + r1) = r28; // stw @ 0x8082BD84
    r28 = r3;
    r4 = r28 + 0x10; // 0x8082BD90
    FUN_805E3430(r3, r4); // bl 0x805E3430
}