/* Function at 0x808E55F0, size=44 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_808E55F0(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r29 = r4;
    *(0x20 + r1) = r28; // stw @ 0x808E560C
    r28 = r3;
    /* li r3, 0x254 */ // 0x808E5614
    FUN_805E3430(r3); // bl 0x805E3430
}