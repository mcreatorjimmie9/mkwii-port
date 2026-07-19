/* Function at 0x807DE6E4, size=192 bytes */
/* Stack frame: 192 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807DE6E4(int r3, int r4, int r5)
{
    /* Stack frame: -192(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x807DE6EC
    /* lis r31, 0 */ // 0x807DE6F8
    r31 = r31 + 0; // 0x807DE6FC
    *(0xb8 + r1) = r30; // stw @ 0x807DE700
    r30 = r3;
    *(0xb4 + r1) = r29; // stw @ 0x807DE708
    *(0xb0 + r1) = r28; // stw @ 0x807DE70C
    r5 = *(0xd4 + r3); // lwz @ 0x807DE710
    r0 = *(0 + r4); // lwz @ 0x807DE714
    r0 = r5 + r0; // 0x807DE718
    *(0xd4 + r3) = r0; // stw @ 0x807DE71C
    if (<) goto 0x0x807de734;
    /* lfs f0, 0x274(r31) */ // 0x807DE728
    /* stfs f0, 0x68(r3) */ // 0x807DE72C
    /* b 0x807de760 */ // 0x807DE730
    /* xoris r3, r0, 0x8000 */ // 0x807DE734
    /* lis r0, 0x4330 */ // 0x807DE738
    *(0xa4 + r1) = r3; // stw @ 0x807DE73C
    /* lfd f2, 0x298(r31) */ // 0x807DE740
    *(0xa0 + r1) = r0; // stw @ 0x807DE744
    /* lfs f0, 0x284(r31) */ // 0x807DE748
    /* lfd f1, 0xa0(r1) */ // 0x807DE74C
    /* fsubs f1, f1, f2 */ // 0x807DE750
    /* fmuls f1, f1, f0 */ // 0x807DE754
    FUN_805E3430(); // bl 0x805E3430
    /* stfs f1, 0x68(r30) */ // 0x807DE75C
    /* lfs f3, 0x68(r30) */ // 0x807DE760
    /* lis r4, 0 */ // 0x807DE764
    /* lfs f0, 0xdc(r30) */ // 0x807DE768
    /* lfs f4, 0xd8(r30) */ // 0x807DE770
    r4 = r4 + 0; // 0x807DE774
    /* fmuls f2, f0, f3 */ // 0x807DE778
    /* lfs f1, 0xe4(r30) */ // 0x807DE77C
    /* fmuls f4, f4, f3 */ // 0x807DE780
    /* lfs f3, 0xe0(r30) */ // 0x807DE784
    /* lfs f0, 0x284(r31) */ // 0x807DE788
    /* fadds f1, f1, f2 */ // 0x807DE78C
    /* fadds f2, f3, f4 */ // 0x807DE790
    /* stfs f1, 0xd0(r30) */ // 0x807DE794
    /* fneg f1, f1 */ // 0x807DE798
    /* stfs f2, 0xcc(r30) */ // 0x807DE79C
    /* fmuls f1, f1, f0 */ // 0x807DE7A0
}