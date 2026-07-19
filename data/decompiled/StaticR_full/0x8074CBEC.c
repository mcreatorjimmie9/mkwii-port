/* Function at 0x8074CBEC, size=172 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8074CBEC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8074CBFC
    r31 = r31 + 0; // 0x8074CC00
    *(0x18 + r1) = r30; // stw @ 0x8074CC04
    r30 = r3;
    r4 = r30 + 0xcc; // 0x8074CC10
    r5 = r30 + 0xec; // 0x8074CC14
    FUN_8074CB64(r3, r4, r5); // bl 0x8074CB64
    /* lfs f0, 8(r1) */ // 0x8074CC1C
    /* stfs f0, 0xcc(r30) */ // 0x8074CC20
    /* fmuls f2, f0, f0 */ // 0x8074CC24
    /* lfs f0, 0x64(r31) */ // 0x8074CC28
    /* lfs f1, 0xc(r1) */ // 0x8074CC2C
    /* stfs f1, 0xd0(r30) */ // 0x8074CC30
    /* fmuls f1, f1, f1 */ // 0x8074CC34
    /* lfs f3, 0x10(r1) */ // 0x8074CC38
    /* stfs f3, 0xd4(r30) */ // 0x8074CC3C
    /* fmuls f3, f3, f3 */ // 0x8074CC40
    /* fadds f1, f2, f1 */ // 0x8074CC44
    /* fadds f1, f3, f1 */ // 0x8074CC48
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8074CC4C
    /* cror cr0eq, cr0lt, cr0eq */ // 0x8074CC50
    /* mfcr r0 */ // 0x8074CC54
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x8074CC58
    if (==) goto 0x0x8074cc78;
    /* lfs f1, 0(r31) */ // 0x8074CC60
    /* lfs f0, 0x60(r31) */ // 0x8074CC64
    /* stfs f1, 0xcc(r30) */ // 0x8074CC68
    /* stfs f0, 0xd0(r30) */ // 0x8074CC6C
    /* stfs f1, 0xd4(r30) */ // 0x8074CC70
    /* b 0x8074cc80 */ // 0x8074CC74
    r3 = r30 + 0xcc; // 0x8074CC78
    FUN_805E3430(r3); // bl 0x805E3430
    r0 = *(0x24 + r1); // lwz @ 0x8074CC80
    r31 = *(0x1c + r1); // lwz @ 0x8074CC84
    r30 = *(0x18 + r1); // lwz @ 0x8074CC88
    return;
}