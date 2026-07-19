/* Function at 0x807F37E8, size=288 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807F37E8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x807F37F0
    /* li r0, 0 */ // 0x807F37F8
    *(0xc + r1) = r31; // stw @ 0x807F37FC
    *(8 + r1) = r30; // stw @ 0x807F3800
    r30 = r3;
    *(0xb0 + r3) = r0; // stw @ 0x807F3808
    r4 = *(0 + r4); // lwz @ 0x807F380C
    r0 = *(0x55 + r4); // lbz @ 0x807F3810
    if (==) goto 0x0x807f382c;
    /* lis r4, 0 */ // 0x807F381C
    r0 = *(0 + r4); // lwz @ 0x807F3820
    *(0xb4 + r3) = r0; // stw @ 0x807F3824
    /* b 0x807f3838 */ // 0x807F3828
    /* lis r4, 0 */ // 0x807F382C
    r0 = *(0 + r4); // lwz @ 0x807F3830
    *(0xb4 + r3) = r0; // stw @ 0x807F3834
    r4 = *(8 + r3); // lwz @ 0x807F3838
    /* lis r3, 0 */ // 0x807F383C
    /* lis r5, 0 */ // 0x807F3840
    /* lfs f1, 0(r3) */ // 0x807F3844
    r3 = *(0x28 + r4); // lwz @ 0x807F3848
    /* li r4, 1 */ // 0x807F384C
    /* lfs f2, 0(r5) */ // 0x807F3850
    /* li r5, 1 */ // 0x807F3854
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    r12 = *(0 + r30); // lwz @ 0x807F385C
    r3 = r30;
    /* li r31, 0 */ // 0x807F3864
    r12 = *(0x30 + r12); // lwz @ 0x807F3868
    /* mtctr r12 */ // 0x807F386C
    /* bctrl  */ // 0x807F3870
    /* lis r4, 0x101 */ // 0x807F3874
    r0 = *(0x20 + r3); // lwz @ 0x807F3878
    r3 = r4 + 0x101; // 0x807F387C
    /* andc. r0, r3, r0 */ // 0x807F3880
    if (!=) goto 0x0x807f38a0;
    /* lis r3, 0 */ // 0x807F3888
    r3 = *(0 + r3); // lwz @ 0x807F388C
    FUN_8070D8D8(r3, r3); // bl 0x8070D8D8
    if (==) goto 0x0x807f38a0;
    /* li r31, 1 */ // 0x807F389C
    if (!=) goto 0x0x807f38f0;
    r3 = *(0xb8 + r30); // lwz @ 0x807F38A8
    r12 = *(0 + r3); // lwz @ 0x807F38AC
    r12 = *(0xc + r12); // lwz @ 0x807F38B0
    /* mtctr r12 */ // 0x807F38B4
    /* bctrl  */ // 0x807F38B8
    r3 = r30;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r3 = *(0xb8 + r30); // lwz @ 0x807F38C4
    r4 = r30 + 0x58; // 0x807F38C8
    r12 = *(0 + r3); // lwz @ 0x807F38CC
    r12 = *(0x78 + r12); // lwz @ 0x807F38D0
    /* mtctr r12 */ // 0x807F38D4
    /* bctrl  */ // 0x807F38D8
    r3 = *(0xb8 + r30); // lwz @ 0x807F38DC
    r12 = *(0 + r3); // lwz @ 0x807F38E0
    r12 = *(0x80 + r12); // lwz @ 0x807F38E4
    /* mtctr r12 */ // 0x807F38E8
    /* bctrl  */ // 0x807F38EC
    r0 = *(0x14 + r1); // lwz @ 0x807F38F0
    r31 = *(0xc + r1); // lwz @ 0x807F38F4
    r30 = *(8 + r1); // lwz @ 0x807F38F8
    return;
}