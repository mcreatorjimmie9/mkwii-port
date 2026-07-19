/* Function at 0x806879B8, size=168 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806879B8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806879C4
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x806879D0
    /* lis r4, 0 */ // 0x806879D4
    /* li r0, 0 */ // 0x806879D8
    *(0x52 + r31) = r0; // stb @ 0x806879DC
    r3 = r3 + 0; // 0x806879E0
    r4 = r4 + 0; // 0x806879E4
    *(0 + r31) = r3; // stw @ 0x806879E8
    r3 = r31 + 0x80; // 0x806879EC
    *(0x48 + r31) = r4; // stw @ 0x806879F0
    *(0x4c + r31) = r0; // sth @ 0x806879F4
    *(0x4e + r31) = r0; // stb @ 0x806879F8
    *(0x50 + r31) = r0; // sth @ 0x806879FC
    *(0x54 + r31) = r0; // stb @ 0x80687A00
    *(0x64 + r31) = r0; // stw @ 0x80687A04
    FUN_8066880C(); // bl 0x8066880C
    /* lis r4, 0 */ // 0x80687A0C
    /* lis r3, 0 */ // 0x80687A10
    r4 = r4 + 0; // 0x80687A14
    *(0 + r31) = r4; // stw @ 0x80687A18
    r3 = *(0 + r3); // lwz @ 0x80687A1C
    r0 = *(0xb70 + r3); // lwz @ 0x80687A20
    if (==) goto 0x0x80687a34;
    if (!=) goto 0x0x80687a40;
    /* li r0, 0x2d */ // 0x80687A34
    *(0x44 + r31) = r0; // stw @ 0x80687A38
    /* b 0x80687a48 */ // 0x80687A3C
    /* li r0, 0x21 */ // 0x80687A40
    *(0x44 + r31) = r0; // stw @ 0x80687A44
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x80687A4C
    r0 = *(0x14 + r1); // lwz @ 0x80687A50
    return;
}