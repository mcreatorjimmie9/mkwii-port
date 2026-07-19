/* Function at 0x807EF4AC, size=1104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_807EF4AC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x807EF4C0
    FUN_808A8DEC(); // bl 0x808A8DEC
    r0 = *(0xc8 + r31); // lwz @ 0x807EF4C8
    if (==) goto 0x0x807ef4e8;
    if (==) goto 0x0x807ef518;
    if (==) goto 0x0x807ef6c4;
    /* b 0x807ef86c */ // 0x807EF4E4
    r12 = *(0 + r31); // lwz @ 0x807EF4E8
    r3 = r31;
    /* li r4, 0 */ // 0x807EF4F0
    r12 = *(0x68 + r12); // lwz @ 0x807EF4F4
    /* mtctr r12 */ // 0x807EF4F8
    /* bctrl  */ // 0x807EF4FC
    r12 = *(0 + r31); // lwz @ 0x807EF500
    r3 = r31;
    r12 = *(0x90 + r12); // lwz @ 0x807EF508
    /* mtctr r12 */ // 0x807EF50C
    /* bctrl  */ // 0x807EF510
    /* b 0x807ef86c */ // 0x807EF514
    r12 = *(0 + r31); // lwz @ 0x807EF518
    r3 = r31;
    /* li r4, 1 */ // 0x807EF520
    r12 = *(0x68 + r12); // lwz @ 0x807EF524
    /* mtctr r12 */ // 0x807EF528
    /* bctrl  */ // 0x807EF52C
    r12 = *(0 + r31); // lwz @ 0x807EF530
    r3 = r31;
    r12 = *(0x94 + r12); // lwz @ 0x807EF538
    /* mtctr r12 */ // 0x807EF53C
    /* bctrl  */ // 0x807EF540
    r3 = *(0x20 + r31); // lwz @ 0x807EF544
    r12 = *(0 + r3); // lwz @ 0x807EF548
    r12 = *(0x14 + r12); // lwz @ 0x807EF54C
    /* mtctr r12 */ // 0x807EF550
    /* bctrl  */ // 0x807EF554
    if (==) goto 0x0x807ef56c;
    if (==) goto 0x0x807ef684;
    /* b 0x807ef68c */ // 0x807EF568
    r3 = *(0x20 + r31); // lwz @ 0x807EF56C
    r0 = *(0x46 + r3); // lha @ 0x807EF570
    r3 = *(8 + r3); // lwz @ 0x807EF574
    /* slwi r0, r0, 4 */ // 0x807EF578
    r3 = r3 + r0; // 0x807EF57C
    r0 = *(0xe + r3); // lhz @ 0x807EF580
    if (!=) goto 0x0x807ef5a8;
    r3 = *(0xcc + r31); // lwz @ 0x807EF58C
    /* li r0, 1 */ // 0x807EF590
    *(0xf2 + r3) = r0; // stb @ 0x807EF594
    r3 = *(0xcc + r31); // lwz @ 0x807EF598
    r0 = *(0xd0 + r31); // lwz @ 0x807EF59C
    *(0xf4 + r3) = r0; // stw @ 0x807EF5A0
    /* b 0x807ef68c */ // 0x807EF5A4
    if (!=) goto 0x0x807ef68c;
    r3 = *(0xd0 + r31); // lwz @ 0x807EF5B0
    r0 = *(0xb5 + r3); // lbz @ 0x807EF5B4
    if (!=) goto 0x0x807ef68c;
    /* lis r3, 0 */ // 0x807EF5C0
    r3 = *(0 + r3); // lwz @ 0x807EF5C4
    r0 = *(0x55 + r3); // lbz @ 0x807EF5C8
    if (!=) goto 0x0x807ef68c;
    /* lis r3, 0 */ // 0x807EF5D4
    r3 = *(0 + r3); // lwz @ 0x807EF5D8
    r0 = *(0xb80 + r3); // lwz @ 0x807EF5DC
    if (==) goto 0x0x807ef68c;
    /* li r0, 1 */ // 0x807EF5E8
    *(0xc8 + r31) = r0; // stw @ 0x807EF5EC
    r3 = r31;
    /* li r30, 0 */ // 0x807EF5F4
    *(0xb0 + r31) = r0; // stw @ 0x807EF5F8
    r12 = *(0 + r31); // lwz @ 0x807EF5FC
    r12 = *(0x30 + r12); // lwz @ 0x807EF600
    /* mtctr r12 */ // 0x807EF604
    /* bctrl  */ // 0x807EF608
    /* lis r4, 0x101 */ // 0x807EF60C
    r0 = *(0x20 + r3); // lwz @ 0x807EF610
    r3 = r4 + 0x101; // 0x807EF614
    /* andc. r0, r3, r0 */ // 0x807EF618
    if (!=) goto 0x0x807ef638;
    /* lis r3, 0 */ // 0x807EF620
    r3 = *(0 + r3); // lwz @ 0x807EF624
    FUN_8070D8D8(r3, r3); // bl 0x8070D8D8
    if (==) goto 0x0x807ef638;
    /* li r30, 1 */ // 0x807EF634
    if (!=) goto 0x0x807ef68c;
    r3 = *(0xd8 + r31); // lwz @ 0x807EF640
    r12 = *(0 + r3); // lwz @ 0x807EF644
    r12 = *(0xc + r12); // lwz @ 0x807EF648
    /* mtctr r12 */ // 0x807EF64C
    /* bctrl  */ // 0x807EF650
    r3 = *(0xd8 + r31); // lwz @ 0x807EF654
    r4 = r31 + 0x30; // 0x807EF658
    r12 = *(0 + r3); // lwz @ 0x807EF65C
    r12 = *(0x74 + r12); // lwz @ 0x807EF660
    /* mtctr r12 */ // 0x807EF664
    /* bctrl  */ // 0x807EF668
    r3 = *(0xd8 + r31); // lwz @ 0x807EF66C
    r12 = *(0 + r3); // lwz @ 0x807EF670
    r12 = *(0x80 + r12); // lwz @ 0x807EF674
    /* mtctr r12 */ // 0x807EF678
    /* bctrl  */ // 0x807EF67C
    /* b 0x807ef68c */ // 0x807EF680
    /* li r0, 0 */ // 0x807EF684
    *(0xc8 + r31) = r0; // stw @ 0x807EF688
    r4 = *(0x20 + r31); // lwz @ 0x807EF68C
    /* lis r3, 0 */ // 0x807EF690
    r0 = *(0x2c + r31); // lhz @ 0x807EF694
    /* lfs f2, 0x1c(r4) */ // 0x807EF698
    /* lfs f0, 0(r3) */ // 0x807EF69C
    r0 = r0 | 1; // 0x807EF6A0
    /* lfs f3, 0x20(r4) */ // 0x807EF6A4
    /* lfs f1, 0x18(r4) */ // 0x807EF6A8
    /* fadds f0, f0, f2 */ // 0x807EF6AC
    /* stfs f1, 0x30(r31) */ // 0x807EF6B0
    /* stfs f3, 0x38(r31) */ // 0x807EF6B4
    *(0x2c + r31) = r0; // sth @ 0x807EF6B8
    /* stfs f0, 0x34(r31) */ // 0x807EF6BC
    /* b 0x807ef86c */ // 0x807EF6C0
    r12 = *(0 + r31); // lwz @ 0x807EF6C4
    r3 = r31;
    /* li r4, 0 */ // 0x807EF6CC
    r12 = *(0x68 + r12); // lwz @ 0x807EF6D0
    /* mtctr r12 */ // 0x807EF6D4
    /* bctrl  */ // 0x807EF6D8
    r12 = *(0 + r31); // lwz @ 0x807EF6DC
    r3 = r31;
    r12 = *(0x90 + r12); // lwz @ 0x807EF6E4
    /* mtctr r12 */ // 0x807EF6E8
    /* bctrl  */ // 0x807EF6EC
    r3 = *(0x20 + r31); // lwz @ 0x807EF6F0
    r12 = *(0 + r3); // lwz @ 0x807EF6F4
    r12 = *(0x14 + r12); // lwz @ 0x807EF6F8
    /* mtctr r12 */ // 0x807EF6FC
    /* bctrl  */ // 0x807EF700
    if (==) goto 0x0x807ef718;
    if (==) goto 0x0x807ef830;
    /* b 0x807ef838 */ // 0x807EF714
    r3 = *(0x20 + r31); // lwz @ 0x807EF718
    r0 = *(0x46 + r3); // lha @ 0x807EF71C
    r3 = *(8 + r3); // lwz @ 0x807EF720
    /* slwi r0, r0, 4 */ // 0x807EF724
    r3 = r3 + r0; // 0x807EF728
    r0 = *(0xe + r3); // lhz @ 0x807EF72C
    if (!=) goto 0x0x807ef754;
    r3 = *(0xcc + r31); // lwz @ 0x807EF738
    /* li r0, 1 */ // 0x807EF73C
    *(0xf2 + r3) = r0; // stb @ 0x807EF740
    r3 = *(0xcc + r31); // lwz @ 0x807EF744
    r0 = *(0xd0 + r31); // lwz @ 0x807EF748
    *(0xf4 + r3) = r0; // stw @ 0x807EF74C
    /* b 0x807ef838 */ // 0x807EF750
    if (!=) goto 0x0x807ef838;
    r3 = *(0xd0 + r31); // lwz @ 0x807EF75C
    r0 = *(0xb5 + r3); // lbz @ 0x807EF760
    if (!=) goto 0x0x807ef838;
    /* lis r3, 0 */ // 0x807EF76C
    r3 = *(0 + r3); // lwz @ 0x807EF770
    r0 = *(0x55 + r3); // lbz @ 0x807EF774
    if (!=) goto 0x0x807ef838;
    /* lis r3, 0 */ // 0x807EF780
    r3 = *(0 + r3); // lwz @ 0x807EF784
    r0 = *(0xb80 + r3); // lwz @ 0x807EF788
    if (==) goto 0x0x807ef838;
    /* li r0, 1 */ // 0x807EF794
    *(0xc8 + r31) = r0; // stw @ 0x807EF798
    r3 = r31;
    /* li r30, 0 */ // 0x807EF7A0
    *(0xb0 + r31) = r0; // stw @ 0x807EF7A4
    r12 = *(0 + r31); // lwz @ 0x807EF7A8
    r12 = *(0x30 + r12); // lwz @ 0x807EF7AC
    /* mtctr r12 */ // 0x807EF7B0
    /* bctrl  */ // 0x807EF7B4
    /* lis r4, 0x101 */ // 0x807EF7B8
    r0 = *(0x20 + r3); // lwz @ 0x807EF7BC
    r3 = r4 + 0x101; // 0x807EF7C0
    /* andc. r0, r3, r0 */ // 0x807EF7C4
    if (!=) goto 0x0x807ef7e4;
    /* lis r3, 0 */ // 0x807EF7CC
    r3 = *(0 + r3); // lwz @ 0x807EF7D0
    FUN_8070D8D8(r3, r3); // bl 0x8070D8D8
    if (==) goto 0x0x807ef7e4;
    /* li r30, 1 */ // 0x807EF7E0
    if (!=) goto 0x0x807ef838;
    r3 = *(0xd8 + r31); // lwz @ 0x807EF7EC
    r12 = *(0 + r3); // lwz @ 0x807EF7F0
    r12 = *(0xc + r12); // lwz @ 0x807EF7F4
    /* mtctr r12 */ // 0x807EF7F8
    /* bctrl  */ // 0x807EF7FC
    r3 = *(0xd8 + r31); // lwz @ 0x807EF800
    r4 = r31 + 0x30; // 0x807EF804
    r12 = *(0 + r3); // lwz @ 0x807EF808
    r12 = *(0x74 + r12); // lwz @ 0x807EF80C
    /* mtctr r12 */ // 0x807EF810
    /* bctrl  */ // 0x807EF814
    r3 = *(0xd8 + r31); // lwz @ 0x807EF818
    r12 = *(0 + r3); // lwz @ 0x807EF81C
    r12 = *(0x80 + r12); // lwz @ 0x807EF820
    /* mtctr r12 */ // 0x807EF824
    /* bctrl  */ // 0x807EF828
    /* b 0x807ef838 */ // 0x807EF82C
    /* li r0, 0 */ // 0x807EF830
    *(0xc8 + r31) = r0; // stw @ 0x807EF834
    r4 = *(0x20 + r31); // lwz @ 0x807EF838
    /* lis r3, 0 */ // 0x807EF83C
    r0 = *(0x2c + r31); // lhz @ 0x807EF840
    /* lfs f2, 0x1c(r4) */ // 0x807EF844
    /* lfs f0, 0(r3) */ // 0x807EF848
    r0 = r0 | 1; // 0x807EF84C
    /* lfs f3, 0x20(r4) */ // 0x807EF850
    /* lfs f1, 0x18(r4) */ // 0x807EF854
    /* fadds f0, f0, f2 */ // 0x807EF858
    /* stfs f1, 0x30(r31) */ // 0x807EF85C
    /* stfs f3, 0x38(r31) */ // 0x807EF860
    *(0x2c + r31) = r0; // sth @ 0x807EF864
    /* stfs f0, 0x34(r31) */ // 0x807EF868
    r12 = *(0 + r31); // lwz @ 0x807EF86C
    r3 = r31;
    /* li r30, 0 */ // 0x807EF874
    r12 = *(0x30 + r12); // lwz @ 0x807EF878
    /* mtctr r12 */ // 0x807EF87C
    /* bctrl  */ // 0x807EF880
    /* lis r4, 0x101 */ // 0x807EF884
    r0 = *(0x20 + r3); // lwz @ 0x807EF888
    r3 = r4 + 0x101; // 0x807EF88C
    /* andc. r0, r3, r0 */ // 0x807EF890
    if (!=) goto 0x0x807ef8b0;
    /* lis r3, 0 */ // 0x807EF898
    r3 = *(0 + r3); // lwz @ 0x807EF89C
    FUN_8070D8D8(r3, r3); // bl 0x8070D8D8
    if (==) goto 0x0x807ef8b0;
    /* li r30, 1 */ // 0x807EF8AC
    if (!=) goto 0x0x807ef8e4;
    r3 = *(0xd8 + r31); // lwz @ 0x807EF8B8
    r4 = r31 + 0x30; // 0x807EF8BC
    r12 = *(0 + r3); // lwz @ 0x807EF8C0
    r12 = *(0x74 + r12); // lwz @ 0x807EF8C4
    /* mtctr r12 */ // 0x807EF8C8
    /* bctrl  */ // 0x807EF8CC
    r3 = *(0xd8 + r31); // lwz @ 0x807EF8D0
    r12 = *(0 + r3); // lwz @ 0x807EF8D4
    r12 = *(0x80 + r12); // lwz @ 0x807EF8D8
    /* mtctr r12 */ // 0x807EF8DC
    /* bctrl  */ // 0x807EF8E0
    r0 = *(0x14 + r1); // lwz @ 0x807EF8E4
    r31 = *(0xc + r1); // lwz @ 0x807EF8E8
    r30 = *(8 + r1); // lwz @ 0x807EF8EC
    return;
}