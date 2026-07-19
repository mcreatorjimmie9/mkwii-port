/* Function at 0x805F80D8, size=172 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_805F80D8(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x805F80E8
    r31 = r31 + 0; // 0x805F80EC
    *(0x28 + r1) = r30; // stw @ 0x805F80F0
    /* li r30, 0 */ // 0x805F80F4
    /* lfs f0, 0x90(r31) */ // 0x805F80F8
    *(0x24 + r1) = r29; // stw @ 0x805F80FC
    r29 = r3;
    /* lfs f1, 0xd0(r3) */ // 0x805F8104
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x805F8108
    if (<=) goto 0x0x805f811c;
    /* lis r4, 0 */ // 0x805F8110
    r4 = r4 + 0; // 0x805F8114
    *(0xc0 + r3) = r4; // stw @ 0x805F8118
    r3 = r29;
    FUN_8061DFF8(r4, r4, r3); // bl 0x8061DFF8
    /* lfs f0, 0x44(r3) */ // 0x805F8124
    /* lfs f7, 0xe8(r29) */ // 0x805F8128
    /* lfs f1, 0x48(r3) */ // 0x805F812C
    /* lfs f6, 0xec(r29) */ // 0x805F8130
    /* fsubs f4, f0, f7 */ // 0x805F8134
    /* lfs f0, 0x4c(r3) */ // 0x805F8138
    r3 = r29 + 0xe8; // 0x805F813C
    /* lfs f5, 0xf0(r29) */ // 0x805F8140
    /* fsubs f3, f1, f6 */ // 0x805F8144
    /* lfs f1, 0x88(r31) */ // 0x805F8148
    /* fsubs f2, f0, f5 */ // 0x805F814C
    /* fmuls f0, f4, f1 */ // 0x805F8150
    /* fmuls f4, f3, f1 */ // 0x805F8154
    /* fmuls f3, f2, f1 */ // 0x805F8158
    /* stfs f0, 8(r1) */ // 0x805F815C
    /* fadds f2, f7, f0 */ // 0x805F8160
    /* fadds f1, f6, f4 */ // 0x805F8164
    /* stfs f4, 0xc(r1) */ // 0x805F8168
    /* fadds f0, f5, f3 */ // 0x805F816C
    /* stfs f3, 0x10(r1) */ // 0x805F8170
    /* stfs f2, 0xe8(r29) */ // 0x805F8174
    /* stfs f1, 0xec(r29) */ // 0x805F8178
    /* stfs f0, 0xf0(r29) */ // 0x805F817C
    FUN_805E3430(); // bl 0x805E3430
}