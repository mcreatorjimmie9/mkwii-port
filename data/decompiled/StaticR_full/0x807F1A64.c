/* Function at 0x807F1A64, size=36 bytes */
/* Stack frame: 192 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807F1A64(int r3)
{
    /* Stack frame: -192(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0xb4 + r1) = r29; // stw @ 0x807F1A78
    r29 = r3;
    /* li r3, 0x4c */ // 0x807F1A80
    FUN_805E3430(r3); // bl 0x805E3430
}