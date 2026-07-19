/* Function at 0x8070B060, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_8070B060(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8070B06C
    r31 = r3;
    r3 = *(4 + r3); // lwz @ 0x8070B074
    r12 = *(0 + r3); // lwz @ 0x8070B078
    r12 = *(0xc + r12); // lwz @ 0x8070B07C
    /* mtctr r12 */ // 0x8070B080
    /* bctrl  */ // 0x8070B084
    r3 = *(4 + r31); // lwz @ 0x8070B088
    /* lis r4, 0 */ // 0x8070B08C
    r4 = r4 + 0; // 0x8070B090
    r12 = *(0 + r3); // lwz @ 0x8070B094
    r12 = *(0x74 + r12); // lwz @ 0x8070B098
    /* mtctr r12 */ // 0x8070B09C
    /* bctrl  */ // 0x8070B0A0
    r3 = *(4 + r31); // lwz @ 0x8070B0A4
    r12 = *(0 + r3); // lwz @ 0x8070B0A8
    r12 = *(0x80 + r12); // lwz @ 0x8070B0AC
    /* mtctr r12 */ // 0x8070B0B0
    /* bctrl  */ // 0x8070B0B4
    r0 = *(0x14 + r1); // lwz @ 0x8070B0B8
    r31 = *(0xc + r1); // lwz @ 0x8070B0BC
    return;
}