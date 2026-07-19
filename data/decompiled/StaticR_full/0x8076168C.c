/* Function at 0x8076168C, size=172 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8076168C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8076169C
    r31 = r31 + 0; // 0x807616A0
    *(0x18 + r1) = r30; // stw @ 0x807616A4
    r30 = r3;
    r4 = r30 + 0x110; // 0x807616B0
    r5 = r30 + 0x11c; // 0x807616B4
    FUN_80761738(r3, r4, r5); // bl 0x80761738
    /* lfs f0, 8(r1) */ // 0x807616BC
    /* stfs f0, 0x110(r30) */ // 0x807616C0
    /* fmuls f2, f0, f0 */ // 0x807616C4
    /* lfs f0, 0x3c(r31) */ // 0x807616C8
    /* lfs f1, 0xc(r1) */ // 0x807616CC
    /* stfs f1, 0x114(r30) */ // 0x807616D0
    /* fmuls f1, f1, f1 */ // 0x807616D4
    /* lfs f3, 0x10(r1) */ // 0x807616D8
    /* stfs f3, 0x118(r30) */ // 0x807616DC
    /* fmuls f3, f3, f3 */ // 0x807616E0
    /* fadds f1, f2, f1 */ // 0x807616E4
    /* fadds f1, f3, f1 */ // 0x807616E8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807616EC
    /* cror cr0eq, cr0lt, cr0eq */ // 0x807616F0
    /* mfcr r0 */ // 0x807616F4
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x807616F8
    if (==) goto 0x0x80761718;
    /* lfs f1, 4(r31) */ // 0x80761700
    /* lfs f0, 0x20(r31) */ // 0x80761704
    /* stfs f1, 0x110(r30) */ // 0x80761708
    /* stfs f0, 0x114(r30) */ // 0x8076170C
    /* stfs f1, 0x118(r30) */ // 0x80761710
    /* b 0x80761720 */ // 0x80761714
    r3 = r30 + 0x110; // 0x80761718
    FUN_805E3430(r3); // bl 0x805E3430
    r0 = *(0x24 + r1); // lwz @ 0x80761720
    r31 = *(0x1c + r1); // lwz @ 0x80761724
    r30 = *(0x18 + r1); // lwz @ 0x80761728
    return;
}