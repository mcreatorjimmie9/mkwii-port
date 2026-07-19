/* Function at 0x80783ED0, size=336 bytes */
/* Stack frame: 352 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80783ED0(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -352(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80783ED8
    /* li r0, 0 */ // 0x80783EE0
    *(0x15c + r1) = r31; // stw @ 0x80783EE4
    /* lis r31, 0 */ // 0x80783EE8
    r31 = r31 + 0; // 0x80783EEC
    *(0x158 + r1) = r30; // stw @ 0x80783EF0
    r30 = r3;
    *(0x154 + r1) = r29; // stw @ 0x80783EF8
    *(0x150 + r1) = r28; // stw @ 0x80783EFC
    *(0x400 + r3) = r0; // stb @ 0x80783F00
    /* lfs f0, 0x3b0(r3) */ // 0x80783F04
    /* lfs f3, 0(r4) */ // 0x80783F08
    /* lfs f1, 0x498(r3) */ // 0x80783F0C
    /* fadds f2, f0, f3 */ // 0x80783F10
    /* lfs f0, 0x58(r31) */ // 0x80783F14
    /* fsubs f1, f2, f1 */ // 0x80783F18
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80783F1C
    /* mfcr r28 */ // 0x80783F20
    /* lfs f0, 0(r31) */ // 0x80783F24
    /* stfs f0, 0xe8(r1) */ // 0x80783F28
    /* srwi r28, r28, 0x1f */ // 0x80783F2C
    r4 = r30 + 0x3ac; // 0x80783F34
    /* stfs f0, 0xec(r1) */ // 0x80783F38
    /* stfs f0, 0xf0(r1) */ // 0x80783F40
    /* stfs f0, 0xf4(r1) */ // 0x80783F44
    /* stfs f0, 0xf8(r1) */ // 0x80783F48
    /* stfs f0, 0xfc(r1) */ // 0x80783F4C
    *(0x140 + r1) = r0; // stw @ 0x80783F50
    *(8 + r1) = r0; // stw @ 0x80783F54
    /* stfs f0, 0x54(r1) */ // 0x80783F58
    /* stfs f3, 0x58(r1) */ // 0x80783F5C
    /* stfs f0, 0x5c(r1) */ // 0x80783F60
    FUN_805A4464(); // bl 0x805A4464
    /* lis r4, 0 */ // 0x80783F68
    /* lis r3, 0 */ // 0x80783F6C
    /* lfs f1, 0(r4) */ // 0x80783F70
    /* lis r5, 0 */ // 0x80783F74
    /* lis r6, 0x20e8 */ // 0x80783F78
    r3 = *(0 + r3); // lwz @ 0x80783F7C
    r5 = r5 + 0; // 0x80783F84
    r6 = r6 + 0xfff; // 0x80783F88
    /* li r29, 0 */ // 0x80783F94
    /* li r9, 0 */ // 0x80783F98
    FUN_8081A818(r6, r7, r8, r9); // bl 0x8081A818
    if (==) goto 0x0x80783fb4;
    if (==) goto 0x0x80783fb4;
    /* li r29, 1 */ // 0x80783FB0
    if (==) goto 0x0x80784214;
    /* li r0, 1 */ // 0x80783FBC
    *(0x400 + r30) = r0; // stb @ 0x80783FC0
    r0 = *(0x100 + r1); // lwz @ 0x80783FC4
    *(0x60 + r1) = r0; // stw @ 0x80783FC8
    r3 = *(0x104 + r1); // lwz @ 0x80783FCC
    *(0x64 + r1) = r3; // stw @ 0x80783FD0
    r0 = *(0x108 + r1); // lwz @ 0x80783FD4
    /* lfs f1, 0x60(r1) */ // 0x80783FD8
    /* lfs f0, 0x64(r1) */ // 0x80783FDC
    *(0x68 + r1) = r0; // stw @ 0x80783FE0
    /* fmuls f1, f1, f1 */ // 0x80783FE4
    /* fmuls f0, f0, f0 */ // 0x80783FE8
    /* lfs f2, 0x68(r1) */ // 0x80783FEC
    /* fmuls f2, f2, f2 */ // 0x80783FF0
    /* fadds f0, f1, f0 */ // 0x80783FF4
    /* fadds f1, f2, f0 */ // 0x80783FF8
    FUN_805E3430(); // bl 0x805E3430
    /* lis r4, 0 */ // 0x80784000
    r4 = r4 + 0; // 0x80784008
    FUN_805A443C(r4, r3, r4); // bl 0x805A443C
    /* lfs f1, 0x3ac(r30) */ // 0x80784010
    /* lfs f0, 0x3c(r1) */ // 0x80784014
    /* lfs f3, 0x3b0(r30) */ // 0x80784018
    /* fadds f1, f1, f0 */ // 0x8078401C
}