/* Function at 0x80769F0C, size=188 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80769F0C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x80769F14
    /* li r0, 1 */ // 0x80769F1C
    *(0xc + r1) = r31; // stw @ 0x80769F20
    /* lis r31, 0 */ // 0x80769F24
    r31 = r31 + 0; // 0x80769F28
    *(8 + r1) = r30; // stw @ 0x80769F2C
    r30 = r3;
    /* lfs f2, 4(r31) */ // 0x80769F34
    /* lfs f1, 0x478(r3) */ // 0x80769F38
    /* lfs f0, 0x38(r31) */ // 0x80769F3C
    /* stfs f2, 0xf4(r3) */ // 0x80769F40
    /* fadds f0, f1, f0 */ // 0x80769F44
    /* stfs f2, 0xfc(r3) */ // 0x80769F48
    /* stfs f2, 0x100(r3) */ // 0x80769F4C
    /* stfs f2, 0x108(r3) */ // 0x80769F50
    /* stfs f2, 0x10c(r3) */ // 0x80769F54
    /* stfs f2, 0x110(r3) */ // 0x80769F58
    *(0x4d4 + r3) = r4; // stw @ 0x80769F5C
    *(0x4d8 + r3) = r4; // stb @ 0x80769F60
    *(0x494 + r3) = r4; // stb @ 0x80769F64
    *(0x4d9 + r3) = r0; // stb @ 0x80769F68
    /* stfs f0, 0x478(r3) */ // 0x80769F6C
    FUN_8076B57C(); // bl 0x8076B57C
    /* lfs f0, 0x44(r31) */ // 0x80769F74
    /* lis r3, 0 */ // 0x80769F78
    /* stfs f0, 0(r3) */ // 0x80769F7C
    /* li r4, 4 */ // 0x80769F80
    r3 = *(8 + r30); // lwz @ 0x80769F84
    r3 = *(0x28 + r3); // lwz @ 0x80769F88
    FUN_805E7060(r3, r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x80769F90
    /* lfs f1, 0xc8(r31) */ // 0x80769F94
    r12 = *(0x14 + r12); // lwz @ 0x80769F98
    /* mtctr r12 */ // 0x80769F9C
    /* bctrl  */ // 0x80769FA0
    r3 = r30;
    /* li r4, 0x22f */ // 0x80769FA8
    FUN_808A0AE8(r3, r4); // bl 0x808A0AE8
    r0 = *(0x14 + r1); // lwz @ 0x80769FB0
    r31 = *(0xc + r1); // lwz @ 0x80769FB4
    r30 = *(8 + r1); // lwz @ 0x80769FB8
    return;
}