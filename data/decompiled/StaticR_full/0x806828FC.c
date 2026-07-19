/* Function at 0x806828FC, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806828FC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x80682908
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x80682914
    /* lis r4, 0 */ // 0x80682918
    r3 = r3 + 0; // 0x8068291C
    *(0 + r31) = r3; // stw @ 0x80682920
    /* lis r7, 0 */ // 0x80682924
    r4 = r4 + 0; // 0x80682928
    r6 = *(0 + r7); // lwzu @ 0x8068292C
    r3 = r31 + 0x58; // 0x80682930
    *(8 + r1) = r6; // stw @ 0x80682934
    r5 = *(4 + r7); // lwz @ 0x80682938
    r0 = *(8 + r7); // lwz @ 0x8068293C
    *(0xc + r1) = r5; // stw @ 0x80682940
    *(0x10 + r1) = r0; // stw @ 0x80682944
    *(0x44 + r31) = r4; // stw @ 0x80682948
    *(0x48 + r31) = r31; // stw @ 0x8068294C
    *(0x4c + r31) = r6; // stw @ 0x80682950
    *(0x50 + r31) = r5; // stw @ 0x80682954
    *(0x54 + r31) = r0; // stw @ 0x80682958
    FUN_80668134(); // bl 0x80668134
    r3 = r31;
    r31 = *(0x1c + r1); // lwz @ 0x80682964
    r0 = *(0x24 + r1); // lwz @ 0x80682968
    return;
}