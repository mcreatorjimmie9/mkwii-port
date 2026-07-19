/* Function at 0x8060D554, size=820 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 12 function(s) */

int FUN_8060D554(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0x80c */ // 0x8060D55C
    r0 = r5 + 0x100; // 0x8060D564
    /* li r5, 1 */ // 0x8060D568
    *(0x3c + r1) = r31; // stw @ 0x8060D56C
    /* lis r31, 0 */ // 0x8060D570
    r31 = r31 + 0; // 0x8060D574
    *(0x38 + r1) = r30; // stw @ 0x8060D578
    *(0x34 + r1) = r29; // stw @ 0x8060D57C
    r29 = r4;
    /* li r4, 1 */ // 0x8060D584
    *(0x30 + r1) = r28; // stw @ 0x8060D588
    r28 = r3;
    r6 = *(0 + r3); // lwz @ 0x8060D590
    r7 = *(4 + r6); // lwz @ 0x8060D594
    /* li r6, 1 */ // 0x8060D598
    r3 = *(0xc + r7); // lwz @ 0x8060D59C
    /* and. r0, r3, r0 */ // 0x8060D5A0
    if (!=) goto 0x0x8060d5b8;
    r0 = *(4 + r7); // lwz @ 0x8060D5A8
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x8060D5AC
    if (!=) goto 0x0x8060d5b8;
    /* li r6, 0 */ // 0x8060D5B4
    if (!=) goto 0x0x8060d5d0;
    r0 = *(0x14 + r7); // lwz @ 0x8060D5C0
    /* rlwinm. r0, r0, 0, 0x18, 0x18 */ // 0x8060D5C4
    if (!=) goto 0x0x8060d5d0;
    /* li r5, 0 */ // 0x8060D5CC
    if (!=) goto 0x0x8060d5e8;
    r0 = *(8 + r7); // lwz @ 0x8060D5D8
    /* clrlwi. r0, r0, 0x1f */ // 0x8060D5DC
    if (!=) goto 0x0x8060d5e8;
    /* li r4, 0 */ // 0x8060D5E4
    if (!=) goto 0x0x8060d8d8;
    r0 = *(8 + r7); // lwz @ 0x8060D5F0
    /* rlwinm. r0, r0, 0, 0x16, 0x16 */ // 0x8060D5F4
    if (!=) goto 0x0x8060d8d8;
    r3 = r28;
    FUN_8061DC48(r3); // bl 0x8061DC48
    r5 = *(0 + r28); // lwz @ 0x8060D604
    /* mulli r4, r29, 0xc */ // 0x8060D608
    r8 = *(0x74 + r3); // lwz @ 0x8060D60C
    r0 = r31 + 0x2e0; // 0x8060D610
    r5 = *(4 + r5); // lwz @ 0x8060D614
    /* li r30, 0 */ // 0x8060D618
    r7 = *(0x78 + r3); // lwz @ 0x8060D61C
    r6 = *(0x7c + r3); // lwz @ 0x8060D620
    r0 = r0 + r4; // 0x8060D624
    r3 = *(4 + r5); // lwz @ 0x8060D628
    *(0x20 + r1) = r8; // stw @ 0x8060D62C
    r3 = r3 | 0x4000; // 0x8060D630
    *(4 + r5) = r3; // stw @ 0x8060D634
    *(0x1c0 + r28) = r0; // stw @ 0x8060D638
    r4 = *(0x360 + r31); // lwz @ 0x8060D63C
    *(0x24 + r1) = r7; // stw @ 0x8060D640
    *(0x28 + r1) = r6; // stw @ 0x8060D648
    if (<) goto 0x0x8060d6bc;
    r0 = *(0x364 + r31); // lwz @ 0x8060D650
    if (>) goto 0x0x8060d6bc;
    /* lfs f1, 0x1b8(r28) */ // 0x8060D65C
    /* lfs f0, 0x340(r31) */ // 0x8060D660
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8060D664
    if (>) goto 0x0x8060d684;
    /* lfs f2, 0x10(r28) */ // 0x8060D66C
    /* lfs f0, 0x344(r31) */ // 0x8060D670
    /* lfs f1, 0x1bc(r28) */ // 0x8060D674
    /* fmuls f0, f0, f2 */ // 0x8060D678
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8060D67C
    if (<=) goto 0x0x8060d6a4;
    /* subf r3, r29, r4 */ // 0x8060D684
    /* subf r0, r4, r29 */ // 0x8060D688
    r3 = r3 | r0; // 0x8060D68C
    /* srwi r3, r3, 0x1f */ // 0x8060D690
    r0 = r31 + 0x348; // 0x8060D694
    /* mulli r3, r3, 0xc */ // 0x8060D698
    r0 = r0 + r3; // 0x8060D69C
    *(0x1c0 + r28) = r0; // stw @ 0x8060D6A0
    r3 = *(0 + r28); // lwz @ 0x8060D6A4
    /* li r30, 1 */ // 0x8060D6A8
    r3 = *(4 + r3); // lwz @ 0x8060D6AC
    r0 = *(0xc + r3); // lwz @ 0x8060D6B0
    r0 = r0 | 0x10; // 0x8060D6B4
    *(0xc + r3) = r0; // stw @ 0x8060D6B8
    r0 = *(0x364 + r31); // lwz @ 0x8060D6BC
    if (!=) goto 0x0x8060d750;
    r4 = *(0 + r28); // lwz @ 0x8060D6C8
    r3 = r28;
    r4 = *(4 + r4); // lwz @ 0x8060D6D0
    r0 = *(0xc + r4); // lwz @ 0x8060D6D4
    r0 = r0 | 0x40; // 0x8060D6D8
    *(0xc + r4) = r0; // stw @ 0x8060D6DC
    r4 = *(0 + r28); // lwz @ 0x8060D6E0
    r4 = *(4 + r4); // lwz @ 0x8060D6E4
    r0 = *(8 + r4); // lwz @ 0x8060D6E8
    r0 = r0 | 0x80; // 0x8060D6EC
    *(8 + r4) = r0; // stw @ 0x8060D6F0
    r4 = *(0 + r28); // lwz @ 0x8060D6F4
    r4 = *(4 + r4); // lwz @ 0x8060D6F8
    r0 = *(8 + r4); // lwz @ 0x8060D6FC
    r0 = r0 | 0x800; // 0x8060D700
    *(8 + r4) = r0; // stw @ 0x8060D704
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8060D70C
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8060D714
    r3 = *(0x68 + r3); // lwz @ 0x8060D718
    /* lwzx r3, r3, r0 */ // 0x8060D71C
    FUN_807378A4(r4); // bl 0x807378A4
    /* lis r4, 0 */ // 0x8060D724
    r3 = r28;
    /* lfs f1, 0(r4) */ // 0x8060D72C
    /* li r4, 7 */ // 0x8060D730
    /* li r5, 1 */ // 0x8060D734
    FUN_8061DC98(r4, r3, r4, r5); // bl 0x8061DC98
    r3 = r28;
    FUN_8061E010(r4, r5, r3); // bl 0x8061E010
    /* li r4, 1 */ // 0x8060D744
    FUN_807965E0(r5, r3, r4); // bl 0x807965E0
    /* b 0x8060d890 */ // 0x8060D74C
    r4 = *(0x1c0 + r28); // lwz @ 0x8060D750
    r3 = r28;
    /* lfs f0, 8(r4) */ // 0x8060D758
    /* stfs f0, 0x24(r1) */ // 0x8060D75C
    FUN_8061DC48(r3); // bl 0x8061DC48
    /* lfs f0, 0x20(r1) */ // 0x8060D764
    /* stfs f0, 0x74(r3) */ // 0x8060D768
    /* lfs f0, 0x24(r1) */ // 0x8060D76C
    /* stfs f0, 0x78(r3) */ // 0x8060D770
    /* lfs f0, 0x28(r1) */ // 0x8060D774
    /* stfs f0, 0x7c(r3) */ // 0x8060D778
    r3 = r28;
    FUN_8061DC48(r3); // bl 0x8061DC48
    r0 = *(0x114 + r3); // lwz @ 0x8060D784
    /* lis r29, 0 */ // 0x8060D788
    *(0x18 + r1) = r0; // stw @ 0x8060D78C
    r4 = *(0x110 + r3); // lwz @ 0x8060D790
    r0 = *(0x118 + r3); // lwz @ 0x8060D794
    r3 = r28;
    /* lfs f0, 0(r29) */ // 0x8060D79C
    *(0x14 + r1) = r4; // stw @ 0x8060D7A0
    *(0x1c + r1) = r0; // stw @ 0x8060D7A4
    /* stfs f0, 0x18(r1) */ // 0x8060D7A8
    FUN_8061DC48(r3); // bl 0x8061DC48
    /* lfs f0, 0x14(r1) */ // 0x8060D7B0
    /* stfs f0, 0x110(r3) */ // 0x8060D7B8
    /* lfs f0, 0x18(r1) */ // 0x8060D7BC
    /* stfs f0, 0x114(r3) */ // 0x8060D7C0
    /* lfs f0, 0x1c(r1) */ // 0x8060D7C4
    /* stfs f0, 0x118(r3) */ // 0x8060D7C8
    if (!=) goto 0x0x8060d868;
    r4 = *(0x5c + r28); // lwz @ 0x8060D7D0
    r0 = *(0x60 + r28); // lwz @ 0x8060D7D8
    *(0xc + r1) = r0; // stw @ 0x8060D7DC
    /* lfs f0, 0(r29) */ // 0x8060D7E0
    *(8 + r1) = r4; // stw @ 0x8060D7E4
    r0 = *(0x64 + r28); // lwz @ 0x8060D7E8
    *(0x10 + r1) = r0; // stw @ 0x8060D7EC
    /* stfs f0, 0xc(r1) */ // 0x8060D7F0
    FUN_805E3430(); // bl 0x805E3430
    /* lfs f3, 0x5c(r28) */ // 0x8060D7F8
    /* lfs f2, 8(r1) */ // 0x8060D7FC
    /* lfs f1, 0x60(r28) */ // 0x8060D800
    /* lfs f0, 0xc(r1) */ // 0x8060D804
    /* fmuls f2, f3, f2 */ // 0x8060D808
    /* lfs f4, 0x64(r28) */ // 0x8060D80C
    /* fmuls f1, f1, f0 */ // 0x8060D810
    /* lfs f3, 0x10(r1) */ // 0x8060D814
    /* lfs f0, 0x20(r28) */ // 0x8060D818
    /* fmuls f3, f4, f3 */ // 0x8060D81C
    r3 = *(0 + r28); // lwz @ 0x8060D820
    /* fadds f1, f2, f1 */ // 0x8060D824
    /* fadds f1, f3, f1 */ // 0x8060D828
    /* fmuls f0, f0, f1 */ // 0x8060D82C
    /* stfs f0, 0x20(r28) */ // 0x8060D830
    /* lfs f2, 8(r1) */ // 0x8060D834
    /* stfs f2, 0x5c(r28) */ // 0x8060D838
    /* lfs f1, 0xc(r1) */ // 0x8060D83C
    /* stfs f1, 0x60(r28) */ // 0x8060D840
    /* lfs f0, 0x10(r1) */ // 0x8060D844
    /* stfs f0, 0x64(r28) */ // 0x8060D848
    /* stfs f2, 0x74(r28) */ // 0x8060D84C
    /* stfs f1, 0x78(r28) */ // 0x8060D850
    /* stfs f0, 0x7c(r28) */ // 0x8060D854
    r3 = *(4 + r3); // lwz @ 0x8060D858
    r0 = *(0xc + r3); // lwz @ 0x8060D85C
    r0 = r0 | 0x40; // 0x8060D860
    *(0xc + r3) = r0; // stw @ 0x8060D864
    /* lis r4, 0 */ // 0x8060D868
    r3 = r28;
    /* lfs f1, 0(r4) */ // 0x8060D870
    /* li r4, 3 */ // 0x8060D874
    /* li r5, 1 */ // 0x8060D878
    FUN_8061DC98(r4, r3, r4, r5); // bl 0x8061DC98
    r3 = r28;
    FUN_8061E010(r4, r5, r3); // bl 0x8061E010
}