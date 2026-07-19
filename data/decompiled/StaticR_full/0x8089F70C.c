/* Function at 0x8089F70C, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8089F70C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* stfd f31, 0x18(r1) */ // 0x8089F718
    /* fmr f31, f2 */ // 0x8089F71C
    /* stfd f30, 0x10(r1) */ // 0x8089F720
    /* fmr f30, f1 */ // 0x8089F724
    *(0xc + r1) = r31; // stw @ 0x8089F728
    *(8 + r1) = r30; // stw @ 0x8089F72C
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x8089F734
    r12 = *(0x2c + r12); // lwz @ 0x8089F738
    /* mtctr r12 */ // 0x8089F73C
    /* bctrl  */ // 0x8089F740
    /* clrlwi r0, r3, 0x10 */ // 0x8089F744
    r12 = *(0 + r30); // lwz @ 0x8089F748
    /* andi. r4, r0, 5 */ // 0x8089F74C
    r3 = r30;
    r12 = *(0x9c + r12); // lwz @ 0x8089F754
    /* neg r0, r4 */ // 0x8089F758
    r0 = r0 | r4; // 0x8089F75C
    /* srwi r31, r0, 0x1f */ // 0x8089F760
    /* mtctr r12 */ // 0x8089F764
    /* bctrl  */ // 0x8089F768
    /* fmr f1, f30 */ // 0x8089F76C
    /* lis r5, 0 */ // 0x8089F770
    r4 = r3;
    r3 = *(0 + r5); // lwz @ 0x8089F778
    /* fmr f2, f31 */ // 0x8089F77C
    r5 = r31;
    r6 = r30;
    FUN_80815CE8(r4, r5, r6); // bl 0x80815CE8
    *(0x24 + r30) = r3; // stw @ 0x8089F78C
    /* lfd f31, 0x18(r1) */ // 0x8089F790
    /* lfd f30, 0x10(r1) */ // 0x8089F794
    r31 = *(0xc + r1); // lwz @ 0x8089F798
    r30 = *(8 + r1); // lwz @ 0x8089F79C
    r0 = *(0x24 + r1); // lwz @ 0x8089F7A0
    return;
}