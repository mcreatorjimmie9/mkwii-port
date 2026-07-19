/* Function at 0x806889E8, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806889E8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806889F4
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x80688A00
    /* lis r4, 0 */ // 0x80688A04
    /* li r0, 0 */ // 0x80688A08
    *(0x52 + r31) = r0; // stb @ 0x80688A0C
    r3 = r3 + 0; // 0x80688A10
    r4 = r4 + 0; // 0x80688A14
    *(0 + r31) = r3; // stw @ 0x80688A18
    r3 = r31 + 0x80; // 0x80688A1C
    *(0x48 + r31) = r4; // stw @ 0x80688A20
    *(0x4c + r31) = r0; // sth @ 0x80688A24
    *(0x4e + r31) = r0; // stb @ 0x80688A28
    *(0x50 + r31) = r0; // sth @ 0x80688A2C
    *(0x54 + r31) = r0; // stb @ 0x80688A30
    *(0x64 + r31) = r0; // stw @ 0x80688A34
    FUN_8066880C(); // bl 0x8066880C
    /* lis r3, 0 */ // 0x80688A3C
    /* li r0, 0x31 */ // 0x80688A40
    r3 = r3 + 0; // 0x80688A44
    *(0 + r31) = r3; // stw @ 0x80688A48
    r3 = r31;
    *(0x44 + r31) = r0; // stw @ 0x80688A50
    r31 = *(0xc + r1); // lwz @ 0x80688A54
    r0 = *(0x14 + r1); // lwz @ 0x80688A58
    return;
}