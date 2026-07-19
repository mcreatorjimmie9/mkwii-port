/* Function at 0x806775EC, size=100 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806775EC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    *(0x3c + r1) = r31; // stw @ 0x806775F8
    r31 = r4;
    r4 = r3;
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r5, 0 */ // 0x8067760C
    /* lis r7, 0 */ // 0x80677610
    r5 = r5 + 0; // 0x80677614
    r6 = r31;
    r4 = r5 + 0xf1; // 0x8067761C
    r7 = r7 + 0; // 0x80677624
    r5 = r5 + 0xf7; // 0x80677628
    FUN_8064E36C(r6, r4, r3, r7, r5); // bl 0x8064E36C
    /* li r4, -1 */ // 0x80677634
    FUN_8064E32C(r7, r5, r3, r4); // bl 0x8064E32C
    r0 = *(0x44 + r1); // lwz @ 0x8067763C
    r31 = *(0x3c + r1); // lwz @ 0x80677640
    return;
}