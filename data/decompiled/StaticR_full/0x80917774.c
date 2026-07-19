/* Function at 0x80917774, size=224 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80917774(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x8091777C
    *(0x1c + r1) = r31; // stw @ 0x80917784
    *(0x18 + r1) = r30; // stw @ 0x80917788
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x80917790
    r12 = *(0x68 + r12); // lwz @ 0x80917794
    /* mtctr r12 */ // 0x80917798
    /* bctrl  */ // 0x8091779C
    r3 = *(0x20 + r30); // lwz @ 0x809177A0
    /* lis r31, 0 */ // 0x809177A4
    /* lfs f1, 0(r31) */ // 0x809177A8
    /* li r4, 0 */ // 0x809177AC
    r12 = *(0 + r3); // lwz @ 0x809177B0
    r12 = *(0x10 + r12); // lwz @ 0x809177B4
    /* mtctr r12 */ // 0x809177B8
    /* bctrl  */ // 0x809177BC
    r4 = *(0x20 + r30); // lwz @ 0x809177C0
    /* li r0, 1 */ // 0x809177C4
    r3 = r30;
    *(0x17 + r4) = r0; // stb @ 0x809177CC
    r4 = *(0x20 + r30); // lwz @ 0x809177D0
    r0 = *(0x2c + r30); // lhz @ 0x809177D4
    /* lfs f0, 0x20(r4) */ // 0x809177D8
    /* lfs f1, 0x1c(r4) */ // 0x809177DC
    r0 = r0 | 1; // 0x809177E0
    /* lfs f2, 0x18(r4) */ // 0x809177E4
    /* stfs f2, 0x30(r30) */ // 0x809177E8
    *(0x2c + r30) = r0; // sth @ 0x809177EC
    /* stfs f1, 0x34(r30) */ // 0x809177F0
    /* stfs f0, 0x38(r30) */ // 0x809177F4
    FUN_808A1BCC(); // bl 0x808A1BCC
    r4 = r30 + 0x58; // 0x80917800
    /* li r5, 1 */ // 0x80917804
    FUN_805C70D8(r3, r4, r5); // bl 0x805C70D8
    r5 = *(0x20 + r30); // lwz @ 0x8091780C
    r3 = r30;
    r5 = r5 + 0x24; // 0x80917818
    FUN_808A1E9C(r3, r4, r5); // bl 0x808A1E9C
    r3 = *(8 + r30); // lwz @ 0x80917820
    /* lis r5, 0 */ // 0x80917824
    /* lfs f1, 0(r31) */ // 0x80917828
    /* li r4, 0 */ // 0x8091782C
    r3 = *(0x28 + r3); // lwz @ 0x80917830
    /* lfs f2, 0(r5) */ // 0x80917834
    FUN_805E70EC(r5, r4); // bl 0x805E70EC
    r0 = *(0x24 + r1); // lwz @ 0x8091783C
    r31 = *(0x1c + r1); // lwz @ 0x80917840
    r30 = *(0x18 + r1); // lwz @ 0x80917844
    return;
}