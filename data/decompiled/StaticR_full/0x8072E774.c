/* Function at 0x8072E774, size=1296 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 9 function(s) */

int FUN_8072E774(int r3, int r4, int r5)
{
    /* Stack frame: -144(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x88 + r1) = r30; // stw @ 0x8072E788
    *(0x84 + r1) = r29; // stw @ 0x8072E78C
    r5 = *(0x129 + r3); // lbz @ 0x8072E790
    if (==) goto 0x0x8072ebcc;
    /* lis r4, 0 */ // 0x8072E79C
    r0 = *(0x12e + r3); // lbz @ 0x8072E7A0
    r4 = *(0 + r4); // lwz @ 0x8072E7A4
    /* slwi r0, r0, 2 */ // 0x8072E7A8
    r4 = *(0xc + r4); // lwz @ 0x8072E7AC
    /* lwzx r4, r4, r0 */ // 0x8072E7B0
    r0 = *(0x38 + r4); // lwz @ 0x8072E7B4
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x8072E7B8
    if (==) goto 0x0x8072ebcc;
    r0 = *(0x13c + r3); // lbz @ 0x8072E7C0
    if (!=) goto 0x0x8072e7d8;
    r0 = *(0x156 + r3); // lbz @ 0x8072E7CC
    if (==) goto 0x0x8072ebcc;
    r0 = *(0x14a + r3); // lbz @ 0x8072E7D8
    if (==) goto 0x0x8072e904;
    r0 = *(0x7a + r3); // lbz @ 0x8072E7E4
    if (==) goto 0x0x8072e7f8;
    /* li r0, 0 */ // 0x8072E7F0
    *(0x7a + r3) = r0; // stb @ 0x8072E7F4
    r0 = *(0x14b + r3); // lbz @ 0x8072E7F8
    /* li r4, -1 */ // 0x8072E7FC
    *(0x64 + r3) = r4; // stw @ 0x8072E800
    if (==) goto 0x0x8072e814;
    /* li r0, 0 */ // 0x8072E80C
    *(0x10c + r3) = r0; // stb @ 0x8072E810
    r0 = *(0x7b + r3); // lbz @ 0x8072E814
    if (==) goto 0x0x8072e8ec;
    /* lis r4, 0 */ // 0x8072E820
    r4 = *(0 + r4); // lwz @ 0x8072E824
    r0 = *(0x10 + r4); // lbz @ 0x8072E828
    if (!=) goto 0x0x8072e8c0;
    r0 = *(4 + r3); // lbz @ 0x8072E834
    if (!=) goto 0x0x8072e8c0;
    r0 = *(0x12b + r3); // lbz @ 0x8072E840
    if (!=) goto 0x0x8072e8c0;
    r30 = *(0x25c + r3); // lwz @ 0x8072E84C
    if (==) goto 0x0x8072e890;
    r12 = *(0 + r30); // lwz @ 0x8072E858
    r3 = r30;
    r12 = *(0xc + r12); // lwz @ 0x8072E860
    /* mtctr r12 */ // 0x8072E864
    /* bctrl  */ // 0x8072E868
    r0 = *(0xb0 + r31); // lbz @ 0x8072E86C
    if (==) goto 0x0x8072e890;
    r12 = *(0 + r30); // lwz @ 0x8072E878
    r3 = r30;
    r4 = r31 + 0x72c; // 0x8072E880
    r12 = *(0x70 + r12); // lwz @ 0x8072E884
    /* mtctr r12 */ // 0x8072E888
    /* bctrl  */ // 0x8072E88C
    r3 = *(0x118 + r31); // lwz @ 0x8072E890
    FUN_8061E010(r4); // bl 0x8061E010
    r12 = *(0 + r3); // lwz @ 0x8072E898
    /* lis r4, 0 */ // 0x8072E89C
    /* lfs f1, 0(r4) */ // 0x8072E8A0
    /* li r4, 0x350 */ // 0x8072E8A4
    r12 = *(0xe4 + r12); // lwz @ 0x8072E8A8
    /* mtctr r12 */ // 0x8072E8AC
    /* bctrl  */ // 0x8072E8B0
    r3 = *(0x118 + r31); // lwz @ 0x8072E8B4
    /* li r4, 0x1a */ // 0x8072E8B8
    FUN_8061E02C(r4); // bl 0x8061E02C
    r3 = *(0x160 + r31); // lwz @ 0x8072E8C0
    /* li r4, 0 */ // 0x8072E8C4
    r12 = *(0 + r3); // lwz @ 0x8072E8C8
    r12 = *(0xc + r12); // lwz @ 0x8072E8CC
    /* mtctr r12 */ // 0x8072E8D0
    /* bctrl  */ // 0x8072E8D4
    /* li r30, 0 */ // 0x8072E8D8
    *(0x7b + r31) = r30; // stb @ 0x8072E8DC
    r3 = *(0x118 + r31); // lwz @ 0x8072E8E0
    FUN_8061F264(); // bl 0x8061F264
    *(0x794 + r31) = r30; // stb @ 0x8072E8E8
    r0 = *(0x7c + r31); // lbz @ 0x8072E8EC
    if (==) goto 0x0x8072ebcc;
    /* li r0, 0 */ // 0x8072E8F8
    *(0x7c + r31) = r0; // stb @ 0x8072E8FC
    /* b 0x8072ebcc */ // 0x8072E900
    r0 = *(0x79 + r3); // lbz @ 0x8072E904
    if (==) goto 0x0x8072eab0;
    r0 = *(0x12b + r3); // lbz @ 0x8072E910
    if (!=) goto 0x0x8072eaa8;
    if (==) goto 0x0x8072e9d4;
    r30 = *(0x250 + r3); // lwz @ 0x8072E924
    if (==) goto 0x0x8072ea30;
    r3 = r30 + 0x74; // 0x8072E930
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8072e948;
    /* li r3, 0 */ // 0x8072E940
    /* b 0x8072e94c */ // 0x8072E944
    r3 = *(0xc + r3); // lwz @ 0x8072E948
    /* li r0, 0 */ // 0x8072E950
    if (==) goto 0x0x8072e960;
    if (!=) goto 0x0x8072e964;
    /* li r0, 1 */ // 0x8072E960
    if (==) goto 0x0x8072ea30;
    r12 = *(0 + r30); // lwz @ 0x8072E96C
    r3 = r30;
    r12 = *(0x14 + r12); // lwz @ 0x8072E974
    /* mtctr r12 */ // 0x8072E978
    /* bctrl  */ // 0x8072E97C
    r12 = *(0 + r30); // lwz @ 0x8072E980
    r3 = r30;
    r4 = r31 + 0x6d0; // 0x8072E988
    r12 = *(0x74 + r12); // lwz @ 0x8072E98C
    /* mtctr r12 */ // 0x8072E990
    /* bctrl  */ // 0x8072E994
    r0 = *(0xb0 + r31); // lbz @ 0x8072E998
    if (==) goto 0x0x8072e9bc;
    r12 = *(0 + r30); // lwz @ 0x8072E9A4
    r3 = r30;
    r4 = r31 + 0x72c; // 0x8072E9AC
    r12 = *(0x70 + r12); // lwz @ 0x8072E9B0
    /* mtctr r12 */ // 0x8072E9B4
    /* bctrl  */ // 0x8072E9B8
    r12 = *(0 + r30); // lwz @ 0x8072E9BC
    r3 = r30;
    r12 = *(0x80 + r12); // lwz @ 0x8072E9C4
    /* mtctr r12 */ // 0x8072E9C8
    /* bctrl  */ // 0x8072E9CC
    /* b 0x8072ea30 */ // 0x8072E9D0
    r30 = *(0x250 + r3); // lwz @ 0x8072E9D4
    if (==) goto 0x0x8072ea30;
    r3 = r30 + 0x74; // 0x8072E9E0
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8072e9f8;
    /* li r3, 0 */ // 0x8072E9F0
    /* b 0x8072e9fc */ // 0x8072E9F4
    r3 = *(0xc + r3); // lwz @ 0x8072E9F8
    /* li r0, 0 */ // 0x8072EA00
    if (==) goto 0x0x8072ea10;
    if (!=) goto 0x0x8072ea14;
    /* li r0, 1 */ // 0x8072EA10
    if (==) goto 0x0x8072ea30;
    r12 = *(0 + r30); // lwz @ 0x8072EA1C
    r3 = r30;
    r12 = *(0x18 + r12); // lwz @ 0x8072EA24
    /* mtctr r12 */ // 0x8072EA28
    /* bctrl  */ // 0x8072EA2C
    r3 = *(0x254 + r31); // lwz @ 0x8072EA30
    r3 = r3 + 0x74; // 0x8072EA34
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8072ea4c;
    /* li r3, 0 */ // 0x8072EA44
    /* b 0x8072ea50 */ // 0x8072EA48
    r3 = *(0xc + r3); // lwz @ 0x8072EA4C
    /* li r0, 0 */ // 0x8072EA54
    if (==) goto 0x0x8072ea64;
    if (!=) goto 0x0x8072ea68;
    /* li r0, 1 */ // 0x8072EA64
    if (==) goto 0x0x8072eaa8;
    r0 = *(0x129 + r31); // lbz @ 0x8072EA70
    if (==) goto 0x0x8072ea94;
    r3 = *(0x254 + r31); // lwz @ 0x8072EA7C
    r12 = *(0 + r3); // lwz @ 0x8072EA80
    r12 = *(0x10 + r12); // lwz @ 0x8072EA84
    /* mtctr r12 */ // 0x8072EA88
    /* bctrl  */ // 0x8072EA8C
    /* b 0x8072eaa8 */ // 0x8072EA90
    r3 = *(0x254 + r31); // lwz @ 0x8072EA94
    r12 = *(0 + r3); // lwz @ 0x8072EA98
    r12 = *(0x18 + r12); // lwz @ 0x8072EA9C
    /* mtctr r12 */ // 0x8072EAA0
    /* bctrl  */ // 0x8072EAA4
    /* li r0, 0 */ // 0x8072EAA8
    *(0x79 + r31) = r0; // stb @ 0x8072EAAC
    r0 = *(0x7a + r31); // lbz @ 0x8072EAB0
    if (==) goto 0x0x8072eac4;
    /* li r0, 0 */ // 0x8072EABC
    *(0x7a + r31) = r0; // stb @ 0x8072EAC0
    r0 = *(0x14b + r31); // lbz @ 0x8072EAC4
    /* li r3, -1 */ // 0x8072EAC8
    *(0x64 + r31) = r3; // stw @ 0x8072EACC
    if (==) goto 0x0x8072eae0;
    /* li r0, 0 */ // 0x8072EAD8
    *(0x10c + r31) = r0; // stb @ 0x8072EADC
    r0 = *(0x7b + r31); // lbz @ 0x8072EAE0
    if (==) goto 0x0x8072ebb8;
    /* lis r3, 0 */ // 0x8072EAEC
    r3 = *(0 + r3); // lwz @ 0x8072EAF0
    r0 = *(0x10 + r3); // lbz @ 0x8072EAF4
    if (!=) goto 0x0x8072eb8c;
    r0 = *(4 + r31); // lbz @ 0x8072EB00
    if (!=) goto 0x0x8072eb8c;
    r0 = *(0x12b + r31); // lbz @ 0x8072EB0C
    if (!=) goto 0x0x8072eb8c;
    r30 = *(0x25c + r31); // lwz @ 0x8072EB18
    if (==) goto 0x0x8072eb5c;
    r12 = *(0 + r30); // lwz @ 0x8072EB24
    r3 = r30;
    r12 = *(0xc + r12); // lwz @ 0x8072EB2C
    /* mtctr r12 */ // 0x8072EB30
    /* bctrl  */ // 0x8072EB34
    r0 = *(0xb0 + r31); // lbz @ 0x8072EB38
    if (==) goto 0x0x8072eb5c;
    r12 = *(0 + r30); // lwz @ 0x8072EB44
    r3 = r30;
    r4 = r31 + 0x72c; // 0x8072EB4C
    r12 = *(0x70 + r12); // lwz @ 0x8072EB50
    /* mtctr r12 */ // 0x8072EB54
    /* bctrl  */ // 0x8072EB58
    r3 = *(0x118 + r31); // lwz @ 0x8072EB5C
    FUN_8061E010(r4); // bl 0x8061E010
    r12 = *(0 + r3); // lwz @ 0x8072EB64
    /* lis r4, 0 */ // 0x8072EB68
    /* lfs f1, 0(r4) */ // 0x8072EB6C
    /* li r4, 0x350 */ // 0x8072EB70
    r12 = *(0xe4 + r12); // lwz @ 0x8072EB74
    /* mtctr r12 */ // 0x8072EB78
    /* bctrl  */ // 0x8072EB7C
    r3 = *(0x118 + r31); // lwz @ 0x8072EB80
    /* li r4, 0x1a */ // 0x8072EB84
    FUN_8061E02C(r4); // bl 0x8061E02C
    r3 = *(0x160 + r31); // lwz @ 0x8072EB8C
    /* li r4, 0 */ // 0x8072EB90
    r12 = *(0 + r3); // lwz @ 0x8072EB94
    r12 = *(0xc + r12); // lwz @ 0x8072EB98
    /* mtctr r12 */ // 0x8072EB9C
    /* bctrl  */ // 0x8072EBA0
    /* li r30, 0 */ // 0x8072EBA4
    *(0x7b + r31) = r30; // stb @ 0x8072EBA8
    r3 = *(0x118 + r31); // lwz @ 0x8072EBAC
    FUN_8061F264(); // bl 0x8061F264
    *(0x794 + r31) = r30; // stb @ 0x8072EBB4
    r0 = *(0x7c + r31); // lbz @ 0x8072EBB8
    if (==) goto 0x0x8072ebcc;
    /* li r0, 0 */ // 0x8072EBC4
    *(0x7c + r31) = r0; // stb @ 0x8072EBC8
    r0 = *(0x69 + r31); // lbz @ 0x8072EBCC
    if (!=) goto 0x0x8072ebe4;
    r0 = *(0x6a + r31); // lbz @ 0x8072EBD8
    if (==) goto 0x0x8072efe0;
    r0 = *(0x79 + r31); // lbz @ 0x8072EBE4
    if (==) goto 0x0x8072ee08;
    r0 = *(0x7b + r31); // lbz @ 0x8072EBF0
    if (!=) goto 0x0x8072ee08;
    r0 = *(0x7c + r31); // lbz @ 0x8072EBFC
    if (!=) goto 0x0x8072ee08;
    r0 = *(4 + r31); // lbz @ 0x8072EC08
    if (!=) goto 0x0x8072ec90;
    r30 = *(0x250 + r31); // lwz @ 0x8072EC14
    if (==) goto 0x0x8072ec84;
    r12 = *(0 + r30); // lwz @ 0x8072EC20
    r3 = r30;
    r12 = *(0xc + r12); // lwz @ 0x8072EC28
    /* mtctr r12 */ // 0x8072EC2C
    /* bctrl  */ // 0x8072EC30
    r12 = *(0 + r30); // lwz @ 0x8072EC34
    r3 = r30;
    r4 = r31 + 0x6d0; // 0x8072EC3C
    r12 = *(0x74 + r12); // lwz @ 0x8072EC40
    /* mtctr r12 */ // 0x8072EC44
    /* bctrl  */ // 0x8072EC48
    r0 = *(0xb0 + r31); // lbz @ 0x8072EC4C
    if (==) goto 0x0x8072ec70;
    r12 = *(0 + r30); // lwz @ 0x8072EC58
    r3 = r30;
    r4 = r31 + 0x72c; // 0x8072EC60
    r12 = *(0x70 + r12); // lwz @ 0x8072EC64
    /* mtctr r12 */ // 0x8072EC68
    /* bctrl  */ // 0x8072EC6C
    r12 = *(0 + r30); // lwz @ 0x8072EC70
    r3 = r30;
    r12 = *(0x80 + r12); // lwz @ 0x8072EC78
    /* mtctr r12 */ // 0x8072EC7C
    /* bctrl  */ // 0x8072EC80
}