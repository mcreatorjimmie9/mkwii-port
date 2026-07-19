/* Function at 0x8076AE94, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8076AE94(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x8076AEA0
    r31 = r3;
    r4 = r31 + 0x114; // 0x8076AEAC
    r5 = r31 + 0x4ac; // 0x8076AEB0
    FUN_8076AF38(r3, r4, r5); // bl 0x8076AF38
    /* lfs f0, 8(r1) */ // 0x8076AEB8
    /* lis r3, 0 */ // 0x8076AEBC
    /* stfs f0, 0x114(r31) */ // 0x8076AEC0
    /* fmuls f2, f0, f0 */ // 0x8076AEC4
    /* lfs f0, 0(r3) */ // 0x8076AEC8
    /* lfs f1, 0xc(r1) */ // 0x8076AECC
    /* stfs f1, 0x118(r31) */ // 0x8076AED0
    /* fmuls f1, f1, f1 */ // 0x8076AED4
    /* lfs f3, 0x10(r1) */ // 0x8076AED8
    /* stfs f3, 0x11c(r31) */ // 0x8076AEDC
    /* fmuls f3, f3, f3 */ // 0x8076AEE0
    /* fadds f1, f2, f1 */ // 0x8076AEE4
    /* fadds f1, f3, f1 */ // 0x8076AEE8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8076AEEC
    /* cror cr0eq, cr0lt, cr0eq */ // 0x8076AEF0
    /* mfcr r0 */ // 0x8076AEF4
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x8076AEF8
    if (==) goto 0x0x8076af1c;
    /* lfs f2, 0x4ac(r31) */ // 0x8076AF00
    /* lfs f1, 0x4b0(r31) */ // 0x8076AF04
    /* lfs f0, 0x4b4(r31) */ // 0x8076AF08
    /* stfs f2, 0x114(r31) */ // 0x8076AF0C
    /* stfs f1, 0x118(r31) */ // 0x8076AF10
    /* stfs f0, 0x11c(r31) */ // 0x8076AF14
    /* b 0x8076af24 */ // 0x8076AF18
    r3 = r31 + 0x114; // 0x8076AF1C
    FUN_805E3430(r3); // bl 0x805E3430
    r0 = *(0x24 + r1); // lwz @ 0x8076AF24
    r31 = *(0x1c + r1); // lwz @ 0x8076AF28
    return;
}