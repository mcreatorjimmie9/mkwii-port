/* Function at 0x806ED614, size=1156 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r23 */
/* Calls: 3 function(s) */

int FUN_806ED614(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r23 */
    /* stmw r23, 0xc(r1) */ // 0x806ED620
    /* lis r23, 0 */ // 0x806ED624
    r24 = r3;
    r3 = *(0 + r23); // lwz @ 0x806ED62C
    FUN_806E6B18(); // bl 0x806E6B18
    if (!=) goto 0x0x806ed644;
    /* li r0, 1 */ // 0x806ED63C
    /* b 0x806ed67c */ // 0x806ED640
    r3 = *(0 + r23); // lwz @ 0x806ED644
    /* li r4, 1 */ // 0x806ED648
    r5 = *(0x3e0 + r24); // lwz @ 0x806ED64C
    r0 = *(0x291c + r3); // lwz @ 0x806ED650
    /* mulli r0, r0, 0x58 */ // 0x806ED654
    r3 = r3 + r0; // 0x806ED658
    r0 = *(0x59 + r3); // lbz @ 0x806ED65C
    r3 = *(0x48 + r3); // lwz @ 0x806ED660
    r0 = r4 << r0; // slw
    r5 = r5 | r0; // 0x806ED668
    r0 = r3 & r5; // 0x806ED66C
    /* subf r0, r3, r0 */ // 0x806ED670
    /* cntlzw r0, r0 */ // 0x806ED674
    /* srwi r0, r0, 5 */ // 0x806ED678
    if (==) goto 0x0x806eda84;
    r28 = r24;
    r27 = r24 + 0x40; // 0x806ED688
    /* li r25, 0 */ // 0x806ED68C
    /* lis r29, 0 */ // 0x806ED690
    /* li r30, 1 */ // 0x806ED694
    /* li r31, 2 */ // 0x806ED698
    /* li r23, 2 */ // 0x806ED69C
    r3 = *(0 + r29); // lwz @ 0x806ED6A0
    /* clrlwi r0, r25, 0x18 */ // 0x806ED6A4
    r26 = r30 << r0; // slw
    r0 = *(0x291c + r3); // lwz @ 0x806ED6AC
    /* mulli r0, r0, 0x58 */ // 0x806ED6B0
    r3 = r3 + r0; // 0x806ED6B4
    r5 = *(0x48 + r3); // lwz @ 0x806ED6B8
    /* and. r0, r26, r5 */ // 0x806ED6BC
    if (==) goto 0x0x806eda70;
    r4 = *(0x59 + r3); // lbz @ 0x806ED6C4
    if (==) goto 0x0x806eda70;
    r0 = *(0x5a + r3); // lbz @ 0x806ED6D0
    if (!=) goto 0x0x806ed914;
    r0 = *(0x3d + r24); // lbz @ 0x806ED6DC
    if (==) goto 0x0x806ed6f4;
    if (==) goto 0x0x806ed7a8;
    /* b 0x806ed9f4 */ // 0x806ED6F0
    r3 = *(0x2c + r24); // lwz @ 0x806ED6F4
    if (==) goto 0x0x806ed738;
    r0 = *(0x64 + r28); // lwz @ 0x806ED700
    if (!=) goto 0x0x806ed738;
    r3 = *(0x28 + r24); // lwz @ 0x806ED70C
    r0 = *(0x60 + r28); // lwz @ 0x806ED710
    if (!=) goto 0x0x806ed738;
    r3 = *(0x3f + r24); // lbz @ 0x806ED71C
    r0 = *(0x77 + r28); // lbz @ 0x806ED720
    if (!=) goto 0x0x806ed738;
    r0 = *(0x3e8 + r24); // lwz @ 0x806ED72C
    r0 = r0 | r26; // 0x806ED730
    *(0x3e8 + r24) = r0; // stw @ 0x806ED734
    r4 = *(0x3e8 + r24); // lwz @ 0x806ED738
    if (!=) goto 0x0x806ed74c;
    /* li r0, 0 */ // 0x806ED744
    /* b 0x806ed798 */ // 0x806ED748
    r0 = *(0x2c + r24); // lwz @ 0x806ED74C
    if (==) goto 0x0x806ed774;
    r3 = *(0 + r29); // lwz @ 0x806ED758
    r0 = *(0x291c + r3); // lwz @ 0x806ED75C
    /* mulli r0, r0, 0x58 */ // 0x806ED760
    r3 = r3 + r0; // 0x806ED764
    r0 = *(0x59 + r3); // lbz @ 0x806ED768
    r0 = r30 << r0; // slw
    r4 = r4 | r0; // 0x806ED770
    r3 = *(0 + r29); // lwz @ 0x806ED774
    r0 = *(0x291c + r3); // lwz @ 0x806ED778
    /* mulli r0, r0, 0x58 */ // 0x806ED77C
    r3 = r3 + r0; // 0x806ED780
    r3 = *(0x48 + r3); // lwz @ 0x806ED784
    r0 = r3 & r4; // 0x806ED788
    /* subf r0, r3, r0 */ // 0x806ED78C
    /* cntlzw r0, r0 */ // 0x806ED790
    /* srwi r0, r0, 5 */ // 0x806ED794
    if (==) goto 0x0x806ed9f4;
    *(0x3d + r24) = r30; // stb @ 0x806ED7A0
    /* b 0x806ed9f4 */ // 0x806ED7A4
    r0 = *(0x3c + r24); // lbz @ 0x806ED7A8
    /* extsb r3, r0 */ // 0x806ED7AC
    if (==) goto 0x0x806ed8a0;
    r0 = *(0x74 + r28); // lbz @ 0x806ED7B8
    /* extsb r0, r0 */ // 0x806ED7BC
    if (!=) goto 0x0x806ed8a0;
    r3 = *(0x3e + r24); // lbz @ 0x806ED7C8
    r0 = *(0x76 + r28); // lbz @ 0x806ED7CC
    if (!=) goto 0x0x806ed8a0;
    r4 = r24 + 0x30; // 0x806ED7D8
    r3 = r27 + 0x28; // 0x806ED7DC
    /* li r6, 0 */ // 0x806ED7E0
    /* mtctr r23 */ // 0x806ED7E4
    r5 = *(0 + r4); // lbz @ 0x806ED7E8
    r0 = *(0 + r3); // lbz @ 0x806ED7EC
    if (==) goto 0x0x806ed800;
    /* li r0, 0 */ // 0x806ED7F8
    /* b 0x806ed88c */ // 0x806ED7FC
    r5 = *(1 + r4); // lbz @ 0x806ED800
    r0 = *(1 + r3); // lbz @ 0x806ED804
    if (==) goto 0x0x806ed818;
    /* li r0, 0 */ // 0x806ED810
    /* b 0x806ed88c */ // 0x806ED814
    r5 = *(2 + r4); // lbz @ 0x806ED818
    r0 = *(2 + r3); // lbz @ 0x806ED81C
    if (==) goto 0x0x806ed830;
    /* li r0, 0 */ // 0x806ED828
    /* b 0x806ed88c */ // 0x806ED82C
    r5 = *(3 + r4); // lbz @ 0x806ED830
    r0 = *(3 + r3); // lbz @ 0x806ED834
    if (==) goto 0x0x806ed848;
    /* li r0, 0 */ // 0x806ED840
    /* b 0x806ed88c */ // 0x806ED844
    r5 = *(4 + r4); // lbz @ 0x806ED848
    r0 = *(4 + r3); // lbz @ 0x806ED84C
    if (==) goto 0x0x806ed860;
    /* li r0, 0 */ // 0x806ED858
    /* b 0x806ed88c */ // 0x806ED85C
    r5 = *(5 + r4); // lbz @ 0x806ED860
    r0 = *(5 + r3); // lbz @ 0x806ED864
    if (==) goto 0x0x806ed878;
    /* li r0, 0 */ // 0x806ED870
    /* b 0x806ed88c */ // 0x806ED874
    r6 = r6 + 6; // 0x806ED878
    r3 = r3 + 6; // 0x806ED87C
    r4 = r4 + 6; // 0x806ED880
    if (counter-- != 0) goto 0x0x806ed7e8;
    /* li r0, 1 */ // 0x806ED888
    if (==) goto 0x0x806ed8a0;
    r0 = *(0x3ec + r24); // lwz @ 0x806ED894
    r0 = r0 | r26; // 0x806ED898
    *(0x3ec + r24) = r0; // stw @ 0x806ED89C
    r4 = *(0x3ec + r24); // lwz @ 0x806ED8A0
    if (!=) goto 0x0x806ed8b4;
    /* li r0, 0 */ // 0x806ED8AC
    /* b 0x806ed904 */ // 0x806ED8B0
    r0 = *(0x3c + r24); // lbz @ 0x806ED8B4
    /* extsb r0, r0 */ // 0x806ED8B8
    if (==) goto 0x0x806ed8e0;
    r3 = *(0 + r29); // lwz @ 0x806ED8C4
    r0 = *(0x291c + r3); // lwz @ 0x806ED8C8
    /* mulli r0, r0, 0x58 */ // 0x806ED8CC
    r3 = r3 + r0; // 0x806ED8D0
    r0 = *(0x59 + r3); // lbz @ 0x806ED8D4
    r0 = r30 << r0; // slw
    r4 = r4 | r0; // 0x806ED8DC
    r3 = *(0 + r29); // lwz @ 0x806ED8E0
    r0 = *(0x291c + r3); // lwz @ 0x806ED8E4
    /* mulli r0, r0, 0x58 */ // 0x806ED8E8
    r3 = r3 + r0; // 0x806ED8EC
    r3 = *(0x48 + r3); // lwz @ 0x806ED8F0
    r0 = r3 & r4; // 0x806ED8F4
    /* subf r0, r3, r0 */ // 0x806ED8F8
    /* cntlzw r0, r0 */ // 0x806ED8FC
    /* srwi r0, r0, 5 */ // 0x806ED900
    if (==) goto 0x0x806ed9f4;
    *(0x3d + r24) = r31; // stb @ 0x806ED90C
    /* b 0x806ed9f4 */ // 0x806ED910
    if (!=) goto 0x0x806ed9f4;
    r0 = *(0x3d + r24); // lbz @ 0x806ED91C
    if (==) goto 0x0x806ed934;
    if (==) goto 0x0x806ed960;
    /* b 0x806ed9f4 */ // 0x806ED930
    r0 = *(0x64 + r28); // lwz @ 0x806ED934
    *(0x2c + r24) = r0; // stw @ 0x806ED938
    r0 = *(0x60 + r28); // lwz @ 0x806ED93C
    *(0x28 + r24) = r0; // stw @ 0x806ED940
    r0 = *(0x77 + r28); // lbz @ 0x806ED944
    *(0x3f + r24) = r0; // stb @ 0x806ED948
    r0 = *(0x75 + r28); // lbz @ 0x806ED94C
    if (==) goto 0x0x806ed9f4;
    *(0x3d + r24) = r30; // stb @ 0x806ED958
    /* b 0x806ed9f4 */ // 0x806ED95C
    r3 = *(0x3f0 + r24); // lwz @ 0x806ED960
    if (!=) goto 0x0x806ed974;
    /* li r0, 0 */ // 0x806ED96C
    /* b 0x806ed998 */ // 0x806ED970
    r0 = *(0x1e + r24); // lbz @ 0x806ED974
    if (==) goto 0x0x806ed988;
    r0 = r30 << r4; // slw
    r3 = r3 | r0; // 0x806ED984
    r0 = r5 & r3; // 0x806ED988
    /* subf r0, r5, r0 */ // 0x806ED98C
    /* cntlzw r0, r0 */ // 0x806ED990
    /* srwi r0, r0, 5 */ // 0x806ED994
    if (==) goto 0x0x806ed9e4;
    r4 = *(0x76 + r28); // lbz @ 0x806ED9A0
    r6 = *(0x74 + r28); // lbz @ 0x806ED9A4
    r0 = r30 << r4; // slw
    /* and. r0, r0, r5 */ // 0x806ED9AC
    /* extsb r6, r6 */ // 0x806ED9B0
    if (!=) goto 0x0x806ed9cc;
    if (==) goto 0x0x806ed9cc;
    /* mulli r0, r4, 0x38 */ // 0x806ED9C0
    r3 = r24 + r0; // 0x806ED9C4
    *(0x56 + r3) = r6; // stb @ 0x806ED9C8
    *(0x3e + r24) = r4; // stb @ 0x806ED9CC
    r3 = r24 + 0x30; // 0x806ED9D0
    r4 = r27 + 0x28; // 0x806ED9D4
    /* li r5, 0xc */ // 0x806ED9D8
    *(0x3c + r24) = r6; // stb @ 0x806ED9DC
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    r0 = *(0x75 + r28); // lbz @ 0x806ED9E4
    if (<=) goto 0x0x806ed9f4;
    *(0x3d + r24) = r31; // stb @ 0x806ED9F0
    r3 = *(0 + r29); // lwz @ 0x806ED9F4
    FUN_806E6B18(); // bl 0x806E6B18
    if (!=) goto 0x0x806eda0c;
    /* li r0, 1 */ // 0x806EDA04
    /* b 0x806eda40 */ // 0x806EDA08
    r3 = *(0 + r29); // lwz @ 0x806EDA0C
    r4 = *(0x3e0 + r24); // lwz @ 0x806EDA10
    r0 = *(0x291c + r3); // lwz @ 0x806EDA14
    /* mulli r0, r0, 0x58 */ // 0x806EDA18
    r3 = r3 + r0; // 0x806EDA1C
    r0 = *(0x59 + r3); // lbz @ 0x806EDA20
    r3 = *(0x48 + r3); // lwz @ 0x806EDA24
    r0 = r30 << r0; // slw
    r4 = r4 | r0; // 0x806EDA2C
    r0 = r3 & r4; // 0x806EDA30
    /* subf r0, r3, r0 */ // 0x806EDA34
    /* cntlzw r0, r0 */ // 0x806EDA38
    /* srwi r0, r0, 5 */ // 0x806EDA3C
    if (==) goto 0x0x806eda60;
    r0 = *(0x56 + r28); // lbz @ 0x806EDA48
    if (==) goto 0x0x806eda60;
    r0 = *(0x3f0 + r24); // lwz @ 0x806EDA54
    r0 = r0 | r26; // 0x806EDA58
    *(0x3f0 + r24) = r0; // stw @ 0x806EDA5C
    r0 = *(0x3e4 + r24); // lwz @ 0x806EDA60
    if (==) goto 0x0x806eda70;
    *(0x3d + r24) = r31; // stb @ 0x806EDA6C
    r25 = r25 + 1; // 0x806EDA70
    r27 = r27 + 0x38; // 0x806EDA74
    r28 = r28 + 0x38; // 0x806EDA7C
    if (<) goto 0x0x806ed6a0;
    r0 = *(0x34 + r1); // lwz @ 0x806EDA88
    return;
}