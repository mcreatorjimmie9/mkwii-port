/* Function at 0x8089C060, size=248 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8089C060(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x8089C068
    *(0x6c + r1) = r31; // stw @ 0x8089C070
    r31 = r4;
    *(0x68 + r1) = r30; // stw @ 0x8089C078
    r30 = r3;
    r5 = *(0 + r5); // lwz @ 0x8089C080
    r6 = *(0xfc + r3); // lwz @ 0x8089C084
    r0 = *(0x20 + r5); // lwz @ 0x8089C088
    /* subf r0, r4, r0 */ // 0x8089C08C
    if (==) goto 0x0x8089c1f0;
    if (!=) goto 0x0x8089c0ac;
    FUN_808A1BCC(); // bl 0x808A1BCC
    r5 = r30 + 0x58; // 0x8089C0A4
    /* b 0x8089c0c0 */ // 0x8089C0A8
    r12 = *(0 + r3); // lwz @ 0x8089C0AC
    r12 = *(0x12c + r12); // lwz @ 0x8089C0B0
    /* mtctr r12 */ // 0x8089C0B4
    /* bctrl  */ // 0x8089C0B8
    r5 = r3;
    /* lfs f0, 0(r5) */ // 0x8089C0C0
    /* stfs f0, 0x38(r1) */ // 0x8089C0C8
    /* lfs f0, 4(r5) */ // 0x8089C0D0
    /* stfs f0, 0x3c(r1) */ // 0x8089C0D4
    /* lfs f0, 8(r5) */ // 0x8089C0D8
    /* stfs f0, 0x40(r1) */ // 0x8089C0DC
    /* lfs f0, 0xc(r5) */ // 0x8089C0E0
    /* stfs f0, 0x44(r1) */ // 0x8089C0E4
    /* lfs f0, 0x10(r5) */ // 0x8089C0E8
    /* stfs f0, 0x48(r1) */ // 0x8089C0EC
    /* lfs f0, 0x14(r5) */ // 0x8089C0F0
    /* stfs f0, 0x4c(r1) */ // 0x8089C0F4
    /* lfs f0, 0x18(r5) */ // 0x8089C0F8
    /* stfs f0, 0x50(r1) */ // 0x8089C0FC
    /* lfs f0, 0x1c(r5) */ // 0x8089C100
    /* stfs f0, 0x54(r1) */ // 0x8089C104
    /* lfs f0, 0x20(r5) */ // 0x8089C108
    /* stfs f0, 0x58(r1) */ // 0x8089C10C
    /* lfs f0, 0x24(r5) */ // 0x8089C110
    /* stfs f0, 0x5c(r1) */ // 0x8089C114
    /* lfs f0, 0x28(r5) */ // 0x8089C118
    /* stfs f0, 0x60(r1) */ // 0x8089C11C
    /* lfs f0, 0x2c(r5) */ // 0x8089C120
    /* stfs f0, 0x64(r1) */ // 0x8089C124
    FUN_805E3430(); // bl 0x805E3430
    r3 = *(0xac + r30); // lwz @ 0x8089C12C
    /* lfs f0, 0x38(r1) */ // 0x8089C130
    /* stfs f0, 4(r3) */ // 0x8089C134
    /* lfs f0, 0x3c(r1) */ // 0x8089C138
    /* stfs f0, 8(r3) */ // 0x8089C13C
    /* lfs f0, 0x40(r1) */ // 0x8089C140
    /* stfs f0, 0xc(r3) */ // 0x8089C144
    /* lfs f0, 0x44(r1) */ // 0x8089C148
    /* stfs f0, 0x10(r3) */ // 0x8089C14C
    /* lfs f0, 0x48(r1) */ // 0x8089C150
    /* stfs f0, 0x14(r3) */ // 0x8089C154
}