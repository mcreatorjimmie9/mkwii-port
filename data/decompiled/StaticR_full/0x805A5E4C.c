/* Function at 0x805A5E4C, size=248 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805A5E4C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* lis r7, 0 */ // 0x805A5E54
    /* lis r6, 0 */ // 0x805A5E58
    *(0x54 + r1) = r0; // stw @ 0x805A5E5C
    r7 = r7 + 0; // 0x805A5E60
    /* lis r5, 0 */ // 0x805A5E64
    r6 = r6 + 0; // 0x805A5E68
    *(0x4c + r1) = r31; // stw @ 0x805A5E6C
    /* li r0, -1 */ // 0x805A5E70
    /* lfs f6, 0x154(r7) */ // 0x805A5E74
    r5 = r5 + 0; // 0x805A5E78
    *(0 + r3) = r6; // stw @ 0x805A5E7C
    r31 = r3;
    /* lfs f5, 0x18c(r7) */ // 0x805A5E84
    *(0x44 + r3) = r0; // sth @ 0x805A5E88
    /* lfs f4, 0x188(r7) */ // 0x805A5E8C
    *(4 + r3) = r4; // stw @ 0x805A5E90
    /* lfs f3, 0x170(r7) */ // 0x805A5E94
    /* stfs f6, 0x40(r3) */ // 0x805A5E98
    /* stfs f6, 0x3c(r3) */ // 0x805A5E9C
    /* stfs f6, 0x38(r3) */ // 0x805A5EA0
    /* stfs f6, 0x34(r3) */ // 0x805A5EA4
    /* stfs f6, 0x30(r3) */ // 0x805A5EA8
    /* stfs f6, 0x2c(r3) */ // 0x805A5EAC
    /* stfs f6, 0x10(r3) */ // 0x805A5EB0
    /* stfs f6, 0xc(r3) */ // 0x805A5EB4
    /* stfs f6, 8(r3) */ // 0x805A5EB8
    /* stfs f6, 0x1c(r3) */ // 0x805A5EBC
    /* stfs f6, 0x18(r3) */ // 0x805A5EC0
    /* stfs f6, 0x14(r3) */ // 0x805A5EC4
    /* stfs f6, 0x28(r3) */ // 0x805A5EC8
    /* stfs f6, 0x24(r3) */ // 0x805A5ECC
    /* stfs f6, 0x20(r3) */ // 0x805A5ED0
    *(0 + r3) = r5; // stw @ 0x805A5ED4
    /* lfs f0, 0x1c(r4) */ // 0x805A5ED8
    /* fmuls f0, f5, f0 */ // 0x805A5EDC
    /* fmuls f0, f4, f0 */ // 0x805A5EE0
    /* stfs f0, 0x2c(r3) */ // 0x805A5EE4
    /* fmuls f1, f0, f0 */ // 0x805A5EE8
    /* lfs f0, 0x20(r4) */ // 0x805A5EEC
    /* fmuls f0, f5, f0 */ // 0x805A5EF0
    /* stfs f0, 0x30(r3) */ // 0x805A5EF4
    /* fmuls f2, f0, f0 */ // 0x805A5EF8
    /* lfs f0, 0x24(r4) */ // 0x805A5EFC
    /* fmuls f0, f5, f0 */ // 0x805A5F00
    /* stfs f6, 0x3c(r3) */ // 0x805A5F04
    /* stfs f6, 0x38(r3) */ // 0x805A5F08
    /* fmuls f0, f4, f0 */ // 0x805A5F0C
    /* stfs f0, 0x34(r3) */ // 0x805A5F10
    /* fmuls f0, f0, f0 */ // 0x805A5F14
    /* fadds f0, f1, f0 */ // 0x805A5F18
    /* fadds f0, f2, f0 */ // 0x805A5F1C
    /* stfs f0, 0x40(r3) */ // 0x805A5F20
    /* lfs f1, 0x10(r4) */ // 0x805A5F28
    /* lfs f2, 0x14(r4) */ // 0x805A5F2C
    /* lfs f0, 0x18(r4) */ // 0x805A5F30
    /* fmuls f1, f3, f1 */ // 0x805A5F34
    /* fmuls f2, f3, f2 */ // 0x805A5F38
    /* fmuls f3, f3, f0 */ // 0x805A5F3C
    FUN_805E3430(); // bl 0x805E3430
}