/* Function at 0x8061C4C4, size=40 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8061C4C4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8061C4DC
    r29 = r3;
    /* li r3, 0x58 */ // 0x8061C4E4
    FUN_805E3430(r3); // bl 0x805E3430
}