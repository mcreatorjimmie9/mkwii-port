/* Function at 0x80688AE8, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80688AE8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80688AF4
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x80688B00
    /* lis r4, 0 */ // 0x80688B04
    /* li r0, 0 */ // 0x80688B08
    *(0x52 + r31) = r0; // stb @ 0x80688B0C
    r3 = r3 + 0; // 0x80688B10
    r4 = r4 + 0; // 0x80688B14
    *(0 + r31) = r3; // stw @ 0x80688B18
    r3 = r31 + 0x80; // 0x80688B1C
    *(0x48 + r31) = r4; // stw @ 0x80688B20
    *(0x4c + r31) = r0; // sth @ 0x80688B24
    *(0x4e + r31) = r0; // stb @ 0x80688B28
    *(0x50 + r31) = r0; // sth @ 0x80688B2C
    *(0x54 + r31) = r0; // stb @ 0x80688B30
    *(0x64 + r31) = r0; // stw @ 0x80688B34
    FUN_8066880C(); // bl 0x8066880C
    /* lis r3, 0 */ // 0x80688B3C
    /* li r0, 0x2f */ // 0x80688B40
    r3 = r3 + 0; // 0x80688B44
    *(0 + r31) = r3; // stw @ 0x80688B48
    r3 = r31;
    *(0x44 + r31) = r0; // stw @ 0x80688B50
    r31 = *(0xc + r1); // lwz @ 0x80688B54
    r0 = *(0x14 + r1); // lwz @ 0x80688B58
    return;
}