/* Function at 0x8071D600, size=240 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_8071D600(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r7, 0 */ // 0x8071D608
    r30 = r6;
    *(0x14 + r1) = r29; // stw @ 0x8071D61C
    r29 = r5;
    *(0x10 + r1) = r28; // stw @ 0x8071D624
    r28 = r3;
    /* lfs f1, 0(r6) */ // 0x8071D62C
    /* lfs f0, 4(r6) */ // 0x8071D630
    /* fmuls f2, f1, f1 */ // 0x8071D634
    /* lfs f3, 8(r6) */ // 0x8071D638
    /* fmuls f1, f0, f0 */ // 0x8071D63C
    /* lfs f0, 0(r7) */ // 0x8071D640
    /* fmuls f3, f3, f3 */ // 0x8071D644
    /* fadds f1, f2, f1 */ // 0x8071D648
    /* fadds f1, f3, f1 */ // 0x8071D64C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8071D650
    /* cror cr0eq, cr0lt, cr0eq */ // 0x8071D654
    /* mfcr r0 */ // 0x8071D658
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x8071D65C
    if (!=) goto 0x0x8071d6d0;
    r3 = *(0x10 + r3); // lwz @ 0x8071D664
    /* slwi r31, r4, 2 */ // 0x8071D668
    /* lwzx r3, r3, r31 */ // 0x8071D66C
    r12 = *(0 + r3); // lwz @ 0x8071D670
    r12 = *(0xc + r12); // lwz @ 0x8071D674
    /* mtctr r12 */ // 0x8071D678
    /* bctrl  */ // 0x8071D67C
    r3 = *(0x10 + r28); // lwz @ 0x8071D680
    r4 = r29;
    /* lwzx r3, r3, r31 */ // 0x8071D688
    r12 = *(0 + r3); // lwz @ 0x8071D68C
    r12 = *(0x74 + r12); // lwz @ 0x8071D690
    /* mtctr r12 */ // 0x8071D694
    /* bctrl  */ // 0x8071D698
    r3 = *(0x10 + r28); // lwz @ 0x8071D69C
    r4 = r30;
    /* lwzx r3, r3, r31 */ // 0x8071D6A4
    r12 = *(0 + r3); // lwz @ 0x8071D6A8
    r12 = *(0x70 + r12); // lwz @ 0x8071D6AC
    /* mtctr r12 */ // 0x8071D6B0
    /* bctrl  */ // 0x8071D6B4
    r3 = *(0x10 + r28); // lwz @ 0x8071D6B8
    /* lwzx r3, r3, r31 */ // 0x8071D6BC
    r12 = *(0 + r3); // lwz @ 0x8071D6C0
    r12 = *(0x80 + r12); // lwz @ 0x8071D6C4
    /* mtctr r12 */ // 0x8071D6C8
    /* bctrl  */ // 0x8071D6CC
    r0 = *(0x24 + r1); // lwz @ 0x8071D6D0
    r31 = *(0x1c + r1); // lwz @ 0x8071D6D4
    r30 = *(0x18 + r1); // lwz @ 0x8071D6D8
    r29 = *(0x14 + r1); // lwz @ 0x8071D6DC
    r28 = *(0x10 + r1); // lwz @ 0x8071D6E0
    return;
}