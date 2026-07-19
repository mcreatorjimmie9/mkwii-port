/* Function at 0x8077B93C, size=532 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31 */
/* Calls: 9 function(s) */

int FUN_8077B93C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* li r0, 0 */ // 0x8077B948
    *(0x4c + r1) = r31; // stw @ 0x8077B94C
    r31 = r3;
    r6 = *(0xb0 + r3); // lwz @ 0x8077B954
    r5 = *(0x438 + r6); // lwz @ 0x8077B958
    r4 = *(0x43c + r6); // lwz @ 0x8077B95C
    *(0x1c + r1) = r4; // stw @ 0x8077B960
    *(0x18 + r1) = r5; // stw @ 0x8077B964
    r5 = *(0x440 + r6); // lwz @ 0x8077B968
    r4 = *(0x444 + r6); // lwz @ 0x8077B96C
    *(0x24 + r1) = r4; // stw @ 0x8077B970
    *(0x20 + r1) = r5; // stw @ 0x8077B974
    r5 = *(0x448 + r6); // lwz @ 0x8077B978
    r4 = *(0x44c + r6); // lwz @ 0x8077B97C
    *(0x2c + r1) = r4; // stw @ 0x8077B980
    *(0x28 + r1) = r5; // stw @ 0x8077B984
    r5 = *(0x450 + r6); // lwz @ 0x8077B988
    r4 = *(0x454 + r6); // lwz @ 0x8077B98C
    *(0x34 + r1) = r4; // stw @ 0x8077B990
    *(0x30 + r1) = r5; // stw @ 0x8077B994
    r5 = *(0x458 + r6); // lwz @ 0x8077B998
    r4 = *(0x45c + r6); // lwz @ 0x8077B99C
    *(0x3c + r1) = r4; // stw @ 0x8077B9A0
    *(0x38 + r1) = r5; // stw @ 0x8077B9A4
    r5 = *(0x460 + r6); // lwz @ 0x8077B9A8
    r4 = *(0x464 + r6); // lwz @ 0x8077B9AC
    *(0x44 + r1) = r4; // stw @ 0x8077B9B0
    *(0x40 + r1) = r5; // stw @ 0x8077B9B4
    r5 = *(0xb4 + r3); // lwz @ 0x8077B9B8
    r4 = *(0x2c + r5); // lhz @ 0x8077B9BC
    r4 = r4 | 4; // 0x8077B9C0
    *(0x2c + r5) = r4; // sth @ 0x8077B9C4
    *(0x54 + r5) = r0; // stb @ 0x8077B9C8
    /* lfs f0, 0x18(r1) */ // 0x8077B9CC
    /* stfs f0, 0x58(r5) */ // 0x8077B9D0
    /* lfs f0, 0x1c(r1) */ // 0x8077B9D4
    /* stfs f0, 0x5c(r5) */ // 0x8077B9D8
    /* lfs f0, 0x20(r1) */ // 0x8077B9DC
    /* stfs f0, 0x60(r5) */ // 0x8077B9E0
    /* lfs f0, 0x24(r1) */ // 0x8077B9E4
    /* stfs f0, 0x64(r5) */ // 0x8077B9E8
    /* lfs f0, 0x28(r1) */ // 0x8077B9EC
    /* stfs f0, 0x68(r5) */ // 0x8077B9F0
    /* lfs f0, 0x2c(r1) */ // 0x8077B9F4
    /* stfs f0, 0x6c(r5) */ // 0x8077B9F8
    /* lfs f0, 0x30(r1) */ // 0x8077B9FC
    /* stfs f0, 0x70(r5) */ // 0x8077BA00
    /* lfs f0, 0x34(r1) */ // 0x8077BA04
    /* stfs f0, 0x74(r5) */ // 0x8077BA08
    /* lfs f0, 0x38(r1) */ // 0x8077BA0C
    /* stfs f0, 0x78(r5) */ // 0x8077BA10
    /* lfs f0, 0x3c(r1) */ // 0x8077BA14
    /* stfs f0, 0x7c(r5) */ // 0x8077BA18
    /* lfs f0, 0x40(r1) */ // 0x8077BA1C
    /* stfs f0, 0x80(r5) */ // 0x8077BA20
    /* lfs f0, 0x44(r1) */ // 0x8077BA24
    /* stfs f0, 0x84(r5) */ // 0x8077BA28
    /* lfs f0, 0x24(r1) */ // 0x8077BA2C
    /* stfs f0, 0x30(r5) */ // 0x8077BA30
    /* lfs f0, 0x34(r1) */ // 0x8077BA34
    /* stfs f0, 0x34(r5) */ // 0x8077BA38
    /* lfs f0, 0x44(r1) */ // 0x8077BA3C
    /* stfs f0, 0x38(r5) */ // 0x8077BA40
    r4 = *(0xb0 + r3); // lwz @ 0x8077BA44
    r0 = *(0xb4 + r4); // lhz @ 0x8077BA48
    /* clrlwi r0, r0, 0x18 */ // 0x8077BA4C
    if (==) goto 0x0x8077ba6c;
    r3 = *(0xc0 + r3); // lwz @ 0x8077BA58
    r5 = r4 + 0x42c; // 0x8077BA5C
    /* li r4, 0 */ // 0x8077BA60
    FUN_80774234(r5, r4); // bl 0x80774234
    /* b 0x8077ba7c */ // 0x8077BA68
    r3 = *(0xc0 + r3); // lwz @ 0x8077BA6C
    r5 = r4 + 0x420; // 0x8077BA70
    /* li r4, 0 */ // 0x8077BA74
    FUN_80774234(r5, r4); // bl 0x80774234
    /* lis r5, 0 */ // 0x8077BA7C
    r3 = *(0xc0 + r31); // lwz @ 0x8077BA80
    r5 = r5 + 0; // 0x8077BA84
    /* li r4, 0 */ // 0x8077BA88
    FUN_80774368(r5, r5, r4); // bl 0x80774368
    r3 = *(0xc0 + r31); // lwz @ 0x8077BA90
    /* li r4, 0 */ // 0x8077BA94
    FUN_807746D4(r5, r4, r4); // bl 0x807746D4
    /* lis r4, 0 */ // 0x8077BA9C
    r4 = r4 + 0; // 0x8077BAA4
    FUN_805A443C(r4, r4, r3, r4); // bl 0x805A443C
    r3 = *(0xc0 + r31); // lwz @ 0x8077BAAC
    /* li r4, 0 */ // 0x8077BAB4
    FUN_807743F0(r4, r5, r4); // bl 0x807743F0
    r3 = *(0xc0 + r31); // lwz @ 0x8077BABC
    /* li r4, 0 */ // 0x8077BAC0
    /* li r5, 1 */ // 0x8077BAC4
    FUN_807745CC(r4, r4, r5); // bl 0x807745CC
    r3 = *(0xb0 + r31); // lwz @ 0x8077BACC
    /* lfs f1, 0xd0(r31) */ // 0x8077BAD0
    r4 = *(0xc0 + r31); // lwz @ 0x8077BAD4
    /* lfs f0, 0x30(r3) */ // 0x8077BAD8
    /* stfs f0, 0x14(r4) */ // 0x8077BADC
    /* lfs f0, 0x34(r3) */ // 0x8077BAE0
    /* stfs f0, 0x18(r4) */ // 0x8077BAE4
    /* lfs f0, 0x38(r3) */ // 0x8077BAE8
    /* stfs f0, 0x1c(r4) */ // 0x8077BAEC
    /* stfs f1, 0x20(r4) */ // 0x8077BAF0
    r3 = *(0xb0 + r31); // lwz @ 0x8077BAF4
    r0 = *(0xb4 + r3); // lhz @ 0x8077BAF8
    /* clrlwi r0, r0, 0x18 */ // 0x8077BAFC
    if (!=) goto 0x0x8077bb1c;
    /* lis r4, 0 */ // 0x8077BB08
    /* lis r3, 0 */ // 0x8077BB0C
    /* lfs f0, 0(r4) */ // 0x8077BB10
    /* stfs f0, 0(r3) */ // 0x8077BB14
    /* b 0x8077bb2c */ // 0x8077BB18
    /* lis r4, 0 */ // 0x8077BB1C
    /* lis r3, 0 */ // 0x8077BB20
    /* lfs f0, 0(r4) */ // 0x8077BB24
    /* stfs f0, 0(r3) */ // 0x8077BB28
    r3 = *(0xc0 + r31); // lwz @ 0x8077BB2C
    FUN_80774808(r4, r3); // bl 0x80774808
    r3 = r31;
    FUN_8077C118(r3); // bl 0x8077C118
    r0 = *(0x54 + r1); // lwz @ 0x8077BB3C
    r31 = *(0x4c + r1); // lwz @ 0x8077BB40
    return;
}