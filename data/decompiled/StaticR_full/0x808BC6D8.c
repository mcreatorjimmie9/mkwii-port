/* Function at 0x808BC6D8, size=5388 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r19 */
/* Calls: 52 function(s) */

int FUN_808BC6D8(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r19 */
    /* stmw r19, 0xc(r1) */ // 0x808BC6E4
    r31 = r3;
    FUN_808B3318(); // bl 0x808B3318
    r12 = *(0 + r31); // lwz @ 0x808BC6F0
    r3 = r31;
    r12 = *(0x70 + r12); // lwz @ 0x808BC6F8
    /* mtctr r12 */ // 0x808BC6FC
    /* bctrl  */ // 0x808BC700
    /* li r4, 1 */ // 0x808BC704
    FUN_8066A380(r3, r4); // bl 0x8066A380
    /* lis r3, 0 */ // 0x808BC70C
    r4 = *(0 + r3); // lwz @ 0x808BC710
    r3 = *(0 + r4); // lwz @ 0x808BC714
    r0 = *(0 + r3); // lwz @ 0x808BC718
    if (==) goto 0x0x808bc734;
    if (==) goto 0x0x808bc734;
    if (!=) goto 0x0x808bc748;
    /* lis r3, 0 */ // 0x808BC734
    r3 = *(0 + r3); // lwz @ 0x808BC738
    r0 = *(0x1760 + r3); // lwz @ 0x808BC73C
    if (==) goto 0x0x808bc75c;
    /* lis r3, 0 */ // 0x808BC748
    r3 = *(0 + r3); // lwz @ 0x808BC74C
    r0 = *(0x1780 + r3); // lwz @ 0x808BC750
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x808BC754
    if (==) goto 0x0x808bc76c;
    r3 = *(0x98 + r4); // lwz @ 0x808BC75C
    r0 = *(0x74 + r3); // lwz @ 0x808BC760
    *(0x6ec + r31) = r0; // stw @ 0x808BC764
    /* b 0x808bc774 */ // 0x808BC768
    /* li r0, 2 */ // 0x808BC76C
    *(0x6ec + r31) = r0; // stw @ 0x808BC770
    /* lis r3, 0 */ // 0x808BC774
    r3 = *(0 + r3); // lwz @ 0x808BC778
    r3 = *(0x98 + r3); // lwz @ 0x808BC77C
    r3 = *(0x12c + r3); // lwz @ 0x808BC780
    FUN_8089E030(r3); // bl 0x8089E030
    /* lis r4, 0 */ // 0x808BC788
    r20 = r3;
    r3 = *(0 + r4); // lwz @ 0x808BC790
    if (==) goto 0x0x808bc7ac;
    r3 = *(0x18 + r3); // lwz @ 0x808BC79C
    if (==) goto 0x0x808bc7ac;
    FUN_808E3D10(); // bl 0x808E3D10
    r0 = *(0x6ec + r31); // lwz @ 0x808BC7AC
    if (<=) goto 0x0x808bc7c4;
    if (==) goto 0x0x808bd000;
    /* b 0x808bdbd0 */ // 0x808BC7C0
    r3 = r31 + 0x24; // 0x808BC7C4
    /* li r4, 1 */ // 0x808BC7C8
    FUN_8064E1CC(r3, r4); // bl 0x8064E1CC
    r19 = r3;
    if (!=) goto 0x0x808bc7e4;
    /* li r19, 0 */ // 0x808BC7DC
    /* b 0x808bc834 */ // 0x808BC7E0
    /* lis r21, 0 */ // 0x808BC7E4
    r21 = r21 + 0; // 0x808BC7E8
    if (==) goto 0x0x808bc830;
    r12 = *(0 + r3); // lwz @ 0x808BC7F0
    r12 = *(0x28 + r12); // lwz @ 0x808BC7F4
    /* mtctr r12 */ // 0x808BC7F8
    /* bctrl  */ // 0x808BC7FC
    /* b 0x808bc818 */ // 0x808BC800
    if (!=) goto 0x0x808bc814;
    /* li r0, 1 */ // 0x808BC80C
    /* b 0x808bc824 */ // 0x808BC810
    r3 = *(0 + r3); // lwz @ 0x808BC814
    if (!=) goto 0x0x808bc804;
    /* li r0, 0 */ // 0x808BC820
    if (==) goto 0x0x808bc830;
    /* b 0x808bc834 */ // 0x808BC82C
    /* li r19, 0 */ // 0x808BC830
    /* li r0, 0 */ // 0x808BC834
    *(0x80 + r19) = r0; // stb @ 0x808BC838
    r3 = r31 + 0x24; // 0x808BC83C
    /* li r4, 2 */ // 0x808BC840
    FUN_8064E1CC(r3, r4); // bl 0x8064E1CC
    r19 = r3;
    if (!=) goto 0x0x808bc85c;
    /* li r19, 0 */ // 0x808BC854
    /* b 0x808bc8ac */ // 0x808BC858
    /* lis r21, 0 */ // 0x808BC85C
    r21 = r21 + 0; // 0x808BC860
    if (==) goto 0x0x808bc8a8;
    r12 = *(0 + r3); // lwz @ 0x808BC868
    r12 = *(0x28 + r12); // lwz @ 0x808BC86C
    /* mtctr r12 */ // 0x808BC870
    /* bctrl  */ // 0x808BC874
    /* b 0x808bc890 */ // 0x808BC878
    if (!=) goto 0x0x808bc88c;
    /* li r0, 1 */ // 0x808BC884
    /* b 0x808bc89c */ // 0x808BC888
    r3 = *(0 + r3); // lwz @ 0x808BC88C
    if (!=) goto 0x0x808bc87c;
    /* li r0, 0 */ // 0x808BC898
    if (==) goto 0x0x808bc8a8;
    /* b 0x808bc8ac */ // 0x808BC8A4
    /* li r19, 0 */ // 0x808BC8A8
    /* mulli r25, r20, 0xc */ // 0x808BC8AC
    /* lis r3, 0 */ // 0x808BC8B0
    /* li r0, 1 */ // 0x808BC8B4
    *(0x80 + r19) = r0; // stb @ 0x808BC8B8
    /* lis r29, 0 */ // 0x808BC8BC
    /* mulli r26, r20, 0x30 */ // 0x808BC8C0
    /* lis r30, 0 */ // 0x808BC8C4
    r3 = r3 + 0; // 0x808BC8C8
    r23 = r31 + r25; // 0x808BC8CC
    r29 = r29 + 0; // 0x808BC8D0
    r24 = r3 + r26; // 0x808BC8D4
    r30 = r30 + 0; // 0x808BC8D8
    /* li r21, 0 */ // 0x808BC8DC
    /* lis r20, 0 */ // 0x808BC8E0
    /* b 0x808bcbc4 */ // 0x808BC8E4
    r3 = r31 + 0x24; // 0x808BC8E8
    /* li r4, 1 */ // 0x808BC8EC
    FUN_8064E1CC(r3, r4); // bl 0x8064E1CC
    r4 = r21;
    r3 = r3 + 0x68; // 0x808BC8F8
    FUN_8064E1CC(r3, r4, r4, r3); // bl 0x8064E1CC
    /* li r4, 0 */ // 0x808BC900
    r3 = r3 + 0x68; // 0x808BC904
    FUN_8064E1CC(r4, r3, r4, r3); // bl 0x8064E1CC
    r27 = r3;
    if (!=) goto 0x0x808bc920;
    /* li r27, 0 */ // 0x808BC918
    /* b 0x808bc968 */ // 0x808BC91C
    if (==) goto 0x0x808bc964;
    r12 = *(0 + r3); // lwz @ 0x808BC924
    r12 = *(0x28 + r12); // lwz @ 0x808BC928
    /* mtctr r12 */ // 0x808BC92C
    /* bctrl  */ // 0x808BC930
    /* b 0x808bc94c */ // 0x808BC934
    if (!=) goto 0x0x808bc948;
    /* li r0, 1 */ // 0x808BC940
    /* b 0x808bc958 */ // 0x808BC944
    r3 = *(0 + r3); // lwz @ 0x808BC948
    if (!=) goto 0x0x808bc938;
    /* li r0, 0 */ // 0x808BC954
    if (==) goto 0x0x808bc964;
    /* b 0x808bc968 */ // 0x808BC960
    /* li r27, 0 */ // 0x808BC964
    if (!=) goto 0x0x808bc978;
    /* li r27, 0 */ // 0x808BC970
    /* b 0x808bc9c4 */ // 0x808BC974
    if (==) goto 0x0x808bc9c0;
    r12 = *(0 + r27); // lwz @ 0x808BC97C
    r3 = r27;
    r12 = *(0x28 + r12); // lwz @ 0x808BC984
    /* mtctr r12 */ // 0x808BC988
    /* bctrl  */ // 0x808BC98C
    /* b 0x808bc9a8 */ // 0x808BC990
    if (!=) goto 0x0x808bc9a4;
    /* li r0, 1 */ // 0x808BC99C
    /* b 0x808bc9b4 */ // 0x808BC9A0
    r3 = *(0 + r3); // lwz @ 0x808BC9A4
    if (!=) goto 0x0x808bc994;
    /* li r0, 0 */ // 0x808BC9B0
    if (==) goto 0x0x808bc9c0;
    /* b 0x808bc9c4 */ // 0x808BC9BC
    /* li r27, 0 */ // 0x808BC9C0
    r12 = *(0 + r31); // lwz @ 0x808BC9C4
    r3 = r31;
    r12 = *(0x68 + r12); // lwz @ 0x808BC9CC
    /* mtctr r12 */ // 0x808BC9D0
    /* bctrl  */ // 0x808BC9D4
    r4 = r3;
    r3 = r27;
    FUN_80649FD0(r4, r3); // bl 0x80649FD0
    r3 = *(0x6ec + r31); // lwz @ 0x808BC9E4
    /* li r4, 0 */ // 0x808BC9E8
    /* mulli r0, r3, 6 */ // 0x808BC9EC
    r5 = r23 + r0; // 0x808BC9F0
    r0 = *(0x6c8 + r5); // lbz @ 0x808BC9F4
    if (==) goto 0x0x808bca14;
    if (!=) goto 0x0x808bca14;
    /* mulli r0, r3, 0x18 */ // 0x808BCA08
    /* lwzx r22, r24, r0 */ // 0x808BCA0C
    /* b 0x808bcb0c */ // 0x808BCA10
    if (==) goto 0x0x808bca20;
    /* li r4, 1 */ // 0x808BCA1C
    r0 = *(0x6c9 + r5); // lbz @ 0x808BCA20
    if (==) goto 0x0x808bca44;
    if (!=) goto 0x0x808bca44;
    /* mulli r0, r3, 0x18 */ // 0x808BCA34
    r3 = r24 + r0; // 0x808BCA38
    r22 = *(4 + r3); // lwz @ 0x808BCA3C
    /* b 0x808bcb0c */ // 0x808BCA40
    if (==) goto 0x0x808bca50;
    r4 = r4 + 1; // 0x808BCA4C
    r0 = *(0x6ca + r5); // lbz @ 0x808BCA50
    if (==) goto 0x0x808bca74;
    if (!=) goto 0x0x808bca74;
    /* mulli r0, r3, 0x18 */ // 0x808BCA64
    r3 = r24 + r0; // 0x808BCA68
    r22 = *(8 + r3); // lwz @ 0x808BCA6C
    /* b 0x808bcb0c */ // 0x808BCA70
    if (==) goto 0x0x808bca80;
    r4 = r4 + 1; // 0x808BCA7C
    r0 = *(0x6cb + r5); // lbz @ 0x808BCA80
    if (==) goto 0x0x808bcaa4;
    if (!=) goto 0x0x808bcaa4;
    /* mulli r0, r3, 0x18 */ // 0x808BCA94
    r3 = r24 + r0; // 0x808BCA98
    r22 = *(0xc + r3); // lwz @ 0x808BCA9C
    /* b 0x808bcb0c */ // 0x808BCAA0
    if (==) goto 0x0x808bcab0;
    r4 = r4 + 1; // 0x808BCAAC
    r0 = *(0x6cc + r5); // lbz @ 0x808BCAB0
    if (==) goto 0x0x808bcad4;
    if (!=) goto 0x0x808bcad4;
    /* mulli r0, r3, 0x18 */ // 0x808BCAC4
    r3 = r24 + r0; // 0x808BCAC8
    r22 = *(0x10 + r3); // lwz @ 0x808BCACC
    /* b 0x808bcb0c */ // 0x808BCAD0
    if (==) goto 0x0x808bcae0;
    r4 = r4 + 1; // 0x808BCADC
    r0 = *(0x6cd + r5); // lbz @ 0x808BCAE0
    if (==) goto 0x0x808bcb04;
    if (!=) goto 0x0x808bcb04;
    /* mulli r0, r3, 0x18 */ // 0x808BCAF4
    r3 = r24 + r0; // 0x808BCAF8
    r22 = *(0x14 + r3); // lwz @ 0x808BCAFC
    /* b 0x808bcb0c */ // 0x808BCB00
    /* li r22, -1 */ // 0x808BCB08
    r3 = r31;
    r4 = r27;
    r5 = r22;
    FUN_808BE50C(r3, r4, r5); // bl 0x808BE50C
    if (!=) goto 0x0x808bcb58;
    r12 = *(0 + r31); // lwz @ 0x808BCB24
    r3 = r31;
    r4 = r27;
    r12 = *(0x78 + r12); // lwz @ 0x808BCB30
    /* mtctr r12 */ // 0x808BCB34
    /* bctrl  */ // 0x808BCB38
    r12 = *(0 + r31); // lwz @ 0x808BCB3C
    r3 = r31;
    r4 = r27;
    /* li r5, 0 */ // 0x808BCB48
    r12 = *(0x64 + r12); // lwz @ 0x808BCB4C
    /* mtctr r12 */ // 0x808BCB50
    /* bctrl  */ // 0x808BCB54
    r3 = *(0 + r20); // lwz @ 0x808BCB58
    r3 = *(0 + r3); // lwz @ 0x808BCB5C
    r3 = *(0 + r3); // lwz @ 0x808BCB60
    FUN_808CF8D8(); // bl 0x808CF8D8
    if (!=) goto 0x0x808bcbc0;
    r3 = *(0 + r20); // lwz @ 0x808BCB70
    r3 = *(0x98 + r3); // lwz @ 0x808BCB74
    r0 = *(0x13c + r3); // lwz @ 0x808BCB78
    if (!=) goto 0x0x808bcbc0;
    if (==) goto 0x0x808bcbc0;
    r12 = *(0 + r31); // lwz @ 0x808BCB8C
    r3 = r31;
    r4 = r27;
    r12 = *(0x78 + r12); // lwz @ 0x808BCB98
    /* mtctr r12 */ // 0x808BCB9C
    /* bctrl  */ // 0x808BCBA0
    r12 = *(0 + r31); // lwz @ 0x808BCBA4
    r3 = r31;
    r4 = r27;
    /* li r5, 0 */ // 0x808BCBB0
    r12 = *(0x64 + r12); // lwz @ 0x808BCBB4
    /* mtctr r12 */ // 0x808BCBB8
    /* bctrl  */ // 0x808BCBBC
    r21 = r21 + 1; // 0x808BCBC0
    r0 = *(0xa08 + r31); // lwz @ 0x808BCBC4
    if (<) goto 0x0x808bc8e8;
    /* lis r3, 0 */ // 0x808BCBD0
    /* lis r29, 0 */ // 0x808BCBD4
    /* lis r20, 0 */ // 0x808BCBD8
    r23 = r31 + r25; // 0x808BCBDC
    r3 = r3 + 0; // 0x808BCBE0
    r29 = r29 + 0; // 0x808BCBE4
    r24 = r3 + r26; // 0x808BCBE8
    r20 = r20 + 0; // 0x808BCBEC
    /* li r21, 0 */ // 0x808BCBF0
    /* b 0x808bcff0 */ // 0x808BCBF4
    r3 = r31 + 0x24; // 0x808BCBF8
    /* li r4, 2 */ // 0x808BCBFC
    FUN_8064E1CC(r3, r4); // bl 0x8064E1CC
    r4 = r21;
    r3 = r3 + 0x68; // 0x808BCC08
    FUN_8064E1CC(r3, r4, r4, r3); // bl 0x8064E1CC
    /* li r4, 0 */ // 0x808BCC10
    r3 = r3 + 0x68; // 0x808BCC14
    FUN_8064E1CC(r4, r3, r4, r3); // bl 0x8064E1CC
    r19 = r3;
    if (!=) goto 0x0x808bcc30;
    /* li r19, 0 */ // 0x808BCC28
    /* b 0x808bcc78 */ // 0x808BCC2C
    if (==) goto 0x0x808bcc74;
    r12 = *(0 + r3); // lwz @ 0x808BCC34
    r12 = *(0x28 + r12); // lwz @ 0x808BCC38
    /* mtctr r12 */ // 0x808BCC3C
    /* bctrl  */ // 0x808BCC40
    /* b 0x808bcc5c */ // 0x808BCC44
    if (!=) goto 0x0x808bcc58;
    /* li r0, 1 */ // 0x808BCC50
    /* b 0x808bcc68 */ // 0x808BCC54
    r3 = *(0 + r3); // lwz @ 0x808BCC58
    if (!=) goto 0x0x808bcc48;
    /* li r0, 0 */ // 0x808BCC64
    if (==) goto 0x0x808bcc74;
    /* b 0x808bcc78 */ // 0x808BCC70
    /* li r19, 0 */ // 0x808BCC74
    if (!=) goto 0x0x808bcc88;
    /* li r19, 0 */ // 0x808BCC80
    /* b 0x808bccd4 */ // 0x808BCC84
    if (==) goto 0x0x808bccd0;
    r12 = *(0 + r19); // lwz @ 0x808BCC8C
    r3 = r19;
    r12 = *(0x28 + r12); // lwz @ 0x808BCC94
    /* mtctr r12 */ // 0x808BCC98
    /* bctrl  */ // 0x808BCC9C
    /* b 0x808bccb8 */ // 0x808BCCA0
    if (!=) goto 0x0x808bccb4;
    /* li r0, 1 */ // 0x808BCCAC
    /* b 0x808bccc4 */ // 0x808BCCB0
    r3 = *(0 + r3); // lwz @ 0x808BCCB4
    if (!=) goto 0x0x808bcca4;
    /* li r0, 0 */ // 0x808BCCC0
    if (==) goto 0x0x808bccd0;
    /* b 0x808bccd4 */ // 0x808BCCCC
    /* li r19, 0 */ // 0x808BCCD0
    r3 = r19;
    /* li r4, 0 */ // 0x808BCCD8
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    r3 = r31 + 0x24; // 0x808BCCE0
    /* li r4, 2 */ // 0x808BCCE4
    FUN_8064E1CC(r3, r4, r3, r4); // bl 0x8064E1CC
    r4 = r21;
    r3 = r3 + 0x68; // 0x808BCCF0
    FUN_8064E1CC(r3, r4, r4, r3); // bl 0x8064E1CC
    /* li r4, 1 */ // 0x808BCCF8
    r3 = r3 + 0x68; // 0x808BCCFC
    FUN_8064E1CC(r4, r3, r4, r3); // bl 0x8064E1CC
    r19 = r3;
    if (!=) goto 0x0x808bcd18;
    /* li r19, 0 */ // 0x808BCD10
    /* b 0x808bcd60 */ // 0x808BCD14
    if (==) goto 0x0x808bcd5c;
    r12 = *(0 + r3); // lwz @ 0x808BCD1C
    r12 = *(0x28 + r12); // lwz @ 0x808BCD20
    /* mtctr r12 */ // 0x808BCD24
    /* bctrl  */ // 0x808BCD28
    /* b 0x808bcd44 */ // 0x808BCD2C
    if (!=) goto 0x0x808bcd40;
    /* li r0, 1 */ // 0x808BCD38
    /* b 0x808bcd50 */ // 0x808BCD3C
    r3 = *(0 + r3); // lwz @ 0x808BCD40
    if (!=) goto 0x0x808bcd30;
    /* li r0, 0 */ // 0x808BCD4C
    if (==) goto 0x0x808bcd5c;
    /* b 0x808bcd60 */ // 0x808BCD58
    /* li r19, 0 */ // 0x808BCD5C
    if (!=) goto 0x0x808bcd70;
    /* li r19, 0 */ // 0x808BCD68
    /* b 0x808bcdbc */ // 0x808BCD6C
    if (==) goto 0x0x808bcdb8;
    r12 = *(0 + r19); // lwz @ 0x808BCD74
    r3 = r19;
    r12 = *(0x28 + r12); // lwz @ 0x808BCD7C
    /* mtctr r12 */ // 0x808BCD80
    /* bctrl  */ // 0x808BCD84
    /* b 0x808bcda0 */ // 0x808BCD88
    if (!=) goto 0x0x808bcd9c;
    /* li r0, 1 */ // 0x808BCD94
    /* b 0x808bcdac */ // 0x808BCD98
    r3 = *(0 + r3); // lwz @ 0x808BCD9C
    if (!=) goto 0x0x808bcd8c;
    /* li r0, 0 */ // 0x808BCDA8
    if (==) goto 0x0x808bcdb8;
    /* b 0x808bcdbc */ // 0x808BCDB4
    /* li r19, 0 */ // 0x808BCDB8
    r3 = r19;
    /* li r4, 0 */ // 0x808BCDC0
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    r5 = *(0x6ec + r31); // lwz @ 0x808BCDC8
    /* li r3, 0 */ // 0x808BCDCC
    /* mulli r0, r5, 6 */ // 0x808BCDD0
    r4 = r23 + r0; // 0x808BCDD4
    r0 = *(0x6c8 + r4); // lbz @ 0x808BCDD8
    if (==) goto 0x0x808bcdf8;
    if (!=) goto 0x0x808bcdf8;
    /* mulli r0, r5, 0x18 */ // 0x808BCDEC
    /* lwzx r0, r24, r0 */ // 0x808BCDF0
    /* b 0x808bcef0 */ // 0x808BCDF4
    if (==) goto 0x0x808bce04;
    /* li r3, 1 */ // 0x808BCE00
    r0 = *(0x6c9 + r4); // lbz @ 0x808BCE04
    if (==) goto 0x0x808bce28;
    if (!=) goto 0x0x808bce28;
    /* mulli r0, r5, 0x18 */ // 0x808BCE18
    r3 = r24 + r0; // 0x808BCE1C
    r0 = *(4 + r3); // lwz @ 0x808BCE20
    /* b 0x808bcef0 */ // 0x808BCE24
    if (==) goto 0x0x808bce34;
    r3 = r3 + 1; // 0x808BCE30
    r0 = *(0x6ca + r4); // lbz @ 0x808BCE34
    if (==) goto 0x0x808bce58;
    if (!=) goto 0x0x808bce58;
    /* mulli r0, r5, 0x18 */ // 0x808BCE48
    r3 = r24 + r0; // 0x808BCE4C
    r0 = *(8 + r3); // lwz @ 0x808BCE50
    /* b 0x808bcef0 */ // 0x808BCE54
    if (==) goto 0x0x808bce64;
    r3 = r3 + 1; // 0x808BCE60
    r0 = *(0x6cb + r4); // lbz @ 0x808BCE64
    if (==) goto 0x0x808bce88;
    if (!=) goto 0x0x808bce88;
    /* mulli r0, r5, 0x18 */ // 0x808BCE78
    r3 = r24 + r0; // 0x808BCE7C
    r0 = *(0xc + r3); // lwz @ 0x808BCE80
    /* b 0x808bcef0 */ // 0x808BCE84
    if (==) goto 0x0x808bce94;
    r3 = r3 + 1; // 0x808BCE90
    r0 = *(0x6cc + r4); // lbz @ 0x808BCE94
    if (==) goto 0x0x808bceb8;
    if (!=) goto 0x0x808bceb8;
    /* mulli r0, r5, 0x18 */ // 0x808BCEA8
    r3 = r24 + r0; // 0x808BCEAC
    r0 = *(0x10 + r3); // lwz @ 0x808BCEB0
    /* b 0x808bcef0 */ // 0x808BCEB4
    if (==) goto 0x0x808bcec4;
    r3 = r3 + 1; // 0x808BCEC0
    r0 = *(0x6cd + r4); // lbz @ 0x808BCEC4
    if (==) goto 0x0x808bcee8;
    if (!=) goto 0x0x808bcee8;
    /* mulli r0, r5, 0x18 */ // 0x808BCED8
    r3 = r24 + r0; // 0x808BCEDC
    r0 = *(0x14 + r3); // lwz @ 0x808BCEE0
    /* b 0x808bcef0 */ // 0x808BCEE4
    /* li r0, -1 */ // 0x808BCEEC
    if (!=) goto 0x0x808bcfec;
    r0 = r5 + -2; // 0x808BCEF8
    r3 = r31 + 0x24; // 0x808BCEFC
    /* cntlzw r0, r0 */ // 0x808BCF00
    /* srwi r4, r0, 5 */ // 0x808BCF04
    r4 = r4 + 1; // 0x808BCF08
    FUN_8064E1CC(r3, r4); // bl 0x8064E1CC
    r4 = r21;
    r3 = r3 + 0x68; // 0x808BCF14
    FUN_8064E1CC(r4, r4, r3); // bl 0x8064E1CC
    /* li r4, 0 */ // 0x808BCF1C
    r3 = r3 + 0x68; // 0x808BCF20
    FUN_8064E1CC(r4, r3, r4, r3); // bl 0x8064E1CC
    r19 = r3;
    if (!=) goto 0x0x808bcf3c;
    /* li r19, 0 */ // 0x808BCF34
    /* b 0x808bcf84 */ // 0x808BCF38
    if (==) goto 0x0x808bcf80;
    r12 = *(0 + r3); // lwz @ 0x808BCF40
    r12 = *(0x28 + r12); // lwz @ 0x808BCF44
    /* mtctr r12 */ // 0x808BCF48
    /* bctrl  */ // 0x808BCF4C
    /* b 0x808bcf68 */ // 0x808BCF50
    if (!=) goto 0x0x808bcf64;
    /* li r0, 1 */ // 0x808BCF5C
    /* b 0x808bcf74 */ // 0x808BCF60
    r3 = *(0 + r3); // lwz @ 0x808BCF64
    if (!=) goto 0x0x808bcf54;
    /* li r0, 0 */ // 0x808BCF70
    if (==) goto 0x0x808bcf80;
    /* b 0x808bcf84 */ // 0x808BCF7C
    /* li r19, 0 */ // 0x808BCF80
    if (!=) goto 0x0x808bcf94;
    /* li r19, 0 */ // 0x808BCF8C
    /* b 0x808bcfe0 */ // 0x808BCF90
    if (==) goto 0x0x808bcfdc;
    r12 = *(0 + r19); // lwz @ 0x808BCF98
    r3 = r19;
    r12 = *(0x28 + r12); // lwz @ 0x808BCFA0
    /* mtctr r12 */ // 0x808BCFA4
    /* bctrl  */ // 0x808BCFA8
    /* b 0x808bcfc4 */ // 0x808BCFAC
    if (!=) goto 0x0x808bcfc0;
    /* li r0, 1 */ // 0x808BCFB8
    /* b 0x808bcfd0 */ // 0x808BCFBC
    r3 = *(0 + r3); // lwz @ 0x808BCFC0
    if (!=) goto 0x0x808bcfb0;
    /* li r0, 0 */ // 0x808BCFCC
    if (==) goto 0x0x808bcfdc;
    /* b 0x808bcfe0 */ // 0x808BCFD8
    /* li r19, 0 */ // 0x808BCFDC
    r3 = r19;
    /* li r4, 0 */ // 0x808BCFE4
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    r21 = r21 + 1; // 0x808BCFEC
    r0 = *(0xa08 + r31); // lwz @ 0x808BCFF0
    if (<) goto 0x0x808bcbf8;
    /* b 0x808bdbd0 */ // 0x808BCFFC
    r3 = r31 + 0x24; // 0x808BD000
    /* li r4, 1 */ // 0x808BD004
    FUN_8064E1CC(r3, r4); // bl 0x8064E1CC
    r19 = r3;
    if (!=) goto 0x0x808bd020;
    /* li r19, 0 */ // 0x808BD018
    /* b 0x808bd070 */ // 0x808BD01C
    /* lis r21, 0 */ // 0x808BD020
    r21 = r21 + 0; // 0x808BD024
    if (==) goto 0x0x808bd06c;
    r12 = *(0 + r3); // lwz @ 0x808BD02C
    r12 = *(0x28 + r12); // lwz @ 0x808BD030
    /* mtctr r12 */ // 0x808BD034
    /* bctrl  */ // 0x808BD038
    /* b 0x808bd054 */ // 0x808BD03C
    if (!=) goto 0x0x808bd050;
    /* li r0, 1 */ // 0x808BD048
    /* b 0x808bd060 */ // 0x808BD04C
    r3 = *(0 + r3); // lwz @ 0x808BD050
    if (!=) goto 0x0x808bd040;
    /* li r0, 0 */ // 0x808BD05C
    if (==) goto 0x0x808bd06c;
    /* b 0x808bd070 */ // 0x808BD068
    /* li r19, 0 */ // 0x808BD06C
    /* li r0, 1 */ // 0x808BD070
    *(0x80 + r19) = r0; // stb @ 0x808BD074
    r3 = r31 + 0x24; // 0x808BD078
    /* li r4, 2 */ // 0x808BD07C
    FUN_8064E1CC(r3, r4); // bl 0x8064E1CC
    r19 = r3;
    if (!=) goto 0x0x808bd098;
    /* li r19, 0 */ // 0x808BD090
    /* b 0x808bd0e8 */ // 0x808BD094
    /* lis r21, 0 */ // 0x808BD098
    r21 = r21 + 0; // 0x808BD09C
    if (==) goto 0x0x808bd0e4;
    r12 = *(0 + r3); // lwz @ 0x808BD0A4
    r12 = *(0x28 + r12); // lwz @ 0x808BD0A8
    /* mtctr r12 */ // 0x808BD0AC
    /* bctrl  */ // 0x808BD0B0
    /* b 0x808bd0cc */ // 0x808BD0B4
    if (!=) goto 0x0x808bd0c8;
    /* li r0, 1 */ // 0x808BD0C0
    /* b 0x808bd0d8 */ // 0x808BD0C4
    r3 = *(0 + r3); // lwz @ 0x808BD0C8
    if (!=) goto 0x0x808bd0b8;
    /* li r0, 0 */ // 0x808BD0D4
    if (==) goto 0x0x808bd0e4;
    /* b 0x808bd0e8 */ // 0x808BD0E0
    /* li r19, 0 */ // 0x808BD0E4
    /* mulli r22, r20, 0xc */ // 0x808BD0E8
    /* lis r3, 0 */ // 0x808BD0EC
    /* lis r28, 0 */ // 0x808BD0F0
    /* lis r29, 0 */ // 0x808BD0F4
    /* mulli r21, r20, 0x30 */ // 0x808BD0F8
    /* li r0, 0 */ // 0x808BD0FC
    r3 = r3 + 0; // 0x808BD100
    *(0x80 + r19) = r0; // stb @ 0x808BD104
    r24 = r31 + r22; // 0x808BD108
    r28 = r28 + 0; // 0x808BD10C
    r23 = r3 + r21; // 0x808BD110
    r29 = r29 + 0; // 0x808BD114
    /* li r20, 0 */ // 0x808BD118
    /* lis r30, 0 */ // 0x808BD11C
    /* b 0x808bd5fc */ // 0x808BD120
    r3 = r31 + 0x24; // 0x808BD124
    /* li r4, 2 */ // 0x808BD128
    FUN_8064E1CC(r3, r4); // bl 0x8064E1CC
    r4 = r20;
    r3 = r3 + 0x68; // 0x808BD134
    FUN_8064E1CC(r3, r4, r4, r3); // bl 0x8064E1CC
    /* li r4, 0 */ // 0x808BD13C
    r3 = r3 + 0x68; // 0x808BD140
    FUN_8064E1CC(r4, r3, r4, r3); // bl 0x8064E1CC
    r26 = r3;
    if (!=) goto 0x0x808bd15c;
    /* li r26, 0 */ // 0x808BD154
    /* b 0x808bd1a4 */ // 0x808BD158
    if (==) goto 0x0x808bd1a0;
    r12 = *(0 + r3); // lwz @ 0x808BD160
    r12 = *(0x28 + r12); // lwz @ 0x808BD164
    /* mtctr r12 */ // 0x808BD168
    /* bctrl  */ // 0x808BD16C
    /* b 0x808bd188 */ // 0x808BD170
    if (!=) goto 0x0x808bd184;
    /* li r0, 1 */ // 0x808BD17C
    /* b 0x808bd194 */ // 0x808BD180
    r3 = *(0 + r3); // lwz @ 0x808BD184
    if (!=) goto 0x0x808bd174;
    /* li r0, 0 */ // 0x808BD190
    if (==) goto 0x0x808bd1a0;
    /* b 0x808bd1a4 */ // 0x808BD19C
    /* li r26, 0 */ // 0x808BD1A0
    if (!=) goto 0x0x808bd1b4;
    /* li r26, 0 */ // 0x808BD1AC
    /* b 0x808bd200 */ // 0x808BD1B0
    if (==) goto 0x0x808bd1fc;
    r12 = *(0 + r26); // lwz @ 0x808BD1B8
    r3 = r26;
    r12 = *(0x28 + r12); // lwz @ 0x808BD1C0
    /* mtctr r12 */ // 0x808BD1C4
    /* bctrl  */ // 0x808BD1C8
    /* b 0x808bd1e4 */ // 0x808BD1CC
    if (!=) goto 0x0x808bd1e0;
    /* li r0, 1 */ // 0x808BD1D8
    /* b 0x808bd1f0 */ // 0x808BD1DC
    r3 = *(0 + r3); // lwz @ 0x808BD1E0
    if (!=) goto 0x0x808bd1d0;
    /* li r0, 0 */ // 0x808BD1EC
    if (==) goto 0x0x808bd1fc;
    /* b 0x808bd200 */ // 0x808BD1F8
    /* li r26, 0 */ // 0x808BD1FC
    r3 = r31 + 0x24; // 0x808BD200
    /* li r4, 2 */ // 0x808BD204
    FUN_8064E1CC(r3, r4); // bl 0x8064E1CC
    r4 = r20;
    r3 = r3 + 0x68; // 0x808BD210
    FUN_8064E1CC(r3, r4, r4, r3); // bl 0x8064E1CC
    /* li r4, 1 */ // 0x808BD218
    r3 = r3 + 0x68; // 0x808BD21C
    FUN_8064E1CC(r4, r3, r4, r3); // bl 0x8064E1CC
    r25 = r3;
    if (!=) goto 0x0x808bd238;
    /* li r25, 0 */ // 0x808BD230
    /* b 0x808bd280 */ // 0x808BD234
    if (==) goto 0x0x808bd27c;
    r12 = *(0 + r3); // lwz @ 0x808BD23C
    r12 = *(0x28 + r12); // lwz @ 0x808BD240
    /* mtctr r12 */ // 0x808BD244
    /* bctrl  */ // 0x808BD248
    /* b 0x808bd264 */ // 0x808BD24C
    if (!=) goto 0x0x808bd260;
    /* li r0, 1 */ // 0x808BD258
    /* b 0x808bd270 */ // 0x808BD25C
    r3 = *(0 + r3); // lwz @ 0x808BD260
    if (!=) goto 0x0x808bd250;
    /* li r0, 0 */ // 0x808BD26C
    if (==) goto 0x0x808bd27c;
    /* b 0x808bd280 */ // 0x808BD278
    /* li r25, 0 */ // 0x808BD27C
    if (!=) goto 0x0x808bd290;
    /* li r25, 0 */ // 0x808BD288
    /* b 0x808bd2dc */ // 0x808BD28C
    if (==) goto 0x0x808bd2d8;
    r12 = *(0 + r25); // lwz @ 0x808BD294
    r3 = r25;
    r12 = *(0x28 + r12); // lwz @ 0x808BD29C
    /* mtctr r12 */ // 0x808BD2A0
    /* bctrl  */ // 0x808BD2A4
    /* b 0x808bd2c0 */ // 0x808BD2A8
    if (!=) goto 0x0x808bd2bc;
    /* li r0, 1 */ // 0x808BD2B4
    /* b 0x808bd2cc */ // 0x808BD2B8
    r3 = *(0 + r3); // lwz @ 0x808BD2BC
    if (!=) goto 0x0x808bd2ac;
    /* li r0, 0 */ // 0x808BD2C8
    if (==) goto 0x0x808bd2d8;
    /* b 0x808bd2dc */ // 0x808BD2D4
    /* li r25, 0 */ // 0x808BD2D8
    r12 = *(0 + r31); // lwz @ 0x808BD2DC
    r3 = r31;
    r12 = *(0x68 + r12); // lwz @ 0x808BD2E4
    /* mtctr r12 */ // 0x808BD2E8
    /* bctrl  */ // 0x808BD2EC
    r4 = r3;
    r3 = r26;
    FUN_80649FD0(r4, r3); // bl 0x80649FD0
    r12 = *(0 + r31); // lwz @ 0x808BD2FC
    r3 = r31;
    r12 = *(0x68 + r12); // lwz @ 0x808BD304
    /* mtctr r12 */ // 0x808BD308
    /* bctrl  */ // 0x808BD30C
    r4 = r3;
    r3 = r25;
    FUN_80649FD0(r4, r3); // bl 0x80649FD0
    r0 = *(0x6c8 + r24); // lbz @ 0x808BD31C
    /* li r3, 0 */ // 0x808BD320
    if (==) goto 0x0x808bd33c;
    if (!=) goto 0x0x808bd33c;
    r19 = *(0 + r23); // lwz @ 0x808BD334
    /* b 0x808bd40c */ // 0x808BD338
    if (==) goto 0x0x808bd348;
    /* li r3, 1 */ // 0x808BD344
    r0 = *(0x6c9 + r24); // lbz @ 0x808BD348
    if (==) goto 0x0x808bd364;
    if (!=) goto 0x0x808bd364;
    r19 = *(4 + r23); // lwz @ 0x808BD35C
    /* b 0x808bd40c */ // 0x808BD360
    if (==) goto 0x0x808bd370;
    r3 = r3 + 1; // 0x808BD36C
    r0 = *(0x6ca + r24); // lbz @ 0x808BD370
    if (==) goto 0x0x808bd38c;
    if (!=) goto 0x0x808bd38c;
    r19 = *(8 + r23); // lwz @ 0x808BD384
    /* b 0x808bd40c */ // 0x808BD388
    if (==) goto 0x0x808bd398;
    r3 = r3 + 1; // 0x808BD394
    r0 = *(0x6cb + r24); // lbz @ 0x808BD398
    if (==) goto 0x0x808bd3b4;
    if (!=) goto 0x0x808bd3b4;
    r19 = *(0xc + r23); // lwz @ 0x808BD3AC
    /* b 0x808bd40c */ // 0x808BD3B0
    if (==) goto 0x0x808bd3c0;
    r3 = r3 + 1; // 0x808BD3BC
    r0 = *(0x6cc + r24); // lbz @ 0x808BD3C0
    if (==) goto 0x0x808bd3dc;
    if (!=) goto 0x0x808bd3dc;
    r19 = *(0x10 + r23); // lwz @ 0x808BD3D4
    /* b 0x808bd40c */ // 0x808BD3D8
    if (==) goto 0x0x808bd3e8;
    r3 = r3 + 1; // 0x808BD3E4
    r0 = *(0x6cd + r24); // lbz @ 0x808BD3E8
    if (==) goto 0x0x808bd404;
    if (!=) goto 0x0x808bd404;
    r19 = *(0x14 + r23); // lwz @ 0x808BD3FC
    /* b 0x808bd40c */ // 0x808BD400
    /* li r19, -1 */ // 0x808BD408
    r0 = *(0x6ce + r24); // lbz @ 0x808BD40C
    /* li r3, 0 */ // 0x808BD410
    if (==) goto 0x0x808bd42c;
    if (!=) goto 0x0x808bd42c;
    r27 = *(0x18 + r23); // lwz @ 0x808BD424
    /* b 0x808bd4fc */ // 0x808BD428
    if (==) goto 0x0x808bd438;
    /* li r3, 1 */ // 0x808BD434
    r0 = *(0x6cf + r24); // lbz @ 0x808BD438
    if (==) goto 0x0x808bd454;
    if (!=) goto 0x0x808bd454;
    r27 = *(0x1c + r23); // lwz @ 0x808BD44C
    /* b 0x808bd4fc */ // 0x808BD450
    if (==) goto 0x0x808bd460;
    r3 = r3 + 1; // 0x808BD45C
    r0 = *(0x6d0 + r24); // lbz @ 0x808BD460
    if (==) goto 0x0x808bd47c;
    if (!=) goto 0x0x808bd47c;
    r27 = *(0x20 + r23); // lwz @ 0x808BD474
    /* b 0x808bd4fc */ // 0x808BD478
    if (==) goto 0x0x808bd488;
    r3 = r3 + 1; // 0x808BD484
    r0 = *(0x6d1 + r24); // lbz @ 0x808BD488
    if (==) goto 0x0x808bd4a4;
    if (!=) goto 0x0x808bd4a4;
    r27 = *(0x24 + r23); // lwz @ 0x808BD49C
    /* b 0x808bd4fc */ // 0x808BD4A0
    if (==) goto 0x0x808bd4b0;
    r3 = r3 + 1; // 0x808BD4AC
    r0 = *(0x6d2 + r24); // lbz @ 0x808BD4B0
    if (==) goto 0x0x808bd4cc;
    if (!=) goto 0x0x808bd4cc;
    r27 = *(0x28 + r23); // lwz @ 0x808BD4C4
    /* b 0x808bd4fc */ // 0x808BD4C8
    if (==) goto 0x0x808bd4d8;
    r3 = r3 + 1; // 0x808BD4D4
    r0 = *(0x6d3 + r24); // lbz @ 0x808BD4D8
    if (==) goto 0x0x808bd4f4;
    if (!=) goto 0x0x808bd4f4;
    r27 = *(0x2c + r23); // lwz @ 0x808BD4EC
    /* b 0x808bd4fc */ // 0x808BD4F0
    /* li r27, -1 */ // 0x808BD4F8
    r3 = r31;
    r4 = r26;
    r5 = r19;
    FUN_808BE50C(r3, r4, r5); // bl 0x808BE50C
    r3 = r31;
    r4 = r25;
    r5 = r27;
    FUN_808BE50C(r5, r3, r4, r5); // bl 0x808BE50C
    if (!=) goto 0x0x808bd558;
    r12 = *(0 + r31); // lwz @ 0x808BD524
    r3 = r31;
    r4 = r26;
    r12 = *(0x78 + r12); // lwz @ 0x808BD530
    /* mtctr r12 */ // 0x808BD534
    /* bctrl  */ // 0x808BD538
    r12 = *(0 + r31); // lwz @ 0x808BD53C
    r3 = r31;
    r4 = r26;
    /* li r5, 0 */ // 0x808BD548
    r12 = *(0x64 + r12); // lwz @ 0x808BD54C
    /* mtctr r12 */ // 0x808BD550
    /* bctrl  */ // 0x808BD554
    r3 = *(0 + r30); // lwz @ 0x808BD558
    r3 = *(0x98 + r3); // lwz @ 0x808BD55C
    r0 = *(0x13c + r3); // lwz @ 0x808BD560
    if (!=) goto 0x0x808bd5a8;
    if (==) goto 0x0x808bd5a8;
    r12 = *(0 + r31); // lwz @ 0x808BD574
    r3 = r31;
    r4 = r26;
    r12 = *(0x78 + r12); // lwz @ 0x808BD580
    /* mtctr r12 */ // 0x808BD584
    /* bctrl  */ // 0x808BD588
    r12 = *(0 + r31); // lwz @ 0x808BD58C
    r3 = r31;
    r4 = r26;
    /* li r5, 0 */ // 0x808BD598
    r12 = *(0x64 + r12); // lwz @ 0x808BD59C
    /* mtctr r12 */ // 0x808BD5A0
    /* bctrl  */ // 0x808BD5A4
    r3 = *(0 + r30); // lwz @ 0x808BD5A8
    r3 = *(0x98 + r3); // lwz @ 0x808BD5AC
    r0 = *(0x13c + r3); // lwz @ 0x808BD5B0
    if (!=) goto 0x0x808bd5f8;
    if (==) goto 0x0x808bd5f8;
    r12 = *(0 + r31); // lwz @ 0x808BD5C4
    r3 = r31;
    r4 = r25;
    r12 = *(0x78 + r12); // lwz @ 0x808BD5D0
    /* mtctr r12 */ // 0x808BD5D4
    /* bctrl  */ // 0x808BD5D8
    r12 = *(0 + r31); // lwz @ 0x808BD5DC
    r3 = r31;
    r4 = r25;
    /* li r5, 0 */ // 0x808BD5E8
    r12 = *(0x64 + r12); // lwz @ 0x808BD5EC
    /* mtctr r12 */ // 0x808BD5F0
    /* bctrl  */ // 0x808BD5F4
    r20 = r20 + 1; // 0x808BD5F8
    r0 = *(0xa08 + r31); // lwz @ 0x808BD5FC
    if (<) goto 0x0x808bd124;
    /* lis r3, 0 */ // 0x808BD608
    /* lis r23, 0 */ // 0x808BD60C
    /* lis r19, 0 */ // 0x808BD610
    r25 = r31 + r22; // 0x808BD614
    r3 = r3 + 0; // 0x808BD618
    r23 = r23 + 0; // 0x808BD61C
    r26 = r3 + r21; // 0x808BD620
    /* li r20, 0 */ // 0x808BD628
    /* b 0x808bdbc4 */ // 0x808BD62C
    r3 = r31 + 0x24; // 0x808BD630
    /* li r4, 1 */ // 0x808BD634
    FUN_8064E1CC(r3, r4); // bl 0x8064E1CC
    r4 = r20;
    r3 = r3 + 0x68; // 0x808BD640
    FUN_8064E1CC(r3, r4, r4, r3); // bl 0x8064E1CC
    /* li r4, 0 */ // 0x808BD648
    r3 = r3 + 0x68; // 0x808BD64C
    FUN_8064E1CC(r4, r3, r4, r3); // bl 0x8064E1CC
    r21 = r3;
    if (!=) goto 0x0x808bd668;
    /* li r21, 0 */ // 0x808BD660
    /* b 0x808bd6b0 */ // 0x808BD664
    if (==) goto 0x0x808bd6ac;
    r12 = *(0 + r3); // lwz @ 0x808BD66C
    r12 = *(0x28 + r12); // lwz @ 0x808BD670
    /* mtctr r12 */ // 0x808BD674
    /* bctrl  */ // 0x808BD678
    /* b 0x808bd694 */ // 0x808BD67C
    if (!=) goto 0x0x808bd690;
    /* li r0, 1 */ // 0x808BD688
    /* b 0x808bd6a0 */ // 0x808BD68C
    r3 = *(0 + r3); // lwz @ 0x808BD690
    if (!=) goto 0x0x808bd680;
    /* li r0, 0 */ // 0x808BD69C
    if (==) goto 0x0x808bd6ac;
    /* b 0x808bd6b0 */ // 0x808BD6A8
    /* li r21, 0 */ // 0x808BD6AC
    if (!=) goto 0x0x808bd6c0;
    /* li r21, 0 */ // 0x808BD6B8
    /* b 0x808bd70c */ // 0x808BD6BC
    if (==) goto 0x0x808bd708;
    r12 = *(0 + r21); // lwz @ 0x808BD6C4
    r3 = r21;
    r12 = *(0x28 + r12); // lwz @ 0x808BD6CC
    /* mtctr r12 */ // 0x808BD6D0
    /* bctrl  */ // 0x808BD6D4
    /* b 0x808bd6f0 */ // 0x808BD6D8
    if (!=) goto 0x0x808bd6ec;
    /* li r0, 1 */ // 0x808BD6E4
    /* b 0x808bd6fc */ // 0x808BD6E8
    r3 = *(0 + r3); // lwz @ 0x808BD6EC
    if (!=) goto 0x0x808bd6dc;
    /* li r0, 0 */ // 0x808BD6F8
    if (==) goto 0x0x808bd708;
    /* b 0x808bd70c */ // 0x808BD704
    /* li r21, 0 */ // 0x808BD708
    r3 = r21;
    /* li r4, 0 */ // 0x808BD710
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    r3 = r31 + 0x24; // 0x808BD718
    /* li r4, 1 */ // 0x808BD71C
    FUN_8064E1CC(r3, r4, r3, r4); // bl 0x8064E1CC
    r4 = r20;
    r3 = r3 + 0x68; // 0x808BD728
    FUN_8064E1CC(r3, r4, r4, r3); // bl 0x8064E1CC
    /* li r4, 0 */ // 0x808BD730
    r3 = r3 + 0x68; // 0x808BD734
    FUN_8064E1CC(r4, r3, r4, r3); // bl 0x8064E1CC
    r21 = r3;
    if (!=) goto 0x0x808bd750;
    /* li r21, 0 */ // 0x808BD748
    /* b 0x808bd798 */ // 0x808BD74C
    if (==) goto 0x0x808bd794;
    r12 = *(0 + r3); // lwz @ 0x808BD754
    r12 = *(0x28 + r12); // lwz @ 0x808BD758
    /* mtctr r12 */ // 0x808BD75C
    /* bctrl  */ // 0x808BD760
    /* b 0x808bd77c */ // 0x808BD764
    if (!=) goto 0x0x808bd778;
    /* li r0, 1 */ // 0x808BD770
    /* b 0x808bd788 */ // 0x808BD774
    r3 = *(0 + r3); // lwz @ 0x808BD778
    if (!=) goto 0x0x808bd768;
    /* li r0, 0 */ // 0x808BD784
    if (==) goto 0x0x808bd794;
    /* b 0x808bd798 */ // 0x808BD790
    /* li r21, 0 */ // 0x808BD794
    if (!=) goto 0x0x808bd7a8;
    /* li r21, 0 */ // 0x808BD7A0
    /* b 0x808bd7f4 */ // 0x808BD7A4
    if (==) goto 0x0x808bd7f0;
    r12 = *(0 + r21); // lwz @ 0x808BD7AC
    r3 = r21;
    r12 = *(0x28 + r12); // lwz @ 0x808BD7B4
    /* mtctr r12 */ // 0x808BD7B8
    /* bctrl  */ // 0x808BD7BC
    /* b 0x808bd7d8 */ // 0x808BD7C0
    if (!=) goto 0x0x808bd7d4;
    /* li r0, 1 */ // 0x808BD7CC
    /* b 0x808bd7e4 */ // 0x808BD7D0
    r3 = *(0 + r3); // lwz @ 0x808BD7D4
    if (!=) goto 0x0x808bd7c4;
    /* li r0, 0 */ // 0x808BD7E0
    if (==) goto 0x0x808bd7f0;
    /* b 0x808bd7f4 */ // 0x808BD7EC
    /* li r21, 0 */ // 0x808BD7F0
    r3 = r21;
    /* li r4, 0 */ // 0x808BD7F8
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    r0 = *(0x6c8 + r25); // lbz @ 0x808BD800
    /* li r3, 0 */ // 0x808BD804
    if (==) goto 0x0x808bd820;
    if (!=) goto 0x0x808bd820;
    r0 = *(0 + r26); // lwz @ 0x808BD818
    /* b 0x808bd8f0 */ // 0x808BD81C
    if (==) goto 0x0x808bd82c;
    /* li r3, 1 */ // 0x808BD828
    r0 = *(0x6c9 + r25); // lbz @ 0x808BD82C
    if (==) goto 0x0x808bd848;
    if (!=) goto 0x0x808bd848;
    r0 = *(4 + r26); // lwz @ 0x808BD840
    /* b 0x808bd8f0 */ // 0x808BD844
    if (==) goto 0x0x808bd854;
    r3 = r3 + 1; // 0x808BD850
    r0 = *(0x6ca + r25); // lbz @ 0x808BD854
    if (==) goto 0x0x808bd870;
    if (!=) goto 0x0x808bd870;
    r0 = *(8 + r26); // lwz @ 0x808BD868
    /* b 0x808bd8f0 */ // 0x808BD86C
    if (==) goto 0x0x808bd87c;
    r3 = r3 + 1; // 0x808BD878
    r0 = *(0x6cb + r25); // lbz @ 0x808BD87C
    if (==) goto 0x0x808bd898;
    if (!=) goto 0x0x808bd898;
    r0 = *(0xc + r26); // lwz @ 0x808BD890
    /* b 0x808bd8f0 */ // 0x808BD894
    if (==) goto 0x0x808bd8a4;
    r3 = r3 + 1; // 0x808BD8A0
    r0 = *(0x6cc + r25); // lbz @ 0x808BD8A4
    if (==) goto 0x0x808bd8c0;
    if (!=) goto 0x0x808bd8c0;
    r0 = *(0x10 + r26); // lwz @ 0x808BD8B8
    /* b 0x808bd8f0 */ // 0x808BD8BC
    if (==) goto 0x0x808bd8cc;
    r3 = r3 + 1; // 0x808BD8C8
    r0 = *(0x6cd + r25); // lbz @ 0x808BD8CC
    if (==) goto 0x0x808bd8e8;
    if (!=) goto 0x0x808bd8e8;
    r0 = *(0x14 + r26); // lwz @ 0x808BD8E0
    /* b 0x808bd8f0 */ // 0x808BD8E4
    /* li r0, -1 */ // 0x808BD8EC
    if (!=) goto 0x0x808bd9e0;
    r3 = r31 + 0x24; // 0x808BD8F8
    /* li r4, 2 */ // 0x808BD8FC
    FUN_8064E1CC(r3, r4); // bl 0x8064E1CC
    r4 = r20;
    r3 = r3 + 0x68; // 0x808BD908
    FUN_8064E1CC(r3, r4, r4, r3); // bl 0x8064E1CC
    /* li r4, 0 */ // 0x808BD910
    r3 = r3 + 0x68; // 0x808BD914
    FUN_8064E1CC(r4, r3, r4, r3); // bl 0x8064E1CC
    r21 = r3;
    if (!=) goto 0x0x808bd930;
    /* li r21, 0 */ // 0x808BD928
    /* b 0x808bd978 */ // 0x808BD92C
    if (==) goto 0x0x808bd974;
    r12 = *(0 + r3); // lwz @ 0x808BD934
    r12 = *(0x28 + r12); // lwz @ 0x808BD938
    /* mtctr r12 */ // 0x808BD93C
    /* bctrl  */ // 0x808BD940
    /* b 0x808bd95c */ // 0x808BD944
    if (!=) goto 0x0x808bd958;
    /* li r0, 1 */ // 0x808BD950
    /* b 0x808bd968 */ // 0x808BD954
    r3 = *(0 + r3); // lwz @ 0x808BD958
    if (!=) goto 0x0x808bd948;
    /* li r0, 0 */ // 0x808BD964
    if (==) goto 0x0x808bd974;
    /* b 0x808bd978 */ // 0x808BD970
    /* li r21, 0 */ // 0x808BD974
    if (!=) goto 0x0x808bd988;
    /* li r21, 0 */ // 0x808BD980
    /* b 0x808bd9d4 */ // 0x808BD984
    if (==) goto 0x0x808bd9d0;
    r12 = *(0 + r21); // lwz @ 0x808BD98C
    r3 = r21;
    r12 = *(0x28 + r12); // lwz @ 0x808BD994
    /* mtctr r12 */ // 0x808BD998
    /* bctrl  */ // 0x808BD99C
    /* b 0x808bd9b8 */ // 0x808BD9A0
    if (!=) goto 0x0x808bd9b4;
    /* li r0, 1 */ // 0x808BD9AC
    /* b 0x808bd9c4 */ // 0x808BD9B0
    r3 = *(0 + r3); // lwz @ 0x808BD9B4
    if (!=) goto 0x0x808bd9a4;
    /* li r0, 0 */ // 0x808BD9C0
    if (==) goto 0x0x808bd9d0;
    /* b 0x808bd9d4 */ // 0x808BD9CC
    /* li r21, 0 */ // 0x808BD9D0
    r3 = r21;
    /* li r4, 0 */ // 0x808BD9D8
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    r0 = *(0x6ce + r25); // lbz @ 0x808BD9E0
    /* li r3, 0 */ // 0x808BD9E4
    if (==) goto 0x0x808bda00;
    if (!=) goto 0x0x808bda00;
    r0 = *(0x18 + r26); // lwz @ 0x808BD9F8
    /* b 0x808bdad0 */ // 0x808BD9FC
    if (==) goto 0x0x808bda0c;
    /* li r3, 1 */ // 0x808BDA08
    r0 = *(0x6cf + r25); // lbz @ 0x808BDA0C
    if (==) goto 0x0x808bda28;
    if (!=) goto 0x0x808bda28;
    r0 = *(0x1c + r26); // lwz @ 0x808BDA20
    /* b 0x808bdad0 */ // 0x808BDA24
    if (==) goto 0x0x808bda34;
    r3 = r3 + 1; // 0x808BDA30
    r0 = *(0x6d0 + r25); // lbz @ 0x808BDA34
    if (==) goto 0x0x808bda50;
    if (!=) goto 0x0x808bda50;
    r0 = *(0x20 + r26); // lwz @ 0x808BDA48
    /* b 0x808bdad0 */ // 0x808BDA4C
    if (==) goto 0x0x808bda5c;
    r3 = r3 + 1; // 0x808BDA58
    r0 = *(0x6d1 + r25); // lbz @ 0x808BDA5C
    if (==) goto 0x0x808bda78;
    if (!=) goto 0x0x808bda78;
    r0 = *(0x24 + r26); // lwz @ 0x808BDA70
    /* b 0x808bdad0 */ // 0x808BDA74
    if (==) goto 0x0x808bda84;
    r3 = r3 + 1; // 0x808BDA80
    r0 = *(0x6d2 + r25); // lbz @ 0x808BDA84
    if (==) goto 0x0x808bdaa0;
    if (!=) goto 0x0x808bdaa0;
    r0 = *(0x28 + r26); // lwz @ 0x808BDA98
    /* b 0x808bdad0 */ // 0x808BDA9C
    if (==) goto 0x0x808bdaac;
    r3 = r3 + 1; // 0x808BDAA8
    r0 = *(0x6d3 + r25); // lbz @ 0x808BDAAC
    if (==) goto 0x0x808bdac8;
    if (!=) goto 0x0x808bdac8;
    r0 = *(0x2c + r26); // lwz @ 0x808BDAC0
    /* b 0x808bdad0 */ // 0x808BDAC4
    /* li r0, -1 */ // 0x808BDACC
    if (!=) goto 0x0x808bdbc0;
    r3 = r31 + 0x24; // 0x808BDAD8
    /* li r4, 2 */ // 0x808BDADC
    FUN_8064E1CC(r3, r4); // bl 0x8064E1CC
    r4 = r20;
    r3 = r3 + 0x68; // 0x808BDAE8
    FUN_8064E1CC(r3, r4, r4, r3); // bl 0x8064E1CC
    /* li r4, 1 */ // 0x808BDAF0
    r3 = r3 + 0x68; // 0x808BDAF4
    FUN_8064E1CC(r4, r3, r4, r3); // bl 0x8064E1CC
    r21 = r3;
    if (!=) goto 0x0x808bdb10;
    /* li r21, 0 */ // 0x808BDB08
    /* b 0x808bdb58 */ // 0x808BDB0C
    if (==) goto 0x0x808bdb54;
    r12 = *(0 + r3); // lwz @ 0x808BDB14
    r12 = *(0x28 + r12); // lwz @ 0x808BDB18
    /* mtctr r12 */ // 0x808BDB1C
    /* bctrl  */ // 0x808BDB20
    /* b 0x808bdb3c */ // 0x808BDB24
    if (!=) goto 0x0x808bdb38;
    /* li r0, 1 */ // 0x808BDB30
    /* b 0x808bdb48 */ // 0x808BDB34
    r3 = *(0 + r3); // lwz @ 0x808BDB38
    if (!=) goto 0x0x808bdb28;
    /* li r0, 0 */ // 0x808BDB44
    if (==) goto 0x0x808bdb54;
    /* b 0x808bdb58 */ // 0x808BDB50
    /* li r21, 0 */ // 0x808BDB54
    if (!=) goto 0x0x808bdb68;
    /* li r21, 0 */ // 0x808BDB60
    /* b 0x808bdbb4 */ // 0x808BDB64
    if (==) goto 0x0x808bdbb0;
    r12 = *(0 + r21); // lwz @ 0x808BDB6C
    r3 = r21;
    r12 = *(0x28 + r12); // lwz @ 0x808BDB74
    /* mtctr r12 */ // 0x808BDB78
    /* bctrl  */ // 0x808BDB7C
    /* b 0x808bdb98 */ // 0x808BDB80
    if (!=) goto 0x0x808bdb94;
    /* li r0, 1 */ // 0x808BDB8C
    /* b 0x808bdba4 */ // 0x808BDB90
    r3 = *(0 + r3); // lwz @ 0x808BDB94
    if (!=) goto 0x0x808bdb84;
    /* li r0, 0 */ // 0x808BDBA0
    if (==) goto 0x0x808bdbb0;
    /* b 0x808bdbb4 */ // 0x808BDBAC
    /* li r21, 0 */ // 0x808BDBB0
    r3 = r21;
    /* li r4, 0 */ // 0x808BDBB8
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    r20 = r20 + 1; // 0x808BDBC0
    r0 = *(0xa08 + r31); // lwz @ 0x808BDBC4
    if (<) goto 0x0x808bd630;
    r0 = *(0x44 + r1); // lwz @ 0x808BDBD4
    return;
}