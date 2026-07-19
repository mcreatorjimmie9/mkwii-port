/* Function at 0x805D7660, size=32 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805D7660(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x805D7668
    /* li r5, 0x3804 */ // 0x805D766C
    *(0x14 + r1) = r0; // stw @ 0x805D7670
    *(0xc + r1) = r31; // stw @ 0x805D7674
    r31 = r3;
    FUN_805E3430(r4, r5); // bl 0x805E3430
}