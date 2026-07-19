/* Function at 0x8077D8E4, size=372 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_8077D8E4(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x28 + r1) = r30; // stw @ 0x8077D8F4
    r30 = r3;
    FUN_8077DA58(); // bl 0x8077DA58
    r3 = *(0x20 + r30); // lwz @ 0x8077D900
    r0 = *(0x19c + r30); // lbz @ 0x8077D904
    r4 = *(0x46 + r3); // lha @ 0x8077D908
    r3 = *(0x160 + r30); // lwz @ 0x8077D90C
    /* slwi r0, r0, 1 */ // 0x8077D910
    /* clrlwi r31, r4, 0x10 */ // 0x8077D914
    /* lhax r0, r3, r0 */ // 0x8077D918
    if (!=) goto 0x0x8077d938;
    r0 = *(0x1bc + r30); // lbz @ 0x8077D924
    if (==) goto 0x0x8077d938;
    r3 = r30;
    FUN_8077D284(r3); // bl 0x8077D284
    r0 = *(0x19c + r30); // lbz @ 0x8077D938
    r3 = *(0x160 + r30); // lwz @ 0x8077D93C
    /* slwi r0, r0, 1 */ // 0x8077D940
    /* lhax r3, r3, r0 */ // 0x8077D944
    r0 = r3 + 2; // 0x8077D948
    if (!=) goto 0x0x8077d988;
    r0 = *(0x1bc + r30); // lbz @ 0x8077D954
    if (==) goto 0x0x8077d988;
    r3 = *(0x13c + r30); // lwz @ 0x8077D960
    r12 = *(0 + r3); // lwz @ 0x8077D964
    r12 = *(0xc + r12); // lwz @ 0x8077D968
    /* mtctr r12 */ // 0x8077D96C
    /* bctrl  */ // 0x8077D970
    /* lis r4, 0 */ // 0x8077D974
    r3 = *(0xd8 + r30); // lwz @ 0x8077D978
    /* lfs f1, 0(r4) */ // 0x8077D97C
    /* li r4, 0x275 */ // 0x8077D980
    FUN_808A0AC8(r4, r4); // bl 0x808A0AC8
    r0 = *(0x19c + r30); // lbz @ 0x8077D988
    r3 = *(0x160 + r30); // lwz @ 0x8077D98C
    /* slwi r0, r0, 1 */ // 0x8077D990
    /* lhax r3, r3, r0 */ // 0x8077D994
    r0 = r3 + 4; // 0x8077D998
    if (!=) goto 0x0x8077d9d0;
    r0 = *(0x1bc + r30); // lbz @ 0x8077D9A4
    if (==) goto 0x0x8077d9d0;
    /* lis r4, 0 */ // 0x8077D9B0
    /* lfs f1, 0x1b8(r30) */ // 0x8077D9B4
    r4 = r4 + 0; // 0x8077D9BC
    FUN_805A443C(r4, r3, r4); // bl 0x805A443C
    r3 = *(0xe4 + r30); // lwz @ 0x8077D9C4
    FUN_8077447C(r3, r4, r4); // bl 0x8077447C
    r0 = *(0x19c + r30); // lbz @ 0x8077D9D0
    r3 = *(0x160 + r30); // lwz @ 0x8077D9D4
    /* slwi r0, r0, 1 */ // 0x8077D9D8
    /* lhax r3, r3, r0 */ // 0x8077D9DC
    r0 = r3 + 6; // 0x8077D9E0
    if (!=) goto 0x0x8077da40;
    r0 = *(0x1bc + r30); // lbz @ 0x8077D9EC
    if (==) goto 0x0x8077da40;
    /* lis r3, 0 */ // 0x8077D9F8
    /* lis r4, 0 */ // 0x8077D9FC
    /* lfs f1, 0(r3) */ // 0x8077DA00
    r4 = r4 + 0; // 0x8077DA08
    FUN_805A443C(r3, r4, r3, r4); // bl 0x805A443C
    r3 = *(0xe4 + r30); // lwz @ 0x8077DA10
    FUN_8077447C(r3, r4, r4); // bl 0x8077447C
    r3 = *(0x19c + r30); // lbz @ 0x8077DA1C
    r0 = *(0x164 + r30); // lbz @ 0x8077DA20
    r3 = r3 + 1; // 0x8077DA24
    *(0x19c + r30) = r3; // stb @ 0x8077DA28
    /* clrlwi r3, r3, 0x18 */ // 0x8077DA2C
    if (!=) goto 0x0x8077da40;
    /* li r0, 0 */ // 0x8077DA38
    *(0x19c + r30) = r0; // stb @ 0x8077DA3C
    r0 = *(0x34 + r1); // lwz @ 0x8077DA40
    r31 = *(0x2c + r1); // lwz @ 0x8077DA44
    r30 = *(0x28 + r1); // lwz @ 0x8077DA48
    return;
}