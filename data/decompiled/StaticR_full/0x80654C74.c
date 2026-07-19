/* Function at 0x80654C74, size=136 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_80654C74(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r6;
    r30 = r5;
    *(0x34 + r1) = r29; // stw @ 0x80654C90
    r29 = r4;
    *(0x30 + r1) = r28; // stw @ 0x80654C98
    r28 = r3;
    r4 = r28;
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r7, 0 */ // 0x80654CAC
    r4 = r29;
    r5 = r30;
    r6 = r31;
    r7 = r7 + 0; // 0x80654CC0
    FUN_8064E36C(r4, r5, r6, r3, r7); // bl 0x8064E36C
    /* li r0, -1 */ // 0x80654CC8
    *(0x174 + r28) = r0; // stw @ 0x80654CCC
    /* li r4, -1 */ // 0x80654CD4
    FUN_8064E32C(r3, r4); // bl 0x8064E32C
    r0 = *(0x44 + r1); // lwz @ 0x80654CDC
    r31 = *(0x3c + r1); // lwz @ 0x80654CE0
    r30 = *(0x38 + r1); // lwz @ 0x80654CE4
    r29 = *(0x34 + r1); // lwz @ 0x80654CE8
    r28 = *(0x30 + r1); // lwz @ 0x80654CEC
    return;
}