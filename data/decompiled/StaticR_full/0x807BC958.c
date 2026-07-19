/* Function at 0x807BC958, size=472 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_807BC958(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x807BC960
    /* lfs f0, 0(r4) */ // 0x807BC968
    *(0x2c + r1) = r31; // stw @ 0x807BC96C
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x807BC974
    /* li r30, 0 */ // 0x807BC978
    *(0x24 + r1) = r29; // stw @ 0x807BC97C
    r5 = *(0x140 + r3); // lwz @ 0x807BC980
    *(0xc + r5) = r30; // sth @ 0x807BC984
    /* stfs f0, 0x10(r5) */ // 0x807BC988
    r3 = *(0x150 + r3); // lwz @ 0x807BC98C
    FUN_805AE488(); // bl 0x805AE488
    r0 = *(0x160 + r31); // lbz @ 0x807BC994
    if (==) goto 0x0x807bc9fc;
    r0 = *(0x161 + r31); // lbz @ 0x807BC9A0
    if (!=) goto 0x0x807bca00;
    r0 = *(0x162 + r31); // lbz @ 0x807BC9AC
    if (==) goto 0x0x807bc9cc;
    r3 = *(0x140 + r31); // lwz @ 0x807BC9B8
    r3 = *(0 + r3); // lwz @ 0x807BC9BC
    FUN_807B6158(); // bl 0x807B6158
    if (!=) goto 0x0x807bca00;
    r3 = *(0x140 + r31); // lwz @ 0x807BC9CC
    r3 = *(0 + r3); // lwz @ 0x807BC9D0
    FUN_8061DA88(); // bl 0x8061DA88
    r4 = r3;
    r3 = *(0x144 + r31); // lwz @ 0x807BC9DC
    r12 = *(0x34 + r3); // lwz @ 0x807BC9E0
    r12 = *(0x30 + r12); // lwz @ 0x807BC9E4
    /* mtctr r12 */ // 0x807BC9E8
    /* bctrl  */ // 0x807BC9EC
    /* li r0, 1 */ // 0x807BC9F0
    *(0x161 + r31) = r0; // stb @ 0x807BC9F4
    /* b 0x807bca00 */ // 0x807BC9F8
    *(0x161 + r31) = r30; // stb @ 0x807BC9FC
    /* li r0, 0 */ // 0x807BCA00
    *(0x160 + r31) = r0; // stb @ 0x807BCA04
    r3 = *(0x154 + r31); // lwz @ 0x807BCA08
    r12 = *(0 + r3); // lwz @ 0x807BCA0C
    r12 = *(0x10 + r12); // lwz @ 0x807BCA10
    /* mtctr r12 */ // 0x807BCA14
    /* bctrl  */ // 0x807BCA18
    r3 = *(0x148 + r31); // lwz @ 0x807BCA1C
    r12 = *(0 + r3); // lwz @ 0x807BCA20
    r12 = *(0x10 + r12); // lwz @ 0x807BCA24
    /* mtctr r12 */ // 0x807BCA28
    /* bctrl  */ // 0x807BCA2C
    r3 = *(0x144 + r31); // lwz @ 0x807BCA30
    r12 = *(0x34 + r3); // lwz @ 0x807BCA34
    r12 = *(0x1c + r12); // lwz @ 0x807BCA38
    /* mtctr r12 */ // 0x807BCA3C
    /* bctrl  */ // 0x807BCA40
    r3 = *(0x14c + r31); // lwz @ 0x807BCA44
    r12 = *(0x34 + r3); // lwz @ 0x807BCA48
    r12 = *(0x1c + r12); // lwz @ 0x807BCA4C
    /* mtctr r12 */ // 0x807BCA50
    /* bctrl  */ // 0x807BCA54
    r3 = *(0x158 + r31); // lwz @ 0x807BCA58
    r12 = *(0x34 + r3); // lwz @ 0x807BCA5C
    r12 = *(0x1c + r12); // lwz @ 0x807BCA60
    /* mtctr r12 */ // 0x807BCA64
    /* bctrl  */ // 0x807BCA68
    r0 = *(0x163 + r31); // lbz @ 0x807BCA6C
    if (==) goto 0x0x807bcac4;
    r3 = *(0x144 + r31); // lwz @ 0x807BCA78
    r12 = *(0x34 + r3); // lwz @ 0x807BCA7C
    r12 = *(0x38 + r12); // lwz @ 0x807BCA80
    /* mtctr r12 */ // 0x807BCA84
    /* bctrl  */ // 0x807BCA88
    r3 = *(0x144 + r31); // lwz @ 0x807BCA8C
    r12 = *(0x34 + r3); // lwz @ 0x807BCA90
    r12 = *(0x58 + r12); // lwz @ 0x807BCA94
    /* mtctr r12 */ // 0x807BCA98
    /* bctrl  */ // 0x807BCA9C
    if (==) goto 0x0x807bcab8;
    r3 = r31;
    r4 = r31 + 0x114; // 0x807BCAAC
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    /* b 0x807bcac4 */ // 0x807BCAB4
    r3 = r31;
    r4 = r31 + 0xe8; // 0x807BCABC
    FUN_807CF1B4(r4, r3, r4); // bl 0x807CF1B4
    r4 = *(0x140 + r31); // lwz @ 0x807BCAC4
    /* lis r3, 0 */ // 0x807BCAC8
    /* lfs f2, 0(r3) */ // 0x807BCACC
    r29 = *(0 + r4); // lwz @ 0x807BCAD0
    r3 = *(0x150 + r31); // lwz @ 0x807BCAD4
    /* fctiwz f1, f2 */ // 0x807BCAD8
    r0 = *(0xc + r4); // lhz @ 0x807BCADC
    *(4 + r3) = r0; // sth @ 0x807BCAE0
    /* lfs f0, 0x10(r4) */ // 0x807BCAE4
    /* stfd f1, 8(r1) */ // 0x807BCAE8
    /* fmuls f0, f2, f0 */ // 0x807BCAEC
    r3 = *(0x150 + r31); // lwz @ 0x807BCAF0
    r4 = *(0xc + r1); // lwz @ 0x807BCAF4
    /* fctiwz f0, f0 */ // 0x807BCAF8
    /* stfd f0, 0x10(r1) */ // 0x807BCAFC
    r0 = *(0x14 + r1); // lwz @ 0x807BCB00
    r4 = r4 + r0; // 0x807BCB04
    /* clrlwi r4, r4, 0x18 */ // 0x807BCB08
    FUN_805AE614(); // bl 0x805AE614
    r30 = *(0x150 + r31); // lwz @ 0x807BCB10
    r3 = r29;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807BCB1C
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x807BCB24
    r4 = r30;
    r3 = *(0xc + r3); // lwz @ 0x807BCB2C
}