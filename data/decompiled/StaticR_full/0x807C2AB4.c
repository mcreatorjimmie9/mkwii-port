/* Function at 0x807C2AB4, size=212 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807C2AB4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x2c + r1) = r31; // stw @ 0x807C2AC4
    r31 = r6;
    *(0x28 + r1) = r30; // stw @ 0x807C2ACC
    r30 = r4;
    r4 = r5;
    r5 = r30;
    FUN_805A4498(r4, r5); // bl 0x805A4498
    r4 = r31;
    r5 = r30;
    FUN_805A4498(r5, r4, r5, r3); // bl 0x805A4498
    /* lfs f3, 0x14(r1) */ // 0x807C2AF0
    /* lis r3, 0 */ // 0x807C2AF4
    /* lfs f4, 0x18(r1) */ // 0x807C2AF8
    /* fmuls f2, f3, f3 */ // 0x807C2AFC
    /* lfs f6, 0x1c(r1) */ // 0x807C2B00
    /* fmuls f1, f4, f4 */ // 0x807C2B04
    /* lfs f0, 0(r3) */ // 0x807C2B08
    /* fmuls f5, f6, f6 */ // 0x807C2B0C
    /* fadds f1, f2, f1 */ // 0x807C2B10
    /* fadds f1, f5, f1 */ // 0x807C2B14
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807C2B18
    /* cror cr0eq, cr0lt, cr0eq */ // 0x807C2B1C
    /* mfcr r0 */ // 0x807C2B20
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x807C2B24
    if (==) goto 0x0x807c2b34;
    /* li r3, 0 */ // 0x807C2B2C
    /* b 0x807c2b70 */ // 0x807C2B30
    /* lfs f1, 8(r1) */ // 0x807C2B34
    /* lis r3, 0 */ // 0x807C2B38
    /* lfs f0, 0xc(r1) */ // 0x807C2B3C
    /* fmuls f2, f3, f1 */ // 0x807C2B40
    /* lfs f3, 0x10(r1) */ // 0x807C2B44
    /* fmuls f1, f4, f0 */ // 0x807C2B48
    /* lfs f0, 0(r3) */ // 0x807C2B4C
    /* fmuls f3, f6, f3 */ // 0x807C2B50
    /* fadds f1, f2, f1 */ // 0x807C2B54
    /* fadds f1, f3, f1 */ // 0x807C2B58
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807C2B5C
    /* mfcr r0 */ // 0x807C2B60
    /* srwi r0, r0, 0x1f */ // 0x807C2B64
    /* cntlzw r0, r0 */ // 0x807C2B68
    /* srwi r3, r0, 5 */ // 0x807C2B6C
    r0 = *(0x34 + r1); // lwz @ 0x807C2B70
    r31 = *(0x2c + r1); // lwz @ 0x807C2B74
    r30 = *(0x28 + r1); // lwz @ 0x807C2B78
    return;
}