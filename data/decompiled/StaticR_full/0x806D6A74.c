/* Function at 0x806D6A74, size=480 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 21 function(s) */

int FUN_806D6A74(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x806D6A7C
    /* li r5, 0 */ // 0x806D6A80
    *(0x44 + r1) = r0; // stw @ 0x806D6A84
    *(0x3c + r1) = r31; // stw @ 0x806D6A88
    *(0x38 + r1) = r30; // stw @ 0x806D6A8C
    r30 = r3;
    r12 = *(0xb10 + r3); // lwz @ 0x806D6A94
    r12 = *(0x10 + r12); // lwz @ 0x806D6A98
    /* mtctr r12 */ // 0x806D6A9C
    r3 = r3 + 0xb10; // 0x806D6AA0
    /* bctrl  */ // 0x806D6AA4
    r3 = r30;
    r4 = r30 + 0xb10; // 0x806D6AAC
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r30 + 0xb10; // 0x806D6AB4
    /* li r4, 2 */ // 0x806D6AB8
    FUN_8066A380(r3, r4, r3, r4); // bl 0x8066A380
    r3 = r30;
    /* li r4, 5 */ // 0x806D6AC4
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r30;
    r5 = r30 + 0x44; // 0x806D6AD0
    /* li r4, 0 */ // 0x806D6AD4
    /* li r6, 0 */ // 0x806D6AD8
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30;
    r5 = r30 + 0x1b8; // 0x806D6AE4
    /* li r4, 1 */ // 0x806D6AE8
    /* li r6, 0 */ // 0x806D6AEC
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30;
    r5 = r30 + 0x404; // 0x806D6AF8
    /* li r4, 2 */ // 0x806D6AFC
    /* li r6, 0 */ // 0x806D6B00
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30;
    r5 = r30 + 0x658; // 0x806D6B0C
    /* li r4, 3 */ // 0x806D6B10
    /* li r6, 0 */ // 0x806D6B14
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30;
    r5 = r30 + 0x8ac; // 0x806D6B20
    /* li r4, 4 */ // 0x806D6B24
    /* li r6, 0 */ // 0x806D6B28
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r4 = r30 + 0x44; // 0x806D6B34
    FUN_8064E324(r4, r6, r3, r4); // bl 0x8064E324
    /* lis r31, 0 */ // 0x806D6B3C
    r4 = r31 + 0; // 0x806D6B44
    /* li r7, 0 */ // 0x806D6B48
    r5 = r4 + 8; // 0x806D6B4C
    r6 = r4 + 0x1b; // 0x806D6B50
    FUN_8064E36C(r3, r4, r7, r5, r6); // bl 0x8064E36C
    /* li r4, -1 */ // 0x806D6B5C
    FUN_8064E32C(r5, r6, r3, r4); // bl 0x8064E32C
    r31 = r31 + 0; // 0x806D6B64
    r3 = r30 + 0x1b8; // 0x806D6B68
    r4 = r31 + 0x21; // 0x806D6B6C
    FUN_80660B08(r4, r3, r4); // bl 0x80660B08
    r3 = r30 + 0x404; // 0x806D6B74
    r4 = r31 + 0x32; // 0x806D6B78
    r5 = r31 + 0x39; // 0x806D6B7C
    r6 = r31 + 0x4a; // 0x806D6B80
    /* li r7, 1 */ // 0x806D6B84
    /* li r8, 0 */ // 0x806D6B88
    /* li r9, 0 */ // 0x806D6B8C
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    r3 = r30 + 0x658; // 0x806D6B94
    r4 = r31 + 0x4e; // 0x806D6B98
    r5 = r31 + 0x55; // 0x806D6B9C
    r6 = r31 + 0x66; // 0x806D6BA0
    /* li r7, 1 */ // 0x806D6BA4
    /* li r8, 0 */ // 0x806D6BA8
    /* li r9, 0 */ // 0x806D6BAC
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    r3 = r30 + 0x8ac; // 0x806D6BB4
    r4 = r31 + 0x6c; // 0x806D6BB8
    r5 = r31 + 0x73; // 0x806D6BBC
    r6 = r31 + 0x78; // 0x806D6BC0
    /* li r7, 1 */ // 0x806D6BC4
    /* li r8, 0 */ // 0x806D6BC8
    /* li r9, 1 */ // 0x806D6BCC
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    r3 = r30 + 0x404; // 0x806D6BD4
    r4 = r30 + 0xd34; // 0x806D6BD8
    /* li r5, 0 */ // 0x806D6BDC
    FUN_80649EC4(r9, r3, r4, r5); // bl 0x80649EC4
    r3 = r30 + 0x658; // 0x806D6BE4
    r4 = r30 + 0xd48; // 0x806D6BE8
    /* li r5, 0 */ // 0x806D6BEC
    FUN_80649EC4(r5, r3, r4, r5); // bl 0x80649EC4
    r3 = r30 + 0x8ac; // 0x806D6BF4
    r4 = r30 + 0xd5c; // 0x806D6BF8
    /* li r5, 0 */ // 0x806D6BFC
    FUN_80649EC4(r5, r3, r4, r5); // bl 0x80649EC4
    r3 = r30 + 0xb10; // 0x806D6C04
    r5 = r30 + 0xd70; // 0x806D6C08
    /* li r4, 1 */ // 0x806D6C0C
    /* li r6, 0 */ // 0x806D6C10
    /* li r7, 0 */ // 0x806D6C14
    FUN_8066A350(r3, r5, r4, r6, r7); // bl 0x8066A350
    r3 = r30 + 0x404; // 0x806D6C1C
    /* li r4, 0 */ // 0x806D6C20
    FUN_80649EEC(r6, r7, r3, r4); // bl 0x80649EEC
    /* li r0, -1 */ // 0x806D6C28
    *(0xd84 + r30) = r0; // stw @ 0x806D6C2C
    /* lis r3, 0 */ // 0x806D6C30
    r3 = *(0 + r3); // lwz @ 0x806D6C34
    FUN_805BD9AC(r3); // bl 0x805BD9AC
    r0 = *(0x44 + r1); // lwz @ 0x806D6C3C
    r31 = *(0x3c + r1); // lwz @ 0x806D6C40
    r30 = *(0x38 + r1); // lwz @ 0x806D6C44
    return;
}