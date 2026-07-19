/* Function at 0x80768A18, size=208 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80768A18(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80768A20
    *(0x3c + r1) = r31; // stw @ 0x80768A2C
    /* lis r31, 0 */ // 0x80768A30
    /* lfs f0, 0(r31) */ // 0x80768A34
    *(0x38 + r1) = r30; // stw @ 0x80768A38
    r30 = r3;
    /* lfs f1, 0(r4) */ // 0x80768A44
    r4 = r30 + 0x100; // 0x80768A48
    /* stfs f0, 0x20(r1) */ // 0x80768A4C
    /* stfs f1, 0x24(r1) */ // 0x80768A50
    /* stfs f0, 0x28(r1) */ // 0x80768A54
    FUN_805A4498(r4); // bl 0x805A4498
    /* lfs f1, 0xf4(r30) */ // 0x80768A5C
    /* lfs f0, 0x14(r1) */ // 0x80768A64
    r4 = r30 + 0x30; // 0x80768A68
    /* lfs f2, 0xf8(r30) */ // 0x80768A6C
    r5 = r30 + 0xf4; // 0x80768A70
    /* fadds f0, f1, f0 */ // 0x80768A74
    /* lfs f1, 0xfc(r30) */ // 0x80768A78
    /* stfs f0, 0xf4(r30) */ // 0x80768A7C
    /* lfs f0, 0x18(r1) */ // 0x80768A80
    /* fadds f0, f2, f0 */ // 0x80768A84
    /* stfs f0, 0xf8(r30) */ // 0x80768A88
    /* lfs f0, 0x1c(r1) */ // 0x80768A8C
    /* fadds f0, f1, f0 */ // 0x80768A90
    /* stfs f0, 0xfc(r30) */ // 0x80768A94
    FUN_805A4464(); // bl 0x805A4464
    r0 = *(0x2c + r30); // lhz @ 0x80768A9C
    /* lfs f1, 0x10(r1) */ // 0x80768AA0
    /* lfs f2, 0xc(r1) */ // 0x80768AA4
    r0 = r0 | 1; // 0x80768AA8
    /* lfs f3, 8(r1) */ // 0x80768AAC
    /* lfs f0, 0(r31) */ // 0x80768AB0
    *(0x2c + r30) = r0; // sth @ 0x80768AB4
    /* stfs f3, 0x30(r30) */ // 0x80768AB8
    /* stfs f2, 0x34(r30) */ // 0x80768ABC
    /* stfs f1, 0x38(r30) */ // 0x80768AC0
    /* stfs f0, 0x108(r30) */ // 0x80768AC4
    /* stfs f0, 0x104(r30) */ // 0x80768AC8
    /* stfs f0, 0x100(r30) */ // 0x80768ACC
    r31 = *(0x3c + r1); // lwz @ 0x80768AD0
    r30 = *(0x38 + r1); // lwz @ 0x80768AD4
    r0 = *(0x44 + r1); // lwz @ 0x80768AD8
    return;
}