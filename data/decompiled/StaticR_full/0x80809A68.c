/* Function at 0x80809A68, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80809A68(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 0 */ // 0x80809A70
    *(0x14 + r1) = r0; // stw @ 0x80809A74
    *(0xc + r1) = r31; // stw @ 0x80809A78
    r31 = r3;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r3, 0 */ // 0x80809A84
    /* lis r5, 0 */ // 0x80809A88
    /* li r4, 0 */ // 0x80809A8C
    *(0xb4 + r31) = r4; // stw @ 0x80809A90
    r3 = r3 + 0; // 0x80809A94
    r5 = r5 + 0; // 0x80809A98
    *(0 + r31) = r3; // stw @ 0x80809A9C
    /* lis r3, 0 */ // 0x80809AA0
    *(0xb0 + r31) = r5; // stw @ 0x80809AA4
    *(0xb8 + r31) = r4; // stw @ 0x80809AA8
    r3 = *(0 + r3); // lwz @ 0x80809AAC
    r0 = *(0x25 + r3); // lbz @ 0x80809AB0
    if (<=) goto 0x0x80809ac8;
    *(0xcc + r31) = r4; // stb @ 0x80809ABC
    *(0xc8 + r31) = r4; // stw @ 0x80809AC0
    /* b 0x80809af4 */ // 0x80809AC4
    /* li r0, 1 */ // 0x80809AC8
    *(0xcc + r31) = r0; // stb @ 0x80809ACC
    /* li r3, 0x7c */ // 0x80809AD0
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x80809af0;
    /* lis r4, 0 */ // 0x80809AE0
    /* li r5, 0 */ // 0x80809AE4
    r4 = r4 + 0; // 0x80809AE8
    FUN_805E3430(r4, r5, r4); // bl 0x805E3430
}