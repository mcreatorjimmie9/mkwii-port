/* Function at 0x805D17D8, size=32 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805D17D8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0xd */ // 0x805D17E0
    *(0x14 + r1) = r0; // stw @ 0x805D17E4
    *(0xc + r1) = r31; // stw @ 0x805D17E8
    r31 = r3;
    r3 = r3 + 0x30; // 0x805D17F0
    FUN_805E3430(r4, r3); // bl 0x805E3430
}