/* Function at 0x808FB848, size=524 bytes */
/* Stack frame: 0 bytes */

int FUN_808FB848(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    if (==) goto 0x0x808fb878;
    /* lis r8, 0 */ // 0x808FB850
    /* lis r7, 0 */ // 0x808FB854
    /* lfs f2, 0(r8) */ // 0x808FB858
    /* lfs f0, 0xe4(r3) */ // 0x808FB85C
    /* lfs f1, 0(r7) */ // 0x808FB860
    /* fsubs f2, f2, f0 */ // 0x808FB864
    /* lfs f0, 4(r5) */ // 0x808FB868
    /* fadds f1, f1, f2 */ // 0x808FB86C
    /* fadds f0, f0, f1 */ // 0x808FB870
    /* stfs f0, 4(r5) */ // 0x808FB874
    r8 = *(0x304 + r3); // lwz @ 0x808FB878
    /* li r7, 0 */ // 0x808FB87C
    /* lfs f2, 0(r5) */ // 0x808FB880
    r0 = r8 + 1; // 0x808FB884
    /* lfs f1, 4(r5) */ // 0x808FB888
    /* clrlwi r0, r0, 0x1c */ // 0x808FB88C
    *(0x304 + r3) = r0; // stw @ 0x808FB890
    /* mulli r0, r0, 0x18 */ // 0x808FB894
    /* lfs f0, 8(r5) */ // 0x808FB898
    r5 = r3 + r0; // 0x808FB89C
    /* stfs f2, 0x184(r5) */ // 0x808FB8A0
    /* stfs f1, 0x188(r5) */ // 0x808FB8A4
    /* stfs f0, 0x18c(r5) */ // 0x808FB8A8
    r0 = *(0x304 + r3); // lwz @ 0x808FB8AC
    /* mulli r0, r0, 0x18 */ // 0x808FB8B0
    r5 = r3 + r0; // 0x808FB8B4
    *(0x190 + r5) = r7; // stb @ 0x808FB8B8
    r0 = *(0x304 + r3); // lwz @ 0x808FB8BC
    /* mulli r0, r0, 0x18 */ // 0x808FB8C0
    r5 = r3 + r0; // 0x808FB8C4
    *(0x194 + r5) = r7; // stw @ 0x808FB8C8
    r10 = *(0x168 + r3); // lwz @ 0x808FB8CC
    r0 = *(0x15c + r3); // lwz @ 0x808FB8D0
    r7 = *(0x304 + r3); // lwz @ 0x808FB8D8
    /* subfc r5, r0, r8 */ // 0x808FB8DC
    r0 = *(0x164 + r3); // lwz @ 0x808FB8E0
    /* subfe r5, r5, r5 */ // 0x808FB8E4
    r9 = r8 & r5; // 0x808FB8E8
    /* mulli r7, r7, 0x18 */ // 0x808FB8EC
    r5 = r3 + r7; // 0x808FB8F4
    r8 = r5 + 0x184; // 0x808FB8F8
    if (==) goto 0x0x808fb974;
    r7 = *(0x160 + r3); // lwz @ 0x808FB900
    /* slwi r0, r10, 4 */ // 0x808FB904
    r5 = *(0x170 + r3); // lwz @ 0x808FB908
    /* lwzx r0, r7, r0 */ // 0x808FB90C
    /* slwi r0, r0, 2 */ // 0x808FB910
    /* lwzx r5, r5, r0 */ // 0x808FB914
    r0 = *(1 + r5); // lbz @ 0x808FB918
    if (==) goto 0x0x808fb974;
    *(0x168 + r3) = r9; // stw @ 0x808FB924
    /* slwi r0, r9, 4 */ // 0x808FB928
    /* li r5, 1 */ // 0x808FB92C
    /* stwx r5, r7, r0 */ // 0x808FB930
    r0 = *(0x168 + r3); // lwz @ 0x808FB934
    r5 = *(0x160 + r3); // lwz @ 0x808FB938
    /* slwi r0, r0, 4 */ // 0x808FB93C
    r5 = r5 + r0; // 0x808FB940
    *(4 + r5) = r8; // stw @ 0x808FB944
    r0 = *(0x168 + r3); // lwz @ 0x808FB948
    r5 = *(0x160 + r3); // lwz @ 0x808FB94C
    /* slwi r0, r0, 4 */ // 0x808FB950
    r5 = r5 + r0; // 0x808FB954
    *(8 + r5) = r4; // stw @ 0x808FB958
    r0 = *(0x168 + r3); // lwz @ 0x808FB95C
    r4 = *(0x160 + r3); // lwz @ 0x808FB960
    /* slwi r0, r0, 4 */ // 0x808FB964
    r5 = *(0x15c + r3); // lwz @ 0x808FB968
    r4 = r4 + r0; // 0x808FB96C
    *(0xc + r4) = r5; // stw @ 0x808FB970
    r4 = *(0x304 + r3); // lwz @ 0x808FB974
    /* li r5, 1 */ // 0x808FB978
    r0 = r4 + 1; // 0x808FB97C
    /* clrlwi r0, r0, 0x1c */ // 0x808FB980
    *(0x304 + r3) = r0; // stw @ 0x808FB984
    /* mulli r0, r0, 0x18 */ // 0x808FB988
    r4 = r3 + r0; // 0x808FB98C
    *(0x185 + r4) = r5; // stb @ 0x808FB990
    r0 = *(0x304 + r3); // lwz @ 0x808FB994
    /* mulli r0, r0, 0x18 */ // 0x808FB998
    r4 = r3 + r0; // 0x808FB99C
    *(0x184 + r4) = r6; // stb @ 0x808FB9A0
    r9 = *(0x168 + r3); // lwz @ 0x808FB9A4
    r0 = *(0x15c + r3); // lwz @ 0x808FB9A8
    r6 = r9 + 1; // 0x808FB9AC
    r5 = *(0x304 + r3); // lwz @ 0x808FB9B0
    /* subfc r4, r0, r6 */ // 0x808FB9B4
    r0 = *(0x164 + r3); // lwz @ 0x808FB9B8
    /* subfe r4, r4, r4 */ // 0x808FB9BC
    r8 = r6 & r4; // 0x808FB9C0
    /* mulli r5, r5, 0x18 */ // 0x808FB9C4
    r4 = r3 + r5; // 0x808FB9CC
    r7 = r4 + 0x184; // 0x808FB9D0
    /* beqlr  */ // 0x808FB9D4
    r6 = *(0x160 + r3); // lwz @ 0x808FB9D8
    /* slwi r0, r9, 4 */ // 0x808FB9DC
    r4 = *(0x170 + r3); // lwz @ 0x808FB9E0
    /* lwzx r0, r6, r0 */ // 0x808FB9E4
    /* slwi r0, r0, 2 */ // 0x808FB9E8
    /* lwzx r4, r4, r0 */ // 0x808FB9EC
    r0 = *(2 + r4); // lbz @ 0x808FB9F0
    /* beqlr  */ // 0x808FB9F8
    *(0x168 + r3) = r8; // stw @ 0x808FB9FC
    /* slwi r0, r8, 4 */ // 0x808FBA00
    /* li r4, 2 */ // 0x808FBA04
    /* li r5, -1 */ // 0x808FBA08
    /* stwx r4, r6, r0 */ // 0x808FBA0C
    r0 = *(0x168 + r3); // lwz @ 0x808FBA10
    r4 = *(0x160 + r3); // lwz @ 0x808FBA14
    /* slwi r0, r0, 4 */ // 0x808FBA18
    r4 = r4 + r0; // 0x808FBA1C
    *(4 + r4) = r7; // stw @ 0x808FBA20
    r0 = *(0x168 + r3); // lwz @ 0x808FBA24
    r4 = *(0x160 + r3); // lwz @ 0x808FBA28
    /* slwi r0, r0, 4 */ // 0x808FBA2C
    r4 = r4 + r0; // 0x808FBA30
    *(8 + r4) = r5; // stw @ 0x808FBA34
    r0 = *(0x168 + r3); // lwz @ 0x808FBA38
    r4 = *(0x160 + r3); // lwz @ 0x808FBA3C
    /* slwi r0, r0, 4 */ // 0x808FBA40
    r5 = *(0x15c + r3); // lwz @ 0x808FBA44
    r3 = r4 + r0; // 0x808FBA48
    *(0xc + r3) = r5; // stw @ 0x808FBA4C
    return;
}