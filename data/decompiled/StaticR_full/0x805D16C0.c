/* Function at 0x805D16C0, size=32 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805D16C0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 2 */ // 0x805D16C8
    *(0x14 + r1) = r0; // stw @ 0x805D16CC
    *(0xc + r1) = r31; // stw @ 0x805D16D0
    r31 = r3;
    r3 = r3 + 0x30; // 0x805D16D8
    FUN_805E3430(r4, r3); // bl 0x805E3430
}