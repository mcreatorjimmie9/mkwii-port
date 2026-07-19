/* Function at 0x806C06C0, size=628 bytes */
/* Stack frame: 160 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 30 function(s) */

int FUN_806C06C0(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -160(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 1 */ // 0x806C06C8
    /* li r5, 0 */ // 0x806C06CC
    *(0x9c + r1) = r31; // stw @ 0x806C06D4
    *(0x98 + r1) = r30; // stw @ 0x806C06D8
    *(0x94 + r1) = r29; // stw @ 0x806C06DC
    r29 = r3;
    r12 = *(0xd0 + r3); // lwz @ 0x806C06E4
    r12 = *(0x10 + r12); // lwz @ 0x806C06E8
    /* mtctr r12 */ // 0x806C06EC
    r3 = r3 + 0xd0; // 0x806C06F0
    /* bctrl  */ // 0x806C06F4
    r3 = r29;
    r4 = r29 + 0xd0; // 0x806C06FC
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r29 + 0xd0; // 0x806C0704
    /* li r4, 1 */ // 0x806C0708
    FUN_8066A380(r3, r4, r3, r4); // bl 0x8066A380
    r3 = r29;
    /* li r4, 7 */ // 0x806C0714
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r29;
    r5 = r29 + 0x2f4; // 0x806C0720
    /* li r4, 0 */ // 0x806C0724
    /* li r6, 0 */ // 0x806C0728
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r4 = r29 + 0x2f4; // 0x806C0734
    FUN_8064E324(r4, r6, r3, r4); // bl 0x8064E324
    /* lis r30, 0 */ // 0x806C073C
    r30 = r30 + 0; // 0x806C0744
    /* li r7, 0 */ // 0x806C0748
    r4 = r30 + 0x23a; // 0x806C074C
    r5 = r30 + 0x242; // 0x806C0750
    r6 = r30 + 0x252; // 0x806C0754
    FUN_8064E36C(r7, r4, r5, r6); // bl 0x8064E36C
    /* li r4, -1 */ // 0x806C0760
    FUN_8064E32C(r5, r6, r3, r4); // bl 0x8064E32C
    r3 = r29;
    r5 = r29 + 0x468; // 0x806C076C
    /* li r4, 1 */ // 0x806C0770
    /* li r6, 0 */ // 0x806C0774
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r29 + 0x468; // 0x806C077C
    FUN_806BFDAC(r5, r4, r6, r3); // bl 0x806BFDAC
    r3 = r29;
    r5 = r29 + 0xf2c; // 0x806C0788
    /* li r4, 2 */ // 0x806C078C
    /* li r6, 0 */ // 0x806C0790
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r29 + 0xf2c; // 0x806C0798
    FUN_806BFDAC(r5, r4, r6, r3); // bl 0x806BFDAC
    r3 = r29;
    r5 = r29 + 0x19f0; // 0x806C07A4
    /* li r4, 3 */ // 0x806C07A8
    /* li r6, 0 */ // 0x806C07AC
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* li r31, 0 */ // 0x806C07B4
    *(8 + r1) = r31; // stw @ 0x806C07B8
    r3 = r29 + 0x19f0; // 0x806C07BC
    r4 = r30 + 0x262; // 0x806C07C0
    r5 = r30 + 0x269; // 0x806C07C4
    r6 = r30 + 0x281; // 0x806C07C8
    r7 = r30 + 0x292; // 0x806C07CC
    r8 = r30 + 0x2a9; // 0x806C07D0
    /* li r9, 1 */ // 0x806C07D4
    /* li r10, 0 */ // 0x806C07D8
    FUN_80699328(r6, r7, r8, r9, r10); // bl 0x80699328
    r3 = r29;
    r5 = r29 + 0x1f28; // 0x806C07E4
    /* li r4, 4 */ // 0x806C07E8
    /* li r6, 0 */ // 0x806C07EC
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r4 = r29 + 0x1f28; // 0x806C07F8
    FUN_8064E324(r4, r6, r3, r4); // bl 0x8064E324
    r4 = r30 + 0x2b9; // 0x806C0804
    r5 = r30 + 0x2c1; // 0x806C0808
    r6 = r30 + 0x2d6; // 0x806C080C
    /* li r7, 0 */ // 0x806C0810
    FUN_8064E36C(r3, r4, r5, r6, r7); // bl 0x8064E36C
    /* li r4, -1 */ // 0x806C081C
    FUN_8064E32C(r6, r7, r3, r4); // bl 0x8064E32C
    r3 = r29;
    r5 = r29 + 0x209c; // 0x806C0828
    /* li r4, 5 */ // 0x806C082C
    /* li r6, 0 */ // 0x806C0830
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r4 = r29 + 0x209c; // 0x806C083C
    FUN_8064E324(r4, r6, r3, r4); // bl 0x8064E324
    r4 = r30 + 0x2eb; // 0x806C0848
    r5 = r30 + 0x2ee; // 0x806C084C
    r6 = r30 + 0x30f; // 0x806C0850
    /* li r7, 0 */ // 0x806C0854
    FUN_8064E36C(r3, r4, r5, r6, r7); // bl 0x8064E36C
    /* li r4, -1 */ // 0x806C0860
    FUN_8064E32C(r6, r7, r3, r4); // bl 0x8064E32C
    r3 = r29;
    r5 = r29 + 0x2210; // 0x806C086C
    /* li r4, 6 */ // 0x806C0870
    /* li r6, 0 */ // 0x806C0874
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r29 + 0x2210; // 0x806C087C
    r4 = r30 + 0x31d; // 0x806C0880
    r5 = r30 + 0x324; // 0x806C0884
    r6 = r30 + 0x340; // 0x806C0888
    /* li r7, 1 */ // 0x806C088C
    /* li r8, 0 */ // 0x806C0890
    /* li r9, 1 */ // 0x806C0894
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    r3 = r29 + 0x19f0; // 0x806C089C
    r4 = r29 + 0x80; // 0x806C08A0
    FUN_806993F0(r8, r9, r3, r4); // bl 0x806993F0
    r3 = r29 + 0x19f0; // 0x806C08A8
    r4 = r29 + 0x94; // 0x806C08AC
    FUN_806993F8(r3, r4, r3, r4); // bl 0x806993F8
    r3 = r29 + 0x2210; // 0x806C08B4
    r4 = r29 + 0xa8; // 0x806C08B8
    /* li r5, 0 */ // 0x806C08BC
    FUN_80649EC4(r4, r3, r4, r5); // bl 0x80649EC4
    r3 = r29 + 0xd0; // 0x806C08C4
    r5 = r29 + 0xbc; // 0x806C08C8
    /* li r4, 1 */ // 0x806C08CC
    /* li r6, 0 */ // 0x806C08D0
    /* li r7, 0 */ // 0x806C08D4
    FUN_8066A350(r3, r5, r4, r6, r7); // bl 0x8066A350
    r3 = r29 + 0x2210; // 0x806C08DC
    /* li r4, 0 */ // 0x806C08E0
    FUN_80649EEC(r6, r7, r3, r4); // bl 0x80649EEC
    *(0x2674 + r29) = r31; // stw @ 0x806C08E8
    /* lis r3, 0 */ // 0x806C08EC
    *(0x2678 + r29) = r31; // stw @ 0x806C08F0
    r3 = *(0 + r3); // lwz @ 0x806C08F4
    r3 = *(0 + r3); // lwz @ 0x806C08F8
    FUN_80685EA4(r3); // bl 0x80685EA4
    r3 = r29 + 0x2494; // 0x806C0900
    /* li r4, 0xa */ // 0x806C0904
    /* li r5, 0 */ // 0x806C0908
    /* li r6, 0 */ // 0x806C090C
    FUN_8066D808(r3, r4, r5, r6); // bl 0x8066D808
    *(0x2670 + r29) = r31; // stw @ 0x806C0914
    r31 = *(0x9c + r1); // lwz @ 0x806C0918
    r30 = *(0x98 + r1); // lwz @ 0x806C091C
    r29 = *(0x94 + r1); // lwz @ 0x806C0920
    r0 = *(0xa4 + r1); // lwz @ 0x806C0924
    return;
}