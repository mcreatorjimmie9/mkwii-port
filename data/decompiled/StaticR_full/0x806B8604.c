/* Function at 0x806B8604, size=1016 bytes */
/* Stack frame: 256 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 8 function(s) */

int FUN_806B8604(int r3, int r4, int r5)
{
    /* Stack frame: -256(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r0, -1 */ // 0x806B8610
    r31 = r3;
    *(0xf8 + r1) = r30; // stw @ 0x806B861C
    /* lis r30, 0 */ // 0x806B8620
    *(0xf4 + r1) = r29; // stw @ 0x806B8624
    *(0x84 + r3) = r0; // stw @ 0x806B8628
    r3 = *(0 + r30); // lwz @ 0x806B862C
    FUN_806F86F0(); // bl 0x806F86F0
    if (==) goto 0x0x806b88f4;
    /* lis r3, 0 */ // 0x806B863C
    r3 = *(0 + r3); // lwz @ 0x806B8640
    FUN_806E69B4(r3); // bl 0x806E69B4
    if (==) goto 0x0x806b881c;
    r3 = *(0 + r30); // lwz @ 0x806B8650
    r4 = r31 + 0x80; // 0x806B8654
    FUN_80700E54(r4); // bl 0x80700E54
    if (==) goto 0x0x806b8730;
    /* lis r3, 0 */ // 0x806B8664
    r3 = *(0 + r3); // lwz @ 0x806B8668
    r3 = *(0 + r3); // lwz @ 0x806B866C
    r29 = *(0x144 + r3); // lwz @ 0x806B8670
    if (!=) goto 0x0x806b8684;
    /* li r29, 0 */ // 0x806B867C
    /* b 0x806b86d8 */ // 0x806B8680
    /* lis r30, 0 */ // 0x806B8684
    r30 = r30 + 0; // 0x806B8688
    if (==) goto 0x0x806b86d4;
    r12 = *(0 + r29); // lwz @ 0x806B8690
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806B8698
    /* mtctr r12 */ // 0x806B869C
    /* bctrl  */ // 0x806B86A0
    /* b 0x806b86bc */ // 0x806B86A4
    if (!=) goto 0x0x806b86b8;
    /* li r0, 1 */ // 0x806B86B0
    /* b 0x806b86c8 */ // 0x806B86B4
    r3 = *(0 + r3); // lwz @ 0x806B86B8
    if (!=) goto 0x0x806b86a8;
    /* li r0, 0 */ // 0x806B86C4
    if (==) goto 0x0x806b86d4;
    /* b 0x806b86d8 */ // 0x806B86D0
    /* li r29, 0 */ // 0x806B86D4
    r12 = *(0 + r29); // lwz @ 0x806B86D8
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x806B86E0
    /* mtctr r12 */ // 0x806B86E4
    /* bctrl  */ // 0x806B86E8
    r12 = *(0 + r29); // lwz @ 0x806B86EC
    r3 = r29;
    /* li r4, 0x1997 */ // 0x806B86F4
    /* li r5, 0 */ // 0x806B86F8
    r12 = *(0x68 + r12); // lwz @ 0x806B86FC
    /* mtctr r12 */ // 0x806B8700
    /* bctrl  */ // 0x806B8704
    r12 = *(0 + r31); // lwz @ 0x806B8708
    r3 = r31;
    /* li r4, 0x4f */ // 0x806B8710
    /* li r5, 0 */ // 0x806B8714
    r12 = *(0x24 + r12); // lwz @ 0x806B8718
    /* mtctr r12 */ // 0x806B871C
    /* bctrl  */ // 0x806B8720
    /* li r0, 3 */ // 0x806B8724
    *(0x7c + r31) = r0; // stw @ 0x806B8728
    /* b 0x806b89e0 */ // 0x806B872C
    /* lis r3, 0 */ // 0x806B8730
    r3 = *(0 + r3); // lwz @ 0x806B8734
    r3 = *(0 + r3); // lwz @ 0x806B8738
    r29 = *(0x14c + r3); // lwz @ 0x806B873C
    if (!=) goto 0x0x806b8750;
    /* li r29, 0 */ // 0x806B8748
    /* b 0x806b87a4 */ // 0x806B874C
    /* lis r30, 0 */ // 0x806B8750
    r30 = r30 + 0; // 0x806B8754
    if (==) goto 0x0x806b87a0;
    r12 = *(0 + r29); // lwz @ 0x806B875C
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806B8764
    /* mtctr r12 */ // 0x806B8768
    /* bctrl  */ // 0x806B876C
    /* b 0x806b8788 */ // 0x806B8770
    if (!=) goto 0x0x806b8784;
    /* li r0, 1 */ // 0x806B877C
    /* b 0x806b8794 */ // 0x806B8780
    r3 = *(0 + r3); // lwz @ 0x806B8784
    if (!=) goto 0x0x806b8774;
    /* li r0, 0 */ // 0x806B8790
    if (==) goto 0x0x806b87a0;
    /* b 0x806b87a4 */ // 0x806B879C
    /* li r29, 0 */ // 0x806B87A0
    r12 = *(0 + r29); // lwz @ 0x806B87A4
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x806B87AC
    /* mtctr r12 */ // 0x806B87B0
    /* bctrl  */ // 0x806B87B4
    FUN_80654ECC(r3, r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x806B87C0
    r3 = *(0 + r3); // lwz @ 0x806B87C4
    FUN_806F590C(r3, r3); // bl 0x806F590C
    *(0x24 + r1) = r3; // stw @ 0x806B87CC
    r3 = r29;
    /* li r4, 0x1998 */ // 0x806B87D8
    r12 = *(0 + r29); // lwz @ 0x806B87DC
    r12 = *(0x68 + r12); // lwz @ 0x806B87E0
    /* mtctr r12 */ // 0x806B87E4
    /* bctrl  */ // 0x806B87E8
    r0 = r31 + 0x44; // 0x806B87EC
    *(0x188 + r29) = r0; // stw @ 0x806B87F0
    r3 = r31;
    /* li r4, 0x51 */ // 0x806B87F8
    r12 = *(0 + r31); // lwz @ 0x806B87FC
    /* li r5, 0 */ // 0x806B8800
    r12 = *(0x24 + r12); // lwz @ 0x806B8804
    /* mtctr r12 */ // 0x806B8808
    /* bctrl  */ // 0x806B880C
    /* li r0, 6 */ // 0x806B8810
    *(0x7c + r31) = r0; // stw @ 0x806B8814
    /* b 0x806b89e0 */ // 0x806B8818
    /* lis r3, 0 */ // 0x806B881C
    r3 = *(0 + r3); // lwz @ 0x806B8820
    r3 = *(0 + r3); // lwz @ 0x806B8824
    r29 = *(0x150 + r3); // lwz @ 0x806B8828
    if (!=) goto 0x0x806b883c;
    /* li r29, 0 */ // 0x806B8834
    /* b 0x806b8890 */ // 0x806B8838
    /* lis r30, 0 */ // 0x806B883C
    r30 = r30 + 0; // 0x806B8840
    if (==) goto 0x0x806b888c;
    r12 = *(0 + r29); // lwz @ 0x806B8848
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806B8850
    /* mtctr r12 */ // 0x806B8854
    /* bctrl  */ // 0x806B8858
    /* b 0x806b8874 */ // 0x806B885C
    if (!=) goto 0x0x806b8870;
    /* li r0, 1 */ // 0x806B8868
    /* b 0x806b8880 */ // 0x806B886C
    r3 = *(0 + r3); // lwz @ 0x806B8870
    if (!=) goto 0x0x806b8860;
    /* li r0, 0 */ // 0x806B887C
    if (==) goto 0x0x806b888c;
    /* b 0x806b8890 */ // 0x806B8888
    /* li r29, 0 */ // 0x806B888C
    r12 = *(0 + r29); // lwz @ 0x806B8890
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x806B8898
    /* mtctr r12 */ // 0x806B889C
    /* bctrl  */ // 0x806B88A0
    r3 = r29;
    /* li r4, 0x17ea */ // 0x806B88A8
    /* li r5, 0 */ // 0x806B88AC
    FUN_8064D8BC(r3, r4, r5); // bl 0x8064D8BC
    r3 = r29;
    /* li r4, 0x17e9 */ // 0x806B88B8
    /* li r5, 0 */ // 0x806B88BC
    FUN_8064D8C4(r5, r3, r4, r5); // bl 0x8064D8C4
    r0 = r31 + 0x58; // 0x806B88C4
    *(0x824 + r29) = r0; // stw @ 0x806B88C8
    r3 = r31;
    /* li r4, 0x52 */ // 0x806B88D0
    r12 = *(0 + r31); // lwz @ 0x806B88D4
    /* li r5, 0 */ // 0x806B88D8
    r12 = *(0x24 + r12); // lwz @ 0x806B88DC
    /* mtctr r12 */ // 0x806B88E0
    /* bctrl  */ // 0x806B88E4
    /* li r0, 1 */ // 0x806B88E8
    *(0x7c + r31) = r0; // stw @ 0x806B88EC
    /* b 0x806b89e0 */ // 0x806B88F0
    /* li r0, 0 */ // 0x806B88F4
    *(8 + r1) = r0; // stb @ 0x806B88F8
    r3 = *(0 + r30); // lwz @ 0x806B88FC
    *(0xc + r1) = r0; // stw @ 0x806B8904
    FUN_806F9214(r4); // bl 0x806F9214
    r0 = *(0x20 + r1); // lbz @ 0x806B890C
    if (==) goto 0x0x806b89d0;
    /* lis r3, 0 */ // 0x806B8918
    r3 = *(0 + r3); // lwz @ 0x806B891C
    r3 = *(0 + r3); // lwz @ 0x806B8920
    r29 = *(0x14c + r3); // lwz @ 0x806B8924
    if (!=) goto 0x0x806b8938;
    /* li r29, 0 */ // 0x806B8930
    /* b 0x806b898c */ // 0x806B8934
    /* lis r30, 0 */ // 0x806B8938
    r30 = r30 + 0; // 0x806B893C
    if (==) goto 0x0x806b8988;
    r12 = *(0 + r29); // lwz @ 0x806B8944
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806B894C
    /* mtctr r12 */ // 0x806B8950
    /* bctrl  */ // 0x806B8954
    /* b 0x806b8970 */ // 0x806B8958
    if (!=) goto 0x0x806b896c;
    /* li r0, 1 */ // 0x806B8964
    /* b 0x806b897c */ // 0x806B8968
    r3 = *(0 + r3); // lwz @ 0x806B896C
    if (!=) goto 0x0x806b895c;
    /* li r0, 0 */ // 0x806B8978
    if (==) goto 0x0x806b8988;
    /* b 0x806b898c */ // 0x806B8984
    /* li r29, 0 */ // 0x806B8988
    r12 = *(0 + r29); // lwz @ 0x806B898C
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x806B8994
    /* mtctr r12 */ // 0x806B8998
    /* bctrl  */ // 0x806B899C
    r12 = *(0 + r29); // lwz @ 0x806B89A0
    r3 = r29;
    /* li r4, 0x199c */ // 0x806B89A8
    /* li r5, 0 */ // 0x806B89AC
    r12 = *(0x68 + r12); // lwz @ 0x806B89B0
    /* mtctr r12 */ // 0x806B89B4
    /* bctrl  */ // 0x806B89B8
    /* li r0, 0xa9 */ // 0x806B89BC
    *(0x604 + r29) = r0; // stw @ 0x806B89C0
    /* li r0, 0x51 */ // 0x806B89C4
    *(0x84 + r31) = r0; // stw @ 0x806B89C8
    /* b 0x806b89d8 */ // 0x806B89CC
    /* li r0, 0xa9 */ // 0x806B89D0
    *(0x84 + r31) = r0; // stw @ 0x806B89D4
    /* li r0, 0 */ // 0x806B89D8
    *(0x7c + r31) = r0; // stw @ 0x806B89DC
    r0 = *(0x104 + r1); // lwz @ 0x806B89E0
    r31 = *(0xfc + r1); // lwz @ 0x806B89E4
    r30 = *(0xf8 + r1); // lwz @ 0x806B89E8
    r29 = *(0xf4 + r1); // lwz @ 0x806B89EC
    return;
}