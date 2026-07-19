/* Function at 0x805DB1C4, size=40 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_805DB1C4(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x10 + r1) = r28; // stw @ 0x805DB1DC
    r28 = r3;
    /* li r3, 0 */ // 0x805DB1E4
    FUN_805E3430(r3); // bl 0x805E3430
}