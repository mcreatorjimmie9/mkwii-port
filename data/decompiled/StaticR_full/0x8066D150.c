/* Function at 0x8066D150, size=180 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_8066D150(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r5;
    *(0x54 + r1) = r29; // stw @ 0x8066D168
    r29 = r6;
    *(0x50 + r1) = r28; // stw @ 0x8066D170
    r28 = r4;
    r4 = r3;
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r30, 0 */ // 0x8066D184
    r5 = r31;
    r31 = *(0 + r30); // lwzu @ 0x8066D18C
    r4 = r28;
    *(8 + r1) = r31; // stw @ 0x8066D194
    r6 = r29;
    r12 = *(4 + r30); // lwz @ 0x8066D19C
    r11 = *(8 + r30); // lwz @ 0x8066D1A4
    r10 = *(0xc + r30); // lwz @ 0x8066D1AC
    r9 = *(0x10 + r30); // lwz @ 0x8066D1B0
    r8 = *(0x14 + r30); // lwz @ 0x8066D1B4
    r0 = *(0x18 + r30); // lwz @ 0x8066D1B8
    *(0xc + r1) = r12; // stw @ 0x8066D1BC
    *(0x10 + r1) = r11; // stw @ 0x8066D1C0
    *(0x14 + r1) = r10; // stw @ 0x8066D1C4
    *(0x18 + r1) = r9; // stw @ 0x8066D1C8
    *(0x1c + r1) = r8; // stw @ 0x8066D1CC
    *(0x20 + r1) = r0; // stw @ 0x8066D1D0
    FUN_8064E36C(); // bl 0x8064E36C
    /* li r4, -1 */ // 0x8066D1DC
    FUN_8064E32C(r3, r4); // bl 0x8064E32C
    r0 = *(0x64 + r1); // lwz @ 0x8066D1E4
    r31 = *(0x5c + r1); // lwz @ 0x8066D1E8
    r30 = *(0x58 + r1); // lwz @ 0x8066D1EC
    r29 = *(0x54 + r1); // lwz @ 0x8066D1F0
    r28 = *(0x50 + r1); // lwz @ 0x8066D1F4
    return;
}