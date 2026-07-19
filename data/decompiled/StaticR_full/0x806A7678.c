/* Function at 0x806A7678, size=344 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_806A7678(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x806A7688
    r31 = r31 + 0; // 0x806A768C
    *(0x38 + r1) = r30; // stw @ 0x806A7690
    r30 = r3;
    *(0x34 + r1) = r29; // stw @ 0x806A7698
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x806A76A0
    r3 = r30 + 0x44; // 0x806A76A4
    r4 = r4 + 0; // 0x806A76A8
    *(0 + r30) = r4; // stw @ 0x806A76AC
    FUN_80669F74(r4, r3, r4); // bl 0x80669F74
    r29 = r30 + 0x268; // 0x806A76B4
    r3 = r29;
    FUN_806A0418(r4, r3); // bl 0x806A0418
    /* lis r4, 0 */ // 0x806A76C0
    r3 = r30 + 0x3dc; // 0x806A76C4
    r4 = r4 + 0; // 0x806A76C8
    *(0 + r29) = r4; // stw @ 0x806A76CC
    FUN_80660A10(r4, r3, r4); // bl 0x80660A10
    r3 = r30 + 0x628; // 0x806A76D4
    FUN_806497A4(r3, r4, r3); // bl 0x806497A4
    r29 = r30 + 0x87c; // 0x806A76DC
    r3 = r29;
    FUN_806497A4(r3, r3); // bl 0x806497A4
    /* lis r3, 0 */ // 0x806A76E8
    /* lis r4, 0 */ // 0x806A76EC
    /* lfs f0, 0(r3) */ // 0x806A76F0
    r4 = r4 + 0; // 0x806A76F4
    /* li r3, 0x7d1 */ // 0x806A76F8
    /* li r0, 0 */ // 0x806A76FC
    *(0 + r29) = r4; // stw @ 0x806A7700
    r8 = r31 + 0; // 0x806A7704
    /* lis r7, 0 */ // 0x806A7708
    /* lis r4, 0 */ // 0x806A770C
    *(0x254 + r29) = r3; // stw @ 0x806A7710
    r7 = r7 + 0; // 0x806A7714
    r6 = r31 + 0xc; // 0x806A7718
    r5 = r31 + 0x18; // 0x806A771C
    *(0x258 + r29) = r0; // stw @ 0x806A7720
    r4 = r4 + 0; // 0x806A7724
    r3 = r30;
    /* stfs f0, 0x25c(r29) */ // 0x806A772C
    r29 = *(0 + r31); // lwz @ 0x806A7730
    r12 = *(4 + r8); // lwz @ 0x806A7734
    r11 = *(8 + r8); // lwz @ 0x806A7738
    *(0xaf0 + r30) = r11; // stw @ 0x806A773C
    *(0xae0 + r30) = r7; // stw @ 0x806A7740
    *(0xae4 + r30) = r30; // stw @ 0x806A7744
    *(0xae8 + r30) = r29; // stw @ 0x806A7748
    *(0xaec + r30) = r12; // stw @ 0x806A774C
    r10 = *(0xc + r31); // lwz @ 0x806A7750
    r9 = *(4 + r6); // lwz @ 0x806A7754
    r8 = *(8 + r6); // lwz @ 0x806A7758
    *(0xb04 + r30) = r8; // stw @ 0x806A775C
    *(0xaf4 + r30) = r7; // stw @ 0x806A7760
    *(0xaf8 + r30) = r30; // stw @ 0x806A7764
    *(0xafc + r30) = r10; // stw @ 0x806A7768
    *(0xb00 + r30) = r9; // stw @ 0x806A776C
    r7 = *(0x18 + r31); // lwz @ 0x806A7770
    r6 = *(4 + r5); // lwz @ 0x806A7774
    r0 = *(8 + r5); // lwz @ 0x806A7778
    *(0xb18 + r30) = r0; // stw @ 0x806A777C
    *(0xb08 + r30) = r4; // stw @ 0x806A7780
    *(0xb0c + r30) = r30; // stw @ 0x806A7784
    *(0xb10 + r30) = r7; // stw @ 0x806A7788
    *(0xb14 + r30) = r6; // stw @ 0x806A778C
    r31 = *(0x3c + r1); // lwz @ 0x806A7790
    *(0x20 + r1) = r29; // stw @ 0x806A7794
    r30 = *(0x38 + r1); // lwz @ 0x806A7798
    *(0x10 + r1) = r0; // stw @ 0x806A779C
    r29 = *(0x34 + r1); // lwz @ 0x806A77A0
    r0 = *(0x44 + r1); // lwz @ 0x806A77A4
    *(0x24 + r1) = r12; // stw @ 0x806A77A8
    *(0x28 + r1) = r11; // stw @ 0x806A77AC
    *(0x14 + r1) = r10; // stw @ 0x806A77B0
    *(0x18 + r1) = r9; // stw @ 0x806A77B4
    *(0x1c + r1) = r8; // stw @ 0x806A77B8
    *(8 + r1) = r7; // stw @ 0x806A77BC
    *(0xc + r1) = r6; // stw @ 0x806A77C0
    return;
}