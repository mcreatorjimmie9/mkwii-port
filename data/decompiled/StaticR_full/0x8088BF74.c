/* Function at 0x8088BF74, size=360 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8088BF74(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r5, 0 */ // 0x8088BF7C
    /* lis r31, 0 */ // 0x8088BF88
    r31 = r31 + 0; // 0x8088BF8C
    *(0x38 + r1) = r30; // stw @ 0x8088BF90
    r30 = r4;
    *(0x34 + r1) = r29; // stw @ 0x8088BF98
    r29 = r3;
    *(0x30 + r1) = r28; // stw @ 0x8088BFA0
    FUN_8089BC74(); // bl 0x8089BC74
    /* lis r3, 0 */ // 0x8088BFA8
    r0 = *(0x54 + r29); // lbz @ 0x8088BFAC
    r3 = r3 + 0; // 0x8088BFB0
    *(0 + r29) = r3; // stw @ 0x8088BFB4
    r7 = *(0x30 + r29); // lwz @ 0x8088BFBC
    r3 = *(0 + r30); // lwz @ 0x8088BFC0
    r6 = *(0x34 + r29); // lwz @ 0x8088BFC4
    r8 = *(0x2a + r3); // lha @ 0x8088BFC8
    r5 = *(0x38 + r29); // lwz @ 0x8088BFCC
    r4 = *(0x3c + r29); // lwz @ 0x8088BFD0
    r3 = *(0x40 + r29); // lwz @ 0x8088BFD4
    r0 = *(0x44 + r29); // lwz @ 0x8088BFD8
    *(0x104 + r29) = r8; // sth @ 0x8088BFDC
    *(0x108 + r29) = r7; // stw @ 0x8088BFE0
    *(0x10c + r29) = r6; // stw @ 0x8088BFE4
    *(0x110 + r29) = r5; // stw @ 0x8088BFE8
    *(0x114 + r29) = r4; // stw @ 0x8088BFEC
    *(0x118 + r29) = r3; // stw @ 0x8088BFF0
    *(0x11c + r29) = r0; // stw @ 0x8088BFF4
    if (==) goto 0x0x8088c004;
    r28 = r29 + 0x48; // 0x8088BFFC
    /* b 0x8088c034 */ // 0x8088C000
    /* li r0, 1 */ // 0x8088C004
    *(0x54 + r29) = r0; // stb @ 0x8088C008
    r4 = r29 + 0x58; // 0x8088C010
    FUN_8070E704(r3, r4); // bl 0x8070E704
    /* lfs f0, 8(r1) */ // 0x8088C018
    r28 = r29 + 0x48; // 0x8088C01C
    /* stfs f0, 0x48(r29) */ // 0x8088C020
    /* lfs f0, 0xc(r1) */ // 0x8088C024
    /* stfs f0, 0x4c(r29) */ // 0x8088C028
    /* lfs f0, 0x10(r1) */ // 0x8088C02C
    /* stfs f0, 0x50(r29) */ // 0x8088C030
    r0 = *(0xa4 + r29); // lwz @ 0x8088C034
    /* li r9, 6 */ // 0x8088C038
    /* lis r3, 0x4330 */ // 0x8088C03C
    /* li r8, 0x28 */ // 0x8088C040
    r6 = r0 * r0; // 0x8088C044
    /* xoris r4, r9, 0x8000 */ // 0x8088C048
    /* xoris r0, r8, 0x8000 */ // 0x8088C04C
    r12 = *(0 + r28); // lwz @ 0x8088C050
    r11 = *(4 + r28); // lwz @ 0x8088C054
    /* li r10, 0 */ // 0x8088C058
    *(0x1c + r1) = r4; // stw @ 0x8088C05C
    r5 = r6 / r8; // 0x8088C060
    /* lfd f3, 0x10(r31) */ // 0x8088C064
    /* li r7, 0xa */ // 0x8088C068
    *(0x18 + r1) = r3; // stw @ 0x8088C06C
    /* lfs f1, 8(r31) */ // 0x8088C070
    /* lfd f0, 0x18(r1) */ // 0x8088C074
    *(0x20 + r1) = r3; // stw @ 0x8088C078
    /* fsubs f2, f0, f3 */ // 0x8088C07C
    r4 = r5 * r8; // 0x8088C080
    r5 = *(8 + r28); // lwz @ 0x8088C084
    *(0x24 + r1) = r0; // stw @ 0x8088C088
    /* li r3, 0xb4 */ // 0x8088C08C
    /* lfs f4, 4(r31) */ // 0x8088C090
    /* lfd f0, 0x20(r1) */ // 0x8088C094
    /* fmuls f2, f2, f1 */ // 0x8088C098
    /* subf r0, r4, r6 */ // 0x8088C09C
    /* fsubs f1, f0, f3 */ // 0x8088C0A0
    /* lfs f0, 0xc(r31) */ // 0x8088C0A4
    *(0x120 + r29) = r12; // stw @ 0x8088C0A8
    /* fdivs f1, f2, f1 */ // 0x8088C0AC
    *(0x124 + r29) = r11; // stw @ 0x8088C0B0
    *(0x128 + r29) = r5; // stw @ 0x8088C0B4
    *(0x132 + r29) = r10; // sth @ 0x8088C0B8
    *(0x148 + r29) = r9; // sth @ 0x8088C0BC
    *(0x134 + r29) = r8; // sth @ 0x8088C0C0
    *(0x136 + r29) = r7; // sth @ 0x8088C0C4
    *(0x130 + r29) = r0; // sth @ 0x8088C0C8
    /* stfs f4, 0x138(r29) */ // 0x8088C0CC
    /* stfs f1, 0x144(r29) */ // 0x8088C0D0
    /* stfs f0, 0x140(r29) */ // 0x8088C0D4
    FUN_805E3430(); // bl 0x805E3430
}