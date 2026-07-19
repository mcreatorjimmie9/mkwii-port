/* Function at 0x8074CAA0, size=196 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8074CAA0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8074CAB0
    r31 = r31 + 0; // 0x8074CAB4
    *(0x18 + r1) = r30; // stw @ 0x8074CAB8
    r30 = r3;
    r4 = r30 + 0xb4; // 0x8074CAC0
    /* lfs f3, 0xb4(r3) */ // 0x8074CAC4
    r5 = r30 + 0x104; // 0x8074CAC8
    /* lfs f2, 0xb8(r3) */ // 0x8074CACC
    /* lfs f0, 0xbc(r3) */ // 0x8074CAD0
    /* stfs f3, 0xc0(r3) */ // 0x8074CAD4
    /* stfs f2, 0xc4(r3) */ // 0x8074CAD8
    /* stfs f0, 0xc8(r3) */ // 0x8074CADC
    FUN_8074CB64(r3); // bl 0x8074CB64
    /* lfs f0, 8(r1) */ // 0x8074CAE8
    /* stfs f0, 0xb4(r30) */ // 0x8074CAEC
    /* fmuls f2, f0, f0 */ // 0x8074CAF0
    /* lfs f0, 0x64(r31) */ // 0x8074CAF4
    /* lfs f1, 0xc(r1) */ // 0x8074CAF8
    /* stfs f1, 0xb8(r30) */ // 0x8074CAFC
    /* fmuls f1, f1, f1 */ // 0x8074CB00
    /* lfs f3, 0x10(r1) */ // 0x8074CB04
    /* stfs f3, 0xbc(r30) */ // 0x8074CB08
    /* fmuls f3, f3, f3 */ // 0x8074CB0C
    /* fadds f1, f2, f1 */ // 0x8074CB10
    /* fadds f1, f3, f1 */ // 0x8074CB14
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8074CB18
    /* cror cr0eq, cr0lt, cr0eq */ // 0x8074CB1C
    /* mfcr r0 */ // 0x8074CB20
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x8074CB24
    if (==) goto 0x0x8074cb44;
    /* lfs f1, 0(r31) */ // 0x8074CB2C
    /* lfs f0, 0x60(r31) */ // 0x8074CB30
    /* stfs f1, 0xb4(r30) */ // 0x8074CB34
    /* stfs f1, 0xb8(r30) */ // 0x8074CB38
    /* stfs f0, 0xbc(r30) */ // 0x8074CB3C
    /* b 0x8074cb4c */ // 0x8074CB40
    r3 = r30 + 0xb4; // 0x8074CB44
    FUN_805E3430(r3); // bl 0x805E3430
    r0 = *(0x24 + r1); // lwz @ 0x8074CB4C
    r31 = *(0x1c + r1); // lwz @ 0x8074CB50
    r30 = *(0x18 + r1); // lwz @ 0x8074CB54
    return;
}