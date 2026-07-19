/* Function at 0x806B3300, size=116 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_806B3300(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r6;
    *(0x38 + r1) = r30; // stw @ 0x806B3314
    r30 = r5;
    *(0x34 + r1) = r29; // stw @ 0x806B331C
    r29 = r4;
    r4 = r3;
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r7, 0 */ // 0x806B3330
    r4 = r29;
    r5 = r30;
    r6 = r31;
    r7 = r7 + 0; // 0x806B3344
    FUN_8064E36C(r4, r5, r6, r3, r7); // bl 0x8064E36C
    /* li r4, -1 */ // 0x806B3350
    FUN_8064E32C(r3, r7, r3, r4); // bl 0x8064E32C
    r0 = *(0x44 + r1); // lwz @ 0x806B3358
    r31 = *(0x3c + r1); // lwz @ 0x806B335C
    r30 = *(0x38 + r1); // lwz @ 0x806B3360
    r29 = *(0x34 + r1); // lwz @ 0x806B3364
    return;
}