/* Function at 0x807EB9F8, size=256 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807EB9F8(int r3, int r4, int r5)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    *(0x4c + r1) = r31; // stw @ 0x807EBA04
    r31 = r3;
    r0 = *(0xac + r3); // lwz @ 0x807EBA0C
    if (==) goto 0x0x807ebae4;
    FUN_808A1BCC(); // bl 0x808A1BCC
    r5 = *(0x58 + r31); // lwz @ 0x807EBA1C
    /* lis r4, 0 */ // 0x807EBA20
    r0 = *(0x5c + r31); // lwz @ 0x807EBA24
    r3 = r31;
    *(0x1c + r1) = r0; // stw @ 0x807EBA2C
    /* lfs f1, 0(r4) */ // 0x807EBA30
    *(0x18 + r1) = r5; // stw @ 0x807EBA34
    r4 = *(0x60 + r31); // lwz @ 0x807EBA38
    r0 = *(0x64 + r31); // lwz @ 0x807EBA3C
    *(0x24 + r1) = r0; // stw @ 0x807EBA40
    *(0x20 + r1) = r4; // stw @ 0x807EBA44
    /* lfs f2, 0x24(r1) */ // 0x807EBA48
    r4 = *(0x68 + r31); // lwz @ 0x807EBA4C
    r0 = *(0x6c + r31); // lwz @ 0x807EBA50
    *(0x2c + r1) = r0; // stw @ 0x807EBA54
    *(0x28 + r1) = r4; // stw @ 0x807EBA58
    r4 = *(0x70 + r31); // lwz @ 0x807EBA5C
    r0 = *(0x74 + r31); // lwz @ 0x807EBA60
    *(0x34 + r1) = r0; // stw @ 0x807EBA64
    *(0x30 + r1) = r4; // stw @ 0x807EBA68
    /* lfs f3, 0x34(r1) */ // 0x807EBA6C
    r4 = *(0x78 + r31); // lwz @ 0x807EBA70
    r0 = *(0x7c + r31); // lwz @ 0x807EBA74
    *(0x3c + r1) = r0; // stw @ 0x807EBA78
    *(0x38 + r1) = r4; // stw @ 0x807EBA7C
    r4 = *(0x80 + r31); // lwz @ 0x807EBA80
    r0 = *(0x84 + r31); // lwz @ 0x807EBA84
    *(0x44 + r1) = r0; // stw @ 0x807EBA88
    *(0x40 + r1) = r4; // stw @ 0x807EBA8C
    /* lfs f4, 0x44(r1) */ // 0x807EBA90
    /* lfs f0, 0x3c(r31) */ // 0x807EBA94
    /* stfs f3, 0xc(r1) */ // 0x807EBA98
    /* fmuls f0, f1, f0 */ // 0x807EBA9C
    /* stfs f2, 0x24(r1) */ // 0x807EBAA0
    /* fadds f0, f3, f0 */ // 0x807EBAA4
    /* stfs f4, 0x44(r1) */ // 0x807EBAA8
    /* stfs f0, 0x34(r1) */ // 0x807EBAAC
    r12 = *(0 + r31); // lwz @ 0x807EBAB0
    /* stfs f2, 8(r1) */ // 0x807EBAB4
    r12 = *(0xb4 + r12); // lwz @ 0x807EBAB8
    /* stfs f4, 0x10(r1) */ // 0x807EBABC
    /* stfs f0, 0xc(r1) */ // 0x807EBAC0
    /* mtctr r12 */ // 0x807EBAC4
    /* bctrl  */ // 0x807EBAC8
    r12 = *(0 + r3); // lwz @ 0x807EBACC
    r5 = r31 + 0x3c; // 0x807EBAD4
    r12 = *(0xc + r12); // lwz @ 0x807EBAD8
    /* mtctr r12 */ // 0x807EBADC
    /* bctrl  */ // 0x807EBAE0
    r0 = *(0x54 + r1); // lwz @ 0x807EBAE4
    r31 = *(0x4c + r1); // lwz @ 0x807EBAE8
    return;
}