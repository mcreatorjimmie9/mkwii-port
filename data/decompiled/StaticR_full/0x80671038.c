/* Function at 0x80671038, size=124 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80671038(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r6;
    *(0x48 + r1) = r30; // stw @ 0x8067104C
    r30 = r5;
    *(0x44 + r1) = r29; // stw @ 0x80671054
    r29 = r4;
    r4 = r3;
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* li r0, 0 */ // 0x80671068
    *(8 + r1) = r0; // stw @ 0x8067106C
    r4 = r29;
    r5 = r30;
    *(0xc + r1) = r0; // stw @ 0x80671078
    r6 = r31;
    FUN_8064E36C(r5, r6, r3, r7); // bl 0x8064E36C
    /* li r4, -1 */ // 0x80671090
    FUN_8064E32C(r3, r7, r3, r4); // bl 0x8064E32C
    r0 = *(0x54 + r1); // lwz @ 0x80671098
    r31 = *(0x4c + r1); // lwz @ 0x8067109C
    r30 = *(0x48 + r1); // lwz @ 0x806710A0
    r29 = *(0x44 + r1); // lwz @ 0x806710A4
    return;
}