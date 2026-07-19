/* Function at 0x806760AC, size=168 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 5 function(s) */

int FUN_806760AC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r6;
    r30 = r5;
    *(0x34 + r1) = r29; // stw @ 0x806760C8
    r29 = r4;
    *(0x30 + r1) = r28; // stw @ 0x806760D0
    r28 = r3;
    r4 = r28;
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r7, 0 */ // 0x806760E4
    r4 = r29;
    r5 = r30;
    r6 = r31;
    r7 = r7 + 0; // 0x806760F8
    FUN_8064E36C(r4, r5, r6, r3, r7); // bl 0x8064E36C
    /* lis r31, 0 */ // 0x80676100
    r3 = r28 + 0xa8; // 0x80676104
    r31 = r31 + 0; // 0x80676108
    r4 = r31 + 0x53; // 0x8067610C
    FUN_80665D1C(r3, r4); // bl 0x80665D1C
    *(0x174 + r28) = r3; // stw @ 0x80676114
    r4 = r31 + 0x61; // 0x80676118
    r3 = r28 + 0xa8; // 0x8067611C
    FUN_80665D1C(r4, r4, r3); // bl 0x80665D1C
    *(0x178 + r28) = r3; // stw @ 0x80676124
    /* li r4, -1 */ // 0x8067612C
    FUN_8064E32C(r3, r3, r4); // bl 0x8064E32C
    r0 = *(0x44 + r1); // lwz @ 0x80676134
    r31 = *(0x3c + r1); // lwz @ 0x80676138
    r30 = *(0x38 + r1); // lwz @ 0x8067613C
    r29 = *(0x34 + r1); // lwz @ 0x80676140
    r28 = *(0x30 + r1); // lwz @ 0x80676144
    return;
}