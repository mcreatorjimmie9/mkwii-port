/* Function at 0x80687B60, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80687B60(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80687B6C
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x80687B78
    /* lis r4, 0 */ // 0x80687B7C
    /* li r0, 0 */ // 0x80687B80
    *(0x52 + r31) = r0; // stb @ 0x80687B84
    r3 = r3 + 0; // 0x80687B88
    r4 = r4 + 0; // 0x80687B8C
    *(0 + r31) = r3; // stw @ 0x80687B90
    r3 = r31 + 0x80; // 0x80687B94
    *(0x48 + r31) = r4; // stw @ 0x80687B98
    *(0x4c + r31) = r0; // sth @ 0x80687B9C
    *(0x4e + r31) = r0; // stb @ 0x80687BA0
    *(0x50 + r31) = r0; // sth @ 0x80687BA4
    *(0x54 + r31) = r0; // stb @ 0x80687BA8
    *(0x64 + r31) = r0; // stw @ 0x80687BAC
    FUN_8066880C(); // bl 0x8066880C
    /* lis r3, 0 */ // 0x80687BB4
    /* li r0, 0x33 */ // 0x80687BB8
    r3 = r3 + 0; // 0x80687BBC
    *(0 + r31) = r3; // stw @ 0x80687BC0
    r3 = r31;
    *(0x44 + r31) = r0; // stw @ 0x80687BC8
    r31 = *(0xc + r1); // lwz @ 0x80687BCC
    r0 = *(0x14 + r1); // lwz @ 0x80687BD0
    return;
}