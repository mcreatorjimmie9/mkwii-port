/* Function at 0x8070EF0C, size=256 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8070EF0C(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 0 */ // 0x8070EF14
    /* lis r31, 0 */ // 0x8070EF20
    r31 = r31 + 0; // 0x8070EF24
    *(0x28 + r1) = r30; // stw @ 0x8070EF28
    /* lfs f1, 0(r31) */ // 0x8070EF2C
    *(0x24 + r1) = r29; // stw @ 0x8070EF30
    r29 = r3;
    /* lfs f2, 0x4c(r31) */ // 0x8070EF38
    r30 = *(0x15c + r3); // lwz @ 0x8070EF3C
    r3 = *(8 + r30); // lwz @ 0x8070EF40
    r3 = *(0x28 + r3); // lwz @ 0x8070EF44
    FUN_805E70EC(); // bl 0x805E70EC
    r3 = *(8 + r30); // lwz @ 0x8070EF4C
    /* li r4, 1 */ // 0x8070EF50
    /* lfs f1, 0(r31) */ // 0x8070EF54
    r3 = *(0x28 + r3); // lwz @ 0x8070EF58
    /* lfs f2, 0x4c(r31) */ // 0x8070EF5C
    FUN_805E70EC(r4); // bl 0x805E70EC
    r30 = *(0x15c + r29); // lwz @ 0x8070EF64
    /* li r0, 1 */ // 0x8070EF68
    /* li r4, 1 */ // 0x8070EF6C
    *(0xbc + r30) = r0; // stb @ 0x8070EF70
    r3 = r30;
    r12 = *(0 + r30); // lwz @ 0x8070EF78
    r12 = *(0x68 + r12); // lwz @ 0x8070EF7C
    /* mtctr r12 */ // 0x8070EF80
    /* bctrl  */ // 0x8070EF84
    r12 = *(0 + r30); // lwz @ 0x8070EF88
    r3 = r30;
    r12 = *(0x94 + r12); // lwz @ 0x8070EF90
    /* mtctr r12 */ // 0x8070EF94
    /* bctrl  */ // 0x8070EF98
    /* lfs f0, 0(r31) */ // 0x8070EF9C
    /* lis r4, 0x4330 */ // 0x8070EFA0
    /* stfs f0, 0x1b0(r29) */ // 0x8070EFA4
    /* lfs f0, 0x90(r31) */ // 0x8070EFAC
    /* stfs f0, 8(r1) */ // 0x8070EFB0
    /* lfd f4, 0x60(r31) */ // 0x8070EFB4
    /* stfs f0, 0xc(r1) */ // 0x8070EFB8
    /* lfs f0, 0x94(r31) */ // 0x8070EFBC
    r0 = *(0x174 + r29); // lwz @ 0x8070EFC0
    /* lfs f3, 0x1a8(r29) */ // 0x8070EFC4
    r5 = r0 * r0; // 0x8070EFC8
    /* xoris r0, r0, 0x8000 */ // 0x8070EFCC
    *(0x1c + r1) = r0; // stw @ 0x8070EFD0
    /* fmuls f2, f0, f3 */ // 0x8070EFD4
    /* lfs f0, 0x98(r31) */ // 0x8070EFD8
    *(0x18 + r1) = r4; // stw @ 0x8070EFDC
    /* lfd f1, 0x18(r1) */ // 0x8070EFE0
    /* fmuls f0, f0, f3 */ // 0x8070EFE4
    /* xoris r0, r5, 0x8000 */ // 0x8070EFE8
    *(0x14 + r1) = r0; // stw @ 0x8070EFEC
    /* fsubs f1, f1, f4 */ // 0x8070EFF0
    *(0x10 + r1) = r4; // stw @ 0x8070EFF4
    /* fmuls f3, f0, f3 */ // 0x8070EFF8
    /* lfd f0, 0x10(r1) */ // 0x8070EFFC
    /* fmuls f2, f2, f1 */ // 0x8070F000
    /* fsubs f1, f0, f4 */ // 0x8070F004
    FUN_805E3430(); // bl 0x805E3430
}