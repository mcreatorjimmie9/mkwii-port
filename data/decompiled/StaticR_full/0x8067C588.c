/* Function at 0x8067C588, size=784 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r26 */
/* Calls: 31 function(s) */

int FUN_8067C588(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -112(r1) */
    /* saved r26 */
    /* stmw r26, 0x58(r1) */ // 0x8067C594
    r31 = r3;
    r4 = r31;
    FUN_8064E324(r3, r4); // bl 0x8064E324
    /* lis r6, 0 */ // 0x8067C5A8
    r6 = r6 + 0; // 0x8067C5B0
    /* li r7, 0 */ // 0x8067C5B4
    r4 = r6 + 0xcf; // 0x8067C5B8
    r5 = r6 + 0xd7; // 0x8067C5BC
    r6 = r6 + 0xe3; // 0x8067C5C0
    FUN_8064E36C(r6, r7, r4, r5, r6); // bl 0x8064E36C
    /* li r4, -1 */ // 0x8067C5CC
    FUN_8064E32C(r5, r6, r3, r4); // bl 0x8064E32C
    /* li r0, -1 */ // 0x8067C5D4
    /* li r3, 0 */ // 0x8067C5D8
    *(0xc40 + r31) = r3; // stw @ 0x8067C5DC
    r3 = r31;
    *(0xc38 + r31) = r0; // stw @ 0x8067C5E4
    *(0xc3c + r31) = r0; // stw @ 0x8067C5E8
    r12 = *(0 + r31); // lwz @ 0x8067C5EC
    r12 = *(0x48 + r12); // lwz @ 0x8067C5F0
    /* mtctr r12 */ // 0x8067C5F4
    /* bctrl  */ // 0x8067C5F8
    FUN_805ABAFC(); // bl 0x805ABAFC
    r4 = r3;
    r3 = r31 + 0x174; // 0x8067C604
    r6 = *(0xc94 + r4); // lwz @ 0x8067C608
    /* li r4, 0xeb */ // 0x8067C60C
    /* li r5, 0x40 */ // 0x8067C610
    FUN_8066D808(r4, r3, r4, r5); // bl 0x8066D808
    r3 = r31;
    /* li r4, 0xf6 */ // 0x8067C61C
    FUN_8069FEE8(r4, r5, r3, r4); // bl 0x8069FEE8
    /* addis r3, r31, 1 */ // 0x8067C624
    /* li r29, 0 */ // 0x8067C628
    r30 = r3 + 0x52ec; // 0x8067C62C
    /* li r28, 0 */ // 0x8067C630
    /* li r27, 0xc7 */ // 0x8067C634
    r30 = r30 + 0x64a4; // 0x8067C638
    r3 = r31;
    r4 = r29;
    r5 = r30;
    FUN_8069FEF8(r3, r4, r5); // bl 0x8069FEF8
    r3 = r30;
    r5 = r27;
    r6 = r28;
    /* li r4, 8 */ // 0x8067C658
    FUN_806DD5CC(r3, r5, r6, r4); // bl 0x806DD5CC
    /* addic. r27, r27, -1 */ // 0x8067C660
    r28 = r28 + 1; // 0x8067C664
    r30 = r30 + -0x1b4; // 0x8067C668
    r29 = r29 + 1; // 0x8067C66C
    if (>=) goto 0x0x8067c63c;
    r3 = r31;
    r4 = r29;
    r5 = r31 + 0x20c; // 0x8067C67C
    FUN_8069FEF8(r3, r4, r5); // bl 0x8069FEF8
    r4 = r31 + 0x20c; // 0x8067C688
    FUN_8064E324(r4, r5, r3, r4); // bl 0x8064E324
    /* lis r6, 0 */ // 0x8067C690
    r6 = r6 + 0; // 0x8067C698
    /* li r7, 0 */ // 0x8067C69C
    r4 = r6 + 0xef; // 0x8067C6A0
    r5 = r6 + 0xf7; // 0x8067C6A4
    r6 = r6 + 0x107; // 0x8067C6A8
    FUN_8064E36C(r6, r7, r4, r5, r6); // bl 0x8064E36C
    /* li r4, -1 */ // 0x8067C6B4
    r29 = r29 + 1; // 0x8067C6B8
    FUN_8064E32C(r6, r3, r4); // bl 0x8064E32C
    r30 = r31 + 0x380; // 0x8067C6C0
    /* li r27, 0 */ // 0x8067C6C4
    r3 = r31;
    r4 = r29;
    r5 = r30;
    FUN_8069FEF8(r3, r4, r5); // bl 0x8069FEF8
    r3 = r30;
    FUN_806DD790(r3, r4, r5, r3); // bl 0x806DD790
    r27 = r27 + 1; // 0x8067C6E0
    r30 = r30 + 0x174; // 0x8067C6E4
    r29 = r29 + 1; // 0x8067C6EC
    if (<) goto 0x0x8067c6c8;
    r3 = r31;
    r4 = r29;
    r5 = r31 + 0x6230; // 0x8067C6FC
    FUN_8069FEF8(r3, r4, r5); // bl 0x8069FEF8
    r3 = r31 + 0x6230; // 0x8067C704
    /* li r4, 6 */ // 0x8067C708
    /* li r5, 0 */ // 0x8067C70C
    /* li r6, -1 */ // 0x8067C710
    /* li r7, 1 */ // 0x8067C714
    FUN_806DBB24(r3, r4, r5, r6, r7); // bl 0x806DBB24
    r3 = r31;
    r4 = r29 + 1; // 0x8067C720
    r5 = r31 + 0x5fbc; // 0x8067C724
    FUN_8069FEF8(r7, r3, r4, r5); // bl 0x8069FEF8
    r6 = r28;
    r3 = r31 + 0x5fbc; // 0x8067C730
    /* li r4, 3 */ // 0x8067C734
    /* li r5, 0 */ // 0x8067C738
    /* li r7, 0 */ // 0x8067C73C
    FUN_806DBB24(r6, r3, r4, r5, r7); // bl 0x806DBB24
    r30 = r31 + 0x5d48; // 0x8067C744
    /* li r27, 0x1d */ // 0x8067C748
    r29 = r29 + 2; // 0x8067C74C
    r28 = r28 + 1; // 0x8067C750
    r3 = r31;
    r4 = r29;
    r5 = r30;
    FUN_8069FEF8(r3, r4, r5); // bl 0x8069FEF8
    r3 = r30;
    r5 = r27;
    r6 = r28;
    /* li r4, 2 */ // 0x8067C770
    /* li r7, 0 */ // 0x8067C774
    FUN_806DBB24(r3, r5, r6, r4, r7); // bl 0x806DBB24
    /* addic. r27, r27, -1 */ // 0x8067C77C
    r28 = r28 + 1; // 0x8067C780
    r30 = r30 + -0x274; // 0x8067C784
    r29 = r29 + 1; // 0x8067C788
    if (>=) goto 0x0x8067c754;
    /* lis r3, 0 */ // 0x8067C790
    r30 = r31 + 0x13b0; // 0x8067C794
    r3 = *(0 + r3); // lwz @ 0x8067C798
    /* li r26, 3 */ // 0x8067C79C
    r27 = *(0x36 + r3); // lha @ 0x8067C7A0
    if (==) goto 0x0x8067c7dc;
    r3 = r31;
    r4 = r29;
    r5 = r30;
    FUN_8069FEF8(r3, r4, r5); // bl 0x8069FEF8
    r3 = r30;
    r5 = r26;
    r6 = r28;
    /* li r4, 1 */ // 0x8067C7C8
    /* li r7, 0 */ // 0x8067C7CC
    FUN_806DBB24(r3, r5, r6, r4, r7); // bl 0x806DBB24
    r29 = r29 + 1; // 0x8067C7D4
    r28 = r28 + 1; // 0x8067C7D8
    /* addic. r26, r26, -1 */ // 0x8067C7DC
    r30 = r30 + -0x274; // 0x8067C7E0
    if (>=) goto 0x0x8067c7a4;
    /* mulli r0, r27, 0x274 */ // 0x8067C7E8
    r3 = r31;
    r4 = r29;
    r5 = r31 + r0; // 0x8067C7F4
    r30 = r5 + 0xc54; // 0x8067C7F8
    r5 = r30;
    FUN_8069FEF8(r3, r4, r5); // bl 0x8069FEF8
    r3 = r30;
    r6 = r28;
    /* li r4, 0 */ // 0x8067C80C
    /* li r5, 0 */ // 0x8067C810
    /* li r7, 0 */ // 0x8067C814
    FUN_806DBB24(r3, r6, r4, r5, r7); // bl 0x806DBB24
    /* addis r5, r31, 2 */ // 0x8067C81C
    r3 = r31;
    r4 = r29 + 1; // 0x8067C824
    r5 = r5 + -0x46bc; // 0x8067C828
    FUN_8069FEF8(r3, r4, r5); // bl 0x8069FEF8
    /* addis r3, r31, 2 */ // 0x8067C830
    /* li r4, 1 */ // 0x8067C834
    r3 = r3 + -0x46bc; // 0x8067C838
    FUN_806DDAB0(r5, r4, r3); // bl 0x806DDAB0
    /* addis r5, r31, 2 */ // 0x8067C840
    r3 = r31;
    r4 = r29 + 2; // 0x8067C848
    r5 = r5 + -0x4544; // 0x8067C84C
    FUN_8069FEF8(r3, r4, r5); // bl 0x8069FEF8
    /* addis r3, r31, 2 */ // 0x8067C854
    /* li r4, 3 */ // 0x8067C858
    r3 = r3 + -0x4544; // 0x8067C85C
    FUN_806DDAB0(r5, r4, r3); // bl 0x806DDAB0
    /* addis r5, r31, 2 */ // 0x8067C864
    r3 = r31;
    r4 = r29 + 3; // 0x8067C86C
    r5 = r5 + -0x43cc; // 0x8067C870
    FUN_8069FEF8(r3, r4, r5); // bl 0x8069FEF8
    /* addis r3, r31, 2 */ // 0x8067C878
    /* li r4, 4 */ // 0x8067C87C
    r3 = r3 + -0x43cc; // 0x8067C880
    FUN_806DDAB0(r5, r4, r3); // bl 0x806DDAB0
    /* li r0, 0xec */ // 0x8067C888
    *(0xc48 + r31) = r0; // stw @ 0x8067C88C
    /* li r3, 0x3b0 */ // 0x8067C890
    FUN_805E3430(r3, r3); // bl 0x805E3430
}