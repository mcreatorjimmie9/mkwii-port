/* Function at 0x805E3728, size=132 bytes */
/* Stack frame: 16 bytes */

void FUN_805E3728(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -16(r1) */
    /* lis r4, -0x4d1c */ // 0x805E372C
    r8 = r4 + -0x2bcf; // 0x805E3730
    /* lis r0, 0x4330 */ // 0x805E3734
    r11 = *(0xc + r3); // lwz @ 0x805E3738
    /* lis r4, 0x6903 */ // 0x805E373C
    r10 = *(8 + r3); // lwz @ 0x805E3740
    r9 = r4 + 0x79b2; // 0x805E3744
    /* lis r6, 0x51 */ // 0x805E3748
    /* lis r4, 0 */ // 0x805E374C
    *(8 + r1) = r0; // stw @ 0x805E3750
    r0 = r6 + -0x7143; // 0x805E3754
    /* lfs f0, 0(r4) */ // 0x805E3758
    r7 = r11 * r8; // 0x805E375C
    /* lis r5, 0 */ // 0x805E3760
    /* lfd f3, 0(r5) */ // 0x805E3764
    /* li r5, 0 */ // 0x805E3768
    r6 = r10 * r8; // 0x805E376C
    r8 = r11 * r8; // 0x805E3770
    r6 = r7 + r6; // 0x805E3774
    /* addc r0, r8, r0 */ // 0x805E3778
    *(0xc + r3) = r0; // stw @ 0x805E377C
    r4 = r11 * r9; // 0x805E3780
    r0 = r6 + r4; // 0x805E3784
    /* adde r0, r0, r5 */ // 0x805E3788
    *(0xc + r1) = r0; // stw @ 0x805E378C
    /* lfd f2, 8(r1) */ // 0x805E3790
    *(8 + r3) = r0; // stw @ 0x805E3794
    /* fsubs f2, f2, f3 */ // 0x805E3798
    /* fmuls f0, f0, f2 */ // 0x805E379C
    /* fmuls f1, f1, f0 */ // 0x805E37A0
    return;
}