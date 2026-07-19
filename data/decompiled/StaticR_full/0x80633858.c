/* Function at 0x80633858, size=176 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */

int FUN_80633858(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r4, 0x4330 */ // 0x80633860
    /* lis r5, 0 */ // 0x80633864
    *(0x24 + r1) = r0; // stw @ 0x80633868
    /* lfd f1, 0(r5) */ // 0x8063386C
    *(0x1c + r1) = r31; // stw @ 0x80633870
    r31 = r3;
    r7 = *(0x48 + r3); // lwz @ 0x80633878
    *(8 + r1) = r4; // stw @ 0x8063387C
    r8 = *(8 + r7); // lwz @ 0x80633880
    r3 = r7;
    r6 = *(0x46 + r7); // lha @ 0x80633888
    r0 = *(0x48 + r7); // lha @ 0x8063388C
    r8 = r8 + 0xc; // 0x80633890
    /* slwi r6, r6, 4 */ // 0x80633894
    r12 = *(0 + r7); // lwz @ 0x80633898
    /* lhzx r6, r8, r6 */ // 0x8063389C
    /* slwi r0, r0, 4 */ // 0x806338A0
    *(0xc + r1) = r6; // stw @ 0x806338A4
    /* lhzx r0, r8, r0 */ // 0x806338A8
    /* lfd f0, 8(r1) */ // 0x806338AC
    *(0x14 + r1) = r0; // stw @ 0x806338B0
    /* fsubs f3, f0, f1 */ // 0x806338B4
    /* lfs f2, 0x40(r7) */ // 0x806338B8
    *(0x10 + r1) = r4; // stw @ 0x806338BC
    r12 = *(0x18 + r12); // lwz @ 0x806338C0
    /* lfd f0, 0x10(r1) */ // 0x806338C4
    /* fsubs f0, f0, f1 */ // 0x806338C8
    /* fsubs f0, f0, f3 */ // 0x806338CC
    /* fmuls f0, f0, f2 */ // 0x806338D0
    /* fadds f1, f3, f0 */ // 0x806338D4
    /* mtctr r12 */ // 0x806338D8
    /* bctrl  */ // 0x806338DC
    r3 = *(0x48 + r31); // lwz @ 0x806338E0
    r12 = *(0 + r3); // lwz @ 0x806338E4
    r12 = *(0x14 + r12); // lwz @ 0x806338E8
    /* mtctr r12 */ // 0x806338EC
    /* bctrl  */ // 0x806338F0
    r0 = *(0x24 + r1); // lwz @ 0x806338F4
    r31 = *(0x1c + r1); // lwz @ 0x806338F8
    return;
}