/* Function at 0x80783E10, size=192 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80783E10(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80783E18
    *(0x2c + r1) = r31; // stw @ 0x80783E24
    /* lis r31, 0 */ // 0x80783E28
    /* lfs f0, 0(r31) */ // 0x80783E2C
    *(0x28 + r1) = r30; // stw @ 0x80783E30
    r30 = r3;
    /* lfs f1, 0(r4) */ // 0x80783E3C
    r4 = r30 + 0x3c4; // 0x80783E40
    /* stfs f0, 0x14(r1) */ // 0x80783E44
    /* stfs f1, 0x18(r1) */ // 0x80783E48
    /* stfs f0, 0x1c(r1) */ // 0x80783E4C
    FUN_805A4498(r4); // bl 0x805A4498
    /* lfs f1, 0x3b8(r30) */ // 0x80783E54
    /* lfs f0, 8(r1) */ // 0x80783E58
    /* lfs f4, 0x3bc(r30) */ // 0x80783E5C
    /* fadds f1, f1, f0 */ // 0x80783E60
    /* lfs f0, 0x3ac(r30) */ // 0x80783E64
    /* lfs f2, 0x3b0(r30) */ // 0x80783E68
    /* stfs f1, 0x3b8(r30) */ // 0x80783E6C
    /* fadds f3, f0, f1 */ // 0x80783E70
    /* lfs f5, 0x3c0(r30) */ // 0x80783E74
    /* lfs f0, 0xc(r1) */ // 0x80783E78
    /* lfs f1, 0x3b4(r30) */ // 0x80783E7C
    /* fadds f4, f4, f0 */ // 0x80783E80
    /* lfs f0, 0(r31) */ // 0x80783E84
    /* stfs f4, 0x3bc(r30) */ // 0x80783E88
    /* fadds f2, f2, f4 */ // 0x80783E8C
    /* lfs f4, 0x10(r1) */ // 0x80783E90
    /* fadds f4, f5, f4 */ // 0x80783E94
    /* stfs f3, 0x3ac(r30) */ // 0x80783E98
    /* stfs f4, 0x3c0(r30) */ // 0x80783E9C
    /* fadds f1, f1, f4 */ // 0x80783EA0
    /* stfs f2, 0x3b0(r30) */ // 0x80783EA4
    /* stfs f1, 0x3b4(r30) */ // 0x80783EA8
    /* stfs f0, 0x3cc(r30) */ // 0x80783EAC
    /* stfs f0, 0x3c8(r30) */ // 0x80783EB0
    /* stfs f0, 0x3c4(r30) */ // 0x80783EB4
    r31 = *(0x2c + r1); // lwz @ 0x80783EB8
    r30 = *(0x28 + r1); // lwz @ 0x80783EBC
    r0 = *(0x34 + r1); // lwz @ 0x80783EC0
    return;
}