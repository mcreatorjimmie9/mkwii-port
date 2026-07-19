/* Function at 0x805ABE68, size=28 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805ABE68(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0x27fc */ // 0x805ABE70
    *(0x14 + r1) = r0; // stw @ 0x805ABE74
    *(0xc + r1) = r31; // stw @ 0x805ABE78
    r31 = r3;
    FUN_805E3430(r4); // bl 0x805E3430
}