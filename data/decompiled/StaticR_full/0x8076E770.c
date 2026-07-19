/* Function at 0x8076E770, size=436 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8076E770(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x2c + r1) = r31; // stw @ 0x8076E77C
    r31 = r3;
    r5 = *(6 + r3); // lhz @ 0x8076E784
    /* stfs f1, 0x40(r3) */ // 0x8076E788
    r0 = r5 + -1; // 0x8076E78C
    if (!=) goto 0x0x8076e818;
    r0 = *(0xc + r3); // lbz @ 0x8076E798
    if (==) goto 0x0x8076e818;
    /* extsh r5, r4 */ // 0x8076E7A4
    *(0x46 + r3) = r4; // sth @ 0x8076E7A8
    r4 = r5 + -1; // 0x8076E7AC
    /* li r6, 0 */ // 0x8076E7B0
    /* extsh r0, r4 */ // 0x8076E7B4
    *(0x48 + r3) = r4; // sth @ 0x8076E7B8
    /* mulli r0, r0, 0x38 */ // 0x8076E7BC
    r5 = *(0x4c + r31); // lwz @ 0x8076E7C0
    /* frsp f1, f1 */ // 0x8076E7C4
    *(0x44 + r3) = r6; // stb @ 0x8076E7C8
    r4 = r31;
    r5 = r5 + r0; // 0x8076E7D4
    FUN_8076F2A0(r4, r3); // bl 0x8076F2A0
    /* lfs f0, 0x14(r1) */ // 0x8076E7DC
    /* stfs f0, 0x24(r31) */ // 0x8076E7E0
    r0 = *(0x48 + r31); // lha @ 0x8076E7E4
    /* lfs f0, 0x18(r1) */ // 0x8076E7E8
    /* stfs f0, 0x28(r31) */ // 0x8076E7EC
    /* mulli r0, r0, 0x38 */ // 0x8076E7F0
    r3 = *(0x4c + r31); // lwz @ 0x8076E7F4
    /* lfs f0, 0x1c(r1) */ // 0x8076E7F8
    /* stfs f0, 0x2c(r31) */ // 0x8076E7FC
    r3 = r3 + r0; // 0x8076E800
    /* lfs f1, 0x30(r31) */ // 0x8076E804
    /* lfs f0, 0x34(r3) */ // 0x8076E808
    /* fmuls f0, f1, f0 */ // 0x8076E80C
    /* stfs f0, 0x3c(r31) */ // 0x8076E810
    /* b 0x8076e8a0 */ // 0x8076E814
    /* extsh r5, r4 */ // 0x8076E818
    r0 = *(6 + r3); // lhz @ 0x8076E81C
    r5 = r5 + 1; // 0x8076E820
    *(0x46 + r3) = r4; // sth @ 0x8076E824
    if (==) goto 0x0x8076e838;
    *(0x48 + r3) = r5; // sth @ 0x8076E830
    /* b 0x8076e840 */ // 0x8076E834
    /* li r0, 0 */ // 0x8076E838
    *(0x48 + r3) = r0; // sth @ 0x8076E83C
    r0 = *(0x46 + r31); // lha @ 0x8076E840
    /* li r4, 1 */ // 0x8076E844
    *(0x44 + r3) = r4; // stb @ 0x8076E848
    r4 = r31;
    /* mulli r0, r0, 0x38 */ // 0x8076E850
    r5 = *(0x4c + r31); // lwz @ 0x8076E854
    /* lfs f1, 0x40(r31) */ // 0x8076E858
    r5 = r5 + r0; // 0x8076E860
    FUN_8076F2A0(r3); // bl 0x8076F2A0
    /* lfs f0, 8(r1) */ // 0x8076E868
    /* stfs f0, 0x24(r31) */ // 0x8076E86C
    r0 = *(0x46 + r31); // lha @ 0x8076E870
    /* lfs f0, 0xc(r1) */ // 0x8076E874
    /* stfs f0, 0x28(r31) */ // 0x8076E878
    /* mulli r0, r0, 0x38 */ // 0x8076E87C
    r3 = *(0x4c + r31); // lwz @ 0x8076E880
    /* lfs f0, 0x10(r1) */ // 0x8076E884
    /* stfs f0, 0x2c(r31) */ // 0x8076E888
    r3 = r3 + r0; // 0x8076E88C
    /* lfs f1, 0x30(r31) */ // 0x8076E890
    /* lfs f0, 0x34(r3) */ // 0x8076E894
    /* fmuls f0, f1, f0 */ // 0x8076E898
    /* stfs f0, 0x3c(r31) */ // 0x8076E89C
    r0 = *(0x46 + r31); // lha @ 0x8076E8A0
    /* lis r4, 0 */ // 0x8076E8A4
    r5 = *(8 + r31); // lwz @ 0x8076E8A8
    /* li r3, 1 */ // 0x8076E8AC
    /* slwi r0, r0, 4 */ // 0x8076E8B0
    /* lfs f1, 0x10(r31) */ // 0x8076E8B4
    /* lfsux f2, r5, r0 */ // 0x8076E8B8
    /* li r0, 0 */ // 0x8076E8BC
    /* stfs f2, 0x18(r31) */ // 0x8076E8C0
    /* lfs f0, 0(r4) */ // 0x8076E8C4
    /* lfs f2, 4(r5) */ // 0x8076E8C8
    /* stfs f2, 0x1c(r31) */ // 0x8076E8CC
    /* lfs f2, 8(r5) */ // 0x8076E8D0
    /* stfs f2, 0x20(r31) */ // 0x8076E8D4
    /* lfs f2, 0(r5) */ // 0x8076E8D8
    /* stfs f2, 0x5c(r31) */ // 0x8076E8DC
    /* lfs f2, 4(r5) */ // 0x8076E8E0
    /* stfs f2, 0x60(r31) */ // 0x8076E8E4
    /* lfs f2, 8(r5) */ // 0x8076E8E8
    /* stfs f2, 0x64(r31) */ // 0x8076E8EC
    /* stfs f1, 0x30(r31) */ // 0x8076E8F0
    /* stfs f1, 0x34(r31) */ // 0x8076E8F4
    /* stfs f1, 0x38(r31) */ // 0x8076E8F8
    /* stfs f0, 0x68(r31) */ // 0x8076E8FC
    *(0x14 + r31) = r3; // stb @ 0x8076E900
    *(0x16 + r31) = r0; // stb @ 0x8076E904
    *(0x4a + r31) = r0; // stb @ 0x8076E908
    *(0x17 + r31) = r0; // stb @ 0x8076E90C
    r31 = *(0x2c + r1); // lwz @ 0x8076E910
    r0 = *(0x34 + r1); // lwz @ 0x8076E914
    return;
}