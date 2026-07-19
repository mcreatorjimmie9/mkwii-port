/* Function at 0x808CC64C, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808CC64C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, -1 */ // 0x808CC654
    *(0x14 + r1) = r0; // stw @ 0x808CC658
    *(0xc + r1) = r31; // stw @ 0x808CC65C
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x808CC664
    r12 = *(0x64 + r12); // lwz @ 0x808CC668
    /* mtctr r12 */ // 0x808CC66C
    /* bctrl  */ // 0x808CC670
    /* lis r4, 0 */ // 0x808CC674
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x808CC67C
    /* li r4, 1 */ // 0x808CC680
    FUN_80671C48(r4, r3, r4); // bl 0x80671C48
    /* lis r3, 0 */ // 0x808CC688
    r3 = *(0 + r3); // lwz @ 0x808CC68C
    FUN_808CF554(r4, r3); // bl 0x808CF554
    r0 = *(0x14 + r1); // lwz @ 0x808CC694
    r31 = *(0xc + r1); // lwz @ 0x808CC698
    return;
}