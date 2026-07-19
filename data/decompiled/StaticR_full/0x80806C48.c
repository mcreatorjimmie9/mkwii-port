/* Function at 0x80806C48, size=236 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80806C48(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x80806C50
    /* lis r5, 0 */ // 0x80806C54
    *(0x24 + r1) = r0; // stw @ 0x80806C58
    /* li r7, 2 */ // 0x80806C5C
    /* lfs f1, 0(r6) */ // 0x80806C60
    *(0x1c + r1) = r31; // stw @ 0x80806C64
    r31 = r3;
    /* lfs f2, 0(r5) */ // 0x80806C6C
    r4 = *(0x13c + r3); // lwz @ 0x80806C70
    r0 = *(0x2c + r3); // lhz @ 0x80806C74
    r4 = r4 + 1; // 0x80806C78
    /* lfs f0, 0x12c(r3) */ // 0x80806C7C
    r8 = r4 + 2; // 0x80806C80
    /* lfs f3, 0x128(r3) */ // 0x80806C84
    /* lfs f4, 0x124(r3) */ // 0x80806C88
    r0 = r0 | 1; // 0x80806C8C
    *(0xe0 + r3) = r7; // stw @ 0x80806C90
    r7 = *(8 + r3); // lwz @ 0x80806C94
    *(0x13c + r3) = r4; // stw @ 0x80806C98
    /* li r4, 3 */ // 0x80806C9C
    *(0x140 + r3) = r8; // stw @ 0x80806CA0
    *(0xe4 + r3) = r8; // stw @ 0x80806CA4
    *(0x2c + r3) = r0; // sth @ 0x80806CA8
    /* stfs f4, 0x30(r3) */ // 0x80806CAC
    /* stfs f3, 0x34(r3) */ // 0x80806CB0
    /* stfs f0, 0x38(r3) */ // 0x80806CB4
    r3 = *(0x28 + r7); // lwz @ 0x80806CB8
    FUN_805E70EC(); // bl 0x805E70EC
    r12 = *(0 + r31); // lwz @ 0x80806CC0
    r3 = r31;
    r12 = *(0x94 + r12); // lwz @ 0x80806CC8
    /* mtctr r12 */ // 0x80806CCC
    /* bctrl  */ // 0x80806CD0
    /* li r0, 0 */ // 0x80806CD4
    *(0x134 + r31) = r0; // stw @ 0x80806CD8
    r3 = *(0xb0 + r31); // lwz @ 0x80806CDC
    r12 = *(0 + r3); // lwz @ 0x80806CE0
    r12 = *(0xc + r12); // lwz @ 0x80806CE4
    /* mtctr r12 */ // 0x80806CE8
    /* bctrl  */ // 0x80806CEC
    r4 = *(0xe4 + r31); // lwz @ 0x80806CF0
    /* lis r0, 0x4330 */ // 0x80806CF4
    *(8 + r1) = r0; // stw @ 0x80806CF8
    /* lis r3, 0 */ // 0x80806CFC
    /* xoris r0, r4, 0x8000 */ // 0x80806D00
    /* lfd f1, 0(r3) */ // 0x80806D04
    *(0xc + r1) = r0; // stw @ 0x80806D08
    r3 = r31;
    /* li r4, 0x24e */ // 0x80806D10
    /* lfd f0, 8(r1) */ // 0x80806D14
    /* fsubs f1, f0, f1 */ // 0x80806D18
    FUN_808A0A88(r3, r4); // bl 0x808A0A88
    r0 = *(0x24 + r1); // lwz @ 0x80806D20
    r31 = *(0x1c + r1); // lwz @ 0x80806D24
    return;
}