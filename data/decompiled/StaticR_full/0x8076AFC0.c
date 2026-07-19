/* Function at 0x8076AFC0, size=172 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8076AFC0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8076AFD0
    r31 = r31 + 0; // 0x8076AFD4
    *(0x18 + r1) = r30; // stw @ 0x8076AFD8
    r30 = r3;
    r4 = r30 + 0x120; // 0x8076AFE4
    r5 = r30 + 0x12c; // 0x8076AFE8
    FUN_8076AF38(r3, r4, r5); // bl 0x8076AF38
    /* lfs f0, 8(r1) */ // 0x8076AFF0
    /* stfs f0, 0x120(r30) */ // 0x8076AFF4
    /* fmuls f2, f0, f0 */ // 0x8076AFF8
    /* lfs f0, 0xa8(r31) */ // 0x8076AFFC
    /* lfs f1, 0xc(r1) */ // 0x8076B000
    /* stfs f1, 0x124(r30) */ // 0x8076B004
    /* fmuls f1, f1, f1 */ // 0x8076B008
    /* lfs f3, 0x10(r1) */ // 0x8076B00C
    /* stfs f3, 0x128(r30) */ // 0x8076B010
    /* fmuls f3, f3, f3 */ // 0x8076B014
    /* fadds f1, f2, f1 */ // 0x8076B018
    /* fadds f1, f3, f1 */ // 0x8076B01C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8076B020
    /* cror cr0eq, cr0lt, cr0eq */ // 0x8076B024
    /* mfcr r0 */ // 0x8076B028
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x8076B02C
    if (==) goto 0x0x8076b04c;
    /* lfs f1, 4(r31) */ // 0x8076B034
    /* lfs f0, 0x1c(r31) */ // 0x8076B038
    /* stfs f1, 0x120(r30) */ // 0x8076B03C
    /* stfs f0, 0x124(r30) */ // 0x8076B040
    /* stfs f1, 0x128(r30) */ // 0x8076B044
    /* b 0x8076b054 */ // 0x8076B048
    r3 = r30 + 0x120; // 0x8076B04C
    FUN_805E3430(r3); // bl 0x805E3430
    r0 = *(0x24 + r1); // lwz @ 0x8076B054
    r31 = *(0x1c + r1); // lwz @ 0x8076B058
    r30 = *(0x18 + r1); // lwz @ 0x8076B05C
    return;
}