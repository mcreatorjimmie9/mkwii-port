/* Function at 0x80649914, size=492 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r26 */
/* Calls: 10 function(s) */

int FUN_80649914(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -80(r1) */
    /* saved r26 */
    /* stmw r26, 0x38(r1) */ // 0x80649920
    r31 = r3;
    r26 = r4;
    r30 = r5;
    r29 = r6;
    r27 = r8;
    r28 = r9;
    r4 = r31;
    *(0x244 + r3) = r7; // stw @ 0x80649940
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r7, 0 */ // 0x8064994C
    r4 = r26;
    r5 = r30;
    r6 = r29;
    r7 = r7 + 0; // 0x80649960
    FUN_8064E36C(r4, r5, r6, r3, r7); // bl 0x8064E36C
    /* li r4, -1 */ // 0x8064996C
    FUN_8064E32C(r3, r7, r3, r4); // bl 0x8064E32C
    /* lis r4, 0 */ // 0x80649974
    r3 = r31 + 0xa8; // 0x80649978
    r4 = r4 + 0; // 0x8064997C
    r4 = r4 + 0xb; // 0x80649980
    FUN_80665D1C(r4, r3, r4, r4); // bl 0x80665D1C
    r29 = r3;
    if (!=) goto 0x0x8064999c;
    /* li r29, 0 */ // 0x80649994
    /* b 0x806499ec */ // 0x80649998
    /* lis r30, 0 */ // 0x8064999C
    r30 = r30 + 0; // 0x806499A0
    if (==) goto 0x0x806499e8;
    r12 = *(0 + r3); // lwz @ 0x806499A8
    r12 = *(0xc + r12); // lwz @ 0x806499AC
    /* mtctr r12 */ // 0x806499B0
    /* bctrl  */ // 0x806499B4
    /* b 0x806499d0 */ // 0x806499B8
    if (!=) goto 0x0x806499cc;
    /* li r0, 1 */ // 0x806499C4
    /* b 0x806499dc */ // 0x806499C8
    r3 = *(0 + r3); // lwz @ 0x806499CC
    if (!=) goto 0x0x806499bc;
    /* li r0, 0 */ // 0x806499D8
    if (==) goto 0x0x806499e8;
    /* b 0x806499ec */ // 0x806499E4
    /* li r29, 0 */ // 0x806499E8
    r4 = r31 + 0x1f8; // 0x806499EC
    r0 = r31 + 0x20c; // 0x806499F0
    *(0x198 + r31) = r4; // stw @ 0x806499F4
    r5 = r27;
    r6 = r28;
    r3 = r31 + 0x174; // 0x80649A00
    *(0x180 + r31) = r29; // stw @ 0x80649A04
    /* li r4, 0 */ // 0x80649A08
    *(0x19c + r31) = r0; // stw @ 0x80649A0C
    FUN_80669214(r6, r3, r4); // bl 0x80669214
    r3 = r31 + 0x174; // 0x80649A14
    r5 = r31 + 0x220; // 0x80649A18
    /* li r4, 0 */ // 0x80649A1C
    /* li r6, 0 */ // 0x80649A20
    FUN_806692C4(r3, r5, r4, r6); // bl 0x806692C4
    r4 = *(0x244 + r31); // lwz @ 0x80649A28
    r3 = r31 + 0x174; // 0x80649A2C
    FUN_806692E0(r4, r6, r3); // bl 0x806692E0
    r3 = *(0x64 + r31); // lwz @ 0x80649A34
    r3 = *(0xc + r3); // lwz @ 0x80649A38
    r30 = *(0x38 + r3); // lwz @ 0x80649A3C
    if (!=) goto 0x0x80649a50;
    /* li r30, 0 */ // 0x80649A48
    /* b 0x80649aa4 */ // 0x80649A4C
    /* lis r29, 0 */ // 0x80649A50
    r29 = r29 + 0; // 0x80649A54
    if (==) goto 0x0x80649aa0;
    r12 = *(0 + r30); // lwz @ 0x80649A5C
    r3 = r30;
    r12 = *(8 + r12); // lwz @ 0x80649A64
    /* mtctr r12 */ // 0x80649A68
    /* bctrl  */ // 0x80649A6C
    /* b 0x80649a88 */ // 0x80649A70
    if (!=) goto 0x0x80649a84;
    /* li r0, 1 */ // 0x80649A7C
    /* b 0x80649a94 */ // 0x80649A80
    r3 = *(0 + r3); // lwz @ 0x80649A84
    if (!=) goto 0x0x80649a74;
    /* li r0, 0 */ // 0x80649A90
    if (==) goto 0x0x80649aa0;
    /* b 0x80649aa4 */ // 0x80649A9C
    /* li r30, 0 */ // 0x80649AA0
    r3 = r30;
    r4 = r31 + 0x174; // 0x80649AA8
    FUN_8066A310(r3, r4); // bl 0x8066A310
    /* lis r30, 0 */ // 0x80649AB0
    r3 = r31 + 0xa8; // 0x80649AB4
    r30 = r30 + 0; // 0x80649AB8
    r4 = r30 + 0x11; // 0x80649ABC
    FUN_80665D1C(r3, r4); // bl 0x80665D1C
    *(0x248 + r31) = r3; // stw @ 0x80649AC4
    r4 = r30 + 0x1f; // 0x80649AC8
    r3 = r31 + 0xa8; // 0x80649ACC
    FUN_80665D1C(r4, r4, r3); // bl 0x80665D1C
    *(0x24c + r31) = r3; // stw @ 0x80649AD4
    r3 = r31;
    r12 = *(0 + r31); // lwz @ 0x80649ADC
    r12 = *(0x3c + r12); // lwz @ 0x80649AE0
    /* mtctr r12 */ // 0x80649AE4
    /* bctrl  */ // 0x80649AE8
    r0 = *(0x54 + r1); // lwz @ 0x80649AF0
    return;
}