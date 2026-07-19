/* Function at 0x8079C678, size=296 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8079C678(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r30, 0 */ // 0x8079C68C
    r30 = r30 + 0; // 0x8079C690
    *(0x14 + r1) = r29; // stw @ 0x8079C694
    r29 = r3;
    r0 = *(0x10 + r3); // lwz @ 0x8079C69C
    if (==) goto 0x0x8079c6bc;
    if (==) goto 0x0x8079c6f0;
    if (==) goto 0x0x8079c724;
    /* b 0x8079c794 */ // 0x8079C6B8
    /* lfs f1, 0x108(r30) */ // 0x8079C6BC
    /* lis r6, 0 */ // 0x8079C6C0
    /* lfs f0, 0x100(r30) */ // 0x8079C6C4
    r4 = r29 + 0x18; // 0x8079C6C8
    /* stfs f1, 0x20(r3) */ // 0x8079C6CC
    /* li r5, 0x112 */ // 0x8079C6D0
    /* stfs f0, 0x24(r3) */ // 0x8079C6D4
    r3 = *(0 + r6); // lwz @ 0x8079C6D8
    r12 = *(0 + r3); // lwz @ 0x8079C6DC
    r12 = *(0xb4 + r12); // lwz @ 0x8079C6E0
    /* mtctr r12 */ // 0x8079C6E4
    /* bctrl  */ // 0x8079C6E8
    /* b 0x8079c7a8 */ // 0x8079C6EC
    /* lfs f1, 0x108(r30) */ // 0x8079C6F0
    /* lis r6, 0 */ // 0x8079C6F4
    /* lfs f0, 0x100(r30) */ // 0x8079C6F8
    r4 = r29 + 0x18; // 0x8079C6FC
    /* stfs f1, 0x20(r3) */ // 0x8079C700
    /* li r5, 0x10e */ // 0x8079C704
    /* stfs f0, 0x24(r3) */ // 0x8079C708
    r3 = *(0 + r6); // lwz @ 0x8079C70C
    r12 = *(0 + r3); // lwz @ 0x8079C710
    r12 = *(0xb4 + r12); // lwz @ 0x8079C714
    /* mtctr r12 */ // 0x8079C718
    /* bctrl  */ // 0x8079C71C
    /* b 0x8079c7a8 */ // 0x8079C720
    r31 = r30 + 0xec; // 0x8079C724
    /* lfs f1, 0x28(r3) */ // 0x8079C728
    /* lfs f2, 0xc(r31) */ // 0x8079C72C
    /* lfs f0, 0x10c(r30) */ // 0x8079C730
    /* fadds f1, f1, f2 */ // 0x8079C734
    /* stfs f1, 0x28(r3) */ // 0x8079C738
    /* fmuls f1, f0, f1 */ // 0x8079C73C
    FUN_805E3430(); // bl 0x805E3430
    /* lis r3, 0 */ // 0x8079C744
    r3 = *(0 + r3); // lwz @ 0x8079C748
    r0 = *(0x40 + r3); // lwz @ 0x8079C74C
    if (!=) goto 0x0x8079c770;
    /* lfs f2, 4(r31) */ // 0x8079C758
    /* lfs f0, 0xec(r30) */ // 0x8079C75C
    /* fmuls f1, f1, f2 */ // 0x8079C760
    /* fadds f0, f0, f1 */ // 0x8079C764
    /* stfs f0, 0x24(r29) */ // 0x8079C768
    /* b 0x8079c784 */ // 0x8079C76C
    /* lfs f2, 8(r31) */ // 0x8079C770
    /* lfs f0, 0xec(r30) */ // 0x8079C774
    /* fmuls f1, f1, f2 */ // 0x8079C778
    /* fadds f0, f0, f1 */ // 0x8079C77C
    /* stfs f0, 0x24(r29) */ // 0x8079C780
    r3 = r30 + 0xec; // 0x8079C784
    /* lfs f0, 0x10(r3) */ // 0x8079C788
    /* stfs f0, 0x20(r29) */ // 0x8079C78C
    /* b 0x8079c7a8 */ // 0x8079C790
    /* lfs f1, 0x100(r30) */ // 0x8079C794
    /* lfs f0, 0x104(r30) */ // 0x8079C798
    /* stfs f1, 0x24(r3) */ // 0x8079C79C
}