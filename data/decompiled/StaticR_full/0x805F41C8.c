/* Function at 0x805F41C8, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805F41C8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805F41D4
    r31 = r3;
    r3 = *(0x10 + r3); // lwz @ 0x805F41DC
    FUN_805F5F08(); // bl 0x805F5F08
    r3 = *(0x20 + r31); // lwz @ 0x805F41E4
    r12 = *(0 + r3); // lwz @ 0x805F41E8
    r12 = *(0x18 + r12); // lwz @ 0x805F41EC
    /* mtctr r12 */ // 0x805F41F0
    /* bctrl  */ // 0x805F41F4
    r0 = *(0x14 + r1); // lwz @ 0x805F41F8
    r31 = *(0xc + r1); // lwz @ 0x805F41FC
    return;
}