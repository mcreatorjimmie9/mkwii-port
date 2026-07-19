/* Function at 0x8090B734, size=104 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8090B734(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x8090B73C
    /* lis r5, 0 */ // 0x8090B740
    *(0x34 + r1) = r0; // stw @ 0x8090B744
    /* lis r0, 0x4330 */ // 0x8090B748
    /* lfd f3, 0(r6) */ // 0x8090B74C
    *(0x2c + r1) = r31; // stw @ 0x8090B750
    r31 = r3;
    r7 = *(0 + r5); // lwz @ 0x8090B758
    /* lis r5, 0 */ // 0x8090B75C
    *(0x18 + r1) = r0; // stw @ 0x8090B760
    r0 = *(0x20 + r7); // lwz @ 0x8090B764
    /* lfs f1, 0x110(r3) */ // 0x8090B768
    r3 = r3 + 0x174; // 0x8090B76C
    /* subf r0, r4, r0 */ // 0x8090B770
    *(0x1c + r1) = r0; // stw @ 0x8090B774
    /* lfs f0, 0(r5) */ // 0x8090B778
    /* lfd f2, 0x18(r1) */ // 0x8090B780
    /* stfs f0, 8(r1) */ // 0x8090B784
    /* fsubs f2, f2, f3 */ // 0x8090B788
    /* stfs f0, 0x10(r1) */ // 0x8090B78C
    /* fmuls f0, f2, f1 */ // 0x8090B790
    /* stfs f0, 0xc(r1) */ // 0x8090B794
    FUN_805E3430(); // bl 0x805E3430
}