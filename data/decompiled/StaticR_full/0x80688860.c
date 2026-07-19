/* Function at 0x80688860, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80688860(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8068886C
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x80688878
    /* lis r4, 0 */ // 0x8068887C
    /* li r0, 0 */ // 0x80688880
    *(0x52 + r31) = r0; // stb @ 0x80688884
    r3 = r3 + 0; // 0x80688888
    r4 = r4 + 0; // 0x8068888C
    *(0 + r31) = r3; // stw @ 0x80688890
    r3 = r31 + 0x80; // 0x80688894
    *(0x48 + r31) = r4; // stw @ 0x80688898
    *(0x4c + r31) = r0; // sth @ 0x8068889C
    *(0x4e + r31) = r0; // stb @ 0x806888A0
    *(0x50 + r31) = r0; // sth @ 0x806888A4
    *(0x54 + r31) = r0; // stb @ 0x806888A8
    *(0x64 + r31) = r0; // stw @ 0x806888AC
    FUN_8066880C(); // bl 0x8066880C
    /* lis r3, 0 */ // 0x806888B4
    /* li r0, -1 */ // 0x806888B8
    r3 = r3 + 0; // 0x806888BC
    *(0 + r31) = r3; // stw @ 0x806888C0
    r3 = r31;
    *(0x44 + r31) = r0; // stw @ 0x806888C8
    r31 = *(0xc + r1); // lwz @ 0x806888CC
    r0 = *(0x14 + r1); // lwz @ 0x806888D0
    return;
}