/* Function at 0x80688B68, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80688B68(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80688B74
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x80688B80
    /* lis r4, 0 */ // 0x80688B84
    /* li r0, 0 */ // 0x80688B88
    *(0x52 + r31) = r0; // stb @ 0x80688B8C
    r3 = r3 + 0; // 0x80688B90
    r4 = r4 + 0; // 0x80688B94
    *(0 + r31) = r3; // stw @ 0x80688B98
    r3 = r31 + 0x80; // 0x80688B9C
    *(0x48 + r31) = r4; // stw @ 0x80688BA0
    *(0x4c + r31) = r0; // sth @ 0x80688BA4
    *(0x4e + r31) = r0; // stb @ 0x80688BA8
    *(0x50 + r31) = r0; // sth @ 0x80688BAC
    *(0x54 + r31) = r0; // stb @ 0x80688BB0
    *(0x64 + r31) = r0; // stw @ 0x80688BB4
    FUN_8066880C(); // bl 0x8066880C
    /* lis r3, 0 */ // 0x80688BBC
    /* li r0, 0x48 */ // 0x80688BC0
    r3 = r3 + 0; // 0x80688BC4
    *(0 + r31) = r3; // stw @ 0x80688BC8
    r3 = r31;
    *(0x44 + r31) = r0; // stw @ 0x80688BD0
    r31 = *(0xc + r1); // lwz @ 0x80688BD4
    r0 = *(0x14 + r1); // lwz @ 0x80688BD8
    return;
}