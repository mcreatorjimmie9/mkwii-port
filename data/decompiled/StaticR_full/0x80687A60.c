/* Function at 0x80687A60, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80687A60(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80687A6C
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x80687A78
    /* lis r4, 0 */ // 0x80687A7C
    /* li r0, 0 */ // 0x80687A80
    *(0x52 + r31) = r0; // stb @ 0x80687A84
    r3 = r3 + 0; // 0x80687A88
    r4 = r4 + 0; // 0x80687A8C
    *(0 + r31) = r3; // stw @ 0x80687A90
    r3 = r31 + 0x80; // 0x80687A94
    *(0x48 + r31) = r4; // stw @ 0x80687A98
    *(0x4c + r31) = r0; // sth @ 0x80687A9C
    *(0x4e + r31) = r0; // stb @ 0x80687AA0
    *(0x50 + r31) = r0; // sth @ 0x80687AA4
    *(0x54 + r31) = r0; // stb @ 0x80687AA8
    *(0x64 + r31) = r0; // stw @ 0x80687AAC
    FUN_8066880C(); // bl 0x8066880C
    /* lis r3, 0 */ // 0x80687AB4
    /* li r0, 0x2f */ // 0x80687AB8
    r3 = r3 + 0; // 0x80687ABC
    *(0 + r31) = r3; // stw @ 0x80687AC0
    r3 = r31;
    *(0x44 + r31) = r0; // stw @ 0x80687AC8
    r31 = *(0xc + r1); // lwz @ 0x80687ACC
    r0 = *(0x14 + r1); // lwz @ 0x80687AD0
    return;
}