/* Function at 0x80761FD0, size=400 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_80761FD0(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x80761FE0
    r31 = r31 + 0; // 0x80761FE4
    *(0x38 + r1) = r30; // stw @ 0x80761FE8
    r30 = r3;
    r3 = *(0x20 + r3); // lwz @ 0x80761FF0
    r12 = *(0 + r3); // lwz @ 0x80761FF4
    r12 = *(0x14 + r12); // lwz @ 0x80761FF8
    /* mtctr r12 */ // 0x80761FFC
    /* bctrl  */ // 0x80762000
    r0 = *(0xb4 + r30); // lwz @ 0x80762004
    if (==) goto 0x0x807620fc;
    r4 = *(0x20 + r30); // lwz @ 0x80762010
    r3 = *(0x24 + r4); // lwz @ 0x80762018
    r0 = *(0x28 + r4); // lwz @ 0x8076201C
    *(0x24 + r1) = r0; // stw @ 0x80762020
    *(0x20 + r1) = r3; // stw @ 0x80762024
    r0 = *(0x2c + r4); // lwz @ 0x80762028
    *(0x28 + r1) = r0; // stw @ 0x8076202C
    if (!=) goto 0x0x8076205c;
    /* lfs f1, 0x10(r31) */ // 0x80762034
    FUN_80743518(r3, r4); // bl 0x80743518
    /* lfs f2, 0x14(r1) */ // 0x80762044
    /* lfs f1, 0x18(r1) */ // 0x80762048
    /* lfs f0, 0x1c(r1) */ // 0x8076204C
    /* stfs f2, 0x20(r1) */ // 0x80762050
    /* stfs f1, 0x24(r1) */ // 0x80762054
    /* stfs f0, 0x28(r1) */ // 0x80762058
    /* lfs f1, 0x24(r1) */ // 0x8076205C
    /* lfs f0, 0x24(r31) */ // 0x80762060
    /* fabs f1, f1 */ // 0x80762064
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80762068
    if (<=) goto 0x0x80762078;
    /* lfs f0, 0x14(r31) */ // 0x80762070
    /* stfs f0, 0x24(r1) */ // 0x80762074
    /* lfs f1, 0xc4(r30) */ // 0x80762078
    r4 = r30 + 0xb8; // 0x80762080
    FUN_807621C0(r3, r4, r5); // bl 0x807621C0
    /* lfs f0, 8(r1) */ // 0x8076208C
    /* stfs f0, 0xb8(r30) */ // 0x80762090
    /* fmuls f2, f0, f0 */ // 0x80762094
    /* lfs f0, 0x28(r31) */ // 0x80762098
    /* lfs f1, 0xc(r1) */ // 0x8076209C
    /* stfs f1, 0xbc(r30) */ // 0x807620A0
    /* fmuls f1, f1, f1 */ // 0x807620A4
    /* lfs f3, 0x10(r1) */ // 0x807620A8
    /* stfs f3, 0xc0(r30) */ // 0x807620AC
    /* fmuls f3, f3, f3 */ // 0x807620B0
    /* fadds f1, f2, f1 */ // 0x807620B4
    /* fadds f1, f3, f1 */ // 0x807620B8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807620BC
    /* cror cr0eq, cr0lt, cr0eq */ // 0x807620C0
    /* mfcr r0 */ // 0x807620C4
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x807620C8
    if (==) goto 0x0x807620e8;
    /* lfs f1, 0(r31) */ // 0x807620D0
    /* lfs f0, 0x2c(r31) */ // 0x807620D4
    /* stfs f1, 0xb8(r30) */ // 0x807620D8
    /* stfs f1, 0xbc(r30) */ // 0x807620DC
    /* stfs f0, 0xc0(r30) */ // 0x807620E0
    /* b 0x807620f0 */ // 0x807620E4
    r3 = r30 + 0xb8; // 0x807620E8
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r4 = r30 + 0xb8; // 0x807620F4
    FUN_808A1E3C(r3, r3, r4); // bl 0x808A1E3C
    r3 = *(0xcc + r30); // lwz @ 0x807620FC
    /* lis r0, 0x4330 */ // 0x80762100
    r4 = *(0x20 + r30); // lwz @ 0x80762104
    /* xoris r3, r3, 0x8000 */ // 0x80762108
    *(0x34 + r1) = r3; // stw @ 0x8076210C
    /* lfd f1, 8(r31) */ // 0x80762110
    *(0x30 + r1) = r0; // stw @ 0x80762114
    r3 = *(0x2c + r30); // lhz @ 0x80762118
    /* lfd f0, 0x30(r1) */ // 0x8076211C
    /* lfs f2, 0x30(r31) */ // 0x80762120
    r0 = r3 | 1; // 0x80762124
    /* fsubs f3, f0, f1 */ // 0x80762128
    /* lfs f1, 0xc8(r30) */ // 0x8076212C
    /* lfs f0, 0x34(r31) */ // 0x80762130
    /* lfs f4, 0x20(r4) */ // 0x80762134
    /* fmuls f2, f2, f3 */ // 0x80762138
    /* lfs f3, 0x1c(r4) */ // 0x8076213C
    /* lfs f5, 0x18(r4) */ // 0x80762140
    /* stfs f5, 0x30(r30) */ // 0x80762144
    /* fdivs f1, f2, f1 */ // 0x80762148
    *(0x2c + r30) = r0; // sth @ 0x8076214C
    /* stfs f3, 0x34(r30) */ // 0x80762150
    /* stfs f4, 0x38(r30) */ // 0x80762154
    /* fmuls f1, f0, f1 */ // 0x80762158
    FUN_805E3430(); // bl 0x805E3430
}