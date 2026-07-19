/* Function at 0x80761E70, size=348 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80761E70(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x80761E78
    *(0x1c + r1) = r31; // stw @ 0x80761E80
    /* lis r31, 0 */ // 0x80761E84
    r31 = r31 + 0; // 0x80761E88
    *(0x18 + r1) = r30; // stw @ 0x80761E8C
    r30 = r3;
    /* lfs f1, 0(r31) */ // 0x80761E94
    r3 = *(0x20 + r3); // lwz @ 0x80761E98
    r12 = *(0 + r3); // lwz @ 0x80761E9C
    r12 = *(0x10 + r12); // lwz @ 0x80761EA0
    /* mtctr r12 */ // 0x80761EA4
    /* bctrl  */ // 0x80761EA8
    r3 = *(0x20 + r30); // lwz @ 0x80761EAC
    /* li r0, 1 */ // 0x80761EB0
    *(0x17 + r3) = r0; // stb @ 0x80761EB4
    r4 = *(0x20 + r30); // lwz @ 0x80761EB8
    r0 = *(0x2c + r30); // lhz @ 0x80761EBC
    /* lfs f0, 0x20(r4) */ // 0x80761EC0
    /* lfs f1, 0x1c(r4) */ // 0x80761EC4
    r3 = r0 | 1; // 0x80761EC8
    /* lfs f2, 0x18(r4) */ // 0x80761ECC
    /* stfs f2, 0x30(r30) */ // 0x80761ED0
    r0 = *(0xb4 + r30); // lwz @ 0x80761ED4
    *(0x2c + r30) = r3; // sth @ 0x80761ED8
    /* stfs f1, 0x34(r30) */ // 0x80761EE0
    /* stfs f0, 0x38(r30) */ // 0x80761EE4
    /* lfs f0, 0x24(r4) */ // 0x80761EE8
    /* stfs f0, 0xb8(r30) */ // 0x80761EEC
    /* lfs f0, 0x28(r4) */ // 0x80761EF0
    /* stfs f0, 0xbc(r30) */ // 0x80761EF4
    /* lfs f0, 0x2c(r4) */ // 0x80761EF8
    /* stfs f0, 0xc0(r30) */ // 0x80761EFC
    if (!=) goto 0x0x80761f2c;
    /* lfs f1, 0x10(r31) */ // 0x80761F04
    r3 = r30 + 0xb8; // 0x80761F08
    FUN_80743518(r3, r4); // bl 0x80743518
    /* lfs f0, 8(r1) */ // 0x80761F14
    /* stfs f0, 0xb8(r30) */ // 0x80761F18
    /* lfs f0, 0xc(r1) */ // 0x80761F1C
    /* stfs f0, 0xbc(r30) */ // 0x80761F20
    /* lfs f0, 0x10(r1) */ // 0x80761F24
    /* stfs f0, 0xc0(r30) */ // 0x80761F28
    r3 = *(0xb4 + r30); // lwz @ 0x80761F2C
    /* li r0, 0 */ // 0x80761F30
    /* lfs f1, 0x14(r31) */ // 0x80761F34
    /* lfs f0, 0(r31) */ // 0x80761F38
    /* stfs f1, 0xc4(r30) */ // 0x80761F40
    *(0xcc + r30) = r0; // stw @ 0x80761F44
    /* stfs f0, 0xd0(r30) */ // 0x80761F48
    if (==) goto 0x0x80761f6c;
    if (==) goto 0x0x80761f78;
    if (==) goto 0x0x80761f84;
    if (==) goto 0x0x80761f90;
    /* b 0x80761f98 */ // 0x80761F68
    /* lfs f0, 0x18(r31) */ // 0x80761F6C
    /* stfs f0, 0xc8(r30) */ // 0x80761F70
    /* b 0x80761f98 */ // 0x80761F74
    /* lfs f0, 0x1c(r31) */ // 0x80761F78
    /* stfs f0, 0xc8(r30) */ // 0x80761F7C
    /* b 0x80761f98 */ // 0x80761F80
    /* lfs f0, 0x18(r31) */ // 0x80761F84
    /* stfs f0, 0xc8(r30) */ // 0x80761F88
    /* b 0x80761f98 */ // 0x80761F8C
    /* lfs f0, 0x20(r31) */ // 0x80761F90
    /* stfs f0, 0xc8(r30) */ // 0x80761F94
    r3 = *(0xb4 + r30); // lwz @ 0x80761F98
    r0 = r3 + -1; // 0x80761F9C
    if (>) goto 0x0x80761fb4;
    r3 = r30;
    /* li r4, 0 */ // 0x80761FAC
    FUN_808A0A44(r3, r4); // bl 0x808A0A44
    r0 = *(0x24 + r1); // lwz @ 0x80761FB4
    r31 = *(0x1c + r1); // lwz @ 0x80761FB8
    r30 = *(0x18 + r1); // lwz @ 0x80761FBC
    return;
}