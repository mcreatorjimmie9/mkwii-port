/* Function at 0x8083E734, size=80 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */

int FUN_8083E734(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x8083E73C
    /* lfs f2, 0(r5) */ // 0x8083E740
    *(0x34 + r1) = r0; // stw @ 0x8083E744
    /* lfs f1, 0(r6) */ // 0x8083E74C
    *(0x2c + r1) = r31; // stw @ 0x8083E754
    r31 = r3;
    /* lfs f0, 4(r4) */ // 0x8083E75C
    /* lfs f3, 4(r3) */ // 0x8083E760
    /* fsubs f5, f0, f2 */ // 0x8083E764
    /* stfs f1, 0x18(r1) */ // 0x8083E768
    /* fsubs f4, f3, f2 */ // 0x8083E76C
    /* lfs f3, 0xc(r3) */ // 0x8083E770
    /* lfs f2, 8(r5) */ // 0x8083E774
    /* stfs f4, 0x14(r1) */ // 0x8083E778
    /* fsubs f3, f3, f2 */ // 0x8083E77C
    /* lfs f0, 0xc(r4) */ // 0x8083E780
}