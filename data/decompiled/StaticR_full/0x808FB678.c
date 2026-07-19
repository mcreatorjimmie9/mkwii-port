/* Function at 0x808FB678, size=464 bytes */
/* Stack frame: 0 bytes */

int FUN_808FB678(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    if (==) goto 0x0x808fb694;
    /* lis r7, 0 */ // 0x808FB680
    /* lfs f1, 4(r5) */ // 0x808FB684
    /* lfs f0, 0(r7) */ // 0x808FB688
    /* fadds f0, f1, f0 */ // 0x808FB68C
    /* stfs f0, 4(r5) */ // 0x808FB690
    r7 = *(0x304 + r3); // lwz @ 0x808FB694
    /* neg r0, r8 */ // 0x808FB698
    r0 = r0 | r8; // 0x808FB69C
    /* lfs f2, 0(r5) */ // 0x808FB6A0
    r7 = r7 + 1; // 0x808FB6A4
    /* lfs f1, 4(r5) */ // 0x808FB6A8
    /* clrlwi r7, r7, 0x1c */ // 0x808FB6AC
    /* lfs f0, 8(r5) */ // 0x808FB6B0
    /* mulli r8, r7, 0x18 */ // 0x808FB6B4
    *(0x304 + r3) = r7; // stw @ 0x808FB6B8
    r7 = r0 >> 0x1f; // srawi
    /* lis r5, 0 */ // 0x808FB6C0
    r8 = r3 + r8; // 0x808FB6C4
    /* stfs f2, 0x184(r8) */ // 0x808FB6C8
    /* stfs f1, 0x188(r8) */ // 0x808FB6CC
    /* stfs f0, 0x18c(r8) */ // 0x808FB6D0
    r0 = *(0x304 + r3); // lwz @ 0x808FB6D4
    /* mulli r0, r0, 0x18 */ // 0x808FB6D8
    r8 = r3 + r0; // 0x808FB6DC
    *(0x190 + r8) = r6; // stb @ 0x808FB6E0
    r0 = *(0x304 + r3); // lwz @ 0x808FB6E4
    r5 = *(0 + r5); // lwz @ 0x808FB6E8
    /* mulli r0, r0, 0x18 */ // 0x808FB6EC
    r6 = r5 & r7; // 0x808FB6F0
    r5 = r3 + r0; // 0x808FB6F4
    *(0x194 + r5) = r6; // stw @ 0x808FB6F8
    r9 = *(0x168 + r3); // lwz @ 0x808FB6FC
    r0 = *(0x15c + r3); // lwz @ 0x808FB700
    r7 = r9 + 1; // 0x808FB704
    r6 = *(0x304 + r3); // lwz @ 0x808FB708
    /* subfc r5, r0, r7 */ // 0x808FB70C
    r0 = *(0x164 + r3); // lwz @ 0x808FB710
    /* subfe r5, r5, r5 */ // 0x808FB714
    r8 = r7 & r5; // 0x808FB718
    /* mulli r6, r6, 0x18 */ // 0x808FB71C
    r5 = r3 + r6; // 0x808FB724
    r7 = r5 + 0x184; // 0x808FB728
    if (==) goto 0x0x808fb7a4;
    r6 = *(0x160 + r3); // lwz @ 0x808FB730
    /* slwi r0, r9, 4 */ // 0x808FB734
    r5 = *(0x170 + r3); // lwz @ 0x808FB738
    /* lwzx r0, r6, r0 */ // 0x808FB73C
    /* slwi r0, r0, 2 */ // 0x808FB740
    /* lwzx r5, r5, r0 */ // 0x808FB744
    r0 = *(1 + r5); // lbz @ 0x808FB748
    if (==) goto 0x0x808fb7a4;
    *(0x168 + r3) = r8; // stw @ 0x808FB754
    /* slwi r0, r8, 4 */ // 0x808FB758
    /* li r5, 1 */ // 0x808FB75C
    /* stwx r5, r6, r0 */ // 0x808FB760
    r0 = *(0x168 + r3); // lwz @ 0x808FB764
    r5 = *(0x160 + r3); // lwz @ 0x808FB768
    /* slwi r0, r0, 4 */ // 0x808FB76C
    r5 = r5 + r0; // 0x808FB770
    *(4 + r5) = r7; // stw @ 0x808FB774
    r0 = *(0x168 + r3); // lwz @ 0x808FB778
    r5 = *(0x160 + r3); // lwz @ 0x808FB77C
    /* slwi r0, r0, 4 */ // 0x808FB780
    r5 = r5 + r0; // 0x808FB784
    *(8 + r5) = r4; // stw @ 0x808FB788
    r0 = *(0x168 + r3); // lwz @ 0x808FB78C
    r4 = *(0x160 + r3); // lwz @ 0x808FB790
    /* slwi r0, r0, 4 */ // 0x808FB794
    r5 = *(0x15c + r3); // lwz @ 0x808FB798
    r4 = r4 + r0; // 0x808FB79C
    *(0xc + r4) = r5; // stw @ 0x808FB7A0
    r7 = *(0x168 + r3); // lwz @ 0x808FB7A4
    r4 = *(0x15c + r3); // lwz @ 0x808FB7A8
    r5 = r7 + 1; // 0x808FB7AC
    r0 = *(0x164 + r3); // lwz @ 0x808FB7B0
    /* subfc r4, r4, r5 */ // 0x808FB7B4
    /* subfe r4, r4, r4 */ // 0x808FB7B8
    r6 = r5 & r4; // 0x808FB7BC
    /* beqlr  */ // 0x808FB7C4
    r5 = *(0x160 + r3); // lwz @ 0x808FB7C8
    /* slwi r0, r7, 4 */ // 0x808FB7CC
    r4 = *(0x170 + r3); // lwz @ 0x808FB7D0
    /* lwzx r0, r5, r0 */ // 0x808FB7D4
    /* slwi r0, r0, 2 */ // 0x808FB7D8
    /* lwzx r4, r4, r0 */ // 0x808FB7DC
    r0 = *(3 + r4); // lbz @ 0x808FB7E0
    /* beqlr  */ // 0x808FB7E8
    *(0x168 + r3) = r6; // stw @ 0x808FB7EC
    /* slwi r0, r6, 4 */ // 0x808FB7F0
    /* li r4, 3 */ // 0x808FB7F4
    /* li r6, 0 */ // 0x808FB7F8
    /* stwx r4, r5, r0 */ // 0x808FB7FC
    /* li r5, -1 */ // 0x808FB800
    r0 = *(0x168 + r3); // lwz @ 0x808FB804
    r4 = *(0x160 + r3); // lwz @ 0x808FB808
    /* slwi r0, r0, 4 */ // 0x808FB80C
    r4 = r4 + r0; // 0x808FB810
    *(4 + r4) = r6; // stw @ 0x808FB814
    r0 = *(0x168 + r3); // lwz @ 0x808FB818
    r4 = *(0x160 + r3); // lwz @ 0x808FB81C
    /* slwi r0, r0, 4 */ // 0x808FB820
    r4 = r4 + r0; // 0x808FB824
    *(8 + r4) = r5; // stw @ 0x808FB828
    r0 = *(0x168 + r3); // lwz @ 0x808FB82C
    r4 = *(0x160 + r3); // lwz @ 0x808FB830
    /* slwi r0, r0, 4 */ // 0x808FB834
    r5 = *(0x15c + r3); // lwz @ 0x808FB838
    r3 = r4 + r0; // 0x808FB83C
    *(0xc + r3) = r5; // stw @ 0x808FB840
    return;
}