/* Function at 0x807D3ED8, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 8 function(s) */

int FUN_807D3ED8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807D3EE4
    r31 = r3;
    FUN_807BB110(); // bl 0x807BB110
    /* lis r3, 0 */ // 0x807D3EF0
    /* li r0, 0 */ // 0x807D3EF4
    /* lfs f0, 0(r3) */ // 0x807D3EF8
    /* lis r3, 0 */ // 0x807D3EFC
    /* stfs f0, 0x110(r31) */ // 0x807D3F00
    /* li r4, 0 */ // 0x807D3F04
    /* stfs f0, 0x114(r31) */ // 0x807D3F08
    *(0x118 + r31) = r0; // stw @ 0x807D3F0C
    *(0x11c + r31) = r0; // stw @ 0x807D3F10
    *(0x120 + r31) = r0; // stw @ 0x807D3F14
    *(0x124 + r31) = r0; // stw @ 0x807D3F18
    *(0x128 + r31) = r0; // stb @ 0x807D3F1C
    r3 = *(0 + r3); // lwz @ 0x807D3F20
    FUN_807BFD88(); // bl 0x807BFD88
    *(0xf4 + r31) = r3; // stw @ 0x807D3F28
    r3 = *(0x38 + r31); // lwz @ 0x807D3F2C
    r3 = *(0 + r3); // lwz @ 0x807D3F30
    FUN_807B5EBC(); // bl 0x807B5EBC
    if (==) goto 0x0x807d3fb4;
    /* lis r3, 0 */ // 0x807D3F40
    r0 = *(0 + r3); // lwz @ 0x807D3F44
    if (==) goto 0x0x807d3f7c;
    *(0xf0 + r31) = r0; // stw @ 0x807D3F50
    r3 = *(0x38 + r31); // lwz @ 0x807D3F54
    r3 = *(0 + r3); // lwz @ 0x807D3F58
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r5, 0 */ // 0x807D3F60
    /* clrlwi r4, r3, 0x18 */ // 0x807D3F64
    r3 = *(0 + r5); // lwz @ 0x807D3F68
    FUN_8061D97C(r5); // bl 0x8061D97C
    r4 = r3;
    r3 = *(0xf0 + r31); // lwz @ 0x807D3F74
    FUN_8080EC24(r4); // bl 0x8080EC24
    /* lis r3, 0 */ // 0x807D3F7C
    r3 = *(0 + r3); // lwz @ 0x807D3F80
    r0 = *(0xb74 + r3); // lwz @ 0x807D3F84
    if (!=) goto 0x0x807d3fa4;
    r12 = *(0x34 + r31); // lwz @ 0x807D3F90
    r3 = r31;
    r12 = *(0x6c + r12); // lwz @ 0x807D3F98
    /* mtctr r12 */ // 0x807D3F9C
    /* bctrl  */ // 0x807D3FA0
    r3 = *(0x38 + r31); // lwz @ 0x807D3FA4
    r3 = *(0 + r3); // lwz @ 0x807D3FA8
    FUN_8061E2BC(); // bl 0x8061E2BC
    FUN_808594A8(); // bl 0x808594A8
    /* lis r3, 0 */ // 0x807D3FB4
    /* lfs f0, 0(r3) */ // 0x807D3FB8
    /* stfs f0, 0x100(r31) */ // 0x807D3FBC
    /* stfs f0, 0xfc(r31) */ // 0x807D3FC0
    /* stfs f0, 0xf8(r31) */ // 0x807D3FC4
    /* stfs f0, 0x10c(r31) */ // 0x807D3FC8
    /* stfs f0, 0x108(r31) */ // 0x807D3FCC
    /* stfs f0, 0x104(r31) */ // 0x807D3FD0
    r31 = *(0xc + r1); // lwz @ 0x807D3FD4
    r0 = *(0x14 + r1); // lwz @ 0x807D3FD8
    return;
}