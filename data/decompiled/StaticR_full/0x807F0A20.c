/* Function at 0x807F0A20, size=256 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_807F0A20(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    *(0x3c + r1) = r31; // stw @ 0x807F0A2C
    r31 = r3;
    r3 = *(0x20 + r3); // lwz @ 0x807F0A34
    r12 = *(0 + r3); // lwz @ 0x807F0A38
    r12 = *(0x14 + r12); // lwz @ 0x807F0A3C
    /* mtctr r12 */ // 0x807F0A40
    /* bctrl  */ // 0x807F0A44
    if (!=) goto 0x0x807f0a78;
    /* lis r7, 0 */ // 0x807F0A50
    r6 = *(0 + r7); // lwzu @ 0x807F0A54
    *(0x20 + r1) = r6; // stw @ 0x807F0A58
    r3 = r31;
    r5 = *(4 + r7); // lwz @ 0x807F0A60
    r0 = *(8 + r7); // lwz @ 0x807F0A68
    *(0x24 + r1) = r5; // stw @ 0x807F0A6C
    *(0x28 + r1) = r0; // stw @ 0x807F0A70
    FUN_807F1048(r4); // bl 0x807F1048
    r5 = *(0x20 + r31); // lwz @ 0x807F0A78
    /* lis r6, 0 */ // 0x807F0A7C
    r0 = *(0x2c + r31); // lhz @ 0x807F0A80
    r9 = *(0x18 + r5); // lwz @ 0x807F0A88
    r4 = r31 + 0x30; // 0x807F0A8C
    r7 = *(0x20 + r5); // lwz @ 0x807F0A90
    r0 = r0 | 1; // 0x807F0A94
    r8 = *(0x1c + r5); // lwz @ 0x807F0A98
    r5 = r31 + 0xb8; // 0x807F0A9C
    *(0x14 + r1) = r9; // stw @ 0x807F0AA0
    /* lfs f1, 0xbc(r31) */ // 0x807F0AA4
    /* lfs f0, 0(r6) */ // 0x807F0AA8
    /* lfs f2, 0x14(r1) */ // 0x807F0AAC
    /* fsubs f0, f1, f0 */ // 0x807F0AB0
    *(0x1c + r1) = r7; // stw @ 0x807F0AB4
    *(0x2c + r31) = r0; // sth @ 0x807F0AB8
    /* lfs f1, 0x1c(r1) */ // 0x807F0ABC
    *(0x18 + r1) = r8; // stw @ 0x807F0AC0
    /* stfs f2, 0x30(r31) */ // 0x807F0AC4
    *(0x2c + r31) = r0; // sth @ 0x807F0AC8
    /* stfs f1, 0x38(r31) */ // 0x807F0ACC
    /* stfs f0, 0xbc(r31) */ // 0x807F0AD0
    FUN_805A4464(); // bl 0x805A4464
    r0 = *(0x2c + r31); // lhz @ 0x807F0AD8
    r3 = r31;
    /* lfs f2, 0x10(r1) */ // 0x807F0AE0
    /* lfs f1, 0xc(r1) */ // 0x807F0AE4
    r0 = r0 | 1; // 0x807F0AE8
    /* lfs f0, 8(r1) */ // 0x807F0AEC
    /* stfs f0, 0x30(r31) */ // 0x807F0AF0
    *(0x2c + r31) = r0; // sth @ 0x807F0AF4
    /* stfs f1, 0x34(r31) */ // 0x807F0AF8
    /* stfs f2, 0x38(r31) */ // 0x807F0AFC
    FUN_807F0D18(); // bl 0x807F0D18
    r3 = r31;
    FUN_807F0BD4(r3); // bl 0x807F0BD4
    r0 = *(0x44 + r1); // lwz @ 0x807F0B0C
    r31 = *(0x3c + r1); // lwz @ 0x807F0B10
    return;
}