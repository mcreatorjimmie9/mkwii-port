/* Function at 0x807CE144, size=380 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_807CE144(int r3, int r4, int r5)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x807CE154
    r31 = r31 + 0; // 0x807CE158
    *(0x48 + r1) = r30; // stw @ 0x807CE15C
    r30 = r3;
    /* lfs f1, 0(r31) */ // 0x807CE164
    r4 = *(8 + r3); // lwz @ 0x807CE168
    /* lfs f2, 4(r31) */ // 0x807CE16C
    r3 = *(0x28 + r4); // lwz @ 0x807CE170
    /* li r4, 3 */ // 0x807CE174
    FUN_805E70EC(r4); // bl 0x805E70EC
    /* lfs f0, 0(r31) */ // 0x807CE17C
    r4 = r30;
    /* stfs f0, 0x38(r1) */ // 0x807CE184
    /* stfs f0, 0x3c(r1) */ // 0x807CE18C
    /* stfs f0, 0x40(r1) */ // 0x807CE190
    /* stfs f0, 0x150(r30) */ // 0x807CE194
    /* stfs f0, 0x154(r30) */ // 0x807CE198
    /* stfs f0, 0x158(r30) */ // 0x807CE19C
    /* stfs f0, 0x2f8(r30) */ // 0x807CE1A0
    /* stfs f0, 0x2fc(r30) */ // 0x807CE1A4
    /* stfs f0, 0x300(r30) */ // 0x807CE1A8
    FUN_807CB4DC(); // bl 0x807CB4DC
    r4 = r30 + 0x31c; // 0x807CE1B4
    FUN_805A4498(r3, r4, r5); // bl 0x805A4498
    /* lfs f4, 0(r31) */ // 0x807CE1C0
    /* lfs f0, 0x20(r1) */ // 0x807CE1C4
    /* fmuls f1, f4, f4 */ // 0x807CE1C8
    /* lfs f3, 0x28(r1) */ // 0x807CE1CC
    /* fmuls f2, f0, f0 */ // 0x807CE1D0
    /* lfs f0, 0x78(r31) */ // 0x807CE1D4
    /* fmuls f3, f3, f3 */ // 0x807CE1D8
    /* stfs f4, 0x24(r1) */ // 0x807CE1DC
    /* fadds f1, f2, f1 */ // 0x807CE1E0
    /* fadds f1, f3, f1 */ // 0x807CE1E4
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807CE1E8
    /* cror cr0eq, cr0lt, cr0eq */ // 0x807CE1EC
    /* mfcr r0 */ // 0x807CE1F0
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x807CE1F4
    if (!=) goto 0x0x807ce21c;
    FUN_805E3430(r3); // bl 0x805E3430
    /* lfs f0, 0x20(r1) */ // 0x807CE204
    /* stfs f0, 0x2e0(r30) */ // 0x807CE208
    /* lfs f0, 0x24(r1) */ // 0x807CE20C
    /* stfs f0, 0x2e4(r30) */ // 0x807CE210
    /* lfs f0, 0x28(r1) */ // 0x807CE214
    /* stfs f0, 0x2e8(r30) */ // 0x807CE218
    /* lfs f0, 0x110(r30) */ // 0x807CE21C
    /* stfs f0, 8(r1) */ // 0x807CE224
    /* lfs f1, 4(r31) */ // 0x807CE22C
    r5 = r30 + 0x2e0; // 0x807CE230
    /* lfs f0, 0x120(r30) */ // 0x807CE234
    /* stfs f0, 0xc(r1) */ // 0x807CE238
    /* lfs f0, 0x130(r30) */ // 0x807CE23C
    /* stfs f0, 0x10(r1) */ // 0x807CE240
    FUN_807AECB4(r5); // bl 0x807AECB4
    /* lfs f1, 0x14(r1) */ // 0x807CE248
    /* lfs f0, 0x18(r1) */ // 0x807CE24C
    /* fmuls f2, f1, f1 */ // 0x807CE250
    /* lfs f3, 0x1c(r1) */ // 0x807CE254
    /* fmuls f1, f0, f0 */ // 0x807CE258
    /* lfs f0, 0x78(r31) */ // 0x807CE25C
    /* fmuls f3, f3, f3 */ // 0x807CE260
    /* fadds f1, f2, f1 */ // 0x807CE264
    /* fadds f1, f3, f1 */ // 0x807CE268
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807CE26C
    /* cror cr0eq, cr0lt, cr0eq */ // 0x807CE270
    /* mfcr r0 */ // 0x807CE274
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x807CE278
    if (==) goto 0x0x807ce298;
    /* lfs f1, 0(r31) */ // 0x807CE280
    /* lfs f0, 4(r31) */ // 0x807CE284
    /* stfs f1, 0x14(r1) */ // 0x807CE288
    /* stfs f1, 0x18(r1) */ // 0x807CE28C
    /* stfs f0, 0x1c(r1) */ // 0x807CE290
    /* b 0x807ce2a0 */ // 0x807CE294
    FUN_805E3430(r3); // bl 0x805E3430
    /* lfs f0, 0x14(r1) */ // 0x807CE2A0
    /* li r0, 0 */ // 0x807CE2A4
    /* stfs f0, 0xfc(r30) */ // 0x807CE2A8
    /* lfs f0, 0x18(r1) */ // 0x807CE2AC
    /* stfs f0, 0x100(r30) */ // 0x807CE2B0
    /* lfs f0, 0x1c(r1) */ // 0x807CE2B4
    /* stfs f0, 0x104(r30) */ // 0x807CE2B8
    *(0x33c + r30) = r0; // stw @ 0x807CE2BC
}