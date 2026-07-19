/* Function at 0x807CD898, size=208 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807CD898(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x2c + r1) = r31; // stw @ 0x807CD8A8
    /* lis r31, 0 */ // 0x807CD8AC
    r31 = r31 + 0; // 0x807CD8B0
    *(0x28 + r1) = r30; // stw @ 0x807CD8B4
    r30 = r3;
    r5 = r30 + 0x2e0; // 0x807CD8BC
    /* lfs f0, 0x110(r3) */ // 0x807CD8C0
    /* stfs f0, 0x14(r1) */ // 0x807CD8C4
    /* lfs f0, 0x120(r3) */ // 0x807CD8C8
    /* stfs f0, 0x18(r1) */ // 0x807CD8CC
    /* lfs f0, 0x130(r3) */ // 0x807CD8D0
    /* stfs f0, 0x1c(r1) */ // 0x807CD8D8
    FUN_807AECB4(r3); // bl 0x807AECB4
    /* lfs f1, 8(r1) */ // 0x807CD8E0
    /* lfs f0, 0xc(r1) */ // 0x807CD8E4
    /* fmuls f2, f1, f1 */ // 0x807CD8E8
    /* lfs f3, 0x10(r1) */ // 0x807CD8EC
    /* fmuls f1, f0, f0 */ // 0x807CD8F0
    /* lfs f0, 0x78(r31) */ // 0x807CD8F4
    /* fmuls f3, f3, f3 */ // 0x807CD8F8
    /* fadds f1, f2, f1 */ // 0x807CD8FC
    /* fadds f1, f3, f1 */ // 0x807CD900
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807CD904
    /* cror cr0eq, cr0lt, cr0eq */ // 0x807CD908
    /* mfcr r0 */ // 0x807CD90C
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x807CD910
    if (==) goto 0x0x807cd930;
    /* lfs f1, 0(r31) */ // 0x807CD918
    /* lfs f0, 4(r31) */ // 0x807CD91C
    /* stfs f1, 8(r1) */ // 0x807CD920
    /* stfs f1, 0xc(r1) */ // 0x807CD924
    /* stfs f0, 0x10(r1) */ // 0x807CD928
    /* b 0x807cd938 */ // 0x807CD92C
    FUN_805E3430(r3); // bl 0x805E3430
    /* lfs f0, 8(r1) */ // 0x807CD938
    /* stfs f0, 0xfc(r30) */ // 0x807CD93C
    /* lfs f0, 0xc(r1) */ // 0x807CD940
    /* stfs f0, 0x100(r30) */ // 0x807CD944
    /* lfs f0, 0x10(r1) */ // 0x807CD948
    /* stfs f0, 0x104(r30) */ // 0x807CD94C
    r31 = *(0x2c + r1); // lwz @ 0x807CD950
    r30 = *(0x28 + r1); // lwz @ 0x807CD954
    r0 = *(0x34 + r1); // lwz @ 0x807CD958
    return;
}