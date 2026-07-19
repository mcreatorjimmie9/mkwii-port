/* Function at 0x8076D850, size=2164 bytes */
/* Stack frame: 384 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 20 function(s) */

int FUN_8076D850(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -384(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r3;
    *(0x174 + r1) = r29; // stw @ 0x8076D868
    *(0x170 + r1) = r28; // stw @ 0x8076D86C
    r28 = r4;
    r0 = *(0x44 + r3); // lbz @ 0x8076D874
    if (!=) goto 0x0x8076d89c;
    r4 = *(0x30 + r3); // lwz @ 0x8076D880
    r0 = *(0x2a + r3); // lhz @ 0x8076D884
    r3 = r4 * r0; // 0x8076D888
    r0 = r3 + 1; // 0x8076D88C
    /* slwi r3, r0, 2 */ // 0x8076D890
    FUN_805E3430(); // bl 0x805E3430
    *(0x38 + r30) = r3; // stw @ 0x8076D898
    r0 = *(0xa + r30); // lbz @ 0x8076D89C
    /* li r3, 0 */ // 0x8076D8A0
    *(0x3c + r30) = r3; // stw @ 0x8076D8A4
    if (==) goto 0x0x8076dc64;
    if (!=) goto 0x0x8076da64;
    r5 = *(0xc + r30); // lwz @ 0x8076D8B8
    r4 = *(0x2c + r30); // lwz @ 0x8076D8C0
    /* lfs f0, 0(r5) */ // 0x8076D8C4
    /* stfs f0, 0(r4) */ // 0x8076D8C8
    /* lfs f0, 4(r5) */ // 0x8076D8CC
    /* stfs f0, 4(r4) */ // 0x8076D8D0
    /* lfs f0, 8(r5) */ // 0x8076D8D4
    /* stfs f0, 8(r4) */ // 0x8076D8D8
    r5 = *(0xc + r30); // lwz @ 0x8076D8DC
    r4 = r5 + 0x10; // 0x8076D8E0
    FUN_805A4498(r4); // bl 0x805A4498
    /* lis r4, 0 */ // 0x8076D8E8
    /* lfs f1, 0(r4) */ // 0x8076D8F0
    FUN_80735EBC(r4, r3, r4); // bl 0x80735EBC
    r5 = *(0xc + r30); // lwz @ 0x8076D8FC
    FUN_805A4464(r4, r3, r4); // bl 0x805A4464
    r8 = *(0x2c + r30); // lwz @ 0x8076D90C
    r4 = r30;
    /* lfs f0, 0x14c(r1) */ // 0x8076D914
    /* stfs f0, 0xc(r8) */ // 0x8076D91C
    /* lfs f0, 0x150(r1) */ // 0x8076D92C
    /* stfs f0, 0x10(r8) */ // 0x8076D930
    /* lfs f0, 0x154(r1) */ // 0x8076D934
    /* stfs f0, 0x14(r8) */ // 0x8076D938
    r9 = *(0xc + r30); // lwz @ 0x8076D93C
    r8 = *(0 + r9); // lwz @ 0x8076D940
    r0 = *(4 + r9); // lwz @ 0x8076D944
    *(0x144 + r1) = r0; // stw @ 0x8076D948
    *(0x140 + r1) = r8; // stw @ 0x8076D94C
    r0 = *(8 + r9); // lwz @ 0x8076D950
    *(0x148 + r1) = r0; // stw @ 0x8076D954
    r8 = *(0x10 + r9); // lwz @ 0x8076D958
    r0 = *(0x14 + r9); // lwz @ 0x8076D95C
    *(0x138 + r1) = r0; // stw @ 0x8076D960
    *(0x134 + r1) = r8; // stw @ 0x8076D964
    r0 = *(0x18 + r9); // lwz @ 0x8076D968
    *(0x13c + r1) = r0; // stw @ 0x8076D96C
    r8 = *(0x20 + r9); // lwz @ 0x8076D970
    r0 = *(0x24 + r9); // lwz @ 0x8076D974
    *(0x12c + r1) = r0; // stw @ 0x8076D978
    *(0x128 + r1) = r8; // stw @ 0x8076D97C
    r0 = *(0x28 + r9); // lwz @ 0x8076D980
    *(0x130 + r1) = r0; // stw @ 0x8076D984
    FUN_8076E304(); // bl 0x8076E304
    r4 = *(0x2c + r30); // lwz @ 0x8076D98C
    r3 = r30;
    /* lfs f0, 0x11c(r1) */ // 0x8076D994
    /* stfs f0, 0x18(r4) */ // 0x8076D998
    /* lfs f0, 0x120(r1) */ // 0x8076D99C
    /* stfs f0, 0x1c(r4) */ // 0x8076D9A0
    /* lfs f0, 0x124(r1) */ // 0x8076D9A4
    /* stfs f0, 0x20(r4) */ // 0x8076D9A8
    r5 = *(0xc + r30); // lwz @ 0x8076D9AC
    r4 = *(0x2c + r30); // lwz @ 0x8076D9B0
    /* lfs f0, 0x10(r5) */ // 0x8076D9B4
    /* stfs f0, 0x24(r4) */ // 0x8076D9B8
    /* lfs f0, 0x14(r5) */ // 0x8076D9BC
    /* stfs f0, 0x28(r4) */ // 0x8076D9C0
    /* lfs f0, 0x18(r5) */ // 0x8076D9C4
    /* stfs f0, 0x2c(r4) */ // 0x8076D9C8
    r4 = *(0x2c + r30); // lwz @ 0x8076D9CC
    r5 = *(0x30 + r30); // lwz @ 0x8076D9D0
    FUN_8076E3B8(); // bl 0x8076E3B8
    r4 = *(0x2c + r30); // lwz @ 0x8076D9D8
    /* lis r3, 0 */ // 0x8076D9DC
    /* lfs f2, 0(r3) */ // 0x8076D9E0
    /* li r31, 1 */ // 0x8076D9E4
    /* stfs f1, 0x30(r4) */ // 0x8076D9E8
    /* li r28, 0x38 */ // 0x8076D9EC
    /* li r29, 0x10 */ // 0x8076D9F0
    r3 = *(0x2c + r30); // lwz @ 0x8076D9F4
    /* lfs f0, 0x30(r3) */ // 0x8076D9F8
    /* fdivs f0, f2, f0 */ // 0x8076D9FC
    /* stfs f0, 0x34(r3) */ // 0x8076DA00
    /* b 0x8076da54 */ // 0x8076DA04
    r5 = r31 + -1; // 0x8076DA08
    r4 = r31 + 1; // 0x8076DA0C
    r3 = r31 + 2; // 0x8076DA10
    r9 = *(0xc + r30); // lwz @ 0x8076DA14
    /* slwi r7, r3, 4 */ // 0x8076DA18
    /* slwi r6, r4, 4 */ // 0x8076DA1C
    /* slwi r5, r5, 4 */ // 0x8076DA20
    r0 = *(0x2c + r30); // lwz @ 0x8076DA24
    r4 = r9 + r5; // 0x8076DA28
    r8 = *(0x30 + r30); // lwz @ 0x8076DA2C
    r3 = r30;
    r5 = r9 + r29; // 0x8076DA34
    r6 = r9 + r6; // 0x8076DA38
    r7 = r9 + r7; // 0x8076DA3C
    r9 = r0 + r28; // 0x8076DA40
    FUN_8076E0C8(r3); // bl 0x8076E0C8
    r28 = r28 + 0x38; // 0x8076DA48
    r29 = r29 + 0x10; // 0x8076DA4C
    r31 = r31 + 1; // 0x8076DA50
    r3 = *(0x2a + r30); // lhz @ 0x8076DA54
    r0 = r3 + -1; // 0x8076DA58
    if (<) goto 0x0x8076da08;
    r5 = *(0x2a + r30); // lhz @ 0x8076DA64
    r4 = r30;
    r9 = *(0xc + r30); // lwz @ 0x8076DA6C
    r6 = r5 + -1; // 0x8076DA74
    r8 = *(0x2c + r30); // lwz @ 0x8076DA78
    /* slwi r7, r6, 4 */ // 0x8076DA7C
    r9 = r9 + r7; // 0x8076DA84
    /* mulli r0, r6, 0x38 */ // 0x8076DA88
    /* lfs f0, 0(r9) */ // 0x8076DA8C
    /* stfsux f0, r8, r0 */ // 0x8076DA98
    /* lfs f0, 4(r9) */ // 0x8076DA9C
    /* stfs f0, 4(r8) */ // 0x8076DAA0
    /* lfs f0, 8(r9) */ // 0x8076DAA4
    /* stfs f0, 8(r8) */ // 0x8076DAA8
    r10 = *(0x2a + r30); // lhz @ 0x8076DAAC
    r31 = *(0xc + r30); // lwz @ 0x8076DAB0
    /* slwi r9, r0, 4 */ // 0x8076DABC
    r12 = r31 + r9; // 0x8076DAC0
    /* slwi r8, r8, 4 */ // 0x8076DAC4
    /* slwi r0, r10, 4 */ // 0x8076DAC8
    /* lwzx r11, r31, r9 */ // 0x8076DACC
    r10 = r31 + r8; // 0x8076DAD0
    r8 = *(4 + r12); // lwz @ 0x8076DAD4
    *(0x114 + r1) = r8; // stw @ 0x8076DAD8
    r9 = r31 + r0; // 0x8076DADC
    *(0x110 + r1) = r11; // stw @ 0x8076DAE0
    r0 = *(8 + r12); // lwz @ 0x8076DAE4
    *(0x118 + r1) = r0; // stw @ 0x8076DAE8
    r8 = *(0 + r10); // lwz @ 0x8076DAEC
    r0 = *(4 + r10); // lwz @ 0x8076DAF0
    *(0x108 + r1) = r0; // stw @ 0x8076DAF4
    *(0x104 + r1) = r8; // stw @ 0x8076DAF8
    r0 = *(8 + r10); // lwz @ 0x8076DAFC
    *(0x10c + r1) = r0; // stw @ 0x8076DB00
    r8 = *(0 + r9); // lwz @ 0x8076DB04
    r0 = *(4 + r9); // lwz @ 0x8076DB08
    *(0xfc + r1) = r0; // stw @ 0x8076DB0C
    *(0xf8 + r1) = r8; // stw @ 0x8076DB10
    r0 = *(8 + r9); // lwz @ 0x8076DB14
    *(0x100 + r1) = r0; // stw @ 0x8076DB18
    FUN_8076E254(); // bl 0x8076E254
    r4 = *(0x2a + r30); // lhz @ 0x8076DB20
    r5 = *(0x2c + r30); // lwz @ 0x8076DB28
    r0 = r4 + -1; // 0x8076DB2C
    /* lfs f0, 0xec(r1) */ // 0x8076DB30
    /* mulli r0, r0, 0x38 */ // 0x8076DB34
    r4 = r5 + r0; // 0x8076DB38
    /* stfs f0, 0xc(r4) */ // 0x8076DB3C
    /* lfs f0, 0xf0(r1) */ // 0x8076DB40
    /* stfs f0, 0x10(r4) */ // 0x8076DB44
    /* lfs f0, 0xf4(r1) */ // 0x8076DB48
    /* stfs f0, 0x14(r4) */ // 0x8076DB4C
    r5 = *(0x2a + r30); // lhz @ 0x8076DB50
    r6 = *(0xc + r30); // lwz @ 0x8076DB54
    r4 = r5 + -1; // 0x8076DB58
    /* slwi r0, r5, 4 */ // 0x8076DB5C
    /* slwi r4, r4, 4 */ // 0x8076DB60
    r4 = r6 + r4; // 0x8076DB64
    r5 = r6 + r0; // 0x8076DB68
    FUN_805A4498(r4); // bl 0x805A4498
    /* lis r4, 0 */ // 0x8076DB70
    /* lfs f1, 0(r4) */ // 0x8076DB78
    FUN_80735EBC(r4, r3, r4); // bl 0x80735EBC
    r0 = *(0x2a + r30); // lhz @ 0x8076DB84
    r5 = *(0xc + r30); // lwz @ 0x8076DB8C
    /* slwi r0, r0, 4 */ // 0x8076DB94
    r5 = r5 + r0; // 0x8076DB98
    FUN_805A4464(r3, r4); // bl 0x805A4464
    r4 = *(0x2a + r30); // lhz @ 0x8076DBA0
    r3 = r30;
    r5 = *(0x2c + r30); // lwz @ 0x8076DBA8
    r0 = r4 + -1; // 0x8076DBAC
    /* lfs f0, 0xc8(r1) */ // 0x8076DBB0
    /* mulli r0, r0, 0x38 */ // 0x8076DBB4
    r4 = r5 + r0; // 0x8076DBB8
    /* stfs f0, 0x18(r4) */ // 0x8076DBBC
    /* lfs f0, 0xcc(r1) */ // 0x8076DBC0
    /* stfs f0, 0x1c(r4) */ // 0x8076DBC4
    /* lfs f0, 0xd0(r1) */ // 0x8076DBC8
    /* stfs f0, 0x20(r4) */ // 0x8076DBCC
    r4 = *(0x2a + r30); // lhz @ 0x8076DBD0
    r6 = *(0xc + r30); // lwz @ 0x8076DBD4
    r0 = r4 + -1; // 0x8076DBD8
    /* slwi r5, r4, 4 */ // 0x8076DBDC
    /* mulli r0, r0, 0x38 */ // 0x8076DBE0
    r4 = *(0x2c + r30); // lwz @ 0x8076DBE4
    /* lfsux f0, r5, r6 */ // 0x8076DBE8
    r4 = r4 + r0; // 0x8076DBEC
    /* stfs f0, 0x24(r4) */ // 0x8076DBF0
    /* lfs f0, 4(r5) */ // 0x8076DBF4
    /* stfs f0, 0x28(r4) */ // 0x8076DBF8
    /* lfs f0, 8(r5) */ // 0x8076DBFC
    /* stfs f0, 0x2c(r4) */ // 0x8076DC00
    r4 = *(0x2a + r30); // lhz @ 0x8076DC04
    r6 = *(0x2c + r30); // lwz @ 0x8076DC08
    r0 = r4 + -1; // 0x8076DC0C
    r5 = *(0x30 + r30); // lwz @ 0x8076DC10
    /* mulli r0, r0, 0x38 */ // 0x8076DC14
    r4 = r6 + r0; // 0x8076DC18
    FUN_8076E3B8(); // bl 0x8076E3B8
    r4 = *(0x2a + r30); // lhz @ 0x8076DC20
    /* lis r3, 0 */ // 0x8076DC24
    r5 = *(0x2c + r30); // lwz @ 0x8076DC28
    r0 = r4 + -1; // 0x8076DC2C
    /* lfs f2, 0(r3) */ // 0x8076DC30
    /* mulli r0, r0, 0x38 */ // 0x8076DC34
    r3 = r5 + r0; // 0x8076DC38
    /* stfs f1, 0x30(r3) */ // 0x8076DC3C
    r3 = *(0x2a + r30); // lhz @ 0x8076DC40
    r4 = *(0x2c + r30); // lwz @ 0x8076DC44
    r0 = r3 + -1; // 0x8076DC48
    /* mulli r0, r0, 0x38 */ // 0x8076DC4C
    r3 = r4 + r0; // 0x8076DC50
    /* lfs f0, 0x30(r3) */ // 0x8076DC54
    /* fdivs f0, f2, f0 */ // 0x8076DC58
    /* stfs f0, 0x34(r3) */ // 0x8076DC5C
    /* b 0x8076e0a8 */ // 0x8076DC60
    if (!=) goto 0x0x8076de98;
    r9 = *(0xc + r30); // lwz @ 0x8076DC6C
    r4 = r30;
    r8 = *(0x2c + r30); // lwz @ 0x8076DC74
    /* lfs f0, 0(r9) */ // 0x8076DC7C
    /* stfs f0, 0(r8) */ // 0x8076DC84
    /* lfs f0, 4(r9) */ // 0x8076DC90
    /* stfs f0, 4(r8) */ // 0x8076DC94
    /* lfs f0, 8(r9) */ // 0x8076DC98
    /* stfs f0, 8(r8) */ // 0x8076DC9C
    r8 = *(0x2a + r30); // lhz @ 0x8076DCA0
    r10 = *(0xc + r30); // lwz @ 0x8076DCA4
    r0 = r8 + -1; // 0x8076DCA8
    /* slwi r0, r0, 4 */ // 0x8076DCAC
    r9 = r10 + r0; // 0x8076DCB0
    /* lwzx r8, r10, r0 */ // 0x8076DCB4
    r0 = *(4 + r9); // lwz @ 0x8076DCB8
    *(0xc0 + r1) = r0; // stw @ 0x8076DCBC
    *(0xbc + r1) = r8; // stw @ 0x8076DCC0
    r0 = *(8 + r9); // lwz @ 0x8076DCC4
    *(0xc4 + r1) = r0; // stw @ 0x8076DCC8
    r8 = *(0 + r10); // lwz @ 0x8076DCCC
    r0 = *(4 + r10); // lwz @ 0x8076DCD0
    *(0xb4 + r1) = r0; // stw @ 0x8076DCD4
    *(0xb0 + r1) = r8; // stw @ 0x8076DCD8
    r0 = *(8 + r10); // lwz @ 0x8076DCDC
    *(0xb8 + r1) = r0; // stw @ 0x8076DCE0
    r8 = *(0x10 + r10); // lwz @ 0x8076DCE4
    r0 = *(0x14 + r10); // lwz @ 0x8076DCE8
    *(0xa8 + r1) = r0; // stw @ 0x8076DCEC
    *(0xa4 + r1) = r8; // stw @ 0x8076DCF0
    r0 = *(0x18 + r10); // lwz @ 0x8076DCF4
    *(0xac + r1) = r0; // stw @ 0x8076DCF8
    FUN_8076E254(); // bl 0x8076E254
    r8 = *(0x2c + r30); // lwz @ 0x8076DD00
    r4 = r30;
    /* lfs f0, 0x98(r1) */ // 0x8076DD08
    /* stfs f0, 0xc(r8) */ // 0x8076DD10
    /* lfs f0, 0x9c(r1) */ // 0x8076DD20
    /* stfs f0, 0x10(r8) */ // 0x8076DD24
    /* lfs f0, 0xa0(r1) */ // 0x8076DD28
    /* stfs f0, 0x14(r8) */ // 0x8076DD2C
    r9 = *(0xc + r30); // lwz @ 0x8076DD30
    r8 = *(0 + r9); // lwz @ 0x8076DD34
    r0 = *(4 + r9); // lwz @ 0x8076DD38
    *(0x90 + r1) = r0; // stw @ 0x8076DD3C
    *(0x8c + r1) = r8; // stw @ 0x8076DD40
    r0 = *(8 + r9); // lwz @ 0x8076DD44
    *(0x94 + r1) = r0; // stw @ 0x8076DD48
    r8 = *(0x10 + r9); // lwz @ 0x8076DD4C
    r0 = *(0x14 + r9); // lwz @ 0x8076DD50
    *(0x84 + r1) = r0; // stw @ 0x8076DD54
    *(0x80 + r1) = r8; // stw @ 0x8076DD58
    r0 = *(0x18 + r9); // lwz @ 0x8076DD5C
    *(0x88 + r1) = r0; // stw @ 0x8076DD60
    r8 = *(0x20 + r9); // lwz @ 0x8076DD64
    r0 = *(0x24 + r9); // lwz @ 0x8076DD68
    *(0x78 + r1) = r0; // stw @ 0x8076DD6C
    *(0x74 + r1) = r8; // stw @ 0x8076DD70
    r0 = *(0x28 + r9); // lwz @ 0x8076DD74
    *(0x7c + r1) = r0; // stw @ 0x8076DD78
    FUN_8076E304(); // bl 0x8076E304
    r4 = *(0x2c + r30); // lwz @ 0x8076DD80
    r3 = r30;
    /* lfs f0, 0x68(r1) */ // 0x8076DD88
    /* stfs f0, 0x18(r4) */ // 0x8076DD8C
    /* lfs f0, 0x6c(r1) */ // 0x8076DD90
    /* stfs f0, 0x1c(r4) */ // 0x8076DD94
    /* lfs f0, 0x70(r1) */ // 0x8076DD98
    /* stfs f0, 0x20(r4) */ // 0x8076DD9C
    r5 = *(0xc + r30); // lwz @ 0x8076DDA0
    r4 = *(0x2c + r30); // lwz @ 0x8076DDA4
    /* lfs f0, 0x10(r5) */ // 0x8076DDA8
    /* stfs f0, 0x24(r4) */ // 0x8076DDAC
    /* lfs f0, 0x14(r5) */ // 0x8076DDB0
    /* stfs f0, 0x28(r4) */ // 0x8076DDB4
    /* lfs f0, 0x18(r5) */ // 0x8076DDB8
    /* stfs f0, 0x2c(r4) */ // 0x8076DDBC
    r4 = *(0x2c + r30); // lwz @ 0x8076DDC0
    r5 = *(0x30 + r30); // lwz @ 0x8076DDC4
    FUN_8076E3B8(); // bl 0x8076E3B8
    r4 = *(0x2c + r30); // lwz @ 0x8076DDCC
    /* lis r3, 0 */ // 0x8076DDD0
    /* lfs f2, 0(r3) */ // 0x8076DDD4
    /* li r31, 1 */ // 0x8076DDD8
    /* stfs f1, 0x30(r4) */ // 0x8076DDDC
    /* li r29, 0x38 */ // 0x8076DDE0
    /* li r28, 0x10 */ // 0x8076DDE4
    r3 = *(0x2c + r30); // lwz @ 0x8076DDE8
    /* lfs f0, 0x30(r3) */ // 0x8076DDEC
    /* fdivs f0, f2, f0 */ // 0x8076DDF0
    /* stfs f0, 0x34(r3) */ // 0x8076DDF4
    /* b 0x8076de88 */ // 0x8076DDF8
    r5 = r31 + 2; // 0x8076DDFC
    if (==) goto 0x0x8076de48;
    r0 = r31 + -1; // 0x8076DE08
    r3 = r31 + 1; // 0x8076DE0C
    /* slwi r4, r0, 4 */ // 0x8076DE10
    r9 = *(0xc + r30); // lwz @ 0x8076DE14
    /* slwi r6, r3, 4 */ // 0x8076DE18
    /* slwi r7, r5, 4 */ // 0x8076DE1C
    r0 = *(0x2c + r30); // lwz @ 0x8076DE20
    r3 = r30;
    r8 = *(0x30 + r30); // lwz @ 0x8076DE28
    r4 = r9 + r4; // 0x8076DE2C
    r5 = r9 + r28; // 0x8076DE30
    r6 = r9 + r6; // 0x8076DE34
    r7 = r9 + r7; // 0x8076DE38
    r9 = r0 + r29; // 0x8076DE3C
    FUN_8076E0C8(); // bl 0x8076E0C8
    /* b 0x8076de7c */ // 0x8076DE44
    r7 = *(0xc + r30); // lwz @ 0x8076DE48
    r4 = r31 + -1; // 0x8076DE4C
    r3 = r31 + 1; // 0x8076DE50
    r0 = *(0x2c + r30); // lwz @ 0x8076DE54
    /* slwi r6, r3, 4 */ // 0x8076DE58
    /* slwi r4, r4, 4 */ // 0x8076DE5C
    r8 = *(0x30 + r30); // lwz @ 0x8076DE60
    r3 = r30;
    r4 = r7 + r4; // 0x8076DE68
    r5 = r7 + r28; // 0x8076DE6C
    r6 = r7 + r6; // 0x8076DE70
    r9 = r0 + r29; // 0x8076DE74
    FUN_8076E0C8(r3); // bl 0x8076E0C8
    r29 = r29 + 0x38; // 0x8076DE7C
    r28 = r28 + 0x10; // 0x8076DE80
    r31 = r31 + 1; // 0x8076DE84
    r3 = *(0x2a + r30); // lhz @ 0x8076DE88
    r0 = r3 + -1; // 0x8076DE8C
    if (<) goto 0x0x8076ddfc;
    r5 = *(0x2a + r30); // lhz @ 0x8076DE98
    r4 = r30;
    r9 = *(0xc + r30); // lwz @ 0x8076DEA0
    r6 = r5 + -1; // 0x8076DEA8
    r8 = *(0x2c + r30); // lwz @ 0x8076DEAC
    /* slwi r7, r6, 4 */ // 0x8076DEB0
    r9 = r9 + r7; // 0x8076DEB8
    /* mulli r0, r6, 0x38 */ // 0x8076DEBC
    /* lfs f0, 0(r9) */ // 0x8076DEC0
    /* stfsux f0, r8, r0 */ // 0x8076DECC
    /* lfs f0, 4(r9) */ // 0x8076DED0
    /* stfs f0, 4(r8) */ // 0x8076DED4
    /* lfs f0, 8(r9) */ // 0x8076DED8
    /* stfs f0, 8(r8) */ // 0x8076DEDC
    r9 = *(0x2a + r30); // lhz @ 0x8076DEE0
    r11 = *(0xc + r30); // lwz @ 0x8076DEE4
    r8 = r9 + -2; // 0x8076DEE8
    r0 = r9 + -1; // 0x8076DEEC
    /* slwi r8, r8, 4 */ // 0x8076DEF0
    r10 = r11 + r8; // 0x8076DEF4
    /* slwi r0, r0, 4 */ // 0x8076DEF8
    r9 = r11 + r0; // 0x8076DEFC
    /* lwzx r8, r11, r8 */ // 0x8076DF00
    r0 = *(4 + r10); // lwz @ 0x8076DF04
    *(0x60 + r1) = r0; // stw @ 0x8076DF08
    *(0x5c + r1) = r8; // stw @ 0x8076DF0C
    r0 = *(8 + r10); // lwz @ 0x8076DF10
    *(0x64 + r1) = r0; // stw @ 0x8076DF14
    r8 = *(0 + r9); // lwz @ 0x8076DF18
    r0 = *(4 + r9); // lwz @ 0x8076DF1C
    *(0x54 + r1) = r0; // stw @ 0x8076DF20
    *(0x50 + r1) = r8; // stw @ 0x8076DF24
    r0 = *(8 + r9); // lwz @ 0x8076DF28
    *(0x58 + r1) = r0; // stw @ 0x8076DF2C
    r8 = *(0 + r11); // lwz @ 0x8076DF30
    r0 = *(4 + r11); // lwz @ 0x8076DF34
    *(0x48 + r1) = r0; // stw @ 0x8076DF38
    *(0x44 + r1) = r8; // stw @ 0x8076DF3C
    r0 = *(8 + r11); // lwz @ 0x8076DF40
    *(0x4c + r1) = r0; // stw @ 0x8076DF44
    FUN_8076E254(); // bl 0x8076E254
    r5 = *(0x2a + r30); // lhz @ 0x8076DF4C
    r4 = r30;
    r8 = *(0x2c + r30); // lwz @ 0x8076DF54
    r0 = r5 + -1; // 0x8076DF5C
    /* lfs f0, 0x38(r1) */ // 0x8076DF60
    /* mulli r0, r0, 0x38 */ // 0x8076DF64
    r8 = r8 + r0; // 0x8076DF74
    /* stfs f0, 0xc(r8) */ // 0x8076DF78
    /* lfs f0, 0x3c(r1) */ // 0x8076DF7C
    /* stfs f0, 0x10(r8) */ // 0x8076DF80
    /* lfs f0, 0x40(r1) */ // 0x8076DF84
    /* stfs f0, 0x14(r8) */ // 0x8076DF88
    r8 = *(0x2a + r30); // lhz @ 0x8076DF8C
    r10 = *(0xc + r30); // lwz @ 0x8076DF90
    r0 = r8 + -1; // 0x8076DF94
    /* slwi r0, r0, 4 */ // 0x8076DF98
    r9 = r10 + r0; // 0x8076DF9C
    /* lwzx r8, r10, r0 */ // 0x8076DFA0
    r0 = *(4 + r9); // lwz @ 0x8076DFA4
    *(0x30 + r1) = r0; // stw @ 0x8076DFA8
    *(0x2c + r1) = r8; // stw @ 0x8076DFAC
    r0 = *(8 + r9); // lwz @ 0x8076DFB0
    *(0x34 + r1) = r0; // stw @ 0x8076DFB4
    r8 = *(0 + r10); // lwz @ 0x8076DFB8
    r0 = *(4 + r10); // lwz @ 0x8076DFBC
    *(0x24 + r1) = r0; // stw @ 0x8076DFC0
    *(0x20 + r1) = r8; // stw @ 0x8076DFC4
    r0 = *(8 + r10); // lwz @ 0x8076DFC8
    *(0x28 + r1) = r0; // stw @ 0x8076DFCC
    r8 = *(0x10 + r10); // lwz @ 0x8076DFD0
    r0 = *(0x14 + r10); // lwz @ 0x8076DFD4
    *(0x18 + r1) = r0; // stw @ 0x8076DFD8
    *(0x14 + r1) = r8; // stw @ 0x8076DFDC
    r0 = *(0x18 + r10); // lwz @ 0x8076DFE0
    *(0x1c + r1) = r0; // stw @ 0x8076DFE4
    FUN_8076E304(); // bl 0x8076E304
    r4 = *(0x2a + r30); // lhz @ 0x8076DFEC
    r3 = r30;
    r5 = *(0x2c + r30); // lwz @ 0x8076DFF4
    r0 = r4 + -1; // 0x8076DFF8
    /* lfs f0, 8(r1) */ // 0x8076DFFC
    /* mulli r0, r0, 0x38 */ // 0x8076E000
    r4 = r5 + r0; // 0x8076E004
    /* stfs f0, 0x18(r4) */ // 0x8076E008
    /* lfs f0, 0xc(r1) */ // 0x8076E00C
    /* stfs f0, 0x1c(r4) */ // 0x8076E010
    /* lfs f0, 0x10(r1) */ // 0x8076E014
    /* stfs f0, 0x20(r4) */ // 0x8076E018
    r4 = *(0x2a + r30); // lhz @ 0x8076E01C
    r5 = *(0xc + r30); // lwz @ 0x8076E020
    r0 = r4 + -1; // 0x8076E024
    r4 = *(0x2c + r30); // lwz @ 0x8076E028
    /* mulli r0, r0, 0x38 */ // 0x8076E02C
    /* lfs f0, 0(r5) */ // 0x8076E030
    r4 = r4 + r0; // 0x8076E034
    /* stfs f0, 0x24(r4) */ // 0x8076E038
    /* lfs f0, 4(r5) */ // 0x8076E03C
    /* stfs f0, 0x28(r4) */ // 0x8076E040
    /* lfs f0, 8(r5) */ // 0x8076E044
    /* stfs f0, 0x2c(r4) */ // 0x8076E048
    r4 = *(0x2a + r30); // lhz @ 0x8076E04C
    r6 = *(0x2c + r30); // lwz @ 0x8076E050
    r0 = r4 + -1; // 0x8076E054
    r5 = *(0x30 + r30); // lwz @ 0x8076E058
    /* mulli r0, r0, 0x38 */ // 0x8076E05C
    r4 = r6 + r0; // 0x8076E060
    FUN_8076E3B8(); // bl 0x8076E3B8
    r4 = *(0x2a + r30); // lhz @ 0x8076E068
    /* lis r3, 0 */ // 0x8076E06C
    r5 = *(0x2c + r30); // lwz @ 0x8076E070
    r0 = r4 + -1; // 0x8076E074
    /* lfs f2, 0(r3) */ // 0x8076E078
    /* mulli r0, r0, 0x38 */ // 0x8076E07C
    r3 = r5 + r0; // 0x8076E080
    /* stfs f1, 0x30(r3) */ // 0x8076E084
    r3 = *(0x2a + r30); // lhz @ 0x8076E088
    r4 = *(0x2c + r30); // lwz @ 0x8076E08C
    r0 = r3 + -1; // 0x8076E090
    /* mulli r0, r0, 0x38 */ // 0x8076E094
    r3 = r4 + r0; // 0x8076E098
    /* lfs f0, 0x30(r3) */ // 0x8076E09C
    /* fdivs f0, f2, f0 */ // 0x8076E0A0
    /* stfs f0, 0x34(r3) */ // 0x8076E0A4
    r0 = *(0x184 + r1); // lwz @ 0x8076E0A8
    r31 = *(0x17c + r1); // lwz @ 0x8076E0AC
    r30 = *(0x178 + r1); // lwz @ 0x8076E0B0
    r29 = *(0x174 + r1); // lwz @ 0x8076E0B4
    r28 = *(0x170 + r1); // lwz @ 0x8076E0B8
}