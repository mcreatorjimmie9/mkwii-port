/* Function at 0x8064C5F0, size=792 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30 */
/* Calls: 32 function(s) */

int FUN_8064C5F0(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x8064C5F8
    /* li r5, 0 */ // 0x8064C5FC
    *(0xe4 + r1) = r0; // stw @ 0x8064C600
    *(0xdc + r1) = r31; // stw @ 0x8064C604
    r31 = r3;
    *(0xd8 + r1) = r30; // stw @ 0x8064C60C
    r12 = *(0x80 + r3); // lwz @ 0x8064C610
    r12 = *(0x10 + r12); // lwz @ 0x8064C614
    /* mtctr r12 */ // 0x8064C618
    r3 = r3 + 0x80; // 0x8064C61C
    /* bctrl  */ // 0x8064C620
    r3 = r31;
    r4 = r31 + 0x80; // 0x8064C628
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r31 + 0x80; // 0x8064C630
    /* li r4, 2 */ // 0x8064C634
    FUN_8066A380(r3, r4, r3, r4); // bl 0x8066A380
    r3 = r31 + 0x80; // 0x8064C63C
    r5 = r31 + 0x6c; // 0x8064C640
    /* li r4, 1 */ // 0x8064C644
    /* li r6, 0 */ // 0x8064C648
    /* li r7, 0 */ // 0x8064C64C
    FUN_8066A350(r3, r5, r4, r6, r7); // bl 0x8066A350
    r3 = r31;
    /* li r4, 5 */ // 0x8064C658
    FUN_80671C1C(r6, r7, r3, r4); // bl 0x80671C1C
    r3 = r31;
    r5 = r31 + 0x2a4; // 0x8064C664
    /* li r4, 0 */ // 0x8064C668
    /* li r6, 0 */ // 0x8064C66C
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r31 + 0x2a4; // 0x8064C674
    /* li r4, 0 */ // 0x8064C678
    FUN_808D5444(r4, r6, r3, r4); // bl 0x808D5444
    r3 = r31 + 0x2a4; // 0x8064C680
    /* li r4, 0x13bb */ // 0x8064C684
    /* li r5, 0 */ // 0x8064C688
    FUN_808D5844(r4, r3, r4, r5); // bl 0x808D5844
    r3 = r31;
    r5 = r31 + 0x418; // 0x8064C694
    /* li r4, 1 */ // 0x8064C698
    /* li r6, 0 */ // 0x8064C69C
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* lis r6, 0 */ // 0x8064C6A4
    r3 = r31 + 0x418; // 0x8064C6A8
    r6 = r6 + 0; // 0x8064C6AC
    /* li r7, 1 */ // 0x8064C6B0
    r4 = r6 + 0x11e; // 0x8064C6B4
    /* li r8, 0 */ // 0x8064C6B8
    r5 = r6 + 0x125; // 0x8064C6BC
    r6 = r6 + 0x13a; // 0x8064C6C0
    /* li r9, 0 */ // 0x8064C6C4
    FUN_80649914(r4, r8, r5, r6, r9); // bl 0x80649914
    /* li r0, 1 */ // 0x8064C6CC
    *(0x658 + r31) = r0; // stw @ 0x8064C6D0
    r3 = r31 + 0x418; // 0x8064C6D4
    r4 = r31 + 0x44; // 0x8064C6D8
    /* li r5, 0 */ // 0x8064C6DC
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r3 = r31 + 0x418; // 0x8064C6E4
    r4 = r31 + 0x58; // 0x8064C6E8
    FUN_80649EDC(r4, r5, r3, r4); // bl 0x80649EDC
    FUN_80654ECC(r3, r4, r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x8064C6F8
    r5 = *(0 + r3); // lwz @ 0x8064C6FC
    r0 = *(0x36 + r5); // lha @ 0x8064C700
    if (<) goto 0x0x8064c728;
    /* lis r3, 1 */ // 0x8064C70C
    /* clrlwi r4, r0, 0x18 */ // 0x8064C710
    r0 = r3 + -0x6c10; // 0x8064C714
    r0 = r0 * r4; // 0x8064C718
    r3 = r5 + r0; // 0x8064C71C
    r3 = r3 + 0x38; // 0x8064C720
    /* b 0x8064c72c */ // 0x8064C724
    /* li r3, 0 */ // 0x8064C728
    /* addis r3, r3, 1 */ // 0x8064C72C
    /* lis r30, 0 */ // 0x8064C730
    r0 = *(-0x6d74 + r3); // lwz @ 0x8064C734
    r30 = r30 + 0; // 0x8064C738
    *(8 + r1) = r0; // stw @ 0x8064C73C
    r3 = r31 + 0x418; // 0x8064C740
    r4 = r30 + 0x14c; // 0x8064C744
    /* li r5, 0x13a1 */ // 0x8064C74C
    FUN_806A093C(r3, r4, r6, r5); // bl 0x806A093C
    r3 = r31;
    r5 = r31 + 0x66c; // 0x8064C758
    /* li r4, 2 */ // 0x8064C75C
    /* li r6, 0 */ // 0x8064C760
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r31 + 0x66c; // 0x8064C768
    r4 = r30 + 0x14f; // 0x8064C76C
    r5 = r30 + 0x156; // 0x8064C770
    r6 = r30 + 0x160; // 0x8064C774
    /* li r7, 1 */ // 0x8064C778
    /* li r8, 0 */ // 0x8064C77C
    /* li r9, 0 */ // 0x8064C780
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    /* li r0, 2 */ // 0x8064C788
    *(0x8ac + r31) = r0; // stw @ 0x8064C78C
    r3 = r31 + 0x66c; // 0x8064C790
    r4 = r31 + 0x44; // 0x8064C794
    /* li r5, 0 */ // 0x8064C798
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r3 = r31 + 0x66c; // 0x8064C7A0
    r4 = r31 + 0x58; // 0x8064C7A4
    FUN_80649EDC(r4, r5, r3, r4); // bl 0x80649EDC
    r3 = r31;
    r5 = r31 + 0x8c0; // 0x8064C7B0
    /* li r4, 3 */ // 0x8064C7B4
    /* li r6, 0 */ // 0x8064C7B8
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r31 + 0x8c0; // 0x8064C7C0
    r4 = r30 + 0x170; // 0x8064C7C4
    r5 = r30 + 0x177; // 0x8064C7C8
    r6 = r30 + 0x17c; // 0x8064C7CC
    /* li r7, 1 */ // 0x8064C7D0
    /* li r8, 0 */ // 0x8064C7D4
    /* li r9, 1 */ // 0x8064C7D8
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    /* li r0, 3 */ // 0x8064C7E0
    *(0xb00 + r31) = r0; // stw @ 0x8064C7E4
    r3 = r31 + 0x8c0; // 0x8064C7E8
    r4 = r31 + 0x44; // 0x8064C7EC
    /* li r5, 0 */ // 0x8064C7F0
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r3 = r31 + 0x8c0; // 0x8064C7F8
    r4 = r31 + 0x58; // 0x8064C7FC
    FUN_80649EDC(r4, r5, r3, r4); // bl 0x80649EDC
    r3 = r31;
    r5 = r31 + 0xb24; // 0x8064C808
    /* li r4, 4 */ // 0x8064C80C
    /* li r6, 0 */ // 0x8064C810
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r31 + 0xb24; // 0x8064C818
    FUN_808D58CC(r5, r4, r6, r3); // bl 0x808D58CC
    /* lis r30, 0 */ // 0x8064C820
    /* li r4, 4 */ // 0x8064C824
    r3 = *(0 + r30); // lwz @ 0x8064C828
    /* li r5, 0 */ // 0x8064C82C
    /* li r6, -1 */ // 0x8064C830
    /* li r7, 0 */ // 0x8064C834
    r3 = *(0x90 + r3); // lwz @ 0x8064C838
    FUN_80684E28(r5, r6, r7); // bl 0x80684E28
    r3 = *(0 + r30); // lwz @ 0x8064C840
    r3 = *(0x90 + r3); // lwz @ 0x8064C844
    FUN_806843C8(r7); // bl 0x806843C8
    /* lis r3, 0 */ // 0x8064C84C
    r3 = *(0 + r3); // lwz @ 0x8064C850
    r3 = *(0x18 + r3); // lwz @ 0x8064C854
    FUN_805ABD4C(r3); // bl 0x805ABD4C
    *(0xc98 + r31) = r3; // stb @ 0x8064C85C
    r3 = *(0 + r30); // lwz @ 0x8064C860
    r0 = *(0x10 + r3); // lwz @ 0x8064C864
    if (<) goto 0x0x8064c878;
    if (<=) goto 0x0x8064c894;
    if (==) goto 0x0x8064c894;
    if (==) goto 0x0x8064c8b4;
    if (==) goto 0x0x8064c8b4;
    /* b 0x8064c8d4 */ // 0x8064C890
    r3 = r31 + 0x418; // 0x8064C894
    /* li r4, 0 */ // 0x8064C898
    FUN_80649EEC(r3, r4); // bl 0x80649EEC
    r3 = r31 + 0xb24; // 0x8064C8A0
    /* li r4, 0x10d9 */ // 0x8064C8A4
    /* li r5, 0 */ // 0x8064C8A8
    FUN_808D5A00(r4, r3, r4, r5); // bl 0x808D5A00
    /* b 0x8064c8f0 */ // 0x8064C8B0
    r3 = r31 + 0x66c; // 0x8064C8B4
    /* li r4, 0 */ // 0x8064C8B8
    FUN_80649EEC(r5, r3, r4); // bl 0x80649EEC
    r3 = r31 + 0xb24; // 0x8064C8C0
    /* li r4, 0x13c6 */ // 0x8064C8C4
    /* li r5, 0 */ // 0x8064C8C8
    FUN_808D5A00(r4, r3, r4, r5); // bl 0x808D5A00
    /* b 0x8064c8f0 */ // 0x8064C8D0
    r3 = r31 + 0x418; // 0x8064C8D4
    /* li r4, 0 */ // 0x8064C8D8
    FUN_80649EEC(r5, r3, r4); // bl 0x80649EEC
    r3 = r31 + 0xb24; // 0x8064C8E0
    /* li r4, 0x10d9 */ // 0x8064C8E4
    /* li r5, 0 */ // 0x8064C8E8
    FUN_808D5A00(r4, r3, r4, r5); // bl 0x808D5A00
    r0 = *(0xe4 + r1); // lwz @ 0x8064C8F0
    r31 = *(0xdc + r1); // lwz @ 0x8064C8F4
    r30 = *(0xd8 + r1); // lwz @ 0x8064C8F8
    return;
}