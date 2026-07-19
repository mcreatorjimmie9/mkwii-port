/* Function at 0x805C76FC, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805C76FC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x805C7710
    r30 = r3;
    /* lfs f3, 0(r5) */ // 0x805C771C
    /* lfs f2, 0(r4) */ // 0x805C7720
    /* lfs f1, 4(r5) */ // 0x805C7724
    /* lfs f0, 4(r4) */ // 0x805C7728
    /* fmuls f2, f3, f2 */ // 0x805C772C
    /* lfs f3, 8(r4) */ // 0x805C7730
    r4 = r5;
    /* fmuls f0, f1, f0 */ // 0x805C7738
    /* lfs f1, 8(r5) */ // 0x805C773C
    /* fmuls f1, f1, f3 */ // 0x805C7740
    /* fadds f0, f2, f0 */ // 0x805C7744
    /* fadds f1, f1, f0 */ // 0x805C7748
    FUN_805A443C(); // bl 0x805A443C
    r3 = r30;
    r4 = r31;
    FUN_805A4498(r3, r4, r5); // bl 0x805A4498
    r0 = *(0x24 + r1); // lwz @ 0x805C7760
    r31 = *(0x1c + r1); // lwz @ 0x805C7764
    r30 = *(0x18 + r1); // lwz @ 0x805C7768
    return;
}