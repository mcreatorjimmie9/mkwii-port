/* Function at 0x806621CC, size=32 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806621CC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x806621D4
    /* li r5, 8 */ // 0x806621D8
    *(0x14 + r1) = r0; // stw @ 0x806621DC
    *(0xc + r1) = r31; // stw @ 0x806621E0
    r31 = r3;
    FUN_805E3430(r4, r5); // bl 0x805E3430
}