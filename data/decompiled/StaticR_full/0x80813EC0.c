/* Function at 0x80813EC0, size=272 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80813EC0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x80813ECC
    r31 = r3;
    r0 = *(0x3c + r3); // lbz @ 0x80813ED4
    if (!=) goto 0x0x80813fbc;
    r4 = r31;
    r5 = r31 + 0xc; // 0x80813EE8
    FUN_805A4498(r4, r3, r5); // bl 0x805A4498
    /* lfs f1, 8(r1) */ // 0x80813EF0
    /* lis r3, 0 */ // 0x80813EF4
    /* stfs f1, 0x18(r31) */ // 0x80813EF8
    /* lfs f0, 0x30(r31) */ // 0x80813EFC
    /* lfs f2, 0xc(r1) */ // 0x80813F00
    /* stfs f2, 0x1c(r31) */ // 0x80813F04
    /* fadds f5, f1, f0 */ // 0x80813F08
    /* lfs f1, 0x34(r31) */ // 0x80813F0C
    /* lfs f3, 0x10(r1) */ // 0x80813F10
    /* lfs f0, 0x38(r31) */ // 0x80813F14
    /* fadds f4, f2, f1 */ // 0x80813F18
    /* lfs f2, 0x24(r31) */ // 0x80813F1C
    /* fadds f3, f3, f0 */ // 0x80813F20
    /* lfs f1, 0x28(r31) */ // 0x80813F24
    /* lfs f0, 0x2c(r31) */ // 0x80813F28
    /* fadds f2, f5, f2 */ // 0x80813F2C
    /* fadds f1, f4, f1 */ // 0x80813F30
    /* fadds f0, f3, f0 */ // 0x80813F34
    /* stfs f2, 0x18(r31) */ // 0x80813F38
    /* stfs f1, 0x1c(r31) */ // 0x80813F3C
    /* stfs f0, 0x20(r31) */ // 0x80813F40
    r3 = *(0 + r3); // lwz @ 0x80813F44
    r3 = *(0x54 + r3); // lwz @ 0x80813F48
    r0 = *(0x18 + r3); // lwz @ 0x80813F4C
    if (!=) goto 0x0x80813f7c;
    /* lis r3, 0 */ // 0x80813F58
    /* lfs f3, 0(r3) */ // 0x80813F5C
    /* fmuls f2, f2, f3 */ // 0x80813F60
    /* fmuls f1, f1, f3 */ // 0x80813F64
    /* fmuls f0, f0, f3 */ // 0x80813F68
    /* stfs f2, 0x18(r31) */ // 0x80813F6C
    /* stfs f1, 0x1c(r31) */ // 0x80813F70
    /* stfs f0, 0x20(r31) */ // 0x80813F74
    /* b 0x80813f9c */ // 0x80813F78
    /* lis r3, 0 */ // 0x80813F7C
    /* lfs f3, 0(r3) */ // 0x80813F80
    /* fmuls f2, f2, f3 */ // 0x80813F84
    /* fmuls f1, f1, f3 */ // 0x80813F88
    /* fmuls f0, f0, f3 */ // 0x80813F8C
    /* stfs f2, 0x18(r31) */ // 0x80813F90
    /* stfs f1, 0x1c(r31) */ // 0x80813F94
    /* stfs f0, 0x20(r31) */ // 0x80813F98
    /* lis r3, 0 */ // 0x80813F9C
    /* lfs f0, 0(r3) */ // 0x80813FA0
    r3 = r3 + 0; // 0x80813FA4
    /* stfs f0, 0x24(r31) */ // 0x80813FA8
    /* lfs f0, 4(r3) */ // 0x80813FAC
    /* stfs f0, 0x28(r31) */ // 0x80813FB0
    /* lfs f0, 8(r3) */ // 0x80813FB4
    /* stfs f0, 0x2c(r31) */ // 0x80813FB8
    r0 = *(0x24 + r1); // lwz @ 0x80813FBC
    r31 = *(0x1c + r1); // lwz @ 0x80813FC0
    return;
}