/* Function at 0x8075CFD0, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8075CFD0(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8075CFD8
    *(0x24 + r1) = r0; // stw @ 0x8075CFDC
    *(0x1c + r1) = r31; // stw @ 0x8075CFE0
    r31 = r3;
    /* lfs f2, 0x174(r3) */ // 0x8075CFE8
    /* lfs f1, 0(r4) */ // 0x8075CFEC
    /* lfs f0, 0xec(r3) */ // 0x8075CFF0
    /* fadds f1, f2, f1 */ // 0x8075CFF4
    /* stfs f1, 0x174(r3) */ // 0x8075CFF8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8075CFFC
    if (<=) goto 0x0x8075d010;
    /* li r0, 0 */ // 0x8075D004
    /* stfs f0, 0x174(r3) */ // 0x8075D008
    *(0xb8 + r3) = r0; // stw @ 0x8075D00C
    r3 = *(0x20 + r3); // lwz @ 0x8075D010
    /* lfs f1, 0x174(r31) */ // 0x8075D014
    r12 = *(0 + r3); // lwz @ 0x8075D018
    r12 = *(0x18 + r12); // lwz @ 0x8075D01C
    /* mtctr r12 */ // 0x8075D020
    /* bctrl  */ // 0x8075D024
    r4 = *(0x20 + r31); // lwz @ 0x8075D028
    /* lfs f1, 0x174(r31) */ // 0x8075D030
    r4 = r4 + 0x24; // 0x8075D034
    FUN_805A86E4(r3, r4); // bl 0x805A86E4
    /* lfs f0, 8(r1) */ // 0x8075D03C
    /* stfs f0, 0x168(r31) */ // 0x8075D040
    /* lfs f0, 0xc(r1) */ // 0x8075D044
    /* stfs f0, 0x16c(r31) */ // 0x8075D048
    /* lfs f0, 0x10(r1) */ // 0x8075D04C
    /* stfs f0, 0x170(r31) */ // 0x8075D050
    r31 = *(0x1c + r1); // lwz @ 0x8075D054
    r0 = *(0x24 + r1); // lwz @ 0x8075D058
    return;
}