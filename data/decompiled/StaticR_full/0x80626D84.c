/* Function at 0x80626D84, size=184 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80626D84(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80626D90
    r31 = r3;
    r3 = *(0x1c + r3); // lwz @ 0x80626D98
    FUN_806414A8(); // bl 0x806414A8
    r4 = *(0x18 + r31); // lwz @ 0x80626DA0
    /* lis r3, 0 */ // 0x80626DA4
    /* lfs f0, 0(r3) */ // 0x80626DA8
    /* stfs f0, 0x28(r31) */ // 0x80626DB0
    /* stfs f0, 0x24(r31) */ // 0x80626DB4
    /* stfs f0, 0x20(r31) */ // 0x80626DB8
    /* stfs f0, 0x34(r31) */ // 0x80626DBC
    /* stfs f0, 0x30(r31) */ // 0x80626DC0
    /* stfs f0, 0x2c(r31) */ // 0x80626DC4
    /* stfs f0, 0x40(r31) */ // 0x80626DC8
    /* stfs f0, 0x3c(r31) */ // 0x80626DCC
    /* stfs f0, 0x38(r31) */ // 0x80626DD0
    /* stfs f0, 0x44(r31) */ // 0x80626DD4
    /* stfs f0, 0x50(r31) */ // 0x80626DD8
    /* stfs f0, 0x4c(r31) */ // 0x80626DDC
    /* stfs f0, 0x48(r31) */ // 0x80626DE0
    /* stfs f0, 0x5c(r31) */ // 0x80626DE4
    /* stfs f0, 0x58(r31) */ // 0x80626DE8
    /* stfs f0, 0x54(r31) */ // 0x80626DEC
    /* stfs f0, 0x68(r31) */ // 0x80626DF0
    /* stfs f0, 0x64(r31) */ // 0x80626DF4
    /* stfs f0, 0x60(r31) */ // 0x80626DF8
    /* stfs f0, 0x6c(r31) */ // 0x80626DFC
    /* stfs f0, 0x70(r31) */ // 0x80626E00
    /* stfs f0, 0x74(r31) */ // 0x80626E04
    /* stfs f0, 0x80(r31) */ // 0x80626E08
    /* stfs f0, 0x7c(r31) */ // 0x80626E0C
    /* stfs f0, 0x78(r31) */ // 0x80626E10
    if (==) goto 0x0x80626e28;
    /* lfs f0, 0xc(r4) */ // 0x80626E18
    /* stfs f0, 0x44(r31) */ // 0x80626E1C
    /* lfs f0, 0x20(r4) */ // 0x80626E20
    /* stfs f0, 0x6c(r31) */ // 0x80626E24
    r0 = *(0x14 + r1); // lwz @ 0x80626E28
    r31 = *(0xc + r1); // lwz @ 0x80626E2C
    return;
}