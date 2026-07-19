/* Function at 0x80688968, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80688968(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80688974
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x80688980
    /* lis r4, 0 */ // 0x80688984
    /* li r0, 0 */ // 0x80688988
    *(0x52 + r31) = r0; // stb @ 0x8068898C
    r3 = r3 + 0; // 0x80688990
    r4 = r4 + 0; // 0x80688994
    *(0 + r31) = r3; // stw @ 0x80688998
    r3 = r31 + 0x80; // 0x8068899C
    *(0x48 + r31) = r4; // stw @ 0x806889A0
    *(0x4c + r31) = r0; // sth @ 0x806889A4
    *(0x4e + r31) = r0; // stb @ 0x806889A8
    *(0x50 + r31) = r0; // sth @ 0x806889AC
    *(0x54 + r31) = r0; // stb @ 0x806889B0
    *(0x64 + r31) = r0; // stw @ 0x806889B4
    FUN_8066880C(); // bl 0x8066880C
    /* lis r3, 0 */ // 0x806889BC
    /* li r0, 0x31 */ // 0x806889C0
    r3 = r3 + 0; // 0x806889C4
    *(0 + r31) = r3; // stw @ 0x806889C8
    r3 = r31;
    *(0x44 + r31) = r0; // stw @ 0x806889D0
    r31 = *(0xc + r1); // lwz @ 0x806889D4
    r0 = *(0x14 + r1); // lwz @ 0x806889D8
    return;
}