/* Function at 0x805FC710, size=172 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_805FC710(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -128(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x74 + r1) = r29; // stw @ 0x805FC724
    r29 = r3;
    r6 = *(0x90 + r3); // lwz @ 0x805FC72C
    r5 = *(0xc + r6); // lwz @ 0x805FC730
    r4 = *(0x10 + r6); // lwz @ 0x805FC734
    r0 = *(0x14 + r6); // lwz @ 0x805FC738
    *(0x2c + r1) = r5; // stw @ 0x805FC73C
    *(0x30 + r1) = r4; // stw @ 0x805FC740
    *(0x34 + r1) = r0; // stw @ 0x805FC744
    FUN_8061ED38(); // bl 0x8061ED38
    r6 = *(0x90 + r29); // lwz @ 0x805FC74C
    /* lis r31, 0 */ // 0x805FC750
    /* lfs f0, 0(r3) */ // 0x805FC754
    /* lfs f1, 0(r6) */ // 0x805FC75C
    /* lfs f2, 0(r31) */ // 0x805FC764
    /* fmuls f3, f1, f0 */ // 0x805FC768
    /* lfs f0, 0x34(r1) */ // 0x805FC76C
    /* lfs f1, 0x30(r1) */ // 0x805FC770
    /* stfs f3, 0x20(r1) */ // 0x805FC774
    /* fmuls f5, f2, f0 */ // 0x805FC778
    /* fmuls f4, f2, f1 */ // 0x805FC77C
    /* lfs f0, 0x2c(r1) */ // 0x805FC780
    /* lfs f3, 4(r6) */ // 0x805FC784
    /* lfs f1, 4(r3) */ // 0x805FC788
    /* fmuls f2, f2, f0 */ // 0x805FC78C
    /* fmuls f0, f3, f1 */ // 0x805FC790
    /* stfs f0, 0x24(r1) */ // 0x805FC794
    /* lfs f0, 8(r3) */ // 0x805FC798
    r3 = r29 + 0x4c; // 0x805FC79C
    /* lfs f1, 8(r6) */ // 0x805FC7A0
    /* fmuls f0, f1, f0 */ // 0x805FC7A4
    /* stfs f2, 0x14(r1) */ // 0x805FC7A8
    /* stfs f0, 0x28(r1) */ // 0x805FC7AC
    /* stfs f4, 0x18(r1) */ // 0x805FC7B0
    /* stfs f5, 0x1c(r1) */ // 0x805FC7B4
    FUN_805E3430(); // bl 0x805E3430
}