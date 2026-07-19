/* Function at 0x80618A14, size=32 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80618A14(int r3)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r3;
    *(0x44 + r1) = r29; // stw @ 0x80618A2C
    FUN_8061DA88(); // bl 0x8061DA88
}