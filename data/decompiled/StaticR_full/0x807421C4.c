/* Function at 0x807421C4, size=36 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807421C4(int r3)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x34 + r1) = r29; // stw @ 0x807421D8
    r29 = r3;
    /* li r3, 0x4c */ // 0x807421E0
    FUN_805E3430(r3); // bl 0x805E3430
}