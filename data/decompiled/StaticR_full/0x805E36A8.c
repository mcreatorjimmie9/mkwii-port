/* Function at 0x805E36A8, size=128 bytes */
/* Stack frame: 16 bytes */

void FUN_805E36A8(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -16(r1) */
    /* lis r4, -0x4d1c */ // 0x805E36AC
    r8 = r4 + -0x2bcf; // 0x805E36B0
    /* lis r0, 0x4330 */ // 0x805E36B4
    r11 = *(0xc + r3); // lwz @ 0x805E36B8
    /* lis r4, 0x6903 */ // 0x805E36BC
    r10 = *(8 + r3); // lwz @ 0x805E36C0
    r9 = r4 + 0x79b2; // 0x805E36C4
    /* lis r6, 0x51 */ // 0x805E36C8
    /* lis r4, 0 */ // 0x805E36CC
    *(8 + r1) = r0; // stw @ 0x805E36D0
    r0 = r6 + -0x7143; // 0x805E36D4
    /* lfs f0, 0(r4) */ // 0x805E36D8
    r7 = r11 * r8; // 0x805E36DC
    /* lis r5, 0 */ // 0x805E36E0
    /* lfd f2, 0(r5) */ // 0x805E36E4
    /* li r5, 0 */ // 0x805E36E8
    r6 = r10 * r8; // 0x805E36EC
    r8 = r11 * r8; // 0x805E36F0
    r6 = r7 + r6; // 0x805E36F4
    /* addc r0, r8, r0 */ // 0x805E36F8
    *(0xc + r3) = r0; // stw @ 0x805E36FC
    r4 = r11 * r9; // 0x805E3700
    r0 = r6 + r4; // 0x805E3704
    /* adde r0, r0, r5 */ // 0x805E3708
    *(0xc + r1) = r0; // stw @ 0x805E370C
    /* lfd f1, 8(r1) */ // 0x805E3710
    *(8 + r3) = r0; // stw @ 0x805E3714
    /* fsubs f1, f1, f2 */ // 0x805E3718
    /* fmuls f1, f0, f1 */ // 0x805E371C
    return;
}