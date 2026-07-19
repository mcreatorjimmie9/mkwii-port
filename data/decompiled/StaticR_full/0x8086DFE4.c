/* Function at 0x8086DFE4, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_8086DFE4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x8086DFEC
    *(0x14 + r1) = r0; // stw @ 0x8086DFF0
    *(0xc + r1) = r31; // stw @ 0x8086DFF4
    r31 = r3;
    r3 = *(0 + r3); // lwz @ 0x8086DFFC
    r12 = *(0 + r3); // lwz @ 0x8086E000
    r12 = *(0xc + r12); // lwz @ 0x8086E004
    /* mtctr r12 */ // 0x8086E008
    /* bctrl  */ // 0x8086E00C
    /* li r3, 0xc */ // 0x8086E010
    /* li r0, 0 */ // 0x8086E014
    *(8 + r31) = r3; // stw @ 0x8086E018
    *(0xc + r31) = r0; // stb @ 0x8086E01C
    r31 = *(0xc + r1); // lwz @ 0x8086E020
    r0 = *(0x14 + r1); // lwz @ 0x8086E024
    return;
}