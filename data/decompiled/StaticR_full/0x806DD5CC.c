/* Function at 0x806DD5CC, size=152 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_806DD5CC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r6;
    r30 = r5;
    *(0x34 + r1) = r29; // stw @ 0x806DD5E8
    r29 = r4;
    *(0x30 + r1) = r28; // stw @ 0x806DD5F0
    r28 = r3;
    r4 = r28;
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r6, 0 */ // 0x806DD604
    r6 = r6 + 0; // 0x806DD60C
    /* li r7, 0 */ // 0x806DD610
    r4 = r6 + 0x129; // 0x806DD614
    r5 = r6 + 0x131; // 0x806DD618
    r6 = r6 + 0x145; // 0x806DD61C
    FUN_8064E36C(r6, r7, r4, r5, r6); // bl 0x8064E36C
    /* li r4, -1 */ // 0x806DD628
    FUN_8064E32C(r5, r6, r3, r4); // bl 0x8064E32C
    r3 = r28;
    r4 = r29;
    r5 = r30;
    r6 = r31;
    FUN_806DB030(r3, r4, r5, r6); // bl 0x806DB030
    r0 = *(0x44 + r1); // lwz @ 0x806DD644
    r31 = *(0x3c + r1); // lwz @ 0x806DD648
    r30 = *(0x38 + r1); // lwz @ 0x806DD64C
    r29 = *(0x34 + r1); // lwz @ 0x806DD650
    r28 = *(0x30 + r1); // lwz @ 0x806DD654
    return;
}