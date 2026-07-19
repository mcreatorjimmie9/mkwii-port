/* Function at 0x8064A844, size=276 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r26 */
/* Calls: 2 function(s) */

int FUN_8064A844(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -80(r1) */
    /* saved r26 */
    /* stmw r26, 0x38(r1) */ // 0x8064A850
    /* lis r26, 0 */ // 0x8064A854
    r31 = r3;
    r26 = r26 + 0; // 0x8064A85C
    FUN_806A0418(); // bl 0x806A0418
    /* lis r4, 0 */ // 0x8064A864
    r3 = r31 + 0x174; // 0x8064A868
    r4 = r4 + 0; // 0x8064A86C
    *(0 + r31) = r4; // stw @ 0x8064A870
    FUN_806690C4(r4, r3, r4); // bl 0x806690C4
    r3 = r26 + 0x6c; // 0x8064A878
    r27 = *(0x6c + r26); // lwz @ 0x8064A87C
    r28 = *(4 + r3); // lwz @ 0x8064A880
    /* lis r30, 0 */ // 0x8064A884
    r29 = *(8 + r3); // lwz @ 0x8064A888
    r30 = r30 + 0; // 0x8064A88C
    *(0x208 + r31) = r29; // stw @ 0x8064A890
    /* lis r4, 0 */ // 0x8064A894
    r8 = r26 + 0x78; // 0x8064A898
    r7 = r26 + 0x84; // 0x8064A89C
    *(0x1f8 + r31) = r30; // stw @ 0x8064A8A0
    r4 = r4 + 0; // 0x8064A8A4
    /* li r6, 0 */ // 0x8064A8A8
    /* li r5, 1 */ // 0x8064A8AC
    *(0x1fc + r31) = r31; // stw @ 0x8064A8B0
    /* li r0, 8 */ // 0x8064A8B4
    r3 = r31;
    *(0x200 + r31) = r27; // stw @ 0x8064A8BC
    *(0x204 + r31) = r28; // stw @ 0x8064A8C0
    r12 = *(0x78 + r26); // lwz @ 0x8064A8C4
    r11 = *(4 + r8); // lwz @ 0x8064A8C8
    r10 = *(8 + r8); // lwz @ 0x8064A8CC
    *(0x21c + r31) = r10; // stw @ 0x8064A8D0
    *(0x20c + r31) = r30; // stw @ 0x8064A8D4
    *(0x210 + r31) = r31; // stw @ 0x8064A8D8
    *(0x214 + r31) = r12; // stw @ 0x8064A8DC
    *(0x218 + r31) = r11; // stw @ 0x8064A8E0
    r8 = *(4 + r7); // lwz @ 0x8064A8E4
    r9 = *(0x84 + r26); // lwz @ 0x8064A8E8
    r7 = *(8 + r7); // lwz @ 0x8064A8EC
    *(0x230 + r31) = r7; // stw @ 0x8064A8F0
    *(0x220 + r31) = r30; // stw @ 0x8064A8F4
    *(0x224 + r31) = r31; // stw @ 0x8064A8F8
    *(0x228 + r31) = r9; // stw @ 0x8064A8FC
    *(0x22c + r31) = r8; // stw @ 0x8064A900
    *(0x234 + r31) = r6; // stw @ 0x8064A904
    *(0x238 + r31) = r6; // stw @ 0x8064A908
    *(0x23c + r31) = r6; // stw @ 0x8064A90C
    *(0x240 + r31) = r6; // stw @ 0x8064A910
    *(0x244 + r31) = r5; // stw @ 0x8064A914
    *(0x250 + r31) = r0; // stw @ 0x8064A918
    *(0 + r31) = r4; // stw @ 0x8064A91C
    *(8 + r1) = r27; // stw @ 0x8064A920
    *(0xc + r1) = r28; // stw @ 0x8064A924
    *(0x10 + r1) = r29; // stw @ 0x8064A928
    r0 = *(0x54 + r1); // lwz @ 0x8064A930
    *(0x14 + r1) = r12; // stw @ 0x8064A934
    *(0x18 + r1) = r11; // stw @ 0x8064A938
    *(0x1c + r1) = r10; // stw @ 0x8064A93C
    *(0x20 + r1) = r9; // stw @ 0x8064A940
    *(0x24 + r1) = r8; // stw @ 0x8064A944
    *(0x28 + r1) = r7; // stw @ 0x8064A948
    return;
}