/* Function at 0x80898C18, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80898C18(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x80898C20
    *(0x1c + r1) = r31; // stw @ 0x80898C28
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x80898C30
    r30 = r3;
    FUN_8089BC74(); // bl 0x8089BC74
    /* lis r3, 0 */ // 0x80898C3C
    /* lis r6, 0 */ // 0x80898C40
    r3 = r3 + 0; // 0x80898C44
    *(0 + r30) = r3; // stw @ 0x80898C48
    /* lis r0, 0x4330 */ // 0x80898C4C
    /* lfd f1, 0(r6) */ // 0x80898C50
    r8 = *(0 + r31); // lwz @ 0x80898C54
    /* lis r3, 0 */ // 0x80898C58
    *(8 + r1) = r0; // stw @ 0x80898C5C
    /* lis r5, 0 */ // 0x80898C60
    r7 = *(0x2a + r8); // lha @ 0x80898C64
    /* li r4, 1 */ // 0x80898C68
    *(0 + r3) = r7; // sth @ 0x80898C6C
    /* li r0, 0 */ // 0x80898C70
    r3 = r30;
    r6 = *(0x2c + r8); // lha @ 0x80898C78
    /* xoris r6, r6, 0x8000 */ // 0x80898C7C
    *(0xc + r1) = r6; // stw @ 0x80898C80
    /* lfd f0, 8(r1) */ // 0x80898C84
    /* fsubs f0, f0, f1 */ // 0x80898C88
    /* stfs f0, 0(r5) */ // 0x80898C8C
    r5 = *(0x2e + r8); // lha @ 0x80898C90
    /* lfs f0, 0x34(r30) */ // 0x80898C94
    *(0x108 + r30) = r5; // stw @ 0x80898C98
    /* stfs f0, 0x104(r30) */ // 0x80898C9C
    *(0x10c + r30) = r4; // stb @ 0x80898CA0
    *(0x10d + r30) = r0; // stb @ 0x80898CA4
    r31 = *(0x1c + r1); // lwz @ 0x80898CA8
    r30 = *(0x18 + r1); // lwz @ 0x80898CAC
    r0 = *(0x24 + r1); // lwz @ 0x80898CB0
    return;
}