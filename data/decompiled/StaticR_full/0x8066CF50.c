/* Function at 0x8066CF50, size=124 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8066CF50(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r6;
    *(0x48 + r1) = r30; // stw @ 0x8066CF64
    r30 = r5;
    *(0x44 + r1) = r29; // stw @ 0x8066CF6C
    r29 = r4;
    r4 = r3;
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* li r0, 0 */ // 0x8066CF80
    *(8 + r1) = r0; // stw @ 0x8066CF84
    r4 = r29;
    r5 = r30;
    *(0xc + r1) = r0; // stw @ 0x8066CF90
    r6 = r31;
    FUN_8064E36C(r5, r6, r3, r7); // bl 0x8064E36C
    /* li r4, -1 */ // 0x8066CFA8
    FUN_8064E32C(r3, r7, r3, r4); // bl 0x8064E32C
    r0 = *(0x54 + r1); // lwz @ 0x8066CFB0
    r31 = *(0x4c + r1); // lwz @ 0x8066CFB4
    r30 = *(0x48 + r1); // lwz @ 0x8066CFB8
    r29 = *(0x44 + r1); // lwz @ 0x8066CFBC
    return;
}