/* Function at 0x8077E570, size=400 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8077E570(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x8077E578
    /* li r6, 0 */ // 0x8077E57C
    *(0x24 + r1) = r0; // stw @ 0x8077E580
    r5 = r4 + 0; // 0x8077E584
    /* li r0, 0x2e */ // 0x8077E588
    *(0x1c + r1) = r31; // stw @ 0x8077E58C
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x8077E594
    /* lis r30, 0 */ // 0x8077E598
    r30 = r30 + 0; // 0x8077E59C
    *(0xbc + r3) = r6; // stw @ 0x8077E5A0
    /* lfs f2, 0x30(r3) */ // 0x8077E5A4
    /* lfs f0, 0(r4) */ // 0x8077E5A8
    /* li r4, 0x20 */ // 0x8077E5AC
    /* stfs f0, 0xe4(r3) */ // 0x8077E5B0
    /* lfs f1, 0x34(r3) */ // 0x8077E5B4
    /* lfs f0, 4(r5) */ // 0x8077E5B8
    /* stfs f0, 0xe8(r3) */ // 0x8077E5BC
    /* lfs f0, 0x38(r3) */ // 0x8077E5C0
    /* lfs f3, 8(r5) */ // 0x8077E5C4
    /* stfs f3, 0xec(r3) */ // 0x8077E5C8
    /* stfs f2, 0x120(r3) */ // 0x8077E5CC
    /* stfs f1, 0x124(r3) */ // 0x8077E5D0
    /* stfs f0, 0x128(r3) */ // 0x8077E5D4
    *(2 + r30) = r4; // sth @ 0x8077E5D8
    *(4 + r30) = r0; // sth @ 0x8077E5DC
    *(0x12c + r3) = r6; // stw @ 0x8077E5E0
    *(0x130 + r3) = r6; // stb @ 0x8077E5E4
    r3 = *(0xd4 + r3); // lwz @ 0x8077E5E8
    FUN_805EEF04(); // bl 0x805EEF04
    r3 = *(0xd4 + r31); // lwz @ 0x8077E5F0
    /* li r4, 0 */ // 0x8077E5F4
    r12 = *(0 + r3); // lwz @ 0x8077E5F8
    r12 = *(0xc + r12); // lwz @ 0x8077E5FC
    /* mtctr r12 */ // 0x8077E600
    /* bctrl  */ // 0x8077E604
    r3 = *(0xd4 + r31); // lwz @ 0x8077E608
    /* li r4, 0 */ // 0x8077E60C
    r3 = *(0x28 + r3); // lwz @ 0x8077E610
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x8077E618
    r12 = *(8 + r12); // lwz @ 0x8077E61C
    /* mtctr r12 */ // 0x8077E620
    /* bctrl  */ // 0x8077E624
    /* fctiwz f0, f1 */ // 0x8077E628
    r3 = r31;
    /* li r4, 0 */ // 0x8077E630
    /* stfd f0, 8(r1) */ // 0x8077E634
    r0 = *(0xc + r1); // lwz @ 0x8077E638
    *(0 + r30) = r0; // sth @ 0x8077E63C
    r12 = *(0 + r31); // lwz @ 0x8077E640
    r12 = *(0x68 + r12); // lwz @ 0x8077E644
    /* mtctr r12 */ // 0x8077E648
    /* bctrl  */ // 0x8077E64C
    r3 = r31;
    /* li r4, 0 */ // 0x8077E654
    FUN_808A0A44(r3, r4); // bl 0x808A0A44
    r12 = *(0 + r31); // lwz @ 0x8077E65C
    /* lis r30, 0 */ // 0x8077E660
    /* lis r4, 0 */ // 0x8077E664
    r3 = r31;
    r12 = *(0x88 + r12); // lwz @ 0x8077E66C
    /* lfs f1, 0(r30) */ // 0x8077E670
    /* lfs f2, 0(r4) */ // 0x8077E674
    /* mtctr r12 */ // 0x8077E678
    /* bctrl  */ // 0x8077E67C
    r12 = *(0 + r31); // lwz @ 0x8077E680
    r3 = r31;
    r12 = *(0x24 + r12); // lwz @ 0x8077E688
    /* mtctr r12 */ // 0x8077E68C
    /* bctrl  */ // 0x8077E690
    /* lis r4, 0 */ // 0x8077E694
    /* lis r0, 0x4330 */ // 0x8077E698
    r5 = *(0 + r4); // lwz @ 0x8077E69C
    /* lis r4, 0 */ // 0x8077E6A0
    /* lfd f2, 0(r4) */ // 0x8077E6A4
    r3 = r3 rlwinm 1; // rlwinm
    r5 = *(4 + r5); // lwz @ 0x8077E6AC
    *(0x10 + r1) = r0; // stw @ 0x8077E6B0
    r4 = *(0xc + r5); // lwz @ 0x8077E6B4
    r5 = *(8 + r5); // lwz @ 0x8077E6B8
    /* lhax r0, r4, r3 */ // 0x8077E6BC
    /* lfs f0, 0(r30) */ // 0x8077E6C0
    /* mulli r0, r0, 0x74 */ // 0x8077E6C4
    r3 = r5 + r0; // 0x8077E6C8
    r0 = *(0x6c + r3); // lha @ 0x8077E6CC
    /* xoris r0, r0, 0x8000 */ // 0x8077E6D0
    *(0x14 + r1) = r0; // stw @ 0x8077E6D4
    /* lfd f1, 0x10(r1) */ // 0x8077E6D8
    /* fsubs f1, f1, f2 */ // 0x8077E6DC
    /* fdivs f0, f0, f1 */ // 0x8077E6E0
    /* stfs f0, 0x118(r31) */ // 0x8077E6E4
    r31 = *(0x1c + r1); // lwz @ 0x8077E6E8
    r30 = *(0x18 + r1); // lwz @ 0x8077E6EC
    r0 = *(0x24 + r1); // lwz @ 0x8077E6F0
    return;
}