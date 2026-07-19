/* Function at 0x805A6128, size=240 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805A6128(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* lis r7, 0 */ // 0x805A6130
    /* lis r6, 0 */ // 0x805A6134
    *(0x54 + r1) = r0; // stw @ 0x805A6138
    r7 = r7 + 0; // 0x805A613C
    /* lis r5, 0 */ // 0x805A6140
    r6 = r6 + 0; // 0x805A6144
    *(0x4c + r1) = r31; // stw @ 0x805A6148
    /* li r0, -1 */ // 0x805A614C
    /* lfs f0, 0x154(r7) */ // 0x805A6150
    r5 = r5 + 0; // 0x805A6154
    *(0 + r3) = r6; // stw @ 0x805A6158
    r31 = r3;
    /* lfs f2, 0x190(r7) */ // 0x805A6160
    *(0x44 + r3) = r0; // sth @ 0x805A6164
    /* lfs f3, 0x170(r7) */ // 0x805A6168
    *(4 + r3) = r4; // stw @ 0x805A616C
    /* stfs f0, 0x40(r3) */ // 0x805A6170
    /* stfs f0, 0x3c(r3) */ // 0x805A6174
    /* stfs f0, 0x38(r3) */ // 0x805A6178
    /* stfs f0, 0x34(r3) */ // 0x805A617C
    /* stfs f0, 0x30(r3) */ // 0x805A6180
    /* stfs f0, 0x2c(r3) */ // 0x805A6184
    /* stfs f0, 0x10(r3) */ // 0x805A6188
    /* stfs f0, 0xc(r3) */ // 0x805A618C
    /* stfs f0, 8(r3) */ // 0x805A6190
    /* stfs f0, 0x1c(r3) */ // 0x805A6194
    /* stfs f0, 0x18(r3) */ // 0x805A6198
    /* stfs f0, 0x14(r3) */ // 0x805A619C
    /* stfs f0, 0x28(r3) */ // 0x805A61A0
    /* stfs f0, 0x24(r3) */ // 0x805A61A4
    /* stfs f0, 0x20(r3) */ // 0x805A61A8
    *(0 + r3) = r5; // stw @ 0x805A61AC
    /* lfs f0, 0x1c(r4) */ // 0x805A61B0
    /* fmuls f0, f2, f0 */ // 0x805A61B4
    /* stfs f0, 0x2c(r3) */ // 0x805A61B8
    /* fmuls f1, f0, f0 */ // 0x805A61BC
    /* lfs f0, 0x20(r4) */ // 0x805A61C0
    /* fmuls f0, f2, f0 */ // 0x805A61C4
    /* stfs f0, 0x30(r3) */ // 0x805A61C8
    /* lfs f0, 0x24(r4) */ // 0x805A61CC
    /* fmuls f0, f2, f0 */ // 0x805A61D0
    /* stfs f1, 0x38(r3) */ // 0x805A61D4
    /* stfs f0, 0x34(r3) */ // 0x805A61D8
    /* fmuls f0, f0, f0 */ // 0x805A61DC
    /* fadds f0, f1, f0 */ // 0x805A61E0
    /* stfs f0, 0x40(r3) */ // 0x805A61E4
    /* lfs f1, 0x1c(r4) */ // 0x805A61E8
    /* lfs f0, 0x24(r4) */ // 0x805A61EC
    /* fdivs f0, f1, f0 */ // 0x805A61F0
    /* stfs f0, 0x3c(r3) */ // 0x805A61F4
    /* lfs f1, 0x10(r4) */ // 0x805A61FC
    /* lfs f2, 0x14(r4) */ // 0x805A6200
    /* lfs f0, 0x18(r4) */ // 0x805A6204
    /* fmuls f1, f3, f1 */ // 0x805A6208
    /* fmuls f2, f3, f2 */ // 0x805A620C
    /* fmuls f3, f3, f0 */ // 0x805A6210
    FUN_805E3430(); // bl 0x805E3430
}