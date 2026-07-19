/* Function at 0x808A99E8, size=296 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 6 function(s) */

int FUN_808A99E8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    *(0x3c + r1) = r31; // stw @ 0x808A99F4
    r31 = r3;
    FUN_808A8DEC(); // bl 0x808A8DEC
    r3 = *(0x14c + r31); // lwz @ 0x808A9A00
    r4 = *(0 + r3); // lwz @ 0x808A9A04
    /* rlwinm. r0, r4, 0, 0x17, 0x17 */ // 0x808A9A08
    if (==) goto 0x0x808a9afc;
    /* rlwinm. r0, r4, 0, 0x1a, 0x1a */ // 0x808A9A10
    if (==) goto 0x0x808a9a20;
    r4 = r31 + 0xc8; // 0x808A9A18
    FUN_80842F28(r4); // bl 0x80842F28
    r3 = *(0x14c + r31); // lwz @ 0x808A9A20
    r0 = *(0 + r3); // lwz @ 0x808A9A24
    /* rlwinm. r0, r0, 0, 0x19, 0x19 */ // 0x808A9A28
    if (==) goto 0x0x808a9a3c;
    r4 = r31 + 0xc8; // 0x808A9A30
    r5 = r31 + 0xd4; // 0x808A9A34
    FUN_80842F48(r4, r5); // bl 0x80842F48
    /* lis r3, 0 */ // 0x808A9A3C
    r3 = *(0 + r3); // lwz @ 0x808A9A40
    r0 = *(0xb68 + r3); // lwz @ 0x808A9A44
    if (!=) goto 0x0x808a9a78;
    /* lfs f0, 0xe8(r31) */ // 0x808A9A50
    /* lfs f1, 0xe0(r31) */ // 0x808A9A54
    /* stfs f0, 0xd0(r31) */ // 0x808A9A58
    r3 = *(0x14c + r31); // lwz @ 0x808A9A5C
    /* stfs f1, 0xc8(r31) */ // 0x808A9A60
    /* stfs f1, 8(r3) */ // 0x808A9A64
    /* lfs f0, 0xcc(r31) */ // 0x808A9A68
    /* stfs f0, 0xc(r3) */ // 0x808A9A6C
    /* lfs f0, 0xd0(r31) */ // 0x808A9A70
    /* stfs f0, 0x10(r3) */ // 0x808A9A74
    /* lis r5, 0 */ // 0x808A9A78
    r4 = r31 + 0xc8; // 0x808A9A80
    r5 = r5 + 0; // 0x808A9A84
    FUN_805A4464(r5, r3, r4, r5); // bl 0x805A4464
    r3 = *(0xa0 + r31); // lwz @ 0x808A9A8C
    /* lis r0, 0x4330 */ // 0x808A9A90
    /* lis r5, 0 */ // 0x808A9A94
    /* lis r4, 0 */ // 0x808A9A98
    r6 = *(0 + r3); // lwz @ 0x808A9A9C
    *(0x30 + r1) = r0; // stw @ 0x808A9AA4
    r4 = r4 + 0; // 0x808A9AA8
    r0 = *(0x36 + r6); // lha @ 0x808A9AAC
    /* lfd f1, 0(r5) */ // 0x808A9AB0
    /* xoris r0, r0, 0x8000 */ // 0x808A9AB4
    *(0x34 + r1) = r0; // stw @ 0x808A9AB8
    /* lfd f0, 0x30(r1) */ // 0x808A9ABC
    /* fsubs f1, f0, f1 */ // 0x808A9AC0
    FUN_805A443C(); // bl 0x805A443C
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    r0 = *(0x2c + r31); // lhz @ 0x808A9AD8
    /* lfs f0, 0x10(r1) */ // 0x808A9ADC
    /* lfs f1, 0xc(r1) */ // 0x808A9AE0
    r0 = r0 | 1; // 0x808A9AE4
    /* lfs f2, 8(r1) */ // 0x808A9AE8
    /* stfs f2, 0x30(r31) */ // 0x808A9AEC
    *(0x2c + r31) = r0; // sth @ 0x808A9AF0
    /* stfs f1, 0x34(r31) */ // 0x808A9AF4
    /* stfs f0, 0x38(r31) */ // 0x808A9AF8
    r0 = *(0x44 + r1); // lwz @ 0x808A9AFC
    r31 = *(0x3c + r1); // lwz @ 0x808A9B00
    return;
}