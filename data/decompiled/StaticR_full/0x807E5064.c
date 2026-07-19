/* Function at 0x807E5064, size=252 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807E5064(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x807E506C
    *(0x2c + r1) = r31; // stw @ 0x807E5074
    /* lis r31, 0 */ // 0x807E5078
    /* lfs f1, 0(r31) */ // 0x807E507C
    *(0x28 + r1) = r30; // stw @ 0x807E5080
    r30 = r3;
    r3 = *(0x20 + r3); // lwz @ 0x807E5088
    r12 = *(0 + r3); // lwz @ 0x807E508C
    r12 = *(0x10 + r12); // lwz @ 0x807E5090
    /* mtctr r12 */ // 0x807E5094
    /* bctrl  */ // 0x807E5098
    r6 = *(0x20 + r30); // lwz @ 0x807E509C
    /* lis r3, 0 */ // 0x807E50A0
    r5 = *(8 + r30); // lwz @ 0x807E50A4
    /* li r4, 0 */ // 0x807E50A8
    /* lfs f0, 0x24(r6) */ // 0x807E50AC
    /* stfs f0, 0xb4(r30) */ // 0x807E50B0
    /* lfs f1, 0(r31) */ // 0x807E50B4
    /* lfs f0, 0x28(r6) */ // 0x807E50B8
    /* stfs f0, 0xb8(r30) */ // 0x807E50BC
    /* lfs f2, 0(r3) */ // 0x807E50C0
    /* lfs f0, 0x2c(r6) */ // 0x807E50C4
    /* stfs f0, 0xbc(r30) */ // 0x807E50C8
    r3 = *(0x28 + r5); // lwz @ 0x807E50CC
    FUN_805E70EC(); // bl 0x805E70EC
    /* li r31, 1 */ // 0x807E50D4
    /* lis r0, 0x4330 */ // 0x807E50D8
    /* xoris r5, r31, 0x8000 */ // 0x807E50DC
    *(0xc + r1) = r5; // stw @ 0x807E50E0
    /* lis r3, 0 */ // 0x807E50E4
    r6 = *(0x20 + r30); // lwz @ 0x807E50E8
    *(8 + r1) = r0; // stw @ 0x807E50EC
    /* li r4, 0 */ // 0x807E50F0
    /* lfd f3, 0(r3) */ // 0x807E50F4
    r3 = r30;
    /* lfd f0, 8(r1) */ // 0x807E50FC
    *(0x14 + r1) = r5; // stw @ 0x807E5100
    /* fsubs f2, f0, f3 */ // 0x807E5104
    *(0x17 + r6) = r31; // stb @ 0x807E5108
    *(0x10 + r1) = r0; // stw @ 0x807E510C
    r6 = *(0x2c + r30); // lhz @ 0x807E5110
    /* lfd f0, 0x10(r1) */ // 0x807E5114
    r6 = r6 | 8; // 0x807E5118
    *(0x1c + r1) = r5; // stw @ 0x807E511C
    /* fsubs f1, f0, f3 */ // 0x807E5120
    *(0x18 + r1) = r0; // stw @ 0x807E5124
    /* lfd f0, 0x18(r1) */ // 0x807E5128
    *(0x2c + r30) = r6; // sth @ 0x807E512C
    /* fsubs f0, f0, f3 */ // 0x807E5130
    /* stfs f2, 0x3c(r30) */ // 0x807E5134
    /* stfs f1, 0x40(r30) */ // 0x807E5138
    /* stfs f0, 0x44(r30) */ // 0x807E513C
    FUN_808A0A44(); // bl 0x808A0A44
    *(0xd5 + r30) = r31; // stb @ 0x807E5144
    r31 = *(0x2c + r1); // lwz @ 0x807E5148
    r30 = *(0x28 + r1); // lwz @ 0x807E514C
    r0 = *(0x34 + r1); // lwz @ 0x807E5150
    return;
}