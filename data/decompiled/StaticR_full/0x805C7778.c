/* Function at 0x805C7778, size=252 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805C7778(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r6, 0 */ // 0x805C7780
    /* lfs f0, 0(r6) */ // 0x805C7788
    *(0x2c + r1) = r31; // stw @ 0x805C778C
    r31 = r4;
    *(0x28 + r1) = r30; // stw @ 0x805C7794
    r30 = r3;
    /* lfs f4, 0(r4) */ // 0x805C779C
    /* lfs f5, 4(r4) */ // 0x805C77A0
    /* fmuls f3, f4, f4 */ // 0x805C77A4
    /* lfs f7, 8(r4) */ // 0x805C77A8
    /* fmuls f2, f5, f5 */ // 0x805C77AC
    /* fmuls f6, f7, f7 */ // 0x805C77B0
    /* fadds f2, f3, f2 */ // 0x805C77B4
    /* fadds f2, f6, f2 */ // 0x805C77B8
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x805C77BC
    /* cror cr0eq, cr0lt, cr0eq */ // 0x805C77C0
    /* mfcr r0 */ // 0x805C77C4
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x805C77C8
    if (==) goto 0x0x805c77e8;
    /* lis r4, 0 */ // 0x805C77D0
    /* lfs f0, 0(r4) */ // 0x805C77D4
    /* stfs f0, 0(r3) */ // 0x805C77D8
    /* stfs f0, 4(r3) */ // 0x805C77DC
    /* stfs f0, 8(r3) */ // 0x805C77E0
    /* b 0x805c785c */ // 0x805C77E4
    /* lfs f2, 0(r5) */ // 0x805C77E8
    /* lis r3, 0 */ // 0x805C77EC
    /* lfs f0, 4(r5) */ // 0x805C77F0
    /* fmuls f3, f2, f4 */ // 0x805C77F4
    /* lfs f4, 8(r5) */ // 0x805C77F8
    /* fmuls f2, f0, f5 */ // 0x805C77FC
    /* lfs f0, 0(r3) */ // 0x805C7800
    /* fmuls f4, f4, f7 */ // 0x805C7804
    /* fadds f2, f3, f2 */ // 0x805C7808
    /* fadds f2, f4, f2 */ // 0x805C780C
    /* fneg f2, f2 */ // 0x805C7810
    /* .byte 0xfc, 0x00, 0x10, 0x40 */ // 0x805C7814
    if (>=) goto 0x0x805c7844;
    /* fmuls f0, f2, f1 */ // 0x805C781C
    r4 = r5;
    /* fadds f1, f2, f0 */ // 0x805C7828
    FUN_805A443C(r4, r3); // bl 0x805A443C
    r4 = r31;
    FUN_805A4464(r4, r3, r5); // bl 0x805A4464
    r3 = *(0 + r31); // lwz @ 0x805C7844
    r0 = *(4 + r31); // lwz @ 0x805C7848
    *(4 + r30) = r0; // stw @ 0x805C784C
    *(0 + r30) = r3; // stw @ 0x805C7850
    r0 = *(8 + r31); // lwz @ 0x805C7854
    *(8 + r30) = r0; // stw @ 0x805C7858
    r0 = *(0x34 + r1); // lwz @ 0x805C785C
    r31 = *(0x2c + r1); // lwz @ 0x805C7860
    r30 = *(0x28 + r1); // lwz @ 0x805C7864
    return;
}