/* Function at 0x808F02E8, size=44 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_808F02E8(int r3, int r4)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r29 = r4;
    *(0x40 + r1) = r28; // stw @ 0x808F0304
    r28 = r3;
    /* li r3, 0x174 */ // 0x808F030C
    FUN_805E3430(r3); // bl 0x805E3430
}