/* Function at 0x8076A5F0, size=164 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_8076A5F0(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8076A600
    r31 = r31 + 0; // 0x8076A604
    *(8 + r1) = r30; // stw @ 0x8076A608
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x8076A610
    r12 = *(0x90 + r12); // lwz @ 0x8076A614
    /* mtctr r12 */ // 0x8076A618
    /* bctrl  */ // 0x8076A61C
    /* lis r3, 0 */ // 0x8076A620
    /* li r0, 0 */ // 0x8076A624
    /* lfs f0, 0(r3) */ // 0x8076A628
    /* lis r3, 0 */ // 0x8076A62C
    *(0x4f8 + r30) = r0; // stw @ 0x8076A630
    /* lfs f4, 0(r3) */ // 0x8076A634
    /* stfs f0, 0x4fc(r30) */ // 0x8076A638
    /* lfs f2, 0x120(r30) */ // 0x8076A63C
    /* stfs f0, 0x500(r30) */ // 0x8076A640
    /* lfs f1, 0x124(r30) */ // 0x8076A644
    /* lfs f0, 0x98(r31) */ // 0x8076A648
    /* lfs f3, 8(r31) */ // 0x8076A64C
    /* fmuls f4, f4, f0 */ // 0x8076A650
    /* lfs f0, 0x128(r30) */ // 0x8076A654
    /* fdivs f4, f4, f3 */ // 0x8076A658
    /* stfs f4, 0x508(r30) */ // 0x8076A65C
    /* lfs f3, 0x9c(r31) */ // 0x8076A660
    /* fdivs f3, f3, f4 */ // 0x8076A664
    /* stfs f2, 0x50c(r30) */ // 0x8076A668
    /* stfs f1, 0x510(r30) */ // 0x8076A66C
    /* stfs f0, 0x514(r30) */ // 0x8076A670
    *(0x518 + r30) = r0; // stb @ 0x8076A674
    /* stfs f3, 0x504(r30) */ // 0x8076A678
    r31 = *(0xc + r1); // lwz @ 0x8076A67C
    r30 = *(8 + r1); // lwz @ 0x8076A680
    r0 = *(0x14 + r1); // lwz @ 0x8076A684
    return;
}