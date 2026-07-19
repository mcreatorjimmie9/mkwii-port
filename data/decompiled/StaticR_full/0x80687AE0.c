/* Function at 0x80687AE0, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80687AE0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80687AEC
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x80687AF8
    /* lis r4, 0 */ // 0x80687AFC
    /* li r0, 0 */ // 0x80687B00
    *(0x52 + r31) = r0; // stb @ 0x80687B04
    r3 = r3 + 0; // 0x80687B08
    r4 = r4 + 0; // 0x80687B0C
    *(0 + r31) = r3; // stw @ 0x80687B10
    r3 = r31 + 0x80; // 0x80687B14
    *(0x48 + r31) = r4; // stw @ 0x80687B18
    *(0x4c + r31) = r0; // sth @ 0x80687B1C
    *(0x4e + r31) = r0; // stb @ 0x80687B20
    *(0x50 + r31) = r0; // sth @ 0x80687B24
    *(0x54 + r31) = r0; // stb @ 0x80687B28
    *(0x64 + r31) = r0; // stw @ 0x80687B2C
    FUN_8066880C(); // bl 0x8066880C
    /* lis r3, 0 */ // 0x80687B34
    /* li r0, 0x2f */ // 0x80687B38
    r3 = r3 + 0; // 0x80687B3C
    *(0 + r31) = r3; // stw @ 0x80687B40
    r3 = r31;
    *(0x44 + r31) = r0; // stw @ 0x80687B48
    r31 = *(0xc + r1); // lwz @ 0x80687B4C
    r0 = *(0x14 + r1); // lwz @ 0x80687B50
    return;
}