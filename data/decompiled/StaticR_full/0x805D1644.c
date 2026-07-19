/* Function at 0x805D1644, size=32 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805D1644(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 8 */ // 0x805D164C
    *(0x14 + r1) = r0; // stw @ 0x805D1650
    *(0xc + r1) = r31; // stw @ 0x805D1654
    r31 = r3;
    r3 = r3 + 0x30; // 0x805D165C
    FUN_805E3430(r4, r3); // bl 0x805E3430
}