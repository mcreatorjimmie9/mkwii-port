/* Function at 0x80762EB8, size=248 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80762EB8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    *(0x5c + r1) = r31; // stw @ 0x80762EC4
    r31 = r3;
    FUN_808A1BCC(); // bl 0x808A1BCC
    r6 = *(0x58 + r31); // lwz @ 0x80762ED0
    /* lis r5, 0 */ // 0x80762ED4
    r0 = *(0x5c + r31); // lwz @ 0x80762ED8
    /* lis r4, 0 */ // 0x80762EDC
    *(0x24 + r1) = r0; // stw @ 0x80762EE0
    /* lfs f1, 0(r5) */ // 0x80762EE8
    r4 = r4 + 0; // 0x80762EEC
    *(0x20 + r1) = r6; // stw @ 0x80762EF0
    r5 = *(0x60 + r31); // lwz @ 0x80762EF4
    r0 = *(0x64 + r31); // lwz @ 0x80762EF8
    *(0x2c + r1) = r0; // stw @ 0x80762EFC
    *(0x28 + r1) = r5; // stw @ 0x80762F00
    r5 = *(0x68 + r31); // lwz @ 0x80762F04
    r0 = *(0x6c + r31); // lwz @ 0x80762F08
    *(0x34 + r1) = r0; // stw @ 0x80762F0C
    *(0x30 + r1) = r5; // stw @ 0x80762F10
    r5 = *(0x70 + r31); // lwz @ 0x80762F14
    r0 = *(0x74 + r31); // lwz @ 0x80762F18
    *(0x3c + r1) = r0; // stw @ 0x80762F1C
    *(0x38 + r1) = r5; // stw @ 0x80762F20
    r5 = *(0x78 + r31); // lwz @ 0x80762F24
    r0 = *(0x7c + r31); // lwz @ 0x80762F28
    *(0x44 + r1) = r0; // stw @ 0x80762F2C
    *(0x40 + r1) = r5; // stw @ 0x80762F30
    r5 = *(0x80 + r31); // lwz @ 0x80762F34
    r0 = *(0x84 + r31); // lwz @ 0x80762F38
    *(0x4c + r1) = r0; // stw @ 0x80762F3C
    *(0x48 + r1) = r5; // stw @ 0x80762F40
    FUN_805A443C(); // bl 0x805A443C
    r4 = r31 + 0x30; // 0x80762F4C
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    /* lfs f2, 8(r1) */ // 0x80762F58
    r3 = r31;
    /* lfs f1, 0xc(r1) */ // 0x80762F60
    /* lfs f0, 0x10(r1) */ // 0x80762F64
    /* stfs f2, 0x2c(r1) */ // 0x80762F68
    /* stfs f1, 0x3c(r1) */ // 0x80762F6C
    /* stfs f0, 0x4c(r1) */ // 0x80762F70
    r12 = *(0 + r31); // lwz @ 0x80762F74
    r12 = *(0xb4 + r12); // lwz @ 0x80762F78
    /* mtctr r12 */ // 0x80762F7C
    /* bctrl  */ // 0x80762F80
    r12 = *(0 + r3); // lwz @ 0x80762F84
    r5 = r31 + 0x3c; // 0x80762F8C
    r12 = *(0xc + r12); // lwz @ 0x80762F90
    /* mtctr r12 */ // 0x80762F94
    /* bctrl  */ // 0x80762F98
    r0 = *(0x64 + r1); // lwz @ 0x80762F9C
    r31 = *(0x5c + r1); // lwz @ 0x80762FA0
    return;
}