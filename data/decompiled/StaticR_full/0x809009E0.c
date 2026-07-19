/* Function at 0x809009E0, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_809009E0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x809009EC
    r31 = r3;
    r0 = *(0x148 + r3); // lwz @ 0x809009F4
    if (==) goto 0x0x80900a08;
    r3 = r0;
    FUN_80842DF4(r3); // bl 0x80842DF4
    r0 = *(0x2c + r31); // lhz @ 0x80900A08
    r3 = r31;
    /* lfs f0, 0xbc(r31) */ // 0x80900A10
    /* li r4, 0 */ // 0x80900A14
    /* lfs f1, 0xb8(r31) */ // 0x80900A18
    r0 = r0 | 8; // 0x80900A1C
    /* lfs f2, 0xb4(r31) */ // 0x80900A20
    *(0x2c + r31) = r0; // sth @ 0x80900A24
    /* stfs f2, 0x3c(r31) */ // 0x80900A28
    /* stfs f1, 0x40(r31) */ // 0x80900A2C
    /* stfs f0, 0x44(r31) */ // 0x80900A30
    r12 = *(0 + r31); // lwz @ 0x80900A34
    r12 = *(0x68 + r12); // lwz @ 0x80900A38
    /* mtctr r12 */ // 0x80900A3C
    /* bctrl  */ // 0x80900A40
    /* li r3, 0 */ // 0x80900A44
    /* li r0, 1 */ // 0x80900A48
    *(0x308 + r31) = r3; // stw @ 0x80900A4C
    *(0x16d + r31) = r0; // stb @ 0x80900A50
    r31 = *(0xc + r1); // lwz @ 0x80900A54
    r0 = *(0x14 + r1); // lwz @ 0x80900A58
    return;
}