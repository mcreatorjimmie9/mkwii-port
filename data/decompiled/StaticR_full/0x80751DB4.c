/* Function at 0x80751DB4, size=340 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r31 */
/* Calls: 7 function(s) */

int FUN_80751DB4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -128(r1) */
    /* saved r31 */
    *(0x7c + r1) = r31; // stw @ 0x80751DC0
    r31 = r3;
    r0 = *(0xec + r3); // lbz @ 0x80751DC8
    if (!=) goto 0x0x80751ddc;
    FUN_8089FD54(); // bl 0x8089FD54
    /* b 0x80751ef4 */ // 0x80751DD8
    FUN_808A1BCC(); // bl 0x808A1BCC
    r6 = *(0x58 + r31); // lwz @ 0x80751DE0
    r0 = *(0x5c + r31); // lwz @ 0x80751DE8
    *(0x4c + r1) = r0; // stw @ 0x80751DF0
    /* li r5, 2 */ // 0x80751DF4
    *(0x48 + r1) = r6; // stw @ 0x80751DF8
    r6 = *(0x60 + r31); // lwz @ 0x80751DFC
    r0 = *(0x64 + r31); // lwz @ 0x80751E00
    *(0x54 + r1) = r0; // stw @ 0x80751E04
    *(0x50 + r1) = r6; // stw @ 0x80751E08
    r6 = *(0x68 + r31); // lwz @ 0x80751E0C
    r0 = *(0x6c + r31); // lwz @ 0x80751E10
    *(0x5c + r1) = r0; // stw @ 0x80751E14
    *(0x58 + r1) = r6; // stw @ 0x80751E18
    r6 = *(0x70 + r31); // lwz @ 0x80751E1C
    r0 = *(0x74 + r31); // lwz @ 0x80751E20
    *(0x64 + r1) = r0; // stw @ 0x80751E24
    *(0x60 + r1) = r6; // stw @ 0x80751E28
    r6 = *(0x78 + r31); // lwz @ 0x80751E2C
    r0 = *(0x7c + r31); // lwz @ 0x80751E30
    *(0x6c + r1) = r0; // stw @ 0x80751E34
    *(0x68 + r1) = r6; // stw @ 0x80751E38
    r6 = *(0x80 + r31); // lwz @ 0x80751E3C
    r0 = *(0x84 + r31); // lwz @ 0x80751E40
    *(0x74 + r1) = r0; // stw @ 0x80751E44
    *(0x70 + r1) = r6; // stw @ 0x80751E48
    FUN_805C70D8(); // bl 0x805C70D8
    /* lis r4, 0 */ // 0x80751E50
    /* lfs f1, 0(r4) */ // 0x80751E58
    FUN_805A443C(r4, r3, r4); // bl 0x805A443C
    /* lfs f1, 0x40(r31) */ // 0x80751E64
    FUN_805A443C(r4, r3, r4); // bl 0x805A443C
    r4 = r31 + 0x30; // 0x80751E78
    FUN_805A4464(r4, r3, r4, r5); // bl 0x805A4464
    /* lfs f2, 0x38(r1) */ // 0x80751E84
    /* lfs f1, 0x3c(r1) */ // 0x80751E8C
    r4 = r31 + 0x30; // 0x80751E90
    /* lfs f0, 0x40(r1) */ // 0x80751E94
    r5 = r31 + 0xf0; // 0x80751E98
    /* stfs f2, 0x54(r1) */ // 0x80751E9C
    /* stfs f1, 0x64(r1) */ // 0x80751EA0
    /* stfs f0, 0x74(r1) */ // 0x80751EA4
    FUN_805A4498(r5); // bl 0x805A4498
    r12 = *(0 + r31); // lwz @ 0x80751EAC
    r3 = r31;
    r12 = *(0xb4 + r12); // lwz @ 0x80751EB4
    /* mtctr r12 */ // 0x80751EB8
    /* bctrl  */ // 0x80751EBC
    r12 = *(0 + r3); // lwz @ 0x80751EC0
    r5 = r31 + 0x3c; // 0x80751EC8
    r12 = *(0x10 + r12); // lwz @ 0x80751ED0
    /* mtctr r12 */ // 0x80751ED4
    /* bctrl  */ // 0x80751ED8
    /* lfs f2, 0x30(r31) */ // 0x80751EDC
    /* lfs f1, 0x34(r31) */ // 0x80751EE0
    /* lfs f0, 0x38(r31) */ // 0x80751EE4
    /* stfs f2, 0xf0(r31) */ // 0x80751EE8
    /* stfs f1, 0xf4(r31) */ // 0x80751EEC
    /* stfs f0, 0xf8(r31) */ // 0x80751EF0
    r0 = *(0x84 + r1); // lwz @ 0x80751EF4
    r31 = *(0x7c + r1); // lwz @ 0x80751EF8
    return;
}