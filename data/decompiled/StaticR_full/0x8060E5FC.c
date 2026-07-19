/* Function at 0x8060E5FC, size=360 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_8060E5FC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8060E60C
    r31 = r31 + 0; // 0x8060E610
    *(8 + r1) = r30; // stw @ 0x8060E614
    r30 = r3;
    r4 = *(0 + r3); // lwz @ 0x8060E61C
    r4 = *(4 + r4); // lwz @ 0x8060E620
    r0 = *(0xc + r4); // lwz @ 0x8060E624
    /* rlwinm. r0, r0, 0, 0x10, 0x10 */ // 0x8060E628
    if (==) goto 0x0x8060e72c;
    r4 = *(0x194 + r3); // lha @ 0x8060E630
    r0 = r4 + -1; // 0x8060E634
    *(0x194 + r3) = r0; // sth @ 0x8060E638
    /* extsh. r4, r0 */ // 0x8060E63C
    if (>) goto 0x0x8060e6d4;
    r4 = *(0 + r3); // lwz @ 0x8060E644
    r4 = *(4 + r4); // lwz @ 0x8060E648
    r0 = *(0xc + r4); // lwz @ 0x8060E64C
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r4) = r0; // stw @ 0x8060E654
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8060E65C
    /* clrlwi r0, r3, 0x18 */ // 0x8060E660
    r3 = *(0 + r4); // lwz @ 0x8060E664
    /* mulli r0, r0, 0x248 */ // 0x8060E668
    r3 = *(0x14 + r3); // lwz @ 0x8060E66C
    r3 = r3 + r0; // 0x8060E670
    FUN_808237A0(); // bl 0x808237A0
    r3 = r30;
    FUN_8061E010(r3); // bl 0x8061E010
    r12 = *(0 + r3); // lwz @ 0x8060E680
    /* li r4, 0x113 */ // 0x8060E684
    /* lfs f1, 0(r31) */ // 0x8060E688
    r12 = *(0xe0 + r12); // lwz @ 0x8060E68C
    /* mtctr r12 */ // 0x8060E690
    /* bctrl  */ // 0x8060E694
    /* li r0, 0 */ // 0x8060E698
    *(0x194 + r30) = r0; // sth @ 0x8060E69C
    r3 = r30;
    FUN_8061DFE0(r3); // bl 0x8061DFE0
    /* lfs f1, 4(r31) */ // 0x8060E6A8
    FUN_80625BB4(r3); // bl 0x80625BB4
    r0 = *(0x196 + r30); // lbz @ 0x8060E6B0
    if (!=) goto 0x0x8060e6fc;
    r3 = *(0x260 + r30); // lwz @ 0x8060E6BC
    /* li r4, 1 */ // 0x8060E6C0
    FUN_80642784(r4); // bl 0x80642784
    /* li r0, 1 */ // 0x8060E6C8
    *(0x196 + r30) = r0; // stb @ 0x8060E6CC
    /* b 0x8060e6fc */ // 0x8060E6D0
    r0 = *(0x196 + r3); // lbz @ 0x8060E6D4
    if (!=) goto 0x0x8060e6fc;
    if (>) goto 0x0x8060e6fc;
    /* li r0, 1 */ // 0x8060E6E8
    *(0x196 + r3) = r0; // stb @ 0x8060E6EC
    r3 = *(0x260 + r3); // lwz @ 0x8060E6F0
    /* li r4, 1 */ // 0x8060E6F4
    FUN_80642784(r4); // bl 0x80642784
    /* lfs f1, 0x17c(r30) */ // 0x8060E6FC
    r3 = r30;
    /* lfs f0, 0x3c(r31) */ // 0x8060E704
    /* fadds f0, f1, f0 */ // 0x8060E708
    /* stfs f0, 0x17c(r30) */ // 0x8060E70C
    FUN_8061E0F0(r3); // bl 0x8061E0F0
    /* lfs f1, 0x184(r3) */ // 0x8060E714
    /* lfs f0, 0x17c(r30) */ // 0x8060E718
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8060E71C
    if (>=) goto 0x0x8060e74c;
    /* stfs f1, 0x17c(r30) */ // 0x8060E724
    /* b 0x8060e74c */ // 0x8060E728
    /* lfs f2, 0x17c(r3) */ // 0x8060E72C
    /* lfs f1, 0x40(r31) */ // 0x8060E730
    /* lfs f0, 4(r31) */ // 0x8060E734
    /* fsubs f1, f2, f1 */ // 0x8060E738
    /* stfs f1, 0x17c(r3) */ // 0x8060E73C
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x8060E740
    if (<=) goto 0x0x8060e74c;
    /* stfs f0, 0x17c(r3) */ // 0x8060E748
    r0 = *(0x14 + r1); // lwz @ 0x8060E74C
    r31 = *(0xc + r1); // lwz @ 0x8060E750
    r30 = *(8 + r1); // lwz @ 0x8060E754
    return;
}