/* Function at 0x8090C5D8, size=376 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8090C5D8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x8090C5E0
    *(0x34 + r1) = r0; // stw @ 0x8090C5E4
    *(0x2c + r1) = r31; // stw @ 0x8090C5E8
    r31 = r3;
    r5 = *(0x30 + r3); // lwz @ 0x8090C5F0
    r0 = *(0x34 + r3); // lwz @ 0x8090C5F4
    *(0x18 + r1) = r0; // stw @ 0x8090C5F8
    *(0x14 + r1) = r5; // stw @ 0x8090C5FC
    r0 = *(0x38 + r3); // lwz @ 0x8090C600
    *(0x1c + r1) = r0; // stw @ 0x8090C604
    r12 = *(0 + r3); // lwz @ 0x8090C608
    r12 = *(0x12c + r12); // lwz @ 0x8090C60C
    /* mtctr r12 */ // 0x8090C610
    /* bctrl  */ // 0x8090C614
    r5 = *(0x2c + r31); // lhz @ 0x8090C618
    /* li r0, 0 */ // 0x8090C61C
    *(0x54 + r31) = r0; // stb @ 0x8090C620
    r4 = r31 + 0x30; // 0x8090C624
    r0 = r5 | 4; // 0x8090C628
    *(0x2c + r31) = r0; // sth @ 0x8090C630
    /* lfs f0, 0(r3) */ // 0x8090C634
    /* stfs f0, 0x58(r31) */ // 0x8090C638
    /* lfs f0, 4(r3) */ // 0x8090C63C
    /* stfs f0, 0x5c(r31) */ // 0x8090C640
    /* lfs f0, 8(r3) */ // 0x8090C644
    /* stfs f0, 0x60(r31) */ // 0x8090C648
    /* lfs f0, 0xc(r3) */ // 0x8090C64C
    /* stfs f0, 0x64(r31) */ // 0x8090C650
    /* lfs f0, 0x10(r3) */ // 0x8090C654
    /* stfs f0, 0x68(r31) */ // 0x8090C658
    /* lfs f0, 0x14(r3) */ // 0x8090C65C
    /* stfs f0, 0x6c(r31) */ // 0x8090C660
    /* lfs f0, 0x18(r3) */ // 0x8090C664
    /* stfs f0, 0x70(r31) */ // 0x8090C668
    /* lfs f0, 0x1c(r3) */ // 0x8090C66C
    /* stfs f0, 0x74(r31) */ // 0x8090C670
    /* lfs f0, 0x20(r3) */ // 0x8090C674
    /* stfs f0, 0x78(r31) */ // 0x8090C678
    /* lfs f0, 0x24(r3) */ // 0x8090C67C
    /* stfs f0, 0x7c(r31) */ // 0x8090C680
    /* lfs f0, 0x28(r3) */ // 0x8090C684
    /* stfs f0, 0x80(r31) */ // 0x8090C688
    /* lfs f0, 0x2c(r3) */ // 0x8090C68C
    /* stfs f0, 0x84(r31) */ // 0x8090C690
    /* lfs f0, 0xc(r3) */ // 0x8090C694
    /* stfs f0, 0x30(r31) */ // 0x8090C698
    /* lfs f0, 0x1c(r3) */ // 0x8090C69C
    /* stfs f0, 0x34(r31) */ // 0x8090C6A0
    /* lfs f0, 0x2c(r3) */ // 0x8090C6A4
    /* stfs f0, 0x38(r31) */ // 0x8090C6AC
    FUN_805A4498(r3); // bl 0x805A4498
    r12 = *(0 + r31); // lwz @ 0x8090C6B4
    r3 = r31;
    r12 = *(0x128 + r12); // lwz @ 0x8090C6C0
    /* mtctr r12 */ // 0x8090C6C4
    /* bctrl  */ // 0x8090C6C8
    /* lis r3, 0 */ // 0x8090C6CC
    r5 = *(0x114 + r31); // lwz @ 0x8090C6D0
    r3 = *(0 + r3); // lwz @ 0x8090C6D4
    r6 = *(0x124 + r31); // lwz @ 0x8090C6D8
    r3 = *(0x20 + r3); // lwz @ 0x8090C6DC
    r0 = *(0x118 + r31); // lwz @ 0x8090C6E0
    /* subfc r4, r5, r3 */ // 0x8090C6E4
    /* subf r3, r5, r3 */ // 0x8090C6E8
    /* subfe r4, r4, r4 */ // 0x8090C6EC
    /* andc r4, r3, r4 */ // 0x8090C6F0
    r3 = r4 u/ r6; // 0x8090C6F4
    r3 = r3 * r6; // 0x8090C6F8
    /* subf r3, r3, r4 */ // 0x8090C6FC
    if (>=) goto 0x0x8090c714;
    r0 = *(0x11c + r31); // lwz @ 0x8090C708
    if (<) goto 0x0x8090c728;
    r0 = *(0x120 + r31); // lwz @ 0x8090C714
    if (>=) goto 0x0x8090c73c;
    if (>=) goto 0x0x8090c73c;
    /* lis r4, 0 */ // 0x8090C728
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x8090C730
    /* li r4, 0x36c */ // 0x8090C734
    FUN_808A0AA8(r4, r3, r4); // bl 0x808A0AA8
    r0 = *(0x34 + r1); // lwz @ 0x8090C73C
    r31 = *(0x2c + r1); // lwz @ 0x8090C740
    return;
}