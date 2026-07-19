/* Function at 0x8074FD98, size=212 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_8074FD98(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8074FDA4
    r31 = r3;
    r0 = *(0xb4 + r3); // lwz @ 0x8074FDAC
    if (!=) goto 0x0x8074fdf4;
    r3 = *(0xb0 + r3); // lwz @ 0x8074FDB8
    /* li r4, 1 */ // 0x8074FDBC
    r3 = *(0 + r3); // lwz @ 0x8074FDC0
    r12 = *(0 + r3); // lwz @ 0x8074FDC4
    r12 = *(0xc + r12); // lwz @ 0x8074FDC8
    /* mtctr r12 */ // 0x8074FDCC
    /* bctrl  */ // 0x8074FDD0
    r3 = *(0xb0 + r31); // lwz @ 0x8074FDD4
    /* li r4, 0 */ // 0x8074FDD8
    r3 = *(0x58 + r3); // lwz @ 0x8074FDDC
    r12 = *(0 + r3); // lwz @ 0x8074FDE0
    r12 = *(0xc + r12); // lwz @ 0x8074FDE4
    /* mtctr r12 */ // 0x8074FDE8
    /* bctrl  */ // 0x8074FDEC
    /* b 0x8074fe3c */ // 0x8074FDF0
    r3 = *(0xb0 + r3); // lwz @ 0x8074FDF4
    /* slwi r0, r0, 2 */ // 0x8074FDF8
    /* li r4, 1 */ // 0x8074FDFC
    /* lwzx r3, r3, r0 */ // 0x8074FE00
    r12 = *(0 + r3); // lwz @ 0x8074FE04
    r12 = *(0xc + r12); // lwz @ 0x8074FE08
    /* mtctr r12 */ // 0x8074FE0C
    /* bctrl  */ // 0x8074FE10
    r3 = *(0xb4 + r31); // lwz @ 0x8074FE14
    /* li r4, 0 */ // 0x8074FE18
    r5 = *(0xb0 + r31); // lwz @ 0x8074FE1C
    r0 = r3 + -1; // 0x8074FE20
    /* slwi r0, r0, 2 */ // 0x8074FE24
    /* lwzx r3, r5, r0 */ // 0x8074FE28
    r12 = *(0 + r3); // lwz @ 0x8074FE2C
    r12 = *(0xc + r12); // lwz @ 0x8074FE30
    /* mtctr r12 */ // 0x8074FE34
    /* bctrl  */ // 0x8074FE38
    r3 = *(0xb4 + r31); // lwz @ 0x8074FE3C
    r0 = r3 + 1; // 0x8074FE40
    *(0xb4 + r31) = r0; // stw @ 0x8074FE44
    if (!=) goto 0x0x8074fe58;
    /* li r0, 0 */ // 0x8074FE50
    *(0xb4 + r31) = r0; // stw @ 0x8074FE54
    r0 = *(0x14 + r1); // lwz @ 0x8074FE58
    r31 = *(0xc + r1); // lwz @ 0x8074FE5C
    return;
}