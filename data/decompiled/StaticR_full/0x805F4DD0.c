/* Function at 0x805F4DD0, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

void FUN_805F4DD0(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805F4DDC
    /* lis r31, 0 */ // 0x805F4DE0
    r3 = *(0 + r31); // lwz @ 0x805F4DE4
    if (==) goto 0x0x805f4e14;
    FUN_805F361C(); // bl 0x805F361C
    r3 = *(0 + r31); // lwz @ 0x805F4DF4
    FUN_805F3798(); // bl 0x805F3798
    r3 = *(0 + r31); // lwz @ 0x805F4DFC
    r3 = *(0x34 + r3); // lwz @ 0x805F4E00
    r12 = *(0x18 + r3); // lwz @ 0x805F4E04
    r12 = *(0x18 + r12); // lwz @ 0x805F4E08
    /* mtctr r12 */ // 0x805F4E0C
    /* bctrl  */ // 0x805F4E10
    /* lis r3, 0 */ // 0x805F4E14
    /* li r0, 1 */ // 0x805F4E18
    *(0 + r3) = r0; // stw @ 0x805F4E1C
    r31 = *(0xc + r1); // lwz @ 0x805F4E20
    r0 = *(0x14 + r1); // lwz @ 0x805F4E24
    return;
}