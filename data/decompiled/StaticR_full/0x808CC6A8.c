/* Function at 0x808CC6A8, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808CC6A8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, -1 */ // 0x808CC6B0
    *(0x14 + r1) = r0; // stw @ 0x808CC6B4
    *(0xc + r1) = r31; // stw @ 0x808CC6B8
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x808CC6C0
    r12 = *(0x64 + r12); // lwz @ 0x808CC6C4
    /* mtctr r12 */ // 0x808CC6C8
    /* bctrl  */ // 0x808CC6CC
    /* lis r4, 0 */ // 0x808CC6D0
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x808CC6D8
    /* li r4, 1 */ // 0x808CC6DC
    FUN_80671C48(r4, r3, r4); // bl 0x80671C48
    /* lis r3, 0 */ // 0x808CC6E4
    r3 = *(0 + r3); // lwz @ 0x808CC6E8
    FUN_808CF554(r4, r3); // bl 0x808CF554
    r0 = *(0x14 + r1); // lwz @ 0x808CC6F0
    r31 = *(0xc + r1); // lwz @ 0x808CC6F4
    return;
}