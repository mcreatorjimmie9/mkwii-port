/* Function at 0x808BF730, size=640 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_808BF730(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808BF738
    /* li r0, -1 */ // 0x808BF740
    *(0xc + r1) = r31; // stw @ 0x808BF744
    *(8 + r1) = r30; // stw @ 0x808BF748
    r30 = r3;
    *(0xd94 + r3) = r0; // stw @ 0x808BF750
    r4 = *(0 + r4); // lwz @ 0x808BF754
    r4 = *(0 + r4); // lwz @ 0x808BF758
    r0 = *(0 + r4); // lwz @ 0x808BF75C
    if (==) goto 0x0x808bf770;
    if (!=) goto 0x0x808bf788;
    /* li r0, 1 */ // 0x808BF770
    /* li r4, 0 */ // 0x808BF774
    *(0xda0 + r3) = r4; // stw @ 0x808BF778
    *(0x6bc + r3) = r0; // stw @ 0x808BF77C
    *(0x6c0 + r3) = r0; // stw @ 0x808BF780
    /* b 0x808bf7c8 */ // 0x808BF784
    if (!=) goto 0x0x808bf7a8;
    /* li r0, 2 */ // 0x808BF790
    /* li r4, 1 */ // 0x808BF794
    *(0xda0 + r3) = r4; // stw @ 0x808BF798
    *(0x6bc + r3) = r0; // stw @ 0x808BF79C
    *(0x6c0 + r3) = r0; // stw @ 0x808BF7A0
    /* b 0x808bf7c8 */ // 0x808BF7A4
    FUN_808CFA50(r4); // bl 0x808CFA50
    r0 = *(0xda0 + r30); // lwz @ 0x808BF7AC
    /* li r4, 1 */ // 0x808BF7B0
    /* clrlwi r3, r3, 0x18 */ // 0x808BF7B4
    *(0xda4 + r30) = r3; // stw @ 0x808BF7B8
    r0 = r4 << r0; // slw
    *(0x6bc + r30) = r0; // stw @ 0x808BF7C0
    *(0x6c0 + r30) = r0; // stw @ 0x808BF7C4
    r3 = r30;
    FUN_808B3318(r3); // bl 0x808B3318
    /* lis r3, 0 */ // 0x808BF7D0
    r0 = *(0xda0 + r30); // lwz @ 0x808BF7D4
    r4 = *(0 + r3); // lwz @ 0x808BF7D8
    /* lis r5, 0 */ // 0x808BF7DC
    r3 = *(0 + r5); // lwz @ 0x808BF7E0
    /* slwi r0, r0, 2 */ // 0x808BF7E4
    r4 = *(0x98 + r4); // lwz @ 0x808BF7E8
    r6 = *(0x2d4 + r3); // lbz @ 0x808BF7EC
    r3 = r4 + r0; // 0x808BF7F0
    r7 = *(0x154 + r3); // lwz @ 0x808BF7F4
    if (>=) goto 0x0x808bf830;
    /* lis r3, 0x6666 */ // 0x808BF800
    /* li r0, 0 */ // 0x808BF804
    r3 = r3 + 0x6667; // 0x808BF808
    *(0xd9c + r30) = r0; // stw @ 0x808BF80C
    /* mulhw r0, r3, r7 */ // 0x808BF810
    r0 = r0 >> 2; // srawi
    /* srwi r3, r0, 0x1f */ // 0x808BF818
    r0 = r0 + r3; // 0x808BF81C
    /* mulli r4, r0, 0xa */ // 0x808BF820
    *(0xd98 + r30) = r4; // stw @ 0x808BF824
    /* subf r31, r4, r7 */ // 0x808BF828
    /* b 0x808bf86c */ // 0x808BF82C
    /* lis r3, 0x6666 */ // 0x808BF830
    /* li r0, 1 */ // 0x808BF834
    *(0xd9c + r30) = r0; // stw @ 0x808BF838
    /* subf r4, r6, r7 */ // 0x808BF83C
    r0 = r3 + 0x6667; // 0x808BF840
    /* mulhw r0, r0, r4 */ // 0x808BF844
    r0 = r0 >> 2; // srawi
    /* srwi r3, r0, 0x1f */ // 0x808BF84C
    r0 = r0 + r3; // 0x808BF850
    /* mulli r4, r0, 0xa */ // 0x808BF854
    *(0xd98 + r30) = r4; // stw @ 0x808BF858
    r3 = *(0 + r5); // lwz @ 0x808BF85C
    r0 = *(0x2d4 + r3); // lbz @ 0x808BF860
    /* subf r0, r0, r7 */ // 0x808BF864
    /* subf r31, r4, r0 */ // 0x808BF868
    r3 = r30;
    /* clrlwi r4, r4, 0x18 */ // 0x808BF870
    FUN_808C015C(r3); // bl 0x808C015C
    r0 = *(0xd9c + r30); // lwz @ 0x808BF878
    if (==) goto 0x0x808bf898;
    if (==) goto 0x0x808bf8a8;
    if (==) goto 0x0x808bf8b0;
    /* b 0x808bf8c0 */ // 0x808BF894
    /* lis r3, 0 */ // 0x808BF898
    r3 = *(0 + r3); // lwz @ 0x808BF89C
    r6 = *(0x2d4 + r3); // lbz @ 0x808BF8A0
    /* b 0x808bf8c4 */ // 0x808BF8A4
    /* li r6, 6 */ // 0x808BF8A8
    /* b 0x808bf8c4 */ // 0x808BF8AC
    /* lis r3, 0 */ // 0x808BF8B0
    r3 = *(0 + r3); // lwz @ 0x808BF8B4
    r6 = *(0x2e8 + r3); // lbz @ 0x808BF8B8
    /* b 0x808bf8c4 */ // 0x808BF8BC
    /* li r6, 0 */ // 0x808BF8C0
    r7 = *(0xd98 + r30); // lwz @ 0x808BF8C4
    r3 = r30 + 0x6c4; // 0x808BF8C8
    r0 = r7 + 0xa; // 0x808BF8CC
    /* neg r5, r7 */ // 0x808BF8D0
    r0 = r6 ^ r0; // 0x808BF8D4
    r4 = r0 >> 1; // srawi
    /* andc r5, r5, r7 */ // 0x808BF8DC
    r0 = r0 & r6; // 0x808BF8E0
    /* subf r0, r0, r4 */ // 0x808BF8E4
    /* srwi r4, r5, 0x1f */ // 0x808BF8E8
    /* srwi r5, r0, 0x1f */ // 0x808BF8EC
    FUN_8069946C(); // bl 0x8069946C
    r12 = *(0 + r30); // lwz @ 0x808BF8F4
    r3 = r30;
    r12 = *(0x68 + r12); // lwz @ 0x808BF8FC
    /* mtctr r12 */ // 0x808BF900
    /* bctrl  */ // 0x808BF904
    r4 = r3;
    r3 = r30 + 0x6c4; // 0x808BF90C
    FUN_80699400(r4, r3); // bl 0x80699400
    r12 = *(0 + r30); // lwz @ 0x808BF914
    r3 = r30;
    r12 = *(0x68 + r12); // lwz @ 0x808BF91C
    /* mtctr r12 */ // 0x808BF920
    /* bctrl  */ // 0x808BF924
    r4 = r3;
    r3 = r30 + 0xbfc; // 0x808BF92C
    FUN_8069AA2C(r4, r3); // bl 0x8069AA2C
    r4 = *(0xd9c + r30); // lwz @ 0x808BF934
    r3 = r30 + 0xbfc; // 0x808BF938
    FUN_8069AAA8(r4, r3, r3); // bl 0x8069AAA8
    r12 = *(0 + r30); // lwz @ 0x808BF940
    /* slwi r31, r31, 2 */ // 0x808BF944
    r4 = *(0x48 + r30); // lwz @ 0x808BF948
    r3 = r30;
    r12 = *(0x78 + r12); // lwz @ 0x808BF950
    /* lwzx r4, r4, r31 */ // 0x808BF954
    /* mtctr r12 */ // 0x808BF958
    /* bctrl  */ // 0x808BF95C
    r12 = *(0 + r30); // lwz @ 0x808BF960
    r3 = r30;
    r4 = *(0x48 + r30); // lwz @ 0x808BF968
    r12 = *(0x64 + r12); // lwz @ 0x808BF96C
    /* lwzx r4, r4, r31 */ // 0x808BF970
    r5 = *(0xda0 + r30); // lwz @ 0x808BF974
    /* mtctr r12 */ // 0x808BF978
    /* bctrl  */ // 0x808BF97C
    /* lis r3, 0 */ // 0x808BF980
    /* li r0, 1 */ // 0x808BF984
    r3 = *(0 + r3); // lwz @ 0x808BF988
    *(0x265 + r3) = r0; // stb @ 0x808BF98C
    r0 = *(0xda0 + r30); // lwz @ 0x808BF990
    *(0xf1c + r30) = r0; // stw @ 0x808BF994
    r31 = *(0xc + r1); // lwz @ 0x808BF998
    r30 = *(8 + r1); // lwz @ 0x808BF99C
    r0 = *(0x14 + r1); // lwz @ 0x808BF9A0
    return;
}