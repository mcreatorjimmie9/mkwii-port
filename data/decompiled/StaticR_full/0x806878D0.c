/* Function at 0x806878D0, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806878D0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806878DC
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x806878E8
    /* lis r4, 0 */ // 0x806878EC
    /* li r0, 0 */ // 0x806878F0
    *(0x52 + r31) = r0; // stb @ 0x806878F4
    r3 = r3 + 0; // 0x806878F8
    r4 = r4 + 0; // 0x806878FC
    *(0 + r31) = r3; // stw @ 0x80687900
    r3 = r31 + 0x80; // 0x80687904
    *(0x48 + r31) = r4; // stw @ 0x80687908
    *(0x4c + r31) = r0; // sth @ 0x8068790C
    *(0x4e + r31) = r0; // stb @ 0x80687910
    *(0x50 + r31) = r0; // sth @ 0x80687914
    *(0x54 + r31) = r0; // stb @ 0x80687918
    *(0x64 + r31) = r0; // stw @ 0x8068791C
    FUN_8066880C(); // bl 0x8066880C
    /* lis r3, 0 */ // 0x80687924
    /* li r0, 0x2f */ // 0x80687928
    r3 = r3 + 0; // 0x8068792C
    *(0 + r31) = r3; // stw @ 0x80687930
    r3 = r31;
    *(0x44 + r31) = r0; // stw @ 0x80687938
    r31 = *(0xc + r1); // lwz @ 0x8068793C
    r0 = *(0x14 + r1); // lwz @ 0x80687940
    return;
}