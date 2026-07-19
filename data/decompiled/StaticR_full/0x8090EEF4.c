/* Function at 0x8090EEF4, size=284 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8090EEF4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r6, 0 */ // 0x8090EEFC
    /* lis r4, 0 */ // 0x8090EF00
    *(0x14 + r1) = r0; // stw @ 0x8090EF04
    r5 = r6 + 0; // 0x8090EF08
    *(0xc + r1) = r31; // stw @ 0x8090EF0C
    /* li r31, 0 */ // 0x8090EF10
    *(8 + r1) = r30; // stw @ 0x8090EF14
    r30 = r3;
    /* lfs f0, 0(r4) */ // 0x8090EF1C
    /* li r4, 0 */ // 0x8090EF20
    /* stfs f0, 0xb8(r3) */ // 0x8090EF24
    r0 = *(0x2c + r3); // lhz @ 0x8090EF28
    /* lfs f0, 0(r6) */ // 0x8090EF2C
    /* stfs f0, 0x104(r3) */ // 0x8090EF30
    r0 = r0 | 1; // 0x8090EF34
    /* lfs f0, 4(r5) */ // 0x8090EF38
    /* stfs f0, 0x108(r3) */ // 0x8090EF3C
    /* lfs f0, 8(r5) */ // 0x8090EF40
    /* stfs f0, 0x10c(r3) */ // 0x8090EF44
    /* lfs f0, 0(r6) */ // 0x8090EF48
    /* stfs f0, 0x11c(r3) */ // 0x8090EF4C
    /* lfs f0, 4(r5) */ // 0x8090EF50
    /* stfs f0, 0x120(r3) */ // 0x8090EF54
    /* lfs f0, 8(r5) */ // 0x8090EF58
    /* stfs f0, 0x124(r3) */ // 0x8090EF5C
    /* lfs f0, 8(r5) */ // 0x8090EF60
    /* lfs f1, 4(r5) */ // 0x8090EF64
    /* lfs f2, 0(r6) */ // 0x8090EF68
    /* stfs f2, 0x30(r3) */ // 0x8090EF6C
    *(0x2c + r3) = r0; // sth @ 0x8090EF70
    /* stfs f1, 0x34(r3) */ // 0x8090EF74
    /* stfs f0, 0x38(r3) */ // 0x8090EF78
    *(0x1e0 + r3) = r31; // stb @ 0x8090EF7C
    r12 = *(0 + r3); // lwz @ 0x8090EF80
    r12 = *(0x68 + r12); // lwz @ 0x8090EF84
    /* mtctr r12 */ // 0x8090EF88
    /* bctrl  */ // 0x8090EF8C
    /* lis r4, 0 */ // 0x8090EF90
    r3 = *(0x178 + r30); // lwz @ 0x8090EF94
    /* lfs f0, 0(r4) */ // 0x8090EF98
    /* li r4, -1 */ // 0x8090EF9C
    /* stfs f0, 0x190(r30) */ // 0x8090EFA0
    *(0x1cc + r30) = r31; // stw @ 0x8090EFA4
    *(0x194 + r30) = r31; // stw @ 0x8090EFA8
    *(0x198 + r30) = r31; // stw @ 0x8090EFAC
    *(0x17c + r30) = r31; // stw @ 0x8090EFB0
    *(0x180 + r30) = r31; // stw @ 0x8090EFB4
    *(0 + r3) = r31; // stw @ 0x8090EFB8
    r0 = *(0x180 + r30); // lwz @ 0x8090EFBC
    r3 = *(0x178 + r30); // lwz @ 0x8090EFC0
    /* slwi r0, r0, 4 */ // 0x8090EFC4
    r3 = r3 + r0; // 0x8090EFC8
    *(4 + r3) = r31; // stw @ 0x8090EFCC
    r0 = *(0x180 + r30); // lwz @ 0x8090EFD0
    r3 = *(0x178 + r30); // lwz @ 0x8090EFD4
    /* slwi r0, r0, 4 */ // 0x8090EFD8
    r3 = r3 + r0; // 0x8090EFDC
    *(8 + r3) = r4; // stw @ 0x8090EFE0
    r0 = *(0x180 + r30); // lwz @ 0x8090EFE4
    r3 = *(0x178 + r30); // lwz @ 0x8090EFE8
    /* slwi r0, r0, 4 */ // 0x8090EFEC
    r4 = *(0x174 + r30); // lwz @ 0x8090EFF0
    r3 = r3 + r0; // 0x8090EFF4
    *(0xc + r3) = r4; // stw @ 0x8090EFF8
    *(0x184 + r30) = r31; // stb @ 0x8090EFFC
    r3 = *(0x168 + r30); // lwz @ 0x8090F000
    *(0x185 + r30) = r31; // stb @ 0x8090F004
    r12 = *(0x170 + r30); // lwz @ 0x8090F008
    FUN_805E3430(); // bl 0x805E3430
}