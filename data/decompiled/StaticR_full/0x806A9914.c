/* Function at 0x806A9914, size=412 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 16 function(s) */

int FUN_806A9914(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x806A991C
    /* li r5, 0 */ // 0x806A9920
    *(0x14 + r1) = r0; // stw @ 0x806A9924
    *(0xc + r1) = r31; // stw @ 0x806A9928
    *(8 + r1) = r30; // stw @ 0x806A992C
    r30 = r3;
    r12 = *(0x6c + r3); // lwz @ 0x806A9934
    r12 = *(0x10 + r12); // lwz @ 0x806A9938
    /* mtctr r12 */ // 0x806A993C
    r3 = r3 + 0x6c; // 0x806A9940
    /* bctrl  */ // 0x806A9944
    r3 = r30;
    r4 = r30 + 0x6c; // 0x806A994C
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r30 + 0x6c; // 0x806A9954
    /* li r4, 1 */ // 0x806A9958
    FUN_8066A380(r3, r4, r3, r4); // bl 0x8066A380
    r3 = r30 + 0x6c; // 0x806A9960
    r5 = r30 + 0x58; // 0x806A9964
    /* li r4, 1 */ // 0x806A9968
    /* li r6, 0 */ // 0x806A996C
    /* li r7, 0 */ // 0x806A9970
    FUN_8066A350(r3, r5, r4, r6, r7); // bl 0x8066A350
    r3 = r30;
    /* li r4, 4 */ // 0x806A997C
    FUN_80671C1C(r6, r7, r3, r4); // bl 0x80671C1C
    r3 = r30;
    r5 = r30 + 0x290; // 0x806A9988
    /* li r4, 0 */ // 0x806A998C
    /* li r6, 0 */ // 0x806A9990
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x290; // 0x806A9998
    /* li r4, 0 */ // 0x806A999C
    FUN_808D5444(r4, r6, r3, r4); // bl 0x808D5444
    r3 = r30;
    r5 = r30 + 0x404; // 0x806A99A8
    /* li r4, 1 */ // 0x806A99AC
    /* li r6, 0 */ // 0x806A99B0
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* lis r31, 0 */ // 0x806A99B8
    r3 = r30 + 0x404; // 0x806A99BC
    r4 = r31 + 0; // 0x806A99C0
    r5 = r4 + 0xf; // 0x806A99C4
    r6 = r4 + 0x1d; // 0x806A99C8
    FUN_8066CF50(r3, r4, r5, r6); // bl 0x8066CF50
    r3 = r30 + 0x404; // 0x806A99D0
    /* li r4, 0x1ce9 */ // 0x806A99D4
    /* li r5, 0 */ // 0x806A99D8
    FUN_806A0A34(r6, r3, r4, r5); // bl 0x806A0A34
    r3 = r30;
    r5 = r30 + 0x578; // 0x806A99E4
    /* li r4, 2 */ // 0x806A99E8
    /* li r6, 0 */ // 0x806A99EC
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r31 = r31 + 0; // 0x806A99F4
    r3 = r30 + 0x578; // 0x806A99F8
    r4 = r31 + 0x2b; // 0x806A99FC
    /* li r7, 1 */ // 0x806A9A00
    r5 = r31 + 0x32; // 0x806A9A04
    r6 = r31 + 0x4a; // 0x806A9A08
    /* li r8, 0 */ // 0x806A9A0C
    /* li r9, 0 */ // 0x806A9A10
    FUN_80649914(r7, r5, r6, r8, r9); // bl 0x80649914
    /* li r0, 2 */ // 0x806A9A18
    *(0x7b8 + r30) = r0; // stw @ 0x806A9A1C
    r3 = r30 + 0x578; // 0x806A9A20
    r4 = r30 + 0x44; // 0x806A9A24
    /* li r5, 0 */ // 0x806A9A28
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r3 = r30;
    r5 = r30 + 0x7cc; // 0x806A9A34
    /* li r4, 3 */ // 0x806A9A38
    /* li r6, 0 */ // 0x806A9A3C
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x7cc; // 0x806A9A44
    r4 = r31 + 0x4f; // 0x806A9A48
    r5 = r31 + 0x56; // 0x806A9A4C
    r6 = r31 + 0x5b; // 0x806A9A50
    /* li r7, 1 */ // 0x806A9A54
    /* li r8, 0 */ // 0x806A9A58
    /* li r9, 1 */ // 0x806A9A5C
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    /* li r0, 3 */ // 0x806A9A64
    *(0xa0c + r30) = r0; // stw @ 0x806A9A68
    r3 = r30 + 0x7cc; // 0x806A9A6C
    r4 = r30 + 0x44; // 0x806A9A70
    /* li r5, 0 */ // 0x806A9A74
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r3 = r30 + 0x578; // 0x806A9A7C
    /* li r4, 0 */ // 0x806A9A80
    FUN_80649EEC(r4, r5, r3, r4); // bl 0x80649EEC
    /* li r3, 0 */ // 0x806A9A88
    /* li r0, -1 */ // 0x806A9A8C
    *(0xa30 + r30) = r3; // stw @ 0x806A9A90
    *(0xa34 + r30) = r0; // stw @ 0x806A9A94
    r31 = *(0xc + r1); // lwz @ 0x806A9A98
    r30 = *(8 + r1); // lwz @ 0x806A9A9C
    r0 = *(0x14 + r1); // lwz @ 0x806A9AA0
    return;
}