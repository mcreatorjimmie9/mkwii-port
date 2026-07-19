/* Function at 0x808B4DE4, size=40 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_808B4DE4(int r3, int r4)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x44 + r1) = r29; // stw @ 0x808B4DFC
    r29 = r3;
    /* li r3, 0x174 */ // 0x808B4E04
    FUN_805E3430(r3); // bl 0x805E3430
}