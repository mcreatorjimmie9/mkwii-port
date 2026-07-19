/* Function at 0x8080599C, size=264 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8080599C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x808059A4
    *(0x24 + r1) = r0; // stw @ 0x808059A8
    *(0x1c + r1) = r31; // stw @ 0x808059AC
    r31 = r3;
    r5 = *(0x130 + r3); // lwz @ 0x808059B4
    r5 = r5 + 1; // 0x808059B8
    *(0x130 + r3) = r5; // stw @ 0x808059BC
    r0 = *(0 + r4); // lwz @ 0x808059C0
    if (<=) goto 0x0x80805a90;
    r4 = *(0x13c + r3); // lwz @ 0x808059CC
    /* li r7, 2 */ // 0x808059D0
    r0 = *(0x2c + r3); // lhz @ 0x808059D4
    /* lis r6, 0 */ // 0x808059D8
    r9 = r4 + 1; // 0x808059DC
    /* lfs f4, 0x12c(r3) */ // 0x808059E0
    r8 = r9 + 2; // 0x808059E4
    /* lfs f3, 0x128(r3) */ // 0x808059E8
    /* lfs f0, 0x124(r3) */ // 0x808059EC
    r0 = r0 | 1; // 0x808059F0
    *(0xe0 + r3) = r7; // stw @ 0x808059F4
    /* lis r5, 0 */ // 0x808059F8
    r7 = *(8 + r3); // lwz @ 0x808059FC
    /* li r4, 3 */ // 0x80805A00
    *(0x13c + r3) = r9; // stw @ 0x80805A04
    /* lfs f1, 0(r6) */ // 0x80805A08
    *(0x140 + r3) = r8; // stw @ 0x80805A0C
    /* lfs f2, 0(r5) */ // 0x80805A10
    *(0xe4 + r3) = r8; // stw @ 0x80805A14
    *(0x2c + r3) = r0; // sth @ 0x80805A18
    /* stfs f0, 0x30(r3) */ // 0x80805A1C
    /* stfs f3, 0x34(r3) */ // 0x80805A20
    /* stfs f4, 0x38(r3) */ // 0x80805A24
    r3 = *(0x28 + r7); // lwz @ 0x80805A28
    FUN_805E70EC(); // bl 0x805E70EC
    r12 = *(0 + r31); // lwz @ 0x80805A30
    r3 = r31;
    r12 = *(0x94 + r12); // lwz @ 0x80805A38
    /* mtctr r12 */ // 0x80805A3C
    /* bctrl  */ // 0x80805A40
    /* li r0, 0 */ // 0x80805A44
    *(0x134 + r31) = r0; // stw @ 0x80805A48
    r3 = *(0xb0 + r31); // lwz @ 0x80805A4C
    r12 = *(0 + r3); // lwz @ 0x80805A50
    r12 = *(0xc + r12); // lwz @ 0x80805A54
    /* mtctr r12 */ // 0x80805A58
    /* bctrl  */ // 0x80805A5C
    r4 = *(0xe4 + r31); // lwz @ 0x80805A60
    /* lis r0, 0x4330 */ // 0x80805A64
    *(8 + r1) = r0; // stw @ 0x80805A68
    /* lis r3, 0 */ // 0x80805A6C
    /* xoris r0, r4, 0x8000 */ // 0x80805A70
    /* lfd f1, 0(r3) */ // 0x80805A74
    *(0xc + r1) = r0; // stw @ 0x80805A78
    r3 = r31;
    /* li r4, 0x24e */ // 0x80805A80
    /* lfd f0, 8(r1) */ // 0x80805A84
    /* fsubs f1, f0, f1 */ // 0x80805A88
    FUN_808A0A88(r3, r4); // bl 0x808A0A88
    r0 = *(0x24 + r1); // lwz @ 0x80805A90
    r31 = *(0x1c + r1); // lwz @ 0x80805A94
    return;
}