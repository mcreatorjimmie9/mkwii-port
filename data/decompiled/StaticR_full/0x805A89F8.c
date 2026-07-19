/* Function at 0x805A89F8, size=32 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805A89F8(int r3, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 4 */ // 0x805A8A00
    *(0x14 + r1) = r0; // stw @ 0x805A8A04
    *(0xc + r1) = r31; // stw @ 0x805A8A08
    r31 = r3;
    r3 = *(8 + r3); // lwz @ 0x805A8A10
    FUN_805E3430(r5); // bl 0x805E3430
}