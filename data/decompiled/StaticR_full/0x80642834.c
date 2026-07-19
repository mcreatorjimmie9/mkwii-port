/* Function at 0x80642834, size=264 bytes */
/* Stack frame: 208 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80642834(int r3, int r4, int r5)
{
    /* Stack frame: -208(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x80642844
    r31 = r31 + 0; // 0x80642848
    *(0xc8 + r1) = r30; // stw @ 0x8064284C
    r30 = r3;
    *(0xc4 + r1) = r29; // stw @ 0x80642854
    /* lis r29, 0 */ // 0x80642858
    r29 = r29 + 0; // 0x8064285C
    *(0xc0 + r1) = r28; // stw @ 0x80642860
    r28 = r3 + 0x10; // 0x80642864
    r0 = *(0x38 + r3); // lbz @ 0x80642868
    if (==) goto 0x0x80642950;
    r0 = *(0 + r28); // lwz @ 0x80642874
    r5 = r29 + 0; // 0x80642878
    /* lfs f1, 0x2c(r28) */ // 0x8064287C
    r0 = r0 rlwinm 2; // rlwinm
    /* lwzx r0, r5, r0 */ // 0x8064288C
    /* li r5, 0 */ // 0x80642890
    *(0xc + r1) = r0; // stw @ 0x80642894
    FUN_805E3430(r4, r5); // bl 0x805E3430
    FUN_805E3430(r5, r3, r4); // bl 0x805E3430
    /* lfs f1, 0x10(r28) */ // 0x806428A8
    r3 = r29 + 0x18; // 0x806428AC
    /* lfs f0, 0x10(r1) */ // 0x806428B0
    r0 = *(0 + r28); // lwz @ 0x806428B4
    /* fmuls f1, f1, f0 */ // 0x806428B8
    /* lfs f0, 4(r28) */ // 0x806428BC
    /* lfs f5, 0x14(r28) */ // 0x806428C0
    /* slwi r4, r0, 2 */ // 0x806428C4
    /* lfs f4, 8(r28) */ // 0x806428C8
    /* fadds f0, f0, f1 */ // 0x806428CC
    /* lfs f1, 0x2c(r28) */ // 0x806428D0
    /* stfs f0, 0x1c(r28) */ // 0x806428D4
    /* lfs f3, 0x18(r28) */ // 0x806428D8
    /* lfs f0, 0x14(r1) */ // 0x806428DC
    /* lfs f2, 0xc(r28) */ // 0x806428E0
    /* fmuls f5, f5, f0 */ // 0x806428E4
    /* lfs f0, 0x70(r31) */ // 0x806428E8
    /* fadds f1, f1, f0 */ // 0x806428EC
    /* fadds f0, f4, f5 */ // 0x806428F0
    /* stfs f0, 0x20(r28) */ // 0x806428F4
    /* lfs f0, 0x18(r1) */ // 0x806428F8
    /* fmuls f0, f3, f0 */ // 0x806428FC
    /* stfs f1, 0x2c(r28) */ // 0x80642900
    /* fadds f0, f2, f0 */ // 0x80642904
    /* stfs f0, 0x24(r28) */ // 0x80642908
    /* lfsx f0, r3, r4 */ // 0x8064290C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80642910
    if (<=) goto 0x0x80642950;
    /* li r0, 0 */ // 0x80642918
    *(0x28 + r28) = r0; // stb @ 0x8064291C
    r3 = r28 + r4; // 0x80642920
    /* lfs f0, 0(r31) */ // 0x80642924
    /* lfs f1, 0x40(r3) */ // 0x80642928
    /* stfs f1, 0x24(r28) */ // 0x8064292C
    /* stfs f1, 0x20(r28) */ // 0x80642930
    /* stfs f1, 0x1c(r28) */ // 0x80642934
    /* stfs f0, 0xc(r28) */ // 0x80642938
}