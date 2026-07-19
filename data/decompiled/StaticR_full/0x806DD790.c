/* Function at 0x806DD790, size=116 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806DD790(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    *(0x3c + r1) = r31; // stw @ 0x806DD79C
    r31 = r3;
    r4 = r31;
    FUN_8064E324(r3, r4); // bl 0x8064E324
    /* lis r6, 0 */ // 0x806DD7B0
    /* li r0, 0 */ // 0x806DD7B4
    r6 = r6 + 0; // 0x806DD7B8
    *(8 + r1) = r0; // stw @ 0x806DD7BC
    *(0xc + r1) = r0; // stw @ 0x806DD7C8
    r4 = r6 + 0x15e; // 0x806DD7CC
    r5 = r6 + 0x166; // 0x806DD7D0
    r6 = r6 + 0x177; // 0x806DD7D4
    FUN_8064E36C(r7, r4, r5, r6); // bl 0x8064E36C
    /* li r0, 1 */ // 0x806DD7DC
    *(0x80 + r31) = r0; // stb @ 0x806DD7E0
    /* li r4, -1 */ // 0x806DD7E8
    FUN_8064E32C(r3, r4); // bl 0x8064E32C
    r0 = *(0x44 + r1); // lwz @ 0x806DD7F0
    r31 = *(0x3c + r1); // lwz @ 0x806DD7F4
    return;
}