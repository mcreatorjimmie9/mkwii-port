/* Function at 0x80810F0C, size=112 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80810F0C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x80810F14
    *(0x24 + r1) = r0; // stw @ 0x80810F18
    *(0x1c + r1) = r31; // stw @ 0x80810F1C
    r31 = r3;
    r4 = r31 + 0x30; // 0x80810F24
    /* lfs f0, 0(r5) */ // 0x80810F28
    r5 = r31 + 0xb4; // 0x80810F2C
    /* lfs f1, 0xb8(r3) */ // 0x80810F30
    /* fsubs f0, f1, f0 */ // 0x80810F34
    /* stfs f0, 0xb8(r3) */ // 0x80810F38
    FUN_805A4464(r5, r3); // bl 0x805A4464
    r0 = *(0x2c + r31); // lhz @ 0x80810F44
    /* lfs f0, 0x10(r1) */ // 0x80810F48
    /* lfs f1, 0xc(r1) */ // 0x80810F4C
    r0 = r0 | 1; // 0x80810F50
    /* lfs f2, 8(r1) */ // 0x80810F54
    /* stfs f2, 0x30(r31) */ // 0x80810F58
    *(0x2c + r31) = r0; // sth @ 0x80810F5C
    /* stfs f1, 0x34(r31) */ // 0x80810F60
    /* stfs f0, 0x38(r31) */ // 0x80810F64
    r31 = *(0x1c + r1); // lwz @ 0x80810F68
    r0 = *(0x24 + r1); // lwz @ 0x80810F6C
    return;
}