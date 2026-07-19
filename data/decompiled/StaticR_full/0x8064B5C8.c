/* Function at 0x8064B5C8, size=424 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 11 function(s) */

int FUN_8064B5C8(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r31, 0 */ // 0x8064B5D8
    r31 = r31 + 0; // 0x8064B5DC
    *(0x38 + r1) = r30; // stw @ 0x8064B5E0
    r30 = r3;
    *(0x34 + r1) = r29; // stw @ 0x8064B5E8
    *(0x30 + r1) = r28; // stw @ 0x8064B5EC
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x8064B5F4
    r3 = r30 + 0x44; // 0x8064B5F8
    r4 = r4 + 0; // 0x8064B5FC
    *(0 + r30) = r4; // stw @ 0x8064B600
    FUN_80669F74(r4, r3, r4); // bl 0x80669F74
    r29 = r30 + 0x268; // 0x8064B608
    r3 = r29;
    FUN_806A0418(r4, r3); // bl 0x806A0418
    /* lis r4, 0 */ // 0x8064B614
    r3 = r30 + 0x3dc; // 0x8064B618
    r4 = r4 + 0; // 0x8064B61C
    *(0 + r29) = r4; // stw @ 0x8064B620
    FUN_806497A4(r4, r3, r4); // bl 0x806497A4
    r3 = r30 + 0x630; // 0x8064B628
    FUN_806497A4(r3, r4, r3); // bl 0x806497A4
    r3 = r30 + 0x884; // 0x8064B630
    FUN_806497A4(r3, r3); // bl 0x806497A4
    r3 = r30 + 0xad8; // 0x8064B638
    FUN_806497A4(r3, r3, r3); // bl 0x806497A4
    r29 = r30 + 0xd2c; // 0x8064B640
    r3 = r29;
    FUN_806497A4(r3, r3); // bl 0x806497A4
    /* lis r3, 0 */ // 0x8064B64C
    r28 = r30 + 0xf94; // 0x8064B650
    r3 = r3 + 0; // 0x8064B654
    *(0 + r29) = r3; // stw @ 0x8064B658
    r3 = r28;
    FUN_806497A4(r3, r3, r3); // bl 0x806497A4
    /* lis r3, 0 */ // 0x8064B664
    /* lis r5, 0 */ // 0x8064B668
    /* lfs f0, 0(r3) */ // 0x8064B66C
    r5 = r5 + 0; // 0x8064B670
    r29 = r30 + 0x11f8; // 0x8064B674
    /* li r4, 0x7d1 */ // 0x8064B678
    /* li r0, 0 */ // 0x8064B67C
    *(0 + r28) = r5; // stw @ 0x8064B680
    r3 = r29;
    *(0x254 + r28) = r4; // stw @ 0x8064B688
    *(0x258 + r28) = r0; // stw @ 0x8064B68C
    /* stfs f0, 0x25c(r28) */ // 0x8064B690
    FUN_806A0418(r3); // bl 0x806A0418
    /* lis r3, 0 */ // 0x8064B698
    /* lis r7, 0 */ // 0x8064B69C
    r3 = r3 + 0; // 0x8064B6A0
    *(0 + r29) = r3; // stw @ 0x8064B6A4
    r3 = r31 + 0x84; // 0x8064B6A8
    /* lis r4, 0 */ // 0x8064B6AC
    r29 = *(0x84 + r31); // lwz @ 0x8064B6B0
    r7 = r7 + 0; // 0x8064B6B4
    r12 = *(4 + r3); // lwz @ 0x8064B6B8
    r6 = r31 + 0x90; // 0x8064B6BC
    r11 = *(8 + r3); // lwz @ 0x8064B6C0
    r5 = r31 + 0x9c; // 0x8064B6C4
    *(0x137c + r30) = r11; // stw @ 0x8064B6C8
    r4 = r4 + 0; // 0x8064B6CC
    r3 = r30 + 0x13b0; // 0x8064B6D0
    *(0x136c + r30) = r7; // stw @ 0x8064B6D4
    *(0x1370 + r30) = r30; // stw @ 0x8064B6D8
    *(0x1374 + r30) = r29; // stw @ 0x8064B6DC
    *(0x1378 + r30) = r12; // stw @ 0x8064B6E0
    r10 = *(0x90 + r31); // lwz @ 0x8064B6E4
    r9 = *(4 + r6); // lwz @ 0x8064B6E8
    r8 = *(8 + r6); // lwz @ 0x8064B6EC
    *(0x1390 + r30) = r8; // stw @ 0x8064B6F0
    *(0x1380 + r30) = r7; // stw @ 0x8064B6F4
    *(0x1384 + r30) = r30; // stw @ 0x8064B6F8
    *(0x1388 + r30) = r10; // stw @ 0x8064B6FC
    *(0x138c + r30) = r9; // stw @ 0x8064B700
    r7 = *(0x9c + r31); // lwz @ 0x8064B704
    r6 = *(4 + r5); // lwz @ 0x8064B708
    r0 = *(8 + r5); // lwz @ 0x8064B70C
    *(0x20 + r1) = r29; // stw @ 0x8064B710
    *(0x24 + r1) = r12; // stw @ 0x8064B714
    *(0x28 + r1) = r11; // stw @ 0x8064B718
    *(0x14 + r1) = r10; // stw @ 0x8064B71C
    *(0x18 + r1) = r9; // stw @ 0x8064B720
    *(0x1c + r1) = r8; // stw @ 0x8064B724
    *(8 + r1) = r7; // stw @ 0x8064B728
    *(0xc + r1) = r6; // stw @ 0x8064B72C
    *(0x10 + r1) = r0; // stw @ 0x8064B730
    *(0x1394 + r30) = r4; // stw @ 0x8064B734
    *(0x1398 + r30) = r30; // stw @ 0x8064B738
    *(0x139c + r30) = r7; // stw @ 0x8064B73C
    *(0x13a0 + r30) = r6; // stw @ 0x8064B740
    *(0x13a4 + r30) = r0; // stw @ 0x8064B744
    FUN_8066D634(); // bl 0x8066D634
    r3 = r30;
    r31 = *(0x3c + r1); // lwz @ 0x8064B750
    r30 = *(0x38 + r1); // lwz @ 0x8064B754
    r29 = *(0x34 + r1); // lwz @ 0x8064B758
    r28 = *(0x30 + r1); // lwz @ 0x8064B75C
    r0 = *(0x44 + r1); // lwz @ 0x8064B760
    return;
}