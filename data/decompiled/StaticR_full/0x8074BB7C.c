/* Function at 0x8074BB7C, size=448 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8074BB7C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* lis r10, 0 */ // 0x8074BB84
    /* lis r9, 0 */ // 0x8074BB88
    *(0x44 + r1) = r0; // stw @ 0x8074BB8C
    /* lis r7, 0 */ // 0x8074BB94
    /* lfs f0, 0x58(r10) */ // 0x8074BB98
    *(0x3c + r1) = r31; // stw @ 0x8074BB9C
    r8 = r9 + 0; // 0x8074BBA0
    r6 = r7 + 0; // 0x8074BBA4
    r31 = r3;
    r4 = *(0xa0 + r3); // lwz @ 0x8074BBAC
    r0 = *(0x2c + r3); // lhz @ 0x8074BBB0
    r5 = *(0 + r4); // lwz @ 0x8074BBB4
    /* li r4, 1 */ // 0x8074BBB8
    r0 = r0 | 0xb; // 0x8074BBBC
    /* lfs f1, 0x18(r5) */ // 0x8074BBC0
    /* lfs f2, 0x14(r5) */ // 0x8074BBC4
    /* lfs f3, 0x10(r5) */ // 0x8074BBC8
    /* fmuls f12, f1, f0 */ // 0x8074BBCC
    /* lfs f4, 0xc(r5) */ // 0x8074BBD0
    /* fmuls f11, f2, f0 */ // 0x8074BBD4
    /* lfs f5, 8(r5) */ // 0x8074BBD8
    /* fmuls f10, f3, f0 */ // 0x8074BBDC
    /* lfs f6, 4(r5) */ // 0x8074BBE0
    /* lfs f7, 0x24(r5) */ // 0x8074BBE4
    /* lfs f8, 0x20(r5) */ // 0x8074BBE8
    /* lfs f9, 0x1c(r5) */ // 0x8074BBEC
    /* stfs f9, 0x3c(r3) */ // 0x8074BBF0
    /* stfs f6, 0x30(r3) */ // 0x8074BBF4
    /* stfs f5, 0x34(r3) */ // 0x8074BBF8
    /* stfs f4, 0x38(r3) */ // 0x8074BBFC
    *(0x54 + r3) = r4; // stb @ 0x8074BC00
    /* stfs f10, 0x48(r3) */ // 0x8074BC04
    /* stfs f11, 0x4c(r3) */ // 0x8074BC08
    /* stfs f12, 0x50(r3) */ // 0x8074BC0C
    *(0x2c + r3) = r0; // sth @ 0x8074BC10
    /* stfs f3, 0x20(r1) */ // 0x8074BC14
    /* stfs f2, 0x24(r1) */ // 0x8074BC18
    /* stfs f1, 0x28(r1) */ // 0x8074BC1C
    /* stfs f8, 0x40(r3) */ // 0x8074BC20
    /* stfs f7, 0x44(r3) */ // 0x8074BC24
    /* lfs f0, 0(r9) */ // 0x8074BC28
    /* stfs f0, 0xb4(r3) */ // 0x8074BC2C
    /* lfs f0, 4(r8) */ // 0x8074BC30
    /* stfs f0, 0xb8(r3) */ // 0x8074BC34
    /* lfs f0, 8(r8) */ // 0x8074BC38
    /* stfs f0, 0xbc(r3) */ // 0x8074BC3C
    /* lfs f0, 0(r9) */ // 0x8074BC40
    /* stfs f0, 0xc0(r3) */ // 0x8074BC44
    /* lfs f0, 4(r8) */ // 0x8074BC48
    /* stfs f0, 0xc4(r3) */ // 0x8074BC4C
    /* lfs f0, 8(r8) */ // 0x8074BC50
    /* stfs f0, 0xc8(r3) */ // 0x8074BC54
    /* lfs f0, 0(r7) */ // 0x8074BC58
    /* stfs f0, 0xcc(r3) */ // 0x8074BC5C
    /* lfs f0, 4(r6) */ // 0x8074BC60
    /* stfs f6, 0x14(r1) */ // 0x8074BC64
    /* stfs f5, 0x18(r1) */ // 0x8074BC68
    /* stfs f4, 0x1c(r1) */ // 0x8074BC6C
    /* stfs f9, 8(r1) */ // 0x8074BC70
    /* stfs f8, 0xc(r1) */ // 0x8074BC74
    /* stfs f7, 0x10(r1) */ // 0x8074BC78
    /* stfs f10, 0x20(r1) */ // 0x8074BC7C
    /* stfs f11, 0x24(r1) */ // 0x8074BC80
    /* stfs f12, 0x28(r1) */ // 0x8074BC84
    /* stfs f0, 0xd0(r3) */ // 0x8074BC88
    /* lfs f0, 8(r6) */ // 0x8074BC8C
    /* li r0, -1 */ // 0x8074BC90
    /* lfs f1, 0(r10) */ // 0x8074BC94
    /* li r4, 1 */ // 0x8074BC98
    /* stfs f0, 0xd4(r3) */ // 0x8074BC9C
    /* lfs f0, 0x5c(r10) */ // 0x8074BCA0
    /* stfs f1, 0xe0(r3) */ // 0x8074BCA4
    r5 = *(8 + r3); // lwz @ 0x8074BCA8
    /* stfs f1, 0xdc(r3) */ // 0x8074BCAC
    /* lfs f2, 0x60(r10) */ // 0x8074BCB0
    /* stfs f1, 0xd8(r3) */ // 0x8074BCB4
    /* stfs f1, 0xe4(r3) */ // 0x8074BCB8
    /* stfs f1, 0xe8(r3) */ // 0x8074BCBC
    /* lfs f3, 0(r7) */ // 0x8074BCC0
    /* stfs f3, 0xec(r3) */ // 0x8074BCC4
    /* lfs f3, 4(r6) */ // 0x8074BCC8
    /* stfs f3, 0xf0(r3) */ // 0x8074BCCC
    /* lfs f3, 8(r6) */ // 0x8074BCD0
    /* stfs f3, 0xf4(r3) */ // 0x8074BCD4
    /* stfs f6, 0xf8(r3) */ // 0x8074BCD8
    /* stfs f5, 0xfc(r3) */ // 0x8074BCDC
    /* stfs f4, 0x100(r3) */ // 0x8074BCE0
    /* lfs f3, 0(r9) */ // 0x8074BCE4
    /* stfs f3, 0x104(r3) */ // 0x8074BCE8
    /* lfs f3, 4(r8) */ // 0x8074BCEC
    /* stfs f3, 0x108(r3) */ // 0x8074BCF0
    /* lfs f3, 8(r8) */ // 0x8074BCF4
    /* stfs f3, 0x10c(r3) */ // 0x8074BCF8
    /* stfs f1, 0x118(r3) */ // 0x8074BCFC
    /* stfs f1, 0x114(r3) */ // 0x8074BD00
    /* stfs f1, 0x110(r3) */ // 0x8074BD04
    /* stfs f0, 0x11c(r3) */ // 0x8074BD08
    *(0x120 + r3) = r0; // stw @ 0x8074BD0C
    /* stfs f1, 0x124(r3) */ // 0x8074BD10
    r3 = *(0x28 + r5); // lwz @ 0x8074BD14
    FUN_805E70EC(); // bl 0x805E70EC
    r3 = r31;
    /* li r4, 0 */ // 0x8074BD20
    FUN_808A0A44(r3, r4); // bl 0x808A0A44
    r0 = *(0x44 + r1); // lwz @ 0x8074BD28
    r31 = *(0x3c + r1); // lwz @ 0x8074BD2C
    return;
}