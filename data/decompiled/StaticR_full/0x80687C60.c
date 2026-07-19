/* Function at 0x80687C60, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80687C60(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80687C6C
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x80687C78
    /* lis r4, 0 */ // 0x80687C7C
    /* li r0, 0 */ // 0x80687C80
    *(0x52 + r31) = r0; // stb @ 0x80687C84
    r3 = r3 + 0; // 0x80687C88
    r4 = r4 + 0; // 0x80687C8C
    *(0 + r31) = r3; // stw @ 0x80687C90
    r3 = r31 + 0x80; // 0x80687C94
    *(0x48 + r31) = r4; // stw @ 0x80687C98
    *(0x4c + r31) = r0; // sth @ 0x80687C9C
    *(0x4e + r31) = r0; // stb @ 0x80687CA0
    *(0x50 + r31) = r0; // sth @ 0x80687CA4
    *(0x54 + r31) = r0; // stb @ 0x80687CA8
    *(0x64 + r31) = r0; // stw @ 0x80687CAC
    FUN_8066880C(); // bl 0x8066880C
    /* lis r3, 0 */ // 0x80687CB4
    /* li r0, 0x35 */ // 0x80687CB8
    r3 = r3 + 0; // 0x80687CBC
    *(0 + r31) = r3; // stw @ 0x80687CC0
    r3 = r31;
    *(0x44 + r31) = r0; // stw @ 0x80687CC8
    r31 = *(0xc + r1); // lwz @ 0x80687CCC
    r0 = *(0x14 + r1); // lwz @ 0x80687CD0
    return;
}