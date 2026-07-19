/* Function at 0x805E364C, size=92 bytes */
/* Stack frame: 0 bytes */

int FUN_805E364C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* lis r5, -0x4d1c */ // 0x805E364C
    r11 = *(0xc + r3); // lwz @ 0x805E3650
    r8 = r5 + -0x2bcf; // 0x805E3654
    r10 = *(8 + r3); // lwz @ 0x805E3658
    /* lis r5, 0x51 */ // 0x805E365C
    /* lis r6, 0x6903 */ // 0x805E3660
    r0 = r5 + -0x7143; // 0x805E3664
    r7 = r11 * r8; // 0x805E3668
    r9 = r6 + 0x79b2; // 0x805E366C
    /* li r6, 0 */ // 0x805E3670
    r5 = r10 * r8; // 0x805E3674
    r8 = r11 * r8; // 0x805E3678
    r7 = r7 + r5; // 0x805E367C
    /* addc r0, r8, r0 */ // 0x805E3680
    *(0xc + r3) = r0; // stw @ 0x805E3684
    r5 = r11 * r9; // 0x805E3688
    r0 = r7 + r5; // 0x805E368C
    /* adde r0, r0, r6 */ // 0x805E3690
    *(8 + r3) = r0; // stw @ 0x805E3694
    r0 = r0 * r4; // 0x805E3698
    r3 = r6 * r4; // 0x805E369C
    r3 = r0 + r3; // 0x805E36A0
    return;
}