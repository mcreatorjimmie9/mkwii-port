/* Function at 0x8080C48C, size=836 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 11 function(s) */

int FUN_8080C48C(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x38 + r1) = r30; // stw @ 0x8080C4A0
    r0 = *(0xb0 + r3); // lwz @ 0x8080C4A4
    if (==) goto 0x0x8080c4cc;
    if (==) goto 0x0x8080c5c4;
    if (==) goto 0x0x8080c64c;
    if (==) goto 0x0x8080c6f8;
    /* b 0x8080c750 */ // 0x8080C4C8
    /* lis r4, 0 */ // 0x8080C4CC
    r5 = *(0x108 + r3); // lwz @ 0x8080C4D0
    /* lfs f2, 0(r4) */ // 0x8080C4D4
    /* lfs f0, 0x110(r3) */ // 0x8080C4D8
    r0 = *(0x2c + r3); // lhz @ 0x8080C4DC
    /* fdivs f1, f2, f0 */ // 0x8080C4E0
    /* lfs f0, 0xc0(r3) */ // 0x8080C4E4
    /* lfs f5, 8(r5) */ // 0x8080C4E8
    r0 = r0 | 1; // 0x8080C4EC
    /* lfs f4, 4(r5) */ // 0x8080C4F0
    /* lfs f3, 0(r5) */ // 0x8080C4F4
    /* fadds f0, f0, f1 */ // 0x8080C4F8
    *(0x2c + r3) = r0; // sth @ 0x8080C4FC
    /* stfs f3, 0x30(r3) */ // 0x8080C500
    /* .byte 0xfc, 0x00, 0x10, 0x40 */ // 0x8080C504
    /* stfs f4, 0x34(r3) */ // 0x8080C508
    /* stfs f5, 0x38(r3) */ // 0x8080C50C
    /* stfs f0, 0xc0(r3) */ // 0x8080C510
    if (<=) goto 0x0x8080c524;
    /* li r0, 1 */ // 0x8080C518
    /* stfs f2, 0xc0(r3) */ // 0x8080C51C
    *(0x10c + r3) = r0; // stb @ 0x8080C520
    r3 = *(8 + r3); // lwz @ 0x8080C524
    /* lfs f1, 0xc0(r31) */ // 0x8080C528
    r12 = *(0 + r3); // lwz @ 0x8080C52C
    r12 = *(0x18 + r12); // lwz @ 0x8080C530
    /* mtctr r12 */ // 0x8080C534
    /* bctrl  */ // 0x8080C538
    r5 = *(0x104 + r31); // lwz @ 0x8080C53C
    /* lis r30, 0 */ // 0x8080C540
    /* lfs f0, 0(r30) */ // 0x8080C544
    r4 = *(0 + r5); // lwz @ 0x8080C54C
    r0 = *(4 + r5); // lwz @ 0x8080C550
    *(0x30 + r1) = r0; // stw @ 0x8080C554
    *(0x2c + r1) = r4; // stw @ 0x8080C558
    r0 = *(8 + r5); // lwz @ 0x8080C55C
    *(0x34 + r1) = r0; // stw @ 0x8080C560
    /* stfs f0, 0x30(r1) */ // 0x8080C564
    FUN_805E3430(); // bl 0x805E3430
    /* lfs f0, 0(r30) */ // 0x8080C56C
    /* fcmpu cr0, f0, f1 */ // 0x8080C570
    if (!=) goto 0x0x8080c598;
    /* lis r4, 0 */ // 0x8080C578
    r3 = r4 + 0; // 0x8080C57C
    /* lfs f2, 0(r4) */ // 0x8080C580
    /* lfs f1, 4(r3) */ // 0x8080C584
    /* lfs f0, 8(r3) */ // 0x8080C588
    /* stfs f2, 0x2c(r1) */ // 0x8080C58C
    /* stfs f1, 0x30(r1) */ // 0x8080C590
    /* stfs f0, 0x34(r1) */ // 0x8080C594
    /* lis r4, 0 */ // 0x8080C598
    r3 = r31;
    r4 = r4 + 0; // 0x8080C5A0
    FUN_808A1E9C(r4, r3, r4, r5); // bl 0x808A1E9C
    /* lis r4, 0 */ // 0x8080C5AC
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x8080C5B4
    /* li r4, 0x31f */ // 0x8080C5B8
    FUN_808A0AA8(r4, r3, r4); // bl 0x808A0AA8
    /* b 0x8080c750 */ // 0x8080C5C0
    r5 = *(0x104 + r3); // lwz @ 0x8080C5C4
    /* lis r30, 0 */ // 0x8080C5C8
    /* lfs f0, 0(r30) */ // 0x8080C5CC
    r4 = *(0 + r5); // lwz @ 0x8080C5D4
    r0 = *(4 + r5); // lwz @ 0x8080C5D8
    *(0x24 + r1) = r0; // stw @ 0x8080C5DC
    *(0x20 + r1) = r4; // stw @ 0x8080C5E0
    r0 = *(8 + r5); // lwz @ 0x8080C5E4
    *(0x28 + r1) = r0; // stw @ 0x8080C5E8
    /* stfs f0, 0x24(r1) */ // 0x8080C5EC
    FUN_805E3430(); // bl 0x805E3430
    /* lfs f0, 0(r30) */ // 0x8080C5F4
    /* fcmpu cr0, f0, f1 */ // 0x8080C5F8
    if (!=) goto 0x0x8080c620;
    /* lis r4, 0 */ // 0x8080C600
    r3 = r4 + 0; // 0x8080C604
    /* lfs f2, 0(r4) */ // 0x8080C608
    /* lfs f1, 4(r3) */ // 0x8080C60C
    /* lfs f0, 8(r3) */ // 0x8080C610
    /* stfs f2, 0x20(r1) */ // 0x8080C614
    /* stfs f1, 0x24(r1) */ // 0x8080C618
    /* stfs f0, 0x28(r1) */ // 0x8080C61C
    /* lis r4, 0 */ // 0x8080C620
    r3 = r31;
    r4 = r4 + 0; // 0x8080C628
    FUN_808A1E9C(r4, r3, r4, r5); // bl 0x808A1E9C
    /* lis r4, 0 */ // 0x8080C634
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x8080C63C
    /* li r4, 0x31f */ // 0x8080C640
    FUN_808A0AA8(r4, r3, r4); // bl 0x808A0AA8
    /* b 0x8080c750 */ // 0x8080C648
    /* lis r4, 0 */ // 0x8080C64C
    /* lfs f1, 0xb8(r3) */ // 0x8080C650
    /* lfs f0, 0(r4) */ // 0x8080C654
    r4 = r31 + 0x30; // 0x8080C658
    r5 = r31 + 0xb4; // 0x8080C65C
    /* fsubs f0, f1, f0 */ // 0x8080C660
    /* stfs f0, 0xb8(r3) */ // 0x8080C664
    FUN_805A4464(r4, r5, r3); // bl 0x805A4464
    r0 = *(0x2c + r31); // lhz @ 0x8080C670
    r3 = r31;
    /* lfs f0, 0x1c(r1) */ // 0x8080C678
    /* lfs f1, 0x18(r1) */ // 0x8080C67C
    r0 = r0 | 1; // 0x8080C680
    /* lfs f2, 0x14(r1) */ // 0x8080C684
    /* stfs f2, 0x30(r31) */ // 0x8080C688
    *(0x2c + r31) = r0; // sth @ 0x8080C68C
    /* stfs f1, 0x34(r31) */ // 0x8080C690
    /* stfs f0, 0x38(r31) */ // 0x8080C694
    FUN_8080CCAC(); // bl 0x8080CCAC
    r0 = *(0xc8 + r31); // lwz @ 0x8080C69C
    /* addic. r0, r0, -1 */ // 0x8080C6A0
    *(0xc8 + r31) = r0; // stw @ 0x8080C6A4
    if (!=) goto 0x0x8080c6e0;
    /* li r0, 3 */ // 0x8080C6AC
    *(0xb0 + r31) = r0; // stw @ 0x8080C6B0
    r3 = r31;
    r12 = *(0 + r31); // lwz @ 0x8080C6B8
    r12 = *(0x90 + r12); // lwz @ 0x8080C6BC
    /* mtctr r12 */ // 0x8080C6C0
    /* bctrl  */ // 0x8080C6C4
    r12 = *(0 + r31); // lwz @ 0x8080C6C8
    r3 = r31;
    /* li r4, 0 */ // 0x8080C6D0
    r12 = *(0x68 + r12); // lwz @ 0x8080C6D4
    /* mtctr r12 */ // 0x8080C6D8
    /* bctrl  */ // 0x8080C6DC
    /* lis r4, 0 */ // 0x8080C6E0
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x8080C6E8
    /* li r4, 0x321 */ // 0x8080C6EC
    FUN_808A0AA8(r4, r3, r4); // bl 0x808A0AA8
    /* b 0x8080c750 */ // 0x8080C6F4
    /* lis r4, 0 */ // 0x8080C6F8
    /* lfs f1, 0xb8(r3) */ // 0x8080C6FC
    /* lfs f0, 0(r4) */ // 0x8080C700
    r4 = r31 + 0x30; // 0x8080C704
    r5 = r31 + 0xb4; // 0x8080C708
    /* fsubs f0, f1, f0 */ // 0x8080C70C
    /* stfs f0, 0xb8(r3) */ // 0x8080C710
    FUN_805A4464(r4, r5, r3); // bl 0x805A4464
    r0 = *(0x2c + r31); // lhz @ 0x8080C71C
    r3 = r31;
    /* lfs f0, 0x10(r1) */ // 0x8080C724
    /* lfs f1, 0xc(r1) */ // 0x8080C728
    r0 = r0 | 1; // 0x8080C72C
    /* lfs f2, 8(r1) */ // 0x8080C730
    /* stfs f2, 0x30(r31) */ // 0x8080C734
    *(0x2c + r31) = r0; // sth @ 0x8080C738
    /* stfs f1, 0x34(r31) */ // 0x8080C73C
    /* stfs f0, 0x38(r31) */ // 0x8080C740
    FUN_8080CCAC(); // bl 0x8080CCAC
    /* li r0, 4 */ // 0x8080C748
    *(0xb0 + r31) = r0; // stw @ 0x8080C74C
    r0 = *(0xb0 + r31); // lwz @ 0x8080C750
    if (==) goto 0x0x8080c770;
    if (==) goto 0x0x8080c770;
    r0 = *(0x121 + r31); // lbz @ 0x8080C764
    if (==) goto 0x0x8080c788;
    r3 = *(0x114 + r31); // lwz @ 0x8080C770
    r12 = *(0 + r3); // lwz @ 0x8080C774
    r12 = *(0x14 + r12); // lwz @ 0x8080C778
    /* mtctr r12 */ // 0x8080C77C
    /* bctrl  */ // 0x8080C780
    /* b 0x8080c7c8 */ // 0x8080C784
    r3 = *(0x114 + r31); // lwz @ 0x8080C788
    r12 = *(0 + r3); // lwz @ 0x8080C78C
    r12 = *(0xc + r12); // lwz @ 0x8080C790
    /* mtctr r12 */ // 0x8080C794
    /* bctrl  */ // 0x8080C798
    r3 = *(0x114 + r31); // lwz @ 0x8080C79C
    r4 = r31 + 0x30; // 0x8080C7A0
    r12 = *(0 + r3); // lwz @ 0x8080C7A4
    r12 = *(0x74 + r12); // lwz @ 0x8080C7A8
    /* mtctr r12 */ // 0x8080C7AC
    /* bctrl  */ // 0x8080C7B0
    r3 = *(0x114 + r31); // lwz @ 0x8080C7B4
    r12 = *(0 + r3); // lwz @ 0x8080C7B8
    r12 = *(0x80 + r12); // lwz @ 0x8080C7BC
    /* mtctr r12 */ // 0x8080C7C0
    /* bctrl  */ // 0x8080C7C4
    r0 = *(0xb0 + r31); // lwz @ 0x8080C7C8
}