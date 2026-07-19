/* Function at 0x80718F18, size=224 bytes */
/* Stack frame: 320 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80718F18(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -320(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80718F20
    *(0x13c + r1) = r31; // stw @ 0x80718F28
    /* lis r31, 0 */ // 0x80718F2C
    r31 = r31 + 0; // 0x80718F30
    *(0x138 + r1) = r30; // stw @ 0x80718F34
    r30 = r3;
    r4 = *(0 + r4); // lwz @ 0x80718F3C
    r3 = *(0x10 + r4); // lwz @ 0x80718F40
    r3 = *(0x6c + r3); // lwz @ 0x80718F44
    r12 = *(0 + r3); // lwz @ 0x80718F48
    r12 = *(8 + r12); // lwz @ 0x80718F4C
    /* mtctr r12 */ // 0x80718F50
    /* bctrl  */ // 0x80718F54
    r6 = *(0 + r3); // lwz @ 0x80718F58
    r0 = *(4 + r3); // lwz @ 0x80718F60
    *(0x10c + r1) = r0; // stw @ 0x80718F68
    /* lfs f2, 0x30(r31) */ // 0x80718F6C
    *(0x108 + r1) = r6; // stw @ 0x80718F70
    /* lfs f1, 0x34(r31) */ // 0x80718F74
    r6 = *(8 + r3); // lwz @ 0x80718F78
    r0 = *(0xc + r3); // lwz @ 0x80718F7C
    *(0x114 + r1) = r0; // stw @ 0x80718F80
    /* lfs f0, 0x38(r31) */ // 0x80718F84
    *(0x110 + r1) = r6; // stw @ 0x80718F88
    r6 = *(0x10 + r3); // lwz @ 0x80718F8C
    r0 = *(0x14 + r3); // lwz @ 0x80718F90
    *(0x11c + r1) = r0; // stw @ 0x80718F94
    *(0x118 + r1) = r6; // stw @ 0x80718F98
    r6 = *(0x18 + r3); // lwz @ 0x80718F9C
    r0 = *(0x1c + r3); // lwz @ 0x80718FA0
    *(0x124 + r1) = r0; // stw @ 0x80718FA4
    *(0x120 + r1) = r6; // stw @ 0x80718FA8
    r6 = *(0x20 + r3); // lwz @ 0x80718FAC
    r0 = *(0x24 + r3); // lwz @ 0x80718FB0
    *(0x12c + r1) = r0; // stw @ 0x80718FB4
    *(0x128 + r1) = r6; // stw @ 0x80718FB8
    r6 = *(0x28 + r3); // lwz @ 0x80718FBC
    r0 = *(0x2c + r3); // lwz @ 0x80718FC0
    *(0x134 + r1) = r0; // stw @ 0x80718FC8
    *(0x130 + r1) = r6; // stw @ 0x80718FCC
    /* lfs f3, 0x38(r30) */ // 0x80718FD0
    /* lfs f4, 0x34(r30) */ // 0x80718FD4
    /* lfs f5, 0x30(r30) */ // 0x80718FD8
    /* fadds f2, f2, f3 */ // 0x80718FDC
    /* fadds f1, f1, f4 */ // 0x80718FE0
    /* fadds f0, f0, f5 */ // 0x80718FE4
    /* stfs f2, 0x28(r1) */ // 0x80718FE8
    /* stfs f0, 0x20(r1) */ // 0x80718FEC
    /* stfs f1, 0x24(r1) */ // 0x80718FF0
    FUN_805E3430(); // bl 0x805E3430
}