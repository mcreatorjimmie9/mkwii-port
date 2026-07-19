/* Function at 0x80711D78, size=224 bytes */
/* Stack frame: 320 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80711D78(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -320(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80711D80
    *(0x13c + r1) = r31; // stw @ 0x80711D88
    /* lis r31, 0 */ // 0x80711D8C
    r31 = r31 + 0; // 0x80711D90
    *(0x138 + r1) = r30; // stw @ 0x80711D94
    r30 = r3;
    r4 = *(0 + r4); // lwz @ 0x80711D9C
    r3 = *(0x10 + r4); // lwz @ 0x80711DA0
    r3 = *(0x6c + r3); // lwz @ 0x80711DA4
    r12 = *(0 + r3); // lwz @ 0x80711DA8
    r12 = *(8 + r12); // lwz @ 0x80711DAC
    /* mtctr r12 */ // 0x80711DB0
    /* bctrl  */ // 0x80711DB4
    r6 = *(0 + r3); // lwz @ 0x80711DB8
    r0 = *(4 + r3); // lwz @ 0x80711DC0
    *(0x10c + r1) = r0; // stw @ 0x80711DC8
    /* lfs f2, 0x1c(r31) */ // 0x80711DCC
    *(0x108 + r1) = r6; // stw @ 0x80711DD0
    /* lfs f1, 0x20(r31) */ // 0x80711DD4
    r6 = *(8 + r3); // lwz @ 0x80711DD8
    r0 = *(0xc + r3); // lwz @ 0x80711DDC
    *(0x114 + r1) = r0; // stw @ 0x80711DE0
    /* lfs f0, 0x24(r31) */ // 0x80711DE4
    *(0x110 + r1) = r6; // stw @ 0x80711DE8
    r6 = *(0x10 + r3); // lwz @ 0x80711DEC
    r0 = *(0x14 + r3); // lwz @ 0x80711DF0
    *(0x11c + r1) = r0; // stw @ 0x80711DF4
    *(0x118 + r1) = r6; // stw @ 0x80711DF8
    r6 = *(0x18 + r3); // lwz @ 0x80711DFC
    r0 = *(0x1c + r3); // lwz @ 0x80711E00
    *(0x124 + r1) = r0; // stw @ 0x80711E04
    *(0x120 + r1) = r6; // stw @ 0x80711E08
    r6 = *(0x20 + r3); // lwz @ 0x80711E0C
    r0 = *(0x24 + r3); // lwz @ 0x80711E10
    *(0x12c + r1) = r0; // stw @ 0x80711E14
    *(0x128 + r1) = r6; // stw @ 0x80711E18
    r6 = *(0x28 + r3); // lwz @ 0x80711E1C
    r0 = *(0x2c + r3); // lwz @ 0x80711E20
    *(0x134 + r1) = r0; // stw @ 0x80711E28
    *(0x130 + r1) = r6; // stw @ 0x80711E2C
    /* lfs f3, 0x38(r30) */ // 0x80711E30
    /* lfs f4, 0x34(r30) */ // 0x80711E34
    /* lfs f5, 0x30(r30) */ // 0x80711E38
    /* fadds f2, f2, f3 */ // 0x80711E3C
    /* fadds f1, f1, f4 */ // 0x80711E40
    /* fadds f0, f0, f5 */ // 0x80711E44
    /* stfs f2, 0x28(r1) */ // 0x80711E48
    /* stfs f0, 0x20(r1) */ // 0x80711E4C
    /* stfs f1, 0x24(r1) */ // 0x80711E50
    FUN_805E3430(); // bl 0x805E3430
}