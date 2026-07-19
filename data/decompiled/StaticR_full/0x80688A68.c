/* Function at 0x80688A68, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80688A68(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80688A74
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x80688A80
    /* lis r4, 0 */ // 0x80688A84
    /* li r0, 0 */ // 0x80688A88
    *(0x52 + r31) = r0; // stb @ 0x80688A8C
    r3 = r3 + 0; // 0x80688A90
    r4 = r4 + 0; // 0x80688A94
    *(0 + r31) = r3; // stw @ 0x80688A98
    r3 = r31 + 0x80; // 0x80688A9C
    *(0x48 + r31) = r4; // stw @ 0x80688AA0
    *(0x4c + r31) = r0; // sth @ 0x80688AA4
    *(0x4e + r31) = r0; // stb @ 0x80688AA8
    *(0x50 + r31) = r0; // sth @ 0x80688AAC
    *(0x54 + r31) = r0; // stb @ 0x80688AB0
    *(0x64 + r31) = r0; // stw @ 0x80688AB4
    FUN_8066880C(); // bl 0x8066880C
    /* lis r3, 0 */ // 0x80688ABC
    /* li r0, 0x2f */ // 0x80688AC0
    r3 = r3 + 0; // 0x80688AC4
    *(0 + r31) = r3; // stw @ 0x80688AC8
    r3 = r31;
    *(0x44 + r31) = r0; // stw @ 0x80688AD0
    r31 = *(0xc + r1); // lwz @ 0x80688AD4
    r0 = *(0x14 + r1); // lwz @ 0x80688AD8
    return;
}