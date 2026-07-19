/* Function at 0x80687BE0, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80687BE0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80687BEC
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x80687BF8
    /* lis r4, 0 */ // 0x80687BFC
    /* li r0, 0 */ // 0x80687C00
    *(0x52 + r31) = r0; // stb @ 0x80687C04
    r3 = r3 + 0; // 0x80687C08
    r4 = r4 + 0; // 0x80687C0C
    *(0 + r31) = r3; // stw @ 0x80687C10
    r3 = r31 + 0x80; // 0x80687C14
    *(0x48 + r31) = r4; // stw @ 0x80687C18
    *(0x4c + r31) = r0; // sth @ 0x80687C1C
    *(0x4e + r31) = r0; // stb @ 0x80687C20
    *(0x50 + r31) = r0; // sth @ 0x80687C24
    *(0x54 + r31) = r0; // stb @ 0x80687C28
    *(0x64 + r31) = r0; // stw @ 0x80687C2C
    FUN_8066880C(); // bl 0x8066880C
    /* lis r3, 0 */ // 0x80687C34
    /* li r0, 0x33 */ // 0x80687C38
    r3 = r3 + 0; // 0x80687C3C
    *(0 + r31) = r3; // stw @ 0x80687C40
    r3 = r31;
    *(0x44 + r31) = r0; // stw @ 0x80687C48
    r31 = *(0xc + r1); // lwz @ 0x80687C4C
    r0 = *(0x14 + r1); // lwz @ 0x80687C50
    return;
}