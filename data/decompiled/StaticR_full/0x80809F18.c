/* Function at 0x80809F18, size=164 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80809F18(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x28 + r1) = r30; // stw @ 0x80809F28
    r30 = r3;
    r3 = *(0x20 + r3); // lwz @ 0x80809F30
    r12 = *(0 + r3); // lwz @ 0x80809F34
    r12 = *(0x14 + r12); // lwz @ 0x80809F38
    /* mtctr r12 */ // 0x80809F3C
    /* bctrl  */ // 0x80809F40
    r7 = *(0x20 + r30); // lwz @ 0x80809F44
    /* lis r6, 0 */ // 0x80809F48
    r0 = *(0x2c + r30); // lhz @ 0x80809F4C
    /* lfs f3, 0x20(r7) */ // 0x80809F54
    r4 = r30 + 0xbc; // 0x80809F58
    /* lfs f2, 0x1c(r7) */ // 0x80809F5C
    r0 = r0 | 1; // 0x80809F60
    /* lfs f0, 0x18(r7) */ // 0x80809F64
    /* stfs f0, 0x30(r30) */ // 0x80809F6C
    /* lfs f1, 0(r6) */ // 0x80809F70
    *(0x2c + r30) = r0; // sth @ 0x80809F74
    /* stfs f2, 0x34(r30) */ // 0x80809F78
    /* stfs f3, 0x38(r30) */ // 0x80809F7C
    r6 = *(0x24 + r7); // lwz @ 0x80809F80
    r0 = *(0x28 + r7); // lwz @ 0x80809F84
    *(0xc + r1) = r0; // stw @ 0x80809F88
    *(8 + r1) = r6; // stw @ 0x80809F8C
    r0 = *(0x2c + r7); // lwz @ 0x80809F90
    *(0x10 + r1) = r0; // stw @ 0x80809F94
    FUN_8080A5B0(); // bl 0x8080A5B0
    /* lfs f0, 0x14(r1) */ // 0x80809F9C
    r3 = r30 + 0xbc; // 0x80809FA0
    /* stfs f0, 0xbc(r30) */ // 0x80809FA4
    /* lfs f0, 0x18(r1) */ // 0x80809FA8
    /* stfs f0, 0xc0(r30) */ // 0x80809FAC
    /* lfs f0, 0x1c(r1) */ // 0x80809FB0
    /* stfs f0, 0xc4(r30) */ // 0x80809FB4
    FUN_805E3430(); // bl 0x805E3430
}