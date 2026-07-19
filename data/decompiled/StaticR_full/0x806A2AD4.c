/* Function at 0x806A2AD4, size=196 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_806A2AD4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r0, 1 */ // 0x806A2AE0
    r31 = r6;
    *(0x38 + r1) = r30; // stw @ 0x806A2AEC
    r30 = r5;
    *(0x34 + r1) = r29; // stw @ 0x806A2AF4
    r29 = r4;
    *(0x30 + r1) = r28; // stw @ 0x806A2AFC
    r28 = r3;
    r4 = r28;
    *(0x184 + r3) = r7; // stw @ 0x806A2B08
    *(0x174 + r3) = r0; // stb @ 0x806A2B0C
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r7, 0 */ // 0x806A2B18
    r4 = r29;
    r5 = r30;
    r6 = r31;
    r7 = r7 + 0; // 0x806A2B2C
    FUN_8064E36C(r4, r5, r6, r3, r7); // bl 0x8064E36C
    /* lis r31, 0 */ // 0x806A2B34
    r3 = r28 + 0xa8; // 0x806A2B38
    r31 = r31 + 0; // 0x806A2B3C
    r4 = r31 + 0x9b; // 0x806A2B40
    FUN_80665D1C(r3, r4); // bl 0x80665D1C
    *(0x178 + r28) = r3; // stw @ 0x806A2B48
    r4 = r31 + 0xa9; // 0x806A2B4C
    r3 = r28 + 0xa8; // 0x806A2B50
    FUN_80665D1C(r4, r4, r3); // bl 0x80665D1C
    *(0x17c + r28) = r3; // stw @ 0x806A2B58
    r4 = r31 + 0xb4; // 0x806A2B5C
    r3 = r28 + 0xa8; // 0x806A2B60
    FUN_80665D1C(r3, r4, r3); // bl 0x80665D1C
    *(0x180 + r28) = r3; // stw @ 0x806A2B68
    /* li r4, -1 */ // 0x806A2B70
    FUN_8064E32C(r3, r3, r4); // bl 0x8064E32C
    r0 = *(0x44 + r1); // lwz @ 0x806A2B78
    r31 = *(0x3c + r1); // lwz @ 0x806A2B7C
    r30 = *(0x38 + r1); // lwz @ 0x806A2B80
    r29 = *(0x34 + r1); // lwz @ 0x806A2B84
    r28 = *(0x30 + r1); // lwz @ 0x806A2B88
    return;
}