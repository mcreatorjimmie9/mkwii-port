/* Function at 0x805BEF64, size=36 bytes */
/* Stack frame: 160 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805BEF64(int r3, int r4, int r5)
{
    /* Stack frame: -160(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x805BEF6C
    /* li r5, 0x70 */ // 0x805BEF70
    *(0xa4 + r1) = r0; // stw @ 0x805BEF74
    *(0x9c + r1) = r31; // stw @ 0x805BEF78
    r31 = r3;
    FUN_805E3430(r5, r3); // bl 0x805E3430
}