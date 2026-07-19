/* Function at 0x80806F8C, size=340 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80806F8C(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    *(0x6c + r1) = r31; // stw @ 0x80806F98
    r31 = r3;
    FUN_808A1BCC(); // bl 0x808A1BCC
    r5 = *(0x58 + r31); // lwz @ 0x80806FA4
    /* lis r6, 0 */ // 0x80806FA8
    r4 = *(0x5c + r31); // lwz @ 0x80806FAC
    /* lis r0, 0x4330 */ // 0x80806FB0
    *(0x34 + r1) = r4; // stw @ 0x80806FB4
    /* lis r4, 0 */ // 0x80806FB8
    /* lfs f2, 0(r4) */ // 0x80806FBC
    /* lis r3, 0 */ // 0x80806FC0
    *(0x30 + r1) = r5; // stw @ 0x80806FC4
    /* lfd f3, 0(r3) */ // 0x80806FCC
    r8 = *(0x60 + r31); // lwz @ 0x80806FD4
    r7 = *(0x64 + r31); // lwz @ 0x80806FDC
    *(0x3c + r1) = r7; // stw @ 0x80806FE0
    /* lfs f1, 0(r6) */ // 0x80806FE4
    *(0x38 + r1) = r8; // stw @ 0x80806FE8
    /* lfs f4, 0x3c(r1) */ // 0x80806FEC
    r7 = *(0x68 + r31); // lwz @ 0x80806FF0
    r6 = *(0x6c + r31); // lwz @ 0x80806FF4
    *(0x44 + r1) = r6; // stw @ 0x80806FF8
    *(0x40 + r1) = r7; // stw @ 0x80806FFC
    r7 = *(0x70 + r31); // lwz @ 0x80807000
    r6 = *(0x74 + r31); // lwz @ 0x80807004
    *(0x4c + r1) = r6; // stw @ 0x80807008
    *(0x48 + r1) = r7; // stw @ 0x8080700C
    /* lfs f5, 0x4c(r1) */ // 0x80807010
    r7 = *(0x78 + r31); // lwz @ 0x80807014
    r6 = *(0x7c + r31); // lwz @ 0x80807018
    *(0x54 + r1) = r6; // stw @ 0x8080701C
    *(0x50 + r1) = r7; // stw @ 0x80807020
    r7 = *(0x80 + r31); // lwz @ 0x80807024
    r6 = *(0x84 + r31); // lwz @ 0x80807028
    *(0x5c + r1) = r6; // stw @ 0x8080702C
    *(0x58 + r1) = r7; // stw @ 0x80807030
    /* lfs f6, 0x5c(r1) */ // 0x80807034
    r6 = *(0xe4 + r31); // lwz @ 0x80807038
    /* lfs f0, 0x3c(r31) */ // 0x8080703C
    /* subfic r6, r6, 4 */ // 0x80807040
    *(0x60 + r1) = r0; // stw @ 0x80807044
    /* xoris r0, r6, 0x8000 */ // 0x80807048
    /* fmuls f0, f2, f0 */ // 0x8080704C
    *(0x64 + r1) = r0; // stw @ 0x80807050
    /* lfd f2, 0x60(r1) */ // 0x80807054
    /* stfs f4, 0x20(r1) */ // 0x80807058
    /* fsubs f2, f2, f3 */ // 0x8080705C
    /* stfs f5, 0x24(r1) */ // 0x80807060
    /* fmuls f0, f2, f0 */ // 0x80807064
    /* stfs f6, 0x28(r1) */ // 0x80807068
    /* stfs f1, 0x14(r1) */ // 0x8080706C
    /* fneg f0, f0 */ // 0x80807070
    /* stfs f1, 0x1c(r1) */ // 0x80807074
    /* stfs f0, 0x18(r1) */ // 0x80807078
    FUN_805A4464(); // bl 0x805A4464
    /* lfs f2, 8(r1) */ // 0x80807080
    r3 = r31;
    /* lfs f1, 0xc(r1) */ // 0x80807088
    /* lfs f0, 0x10(r1) */ // 0x8080708C
    /* stfs f2, 0x3c(r1) */ // 0x80807090
    /* stfs f1, 0x4c(r1) */ // 0x80807094
    /* stfs f0, 0x5c(r1) */ // 0x80807098
    r12 = *(0 + r31); // lwz @ 0x8080709C
    r12 = *(0xd4 + r12); // lwz @ 0x808070A0
    /* mtctr r12 */ // 0x808070A4
    /* bctrl  */ // 0x808070A8
    r6 = r3;
    r3 = *(0xac + r31); // lwz @ 0x808070B0
    r5 = r31 + 0x3c; // 0x808070B8
    r12 = *(0 + r3); // lwz @ 0x808070BC
    r12 = *(0x10 + r12); // lwz @ 0x808070C0
    /* mtctr r12 */ // 0x808070C4
    /* bctrl  */ // 0x808070C8
    r0 = *(0x74 + r1); // lwz @ 0x808070CC
    r31 = *(0x6c + r1); // lwz @ 0x808070D0
    return;
}