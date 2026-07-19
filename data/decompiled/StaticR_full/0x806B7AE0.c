/* Function at 0x806B7AE0, size=412 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 17 function(s) */

int FUN_806B7AE0(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x806B7AE8
    /* li r5, 0 */ // 0x806B7AEC
    *(0x14 + r1) = r0; // stw @ 0x806B7AF0
    *(0xc + r1) = r31; // stw @ 0x806B7AF4
    *(8 + r1) = r30; // stw @ 0x806B7AF8
    r30 = r3;
    r12 = *(0x6c + r3); // lwz @ 0x806B7B00
    r12 = *(0x10 + r12); // lwz @ 0x806B7B04
    /* mtctr r12 */ // 0x806B7B08
    r3 = r3 + 0x6c; // 0x806B7B0C
    /* bctrl  */ // 0x806B7B10
    r3 = r30;
    r4 = r30 + 0x6c; // 0x806B7B18
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r30 + 0x6c; // 0x806B7B20
    /* li r4, 1 */ // 0x806B7B24
    FUN_8066A380(r3, r4, r3, r4); // bl 0x8066A380
    r3 = r30 + 0x6c; // 0x806B7B2C
    r5 = r30 + 0x58; // 0x806B7B30
    /* li r4, 1 */ // 0x806B7B34
    /* li r6, 0 */ // 0x806B7B38
    /* li r7, 0 */ // 0x806B7B3C
    FUN_8066A350(r3, r5, r4, r6, r7); // bl 0x8066A350
    r3 = r30;
    /* li r4, 4 */ // 0x806B7B48
    FUN_80671C1C(r6, r7, r3, r4); // bl 0x80671C1C
    r3 = r30;
    r5 = r30 + 0x290; // 0x806B7B54
    /* li r4, 0 */ // 0x806B7B58
    /* li r6, 0 */ // 0x806B7B5C
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x290; // 0x806B7B64
    /* li r4, 1 */ // 0x806B7B68
    FUN_808D5444(r4, r6, r3, r4); // bl 0x808D5444
    r3 = r30 + 0x290; // 0x806B7B70
    /* li r4, 0xa2f */ // 0x806B7B74
    /* li r5, 0 */ // 0x806B7B78
    FUN_808D5844(r4, r3, r4, r5); // bl 0x808D5844
    r3 = r30;
    r5 = r30 + 0x404; // 0x806B7B84
    /* li r4, 1 */ // 0x806B7B88
    /* li r6, 0 */ // 0x806B7B8C
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* lis r31, 0 */ // 0x806B7B94
    r3 = r30 + 0x404; // 0x806B7B98
    r31 = r31 + 0; // 0x806B7B9C
    r4 = r31 + 0x98; // 0x806B7BA0
    r5 = r31 + 0xa7; // 0x806B7BA4
    r6 = r31 + 0xb5; // 0x806B7BA8
    FUN_8066CF50(r3, r4, r5, r6); // bl 0x8066CF50
    r3 = r30 + 0x404; // 0x806B7BB0
    /* li r4, 0xa30 */ // 0x806B7BB4
    /* li r5, 0 */ // 0x806B7BB8
    FUN_806A0A34(r6, r3, r4, r5); // bl 0x806A0A34
    r3 = r30;
    r5 = r30 + 0x578; // 0x806B7BC4
    /* li r4, 2 */ // 0x806B7BC8
    /* li r6, 0 */ // 0x806B7BCC
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x578; // 0x806B7BD4
    r4 = r31 + 0xc3; // 0x806B7BD8
    r5 = r31 + 0xca; // 0x806B7BDC
    r6 = r31 + 0xe2; // 0x806B7BE0
    /* li r7, 1 */ // 0x806B7BE4
    /* li r8, 0 */ // 0x806B7BE8
    /* li r9, 0 */ // 0x806B7BEC
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    /* li r0, 2 */ // 0x806B7BF4
    *(0x7b8 + r30) = r0; // stw @ 0x806B7BF8
    r3 = r30 + 0x578; // 0x806B7BFC
    r4 = r30 + 0x44; // 0x806B7C00
    /* li r5, 0 */ // 0x806B7C04
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r3 = r30;
    r5 = r30 + 0x7cc; // 0x806B7C10
    /* li r4, 3 */ // 0x806B7C14
    /* li r6, 0 */ // 0x806B7C18
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x7cc; // 0x806B7C20
    r4 = r31 + 0xe7; // 0x806B7C24
    r5 = r31 + 0xee; // 0x806B7C28
    r6 = r31 + 0xf3; // 0x806B7C2C
    /* li r7, 1 */ // 0x806B7C30
    /* li r8, 0 */ // 0x806B7C34
    /* li r9, 1 */ // 0x806B7C38
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    /* li r0, 3 */ // 0x806B7C40
    *(0xa0c + r30) = r0; // stw @ 0x806B7C44
    r3 = r30 + 0x7cc; // 0x806B7C48
    r4 = r30 + 0x44; // 0x806B7C4C
    /* li r5, 0 */ // 0x806B7C50
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r3 = r30 + 0x578; // 0x806B7C58
    /* li r4, 0 */ // 0x806B7C5C
    FUN_80649EEC(r4, r5, r3, r4); // bl 0x80649EEC
    r0 = *(0x14 + r1); // lwz @ 0x806B7C64
    r31 = *(0xc + r1); // lwz @ 0x806B7C68
    r30 = *(8 + r1); // lwz @ 0x806B7C6C
    return;
}